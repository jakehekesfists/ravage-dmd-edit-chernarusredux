/* -----------------------------------
    File: fn_boatSpawner.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */

private _enable = (getNumber(missionConfigFile >> "dmd_cfg_settings" >> "ServerSettings" >> "worldSettings" >> worldName >> "boatSpawner" ));
if (_enable != 1) exitWith {};

([[ "ServerSettings", "boatSpawn" ],[ "debugMarkers", "boatQty", "classes" ]] call dmd_fnc_getMissionCfg ) params ["_debug", "_qty", "_types"];

// this is an easy way to get the worlds center pos. 
private _hfWd = (worldSize/2);
private _cPos = [_hfWd, _hfWd, 0];

// we will add 100 positions into the array. this will check 90% of the map surface, and be sure it can fit a large boat to avoid explosions
private _posArray = [];
for "_i" from 0 to 99 do {
	private _foundPos = [_cPos, 100, _hfWd, 10, 0, 50, 1, "C_Boat_Civil_01_police_F"] call dmd_fnc_findSafePos; 
	_posArray pushBack _foundPos; 
};

// shuffle the array, and trim it. 
private _qty = (floor(random (_qty select 1)) max (_qty select 0));
_posArray = _posArray call dmd_fnc_arrayShuffle;
_posArray resize _qty;

{
	private _boatPos = _x;
	_boatPos set [2, 0.5];
	private _boat = createVehicle [(selectRandom _types), _boatPos, [], 0, "NONE"];
	_boat allowDamage false;
	_boat setFuel (((random 90)/100) + 0.1);
	[_boat] call dmd_fnc_cleanLootCrate;
	_boat setVariable ["rvg_owned", true, true];
	_boat enableDynamicSimulation true;
	_boat allowDamage true;

	if (_debug > 0) then {
		private _mrkr = createMarker [ format [ "DMDi_%1_%2", "heli", (floor (random 9000)) ], _boatPos ];
		_mrkr setMarkerShape "ICON";
		_mrkr setMarkerType "mil_dot";
		_mrkr setMarkerSize [ 0.85, 0.85 ];
		_mrkr setMarkerColor "ColorWhite";
		_mrkr setMarkerText format ["%1 POS %2", "DEBUG: BOAT", _boatPos];
	};
} forEach _posArray;