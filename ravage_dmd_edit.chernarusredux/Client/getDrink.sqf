/* -----------------------------------
    File: getDrink.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_target", "_caller", "_actionId", "_arguments"];

private _qty = _target getVariable ["drink_action", 0];
private _thirst = _caller getVariable ["thirst", 100];

try {
	if (_qty == 0) then { throw "empty"; };
	if (_thirst <= 95) then { throw "drink"; };
	if (({_x isEqualTo 'rvg_plasticBottleEmpty'} count magazines _caller) > 0) then { throw "refill"; };
	throw "error";	
} catch {
	switch (_exception) do {
		case "empty": {
			deleteVehicle _target;
			titleText [(localize "STR_CLI_GD_EMPTY"), "PLAIN DOWN"];
		};

		case "drink": {
			[_caller, "ApanPercMstpSnonWnonDnon_G02"] remoteExec ["switchMove", 0];
			[_caller, "drink_0"] call rvg_fnc_say3dGlobal;
			sleep 3;
			[_caller, ""] remoteExec ["switchMove", 0];
			titleText [(localize "STR_CLI_GD_DRINK"), "PLAIN DOWN"];

			_qty = _qty - 1;
			_target setVariable ["drink_action", _qty, true];
			_caller setVariable ["thirst", 100];
		};

		case "refill": {
			[_caller, "ApanPercMstpSnonWnonDnon_G02"] remoteExec ["switchMove", 0];
			[_caller, "drink_0"] call rvg_fnc_say3dGlobal;
			sleep 3;
			[_caller, "rvg_plasticBottleEmpty", 1] call HALs_store_fnc_removeItemCargo;
			_caller addItem "rvg_plasticBottlePurified";
			[_caller, ""] remoteExec ["switchMove", 0];
			titleText [(localize "STR_CLI_GD_REFILL"), "PLAIN DOWN"];

			_qty = _qty - 1;
			_target setVariable ["drink_action", _qty, true];
		};

		case "error": {
			titleText [(localize "STR_CLI_GD_NOTHIRST"), "PLAIN DOWN"];
		};
	};
};