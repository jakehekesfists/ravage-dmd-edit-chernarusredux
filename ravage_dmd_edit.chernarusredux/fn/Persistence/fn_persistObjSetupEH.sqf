/* -----------------------------------
    File: fn_persistObjSetupEH.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
    ["_object",objNull],
    "_objID"
];
if (isNull _object) exitWith { diag_log __FILE__ + "ERROR: NULL OBJECT"; };
OBJECT_ID = _objID;

_object addMPEventHandler ["MPKilled", {
    params ["_obj" ];
    [_obj, OBJECT_ID] call dmd_fnc_persistObjDelete;
}];

_object addEventHandler ["Deleted", {
	params ["_obj"];
    [_obj, OBJECT_ID] call dmd_fnc_persistObjDelete;
}];

_object addEventHandler ["ContainerClosed", {
    // gear may have changed. so save it to the db
	params ["_container"];
	[_container, OBJECT_ID] call dmd_fnc_persistObjSave;
}];

_object addEventHandler ["Dammaged", {
    params ["_vehicle"];
    [_vehicle, OBJECT_ID] call dmd_fnc_persistObjSave;
}];