/* -----------------------------------
    File: fn_persistVehSetupEH.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [ ["_veh", objNull] ];
if (isNull _veh) exitWith { diag_log __FILE__ + "ERROR: NULL VEHICLE"; };

_veh addMPEventHandler ["MPKilled", {
    params ["_obj" ];
    [_obj, (_obj getVariable "unique_id")] call dmd_fnc_persistVehDelete;
}];

_veh addEventHandler ["Deleted", {
	params ["_obj"];
    [_obj, (_obj getVariable "unique_id")] call dmd_fnc_persistVehDelete;
}];

_veh addEventHandler ["ContainerClosed", {
    // gear may have changed. so save it to the db
	params ["_container"];
	[_container, (_container getVariable "unique_id"), (_container getVariable "owner_id")] call dmd_fnc_persistVehSave;
}];

_veh addEventHandler ["Dammaged", {
    params ["_vehicle"];
    [_vehicle, (_vehicle getVariable "unique_id"), (_vehicle getVariable "owner_id")] call dmd_fnc_persistVehSave;
}];

_veh addEventHandler ["GetOut", {
	params ["_vehicle", "_role", "_unit", "_turret"];
	if (_role isEqualTo "driver") then {
		[_vehicle, (_vehicle getVariable "unique_id"), (_vehicle getVariable "owner_id")] call dmd_fnc_persistVehSave;
	};
}];