/* -----------------------------------
    File: fn_persistVehCreate.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_packet", "_currTime"];
_packet params ["_class", "_pos", "_dir", "_dmg", "_fuel", "_weapCargo", "_magCargo", "_itmCargo", "_bpkCargo", "_vehID", "_puid", "_lastmodifiedTime"];

private _isOk = ([_currTime, _lastmodifiedTime] call dmd_fnc_calculateAge);  // returns false if object is too old. default 21 days
if (!_isOk) exitWith { [objNull, _vehID] call dmd_fnc_persistVehDelete; };

private _veh = createVehicle [_class, _pos, [], 0, "NONE"];

if (surfaceIsWater _pos) then { _veh setPosASL _pos; } else { _veh setPosATL _pos; };
_veh setDir _dir;
_veh allowDamage false;

[_veh] call dmd_fnc_cleanLootCrate;

_weapCargo params ["_weps", "_wCnt"];
{ _veh addWeaponCargoGlobal [_x, _wCnt select _forEachIndex]; } forEach _weps;

_magCargo params ["_mags", "_mCnt"];
{ _veh addMagazineCargoGlobal [_x, _mCnt select _forEachIndex]; } forEach _mags;

_itmCargo params ["_itms", "_iCnt"];
{ _veh addItemCargoGlobal [_x, _iCnt select _forEachIndex]; } forEach _itms;

_itmCargo params ["_bpks", "_bCnt"];
{ _veh addBackpackCargoGlobal [_x, _bCnt select _forEachIndex]; } forEach _bpks;

_veh allowDamage true;
_veh enableDynamicSimulation true;

_veh setFuel _fuel;
_dmg params ["_allhits", "_dmgHits", "_dmgVals"];
{ _veh setHit [_x, _dmgVals select _forEachIndex]; } forEach _dmgHits;

_veh setVariable ["rvg_owned", true, true];
_veh setVariable ["R3F_LOG_disabled", true, true];
_veh setVariable ["unique_id", _vehID, true];
_veh setVariable ["owner_id", _puid, true];

_veh setVehicleLock "LOCKED";
_veh setVariable ["DMD_IsLocked", true, true];

[_veh] call dmd_fnc_persistVehSetupEH;