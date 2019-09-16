/* -----------------------------------
    File: createBaseObjects.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_cityPosArray"];

// all base part object settings are defined in dmd_config.hpp in the objectSpawner subclass. 
([[ "ServerSettings", "objectSpawner" ], [ "objectList", "radius", "objectCount" ]] call dmd_fnc_getMissionCfg) params [ "_objectList", "_radius", "_repeat" ];

// a loop of each city/location
for "_i" from 0 to (count _cityPosArray)-1 do {

	// randomly set the radius around the city location
	_pos = ((_cityPosArray select _i) select 1);
	_rad = floor (random(_radius select 1)) max (_radius select 0);
	_rpt = floor (random(_repeat select 1)) max (_repeat select 0);

	// create an array of positions to spawn base opjects
	_posArr = [_pos, _rad, _rpt, false] call dmd_fnc_getPosInCircle;
	{ [_x, _objectList] call dmd_fnc_spawnObjects; } forEach _posArr;
};

// update the object ID count so persistence continues working properly.
["set", dmd_objID, "object"] call dmd_fnc_persistIDCount;