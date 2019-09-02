/* -----------------------------------
    File: fn_spawnObjects.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
if (!isServer) exitWith {};
if (isNil "dmd_objID") then { ["get", nil, "object"] call dmd_fnc_persistIDCount; };
params ["_objPos", "_objList"];

private _objClass = selectRandom _objList;
private _obj = _objClass createVehicle _objPos;
_obj allowDamage false;
if (_objClass isKindOf "ReammoBox_f") then { [_obj] call dmd_fnc_cleanLootCrate; };

// Z adjustments taxed from A3 Wasteland
private _adjustZ = call {
	if (_objClass == "Land_Scaffolding_F") exitWith { -3 };
	if (_objClass == "Land_Canal_WallSmall_10m_F") exitWith { 3 };
	if (_objClass == "Land_Canal_Wall_Stairs_F") exitWith { 3 };
	0
};

private _pos = getPosATL _obj;
_pos set [2, (_pos select 2) + _adjustZ];
_obj setPos _pos;

_obj allowDamage true;
_obj enableDynamicSimulation true;
_obj setVariable ["R3F_LOG_disabled", false, true];
_obj setVariable ["unique_id", dmd_objID, true];
dmd_objID = dmd_objID + 0.001;