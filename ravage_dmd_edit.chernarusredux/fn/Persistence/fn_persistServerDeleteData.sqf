/* -----------------------------------
    File: fn_persistServerDeleteData.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
    ["_uid","0"]
];
if (_uid isEqualTo "0") exitWith { diag_log __FILE__ + "ERROR: NO UID PROVIDED"; };
// DEFINE THE FILENAMES
([_uid] call dmd_fnc_getDBNames) params ["_playerDB", "_objectDB", "_vehicleDB", "_settingsDB"];

private _inidbQry = ["new", _playerDB] call OO_INIDBI;
"delete" call _inidbQry;