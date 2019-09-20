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
private _qty = (floor(random (_qty select 1)) max (_qty select 0));

for "_i" from 0 to (_qty)-1 do {
	private _boatType = selectRandom _types;
	private _boatPos = [_cPos, 100, _hfWd, 10, 0, 50, 1, _boatType] call dmd_fnc_findSafePos;
	_boatPos set [2, 0.25];
	private _boat = createVehicle [_boatType, _boatPos, [], 0, "NONE"];
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
};