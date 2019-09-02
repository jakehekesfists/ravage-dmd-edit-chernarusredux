/* -----------------------------------
    File: fn_persistObjCreate.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_packet", "_currTime"];
_packet params ["_class", "_pos", "_dir", "_dmg", "_weapCargo", "_magCargo", "_itmCargo", "_bpkCargo", "_objID", "_lastmodifiedTime"];

private _isOk = ([_currTime, _lastmodifiedTime] call dmd_fnc_calculateAge);  // returns false if object is too old. default 21 days
if (!_isOk) exitWith { [objNull, _objID] call dmd_fnc_persistObjDelete; };

private _object = createVehicle [_class, _pos, [], 0, "NONE"];

if (surfaceIsWater _pos) then { _object setPosASL _pos; } else { _object setPosATL _pos; };
_object setDir _dir;
_object allowDamage false;

[_object] call dmd_fnc_cleanLootCrate;

_weapCargo params ["_weps", "_wCnt"];
{ _object addWeaponCargoGlobal [_x, _wCnt select _forEachIndex]; } forEach _weps;

_magCargo params ["_mags", "_mCnt"];
{ _object addMagazineCargoGlobal [_x, _mCnt select _forEachIndex]; } forEach _mags;

_itmCargo params ["_itms", "_iCnt"];
{ _object addItemCargoGlobal [_x, _iCnt select _forEachIndex]; } forEach _itms;

_itmCargo params ["_bpks", "_bCnt"];
{ _object addBackpackCargoGlobal [_x, _bCnt select _forEachIndex]; } forEach _bpks;

_object allowDamage true;
_object enableDynamicSimulation true;

_object setDamage _dmg;
_object setVariable ["R3F_LOG_disabled", false, true];
_object setVariable ["unique_id", _objID, true];
[_object, _objID] call dmd_fnc_persistObjSetupEH;