/* -----------------------------------
    File: fn_getCityPos.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
([[ "ServerSettings", "worldSettings", worldName],[ "exclusionZones" ]] call dmd_fnc_getMissionCfg ) params ["_excl"];
private _posArr = [];
private _mid = worldSize/2;
private _cntPos = [_mid, _mid];
private _arr = nearestLocations [ _cntPos, ["NameCity", "NameCityCapital", "NameVillage"], worldSize ];
{
	_push = locationPosition _x;
	_name = text _x; 
	if !(_name in _excl) then {
		_posArr pushback [(text _x), [_push select 0, _push select 1, 0]];
	};
} forEach _arr;
_posArr