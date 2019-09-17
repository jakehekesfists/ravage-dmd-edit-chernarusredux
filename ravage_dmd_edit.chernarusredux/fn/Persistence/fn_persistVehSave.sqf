/* -----------------------------------
    File: fn_persistVehSave.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_vehicle", "_vehicleID", "_puid"];

private _vehfilename = "Vehicle_DB";
if !((toLower worldName) isEqualTo "chernarusredux") then { _vehfilename = format["%1_%2","Vehicle_DB",worldName]; };

private _inidbSave = ["new", _vehfilename] call OO_INIDBI;
private _sysTime = "getTimeStamp" call _inidbSave;

private ["_position"];
if (surfaceIsWater (getpos _vehicle)) then { _position = (getposASL _vehicle); } else { _position = (getposATL _vehicle); };

private _array = [
    (typeof _vehicle),
	_position,
	(getdir _vehicle),
	(getAllHitPointsDamage _vehicle),
	(fuel _vehicle),
	(getWeaponCargo _vehicle),
	(getMagazineCargo _vehicle),
	(getItemCargo _vehicle),
	(getBackpackCargo _vehicle),
	_vehicleID,
	_puid,
	_sysTime
];

["write", ["Vehicles", _vehicleID, _array]] call _inidbSave;