/* -----------------------------------
    File: fn_persistServerDeleteData.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_uid"];

private _filename = _uid;
if !((toLower worldName) isEqualTo "chernarusredux") then { _filename = format["%1_%2",_uid,worldName]; };
private _inidbQry = ["new", _filename] call OO_INIDBI;
"delete" call _inidbQry;