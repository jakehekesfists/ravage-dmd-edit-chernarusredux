/* -----------------------------------
    File: fn_randomSpawn.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
([[ "ServerSettings" ],[ "spawnLocations" ]] call dmd_fnc_getMissionCfg ) params ["_respawnLocations" ];
private _selected = selectRandom _respawnLocations; 
private _spawnPos = [_selected, 0, 500, 1, 0, 999, 1] call dmd_fnc_findSafePos;
_spawnPos