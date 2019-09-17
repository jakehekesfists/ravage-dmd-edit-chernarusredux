/* -----------------------------------
    File: fn_heliSpawn.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
([[ "ServerSettings", "HeliSpawn" ],[ "heliQty", "heliFuel", "heliFuelEmptyChance", "heliTypes", "debugMarkers", "enable" ]] call dmd_fnc_getMissionCfg ) params ["_qty", "_fuel", "_emptyChance", "_types", "_debug", "_enable" ];

if (_enable != 1) exitWith {};

// this is an easy way to get the worlds center pos. 
private _hfWd = (worldSize/2);
private _cPos = [_hfWd, _hfWd, 0];

// we will add 1000 positions into the array. this will check 90% of the map surface, and be sure it can fit a large helicopter to avoid explosions
private _posArray = [];
for "_i" from 0 to 999 do {
	private _foundPos = [_cPos, 100, (_hfWd*0.9), 2.5, 0, 2, 0, "B_Heli_Transport_03_unarmed_F"] call dmd_fnc_findSafeMissionPos;
	_posArray pushBack _foundPos; 
};

// shuffle the array, and trim it. 
private _qty = (floor(random (_qty select 1)) max (_qty select 0));
_posArray = _posArray call dmd_fnc_arrayShuffle;
_posArray resize _qty;

{
	private _heliPos = _x;
	private _type = (selectRandom _types);

	private _heli = createVehicle [_type, _heliPos, [], 0, "NONE"];
	_heli allowDamage false;
	
	private _setFuel = 0;
	if (floor(random 100) > _emptyChance) then {
		_setfuel = (random (_fuel select 1)) max (_fuel select 0);
	};
	_heli setFuel _setfuel;

	[_heli] call dmd_fnc_cleanLootCrate;
	_heli setVariable ["rvg_owned", true, true];
	_heli enableDynamicSimulation true;
	_heli allowDamage true;

	if (_debug > 0) then {
		private _mrkr = createMarker [ format [ "DMDi_%1_%2", "heli", (floor (random 9000)) ], _heliPos ];
		_mrkr setMarkerShape "ICON";
		_mrkr setMarkerType "mil_dot";
		_mrkr setMarkerSize [ 0.85, 0.85 ];
		_mrkr setMarkerColor "ColorWhite";
		_mrkr setMarkerText format ["%1 POS %2", "DEBUG: HELICOPTER", _heliPos];
	};

} forEach _posArray;