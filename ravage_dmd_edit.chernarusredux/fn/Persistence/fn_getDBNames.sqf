/* -----------------------------------
    File: fn_getDBNames.sqf
    Author:  JakeHekesFists[DMD] 2019
    
    usage: ([_playerUID] call dmd_fnc_getDBNames) params ["_playerDB", "_objectDB", "_vehicleDB", "_settingsDB"];
    usage: ([] call dmd_fnc_getDBNames) params ["_playerDB", "_objectDB", "_vehicleDB", "_settingsDB"]; - if no UID supplied. will use "NOUNIT"
    
-------------------------------------- */
params [
    ["_uid","NOUNIT"]
];

private _ply = _uid;
private _obj = "Object_DB";
private _veh = "Vehicle_DB";
private _set = "Server_Settings";

if !((toLower worldName) isEqualTo "chernarusredux") then {
    _ply = format["%1_%2",_ply,worldName];
    _obj = format["%1_%2",_obj,worldName];
    _veh = format["%1_%2",_veh,worldName];
    _set = format["%1_%2",_veh,worldName];
};

[_ply,_obj,_veh,_set]