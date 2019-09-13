/* -----------------------------------
    File: fn_persistLoadData.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */

params [
    ["_type",""],
    ["_dataArray",[]]
];

if (_type isEqualTo "") exitWith { diag_log __FILE__ + "ERROR: NO TYPE SUPPLIED"; };

if (_type isEqualTo "newplayer") exitWith {
    _forceRespawn = missionNamespace getVariable ["DMD_Respawned", false];
    if !(_forceRespawn) then { forceRespawn player; };
    missionNamespace setVariable ["DMD_Respawned", true];
    dmd_db_load = nil;
    publicVariable "dmd_db_load";
};

if (count _dataArray > 0) then {
    _dataArray params ["_readpos", "_readdir", "_readAni", "_readdamage", "_readloadout", "_readHunger", "_readThirst" ];
    [player] call dmd_fnc_cleanUnit;
    // Add player gear
    player setDamage _readdamage;
    player switchmove _readAni;
    player setVariable ["hunger", _readHunger];
    player setVariable ["thirst", _readThirst];
    player setPosATL _readpos;
    player setDir _readdir;
    player setUnitLoadout _readloadout;
};

dmd_db_load = nil;
missionNamespace setVariable ["DMD_Respawned", true];
publicVariable "dmd_db_load";