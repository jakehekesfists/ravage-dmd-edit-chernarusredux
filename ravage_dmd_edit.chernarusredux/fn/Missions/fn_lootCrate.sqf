/* -----------------------------------
    File: fn_lootCrate.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
	["_pos",[]],
	["_rflMinMax", [4,8]],
	["_hgnMinMax", [2,4]],
	["_itmMinMax", [6,9]],
	["_paradrop", false]
];

if (_pos isEqualTo []) exitWith { diag_log __FILE__ + "ERROR: NO POS"; };

( [[ "AI_Missions", "lootSettings" ],[ "crateTypes", "rifles", "handguns", "items" ]] call dmd_fnc_getMissionCfg ) params ["_crateTypes", "_rifles", "_handguns", "_itemsArray"];

private _boxPos = [_pos, 50] call dmd_fnc_getRandomPosInCircle;
_boxPos set [2,0];

private _box = (selectRandom _crateTypes) createVehicle _boxPos;
_box allowDamage false;

[_box] call dmd_fnc_cleanLootCrate;

_rifles = _rifles call dmd_fnc_arrayShuffle;
_handguns = _handguns call dmd_fnc_arrayShuffle;

if (_paradrop) then {
	_boxPos set [2, 100];
	_box setPosATL _boxPos;
	[_box] call dmd_fnc_crateParadrop;
};

private _rflCnt = floor(random (_rflMinMax select 1)) max (_rflMinMax select 0);
private _pstCnt = floor(random (_hgnMinMax select 1)) max (_hgnMinMax select 0);
private _itmCnt = floor(random (_itmMinMax select 1)) max (_itmMinMax select 0);

// ensure this doesnt ever go higher than the number of guns in each array
private _maxRifles = (count _rifles)-1;
private _maxHnGuns = (count _handguns)-1;
_rflCnt = _rflCnt min _maxRifles;
_pstCnt = _pstCnt min _maxHnGuns;

for "_r" from 0 to (_rflCnt)-1 do {
	private _rfl = (_rifles select _r);
	private _mag = [_rfl] call dmd_fnc_sanitiseMags;
	_mag = (selectRandom _mag);
	private _rnd = floor(random 3)+3;
	private _attArr = [];

	private _optics = [_rfl, "optic"] call CBA_fnc_compatibleItems;
	private _pointers = [_rfl, "pointer"] call CBA_fnc_compatibleItems;
	private _bipods = [_rfl, "bipod"] call CBA_fnc_compatibleItems;
	private _silencers = [_rfl, "muzzle"] call CBA_fnc_compatibleItems;

	{ _attArr pushBackUnique _x; } foreach (_optics + _pointers + _bipods + _silencers);
	
	if (count _attArr > 0) then { _box addItemCargoGlobal [(selectRandom _attArr), 1]; };
	_box addWeaponCargoGlobal [_rfl, 1];
	_box addMagazineCargoGlobal [_mag, _rnd];
};

for "_p" from 0 to (_pstCnt)-1 do {
	private _pst = (_handguns select _p);
	private _mag = [_pst] call dmd_fnc_sanitiseMags;
	_mag = (selectRandom _mag);
	
	_box addWeaponCargoGlobal [_pst, 1];
	_box addMagazineCargoGlobal [_mag, 4];
};

for "_i" from 0 to (_itmCnt)-1 do { _box addItemCargoGlobal [(selectRandom _itemsArray), 1]; };
_box setVariable ["R3F_LOG_disabled", false, true];

dmd_objID = dmd_objID + 0.001;
["set", dmd_objID, "object"] call dmd_fnc_persistIDCount;
_box setVariable ["unique_id", dmd_objID, true];

[_box, _boxPos] call dmd_fnc_crateMarkers;

_box allowDamage true;
_box