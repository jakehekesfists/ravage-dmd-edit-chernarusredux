/* -----------------------------------
    File: fn_persistObjSave.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_object", "_objectID"];

private _objfilename = "Object_DB";
if !((toLower worldName) isEqualTo "chernarusredux") then {
    _objfilename = format["%1_%2","Object_DB",worldName];
};

_inidbSave = ["new", _objfilename] call OO_INIDBI;
_sysTime = "getTimeStamp" call _inidbSave;

private ["_position"];
if (surfaceIsWater (getpos _object)) then { _position = (getposASL _object); } else { _position = (getposATL _object); };

_array = [
    (typeof _object),
	_position,
	(getdir _object),
	(damage _object),
	(getWeaponCargo _object),
	(getMagazineCargo _object),
	(getItemCargo _object),
	(getBackpackCargo _object),
	_objectID,
	_sysTime
];

["write", ["Objects", _objectID, _array]] call _inidbSave;