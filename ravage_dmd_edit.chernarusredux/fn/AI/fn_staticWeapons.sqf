/* -----------------------------------
    File: fn_staticWeapons.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
    ["_center",[]],
    ["_posArray",[]],
    ["_loadouts",[]]
];

if (_center isEqualTo []) exitWith { diag_log __FILE__ + "ERROR: NO POSITION"; };
if (_posArray isEqualTo []) exitWith { diag_log __FILE__ + "ERROR: NO POSITION ARRAY"; };
if (_loadouts isEqualTo []) exitWith { diag_log __FILE__ + "ERROR: NO LOADOUTS"; };

private _return = [[],[],[]];
( [[ "AI_Missions", "AISettings"],["emplacedTypes"]] call dmd_fnc_getMissionCfg ) params ["_hmgTypes"];

for "_i" from 0 to (count _posArray)-1 do {
	private _spwnPs = _posArray select _i;

	private _hmg = createVehicle [ (selectRandom _hmgTypes), [0,0,0], [], 0, "CAN_COLLIDE" ];
	_hmg setDir (random 360);
	_hmg setVehicleLock "UNLOCKED";
	private _hmgPos = _center vectorAdd _spwnPs;
	_hmgPos params ["_hX", "_hY", "_hZ"];
	_hmg setVectorUP (surfaceNormal [_hX,_hY]);
	_hmg setPosATL _hmgPos;

	private _group = createGroup EAST;
	private _unit = [_spwnPs, _group, _loadouts] call dmd_fnc_createUnit;

	// this should make them quite angry
	_group allowFleeing 0;
	_group setFormation "LINE";
	_group setBehaviour "COMBAT";
	_group setCombatMode "RED";
	_group enableAttack true;
	
	[_unit, _loadouts] spawn dmd_fnc_aiGear;
	[_unit] spawn dmd_fnc_aiSkills;

	_unit moveInGunner _hmg;

	// set the variables
	_hmg setVariable ["rvg_owned", true, true];
	_hmg setVariable ["R3F_LOG_disabled", true, true];		// will allow player to add logi/save if i disable here
	_group setVariable ["onDuty", true, true];

	// add unit, group and vehicle to array
	(_return select 0) pushBack _unit;
	(_return select 1) pushBack _group;
	(_return select 2) pushBack _hmg;
};
_return