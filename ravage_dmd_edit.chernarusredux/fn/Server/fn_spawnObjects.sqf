/* -----------------------------------
    File: fn_spawnObjects.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
if (isNil "dmd_objID") then { ["get", nil, "object"] call dmd_fnc_persistIDCount; };
params [
	"_objPos",
	["_objList",[]]
];

if ((count _objList) isEqualTo 0) exitWith {};

private _objClass = selectRandom _objList;
private _obj = _objClass createVehicle _objPos;
_obj allowDamage false;
if (_objClass isKindOf "ReammoBox_f") then { [_obj] call dmd_fnc_cleanLootCrate; };

// Z adjustments taxed from A3 Wasteland
private _adjustZ = call {
	if (_objClass in ["Land_Bunker_01_blocks_3_F","Land_Bunker_01_big_F","Land_Bunker_01_blocks_1_F", "Land_Bunker_01_small_F","Land_Bunker_01_tall_F"]) exitWith { 1 };
	if (_objClass in ["Land_Scaffolding_F","Land_Scaffolding_New_F"]) exitWith { -2 };
	if (_objClass in ["Land_Canal_WallSmall_10m_F","Land_Canal_Wall_Stairs_F"]) exitWith { 3 };
	// just used to prevent vectoring the objects with stairs 
	if (_objClass in ["Land_Cargo_House_V1_F","Land_Cargo_Patrol_V1_F","Land_Cargo_Tower_V1_F"]) exitWith { -0.05 };
	0
};

private _pos = getPosATL _obj;
_pos set [2, (_pos select 2) + _adjustZ];
_obj setPos _pos;

_pos params ["_oX", "_oY", "_oZ"];
if (_adjustZ != 0) then { _obj setVectorUP (surfaceNormal [_oX,_oY]); }; 

_obj allowDamage true;
_obj setVariable ["R3F_LOG_disabled", false, true];
_obj setVariable ["unique_id", dmd_objID, true];
dmd_objID = dmd_objID + 0.001;