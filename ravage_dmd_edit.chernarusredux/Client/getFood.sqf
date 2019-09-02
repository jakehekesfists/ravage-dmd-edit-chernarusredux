/* -----------------------------------
    File: getFood.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_target", "_caller", "_actionId", "_arguments"];

private _qty = _target getVariable ["food_action", 0];
private _hunger = _caller getVariable ["hunger", 100];

private _selectedFood = "rvg_beans";
private _displayName = [(_selectedFood call HALs_fnc_getConfigClass) >> "displayName", ""] call HALs_fnc_getConfigValue;

try {
	if (_qty == 0) then { throw "empty"; };
	if (_hunger <= 95) then { throw "eat"; };
    if (_caller canAdd _selectedFood) then { throw "takefood"; };
	throw "error";	
} catch {
	switch (_exception) do {
		case "empty": {
			deleteVehicle _target;
			titleText [(localize "STR_CLI_GF_EMPTY"), "PLAIN DOWN"];
		};

		case "eat": {
			[_caller, "ApanPercMstpSnonWnonDnon_G02"] remoteExec ["switchMove", 0];
			[_caller, "eat_1"] call rvg_fnc_say3dGlobal;
			sleep 3;
			[_caller, ""] remoteExec ["switchMove", 0];
			titleText [(localize "STR_CLI_GF_EAT"), "PLAIN DOWN"];

			_qty = _qty - 1;
            _target setVariable ["food_action", _qty, true];
			_caller setVariable ["hunger", 100];
		};

		case "takefood": {
			[_caller, "ApanPercMstpSnonWnonDnon_G02"] remoteExec ["switchMove", 0];
			[_caller, "rum7"] call rvg_fnc_say3dGlobal;
			sleep 3;
			_caller addItem _selectedFood;
			[_caller, ""] remoteExec ["switchMove", 0];
			titleText [format[(localize "STR_CLI_GF_TAKE"),_displayName], "PLAIN DOWN"];
			_qty = _qty - 1;
            _target setVariable ["food_action", _qty, true];
		};

		case "error": {
			titleText [(localize "STR_CLI_GF_NOHUNGER"), "PLAIN DOWN"];
		};
	};
};