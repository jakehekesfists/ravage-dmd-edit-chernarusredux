/* -----------------------------------
    File: fn_spawnGroup.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
    ["_pos",[]],
    ["_gCnt", 2],
    ["_uCnt", 4],
    ["_rad", 200],
    ["_loadouts", []]
];

if (_pos isEqualTo []) exitWith { diag_log __FILE__ + "ERROR: NO POSITION"; };
if (_loadouts isEqualTo []) exitWith { diag_log __FILE__ + "ERROR: NO LOADOUTS"; };

private _return = [[],[]];
private _posArr = [_pos, _rad, _gCnt, false ] call dmd_fnc_getPosInCircle;

for "_g" from 0 to (_gCnt)-1 do {
	private _group = createGroup east;
	_group setVariable ["onDuty", true, true];
	_group enableAttack true;
	private _selPos = (_posArr select _g);
	private _safePos = [_selPos, 1, 20, 1, 0, 999, 0, ""] call dmd_fnc_findSafePos;

	for "_u" from 0 to (_uCnt)-1 do {
		_unit = [_safePos, _group, _loadouts] call dmd_fnc_createUnit;
		(_return select 1) pushBack _unit;
	};
	
	(_return select 0) pushBack _group;
	private _grpForm = (selectRandom ["COLUMN","STAG COLUMN","WEDGE","ECH LEFT","ECH RIGHT","VEE","LINE"]);
	private _randomVal = floor(random 10);
	
	if (_randomVal > 4) then {
	    _group setFormation _grpForm;
	    _group setCombatMode "RED";
	    _group setBehaviour "SAFE";
	    [_group, _pos, 100, 3, 0.5, 0.5] call CBA_fnc_taskDefend;
	} else {
	    [_group, _pos, (_rad)*0.6, 8, "MOVE", "SAFE", "RED", "LIMITED", _grpForm, "", [3,6,9]] call CBA_fnc_taskPatrol;
	};
	
};
_return