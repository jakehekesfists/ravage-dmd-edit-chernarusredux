/* -----------------------------------
    File: fn_persistServerDeleteData.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_uid"];
private _inidbQry = ["new", _uid] call OO_INIDBI;
"delete" call _inidbQry;