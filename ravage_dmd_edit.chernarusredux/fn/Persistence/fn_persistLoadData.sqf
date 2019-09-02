/* -----------------------------------
    File: fn_persistLoadData.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_readpos", "_readdir", "_readAni", "_readdamage", "_readloadout", "_readHunger", "_readThirst" ];
[player] call dmd_fnc_cleanUnit;

// Add player gear
player setDamage _readdamage;
player switchmove _readAni;
player setVariable ["hunger", _readHunger];
player setVariable ["thirst", _readThirst];

player setPosATL _readpos;
player setDir _readdir;
player setUnitLoadout _readloadout;

dmd_db_load = nil;
publicVariable "dmd_db_load";