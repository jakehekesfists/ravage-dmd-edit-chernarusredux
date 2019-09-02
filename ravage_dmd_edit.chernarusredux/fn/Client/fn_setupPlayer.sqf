/* -----------------------------------
    File: fn_setupPlayer.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
( [[ "ServerSettings" ],[ "RespawnClasses" ]] call dmd_fnc_getMissionCfg ) params ["_rspClasses"];
[player] call dmd_fnc_cleanUnit;
private _selected = (selectRandom _rspClasses);
player setUnitLoadout (missionConfigFile >> "CfgRespawnInventory" >> _selected);
private _spawnPos = call dmd_fnc_randomSpawn;
player setPos _spawnPos;