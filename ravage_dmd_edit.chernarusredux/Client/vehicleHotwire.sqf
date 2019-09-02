/* -----------------------------------
    File: vehicleHotwire.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_target", "_caller", "_actionId", "_arguments"];
([[ "ServerSettings" ],[ "hotwireFailureChance" ]] call dmd_fnc_getMissionCfg ) params ["_failChance"];

try {
	if !("ToolKit" in ([_caller] call dmd_fnc_getPlayerInv)) then { throw "tools"; };				// Check if player has correct tools
	if ((_target getVariable "owner_id") isEqualTo getPlayerUID _caller) then { throw "owner"; };	// Check if Player Owns Vehicle (just a failsafe - should never happen. but arma)
	if (floor(random 100) < _failChance) then { throw "fail"; };									// Random chance of failure
	throw "success";																				// all checks pass. throw success.
} catch {
	switch (_exception) do {
		case "tools": { [(localize "STR_CLI_VH_NOTOOLS")] remoteExec ["hint", (owner _caller)]; };
		case "owner": { [(localize "STR_CLI_VH_OWNER")] remoteExec ["hint", (owner _caller)]; };
		// fail. so break the toolbox
		case "fail": {
			[_caller, "ApanPercMstpSnonWnonDnon_G02"] remoteExec ["switchMove", 0];
			[_caller, "repair_0"] call rvg_fnc_say3dGlobal;
			sleep 3;
			[_caller, ""] remoteExec ["switchMove", 0];
			["play", _target] call BIS_fnc_carAlarm;
			[_caller, "ToolKit", 1] call HALs_store_fnc_removeItemCargo;
			titleText [(localize "STR_CLI_VH_BROKETOOLS"), "PLAIN DOWN"];
		};
		// success. unlock vehicle and change owner ID in database - do it via publicVariableServer
		case "success": {
			[_caller, "ApanPercMstpSnonWnonDnon_G02"] remoteExec ["switchMove", 0];
			[_caller, "repair_0"] call rvg_fnc_say3dGlobal;
			sleep 3;
			[_caller, ""] remoteExec ["switchMove", 0];
			[_target, "Client\vehicleUnlock.sqf"] remoteExec ["execVM"];
			private _puid = (getPlayerUID _caller);
			private _vehID = (_target getVariable "unique_id");	

			dmd_hotwire_vehicle = [_target, _vehID, _puid];
			publicVariableServer "dmd_hotwire_vehicle";
			dmd_hotwire_vehicle = nil;

			titleText [(localize "STR_CLI_VH_SUCCESS"), "PLAIN DOWN"];
		};
	};
};