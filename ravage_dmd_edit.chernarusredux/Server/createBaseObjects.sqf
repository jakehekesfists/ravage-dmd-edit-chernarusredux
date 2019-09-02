/* -----------------------------------
    File: createBaseObjects.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_cityPosArray"];

([[ "ServerSettings", "objectSpawner" ], [ "objectList", "radius", "objectCount" ]] call dmd_fnc_getMissionCfg) params [ "_objectList", "_radius", "_repeat" ];
for "_i" from 0 to (count _cityPosArray)-1 do {
	_pos = ((_cityPosArray select _i) select 1);
	_rad = floor (random(_radius select 1)) max (_radius select 0);
	_rpt = floor (random(_repeat select 1)) max (_repeat select 0);

	_posArr = [_pos, _rad, _rpt, false] call dmd_fnc_getPosInCircle;
	{ [_x, _objectList] call dmd_fnc_spawnObjects; } forEach _posArr;
};

["set", dmd_objID, "object"] call dmd_fnc_persistIDCount;