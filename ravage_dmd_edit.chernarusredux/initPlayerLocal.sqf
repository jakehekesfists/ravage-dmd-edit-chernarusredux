([
    [ "ClientSettings", "initPlayerLocal" ],
    [ "aimCoef","recoilCoef","enableStamina", "enableTraits", "traitValues" ]
] call dmd_fnc_getMissionCfg ) params [
    "_aimCoef","_recCoef","_enStam","_enTraits","_trVals"
];


// PLAYER SETTINGS
player setCustomAimCoef _aimCoef;
player setUnitRecoilCoefficient _recCoef;
if (_enStam isEqualTo 0) then { player enableStamina false; player enableFatigue false; };

{ player setUnitTrait [_x, true]; } forEach _enTraits;
{ player setUnitTrait [(_x select 0), (_x select 1)]; } forEach _trVals;

player linkItem "rvg_itemMap";
player triggerDynamicSimulation true;       // this mission relies on dynamic simulation - turning this off will cause problems
/////////////////////////////////////////

[] execVM "Client\PVEH.sqf";
[] execVM "Client\keyDownEH.sqf";
[] execVM "Client\nightFogLoop.sqf";
[] call dmd_fnc_setupPlayer;
[] call dmd_fnc_persistQuery;
[] call dmd_fnc_safezone;
[] spawn dmd_fnc_playerActions;
[] execVM "StatusBar\statusBar.sqf";
[] execVM "Client\locationSpam.sqf";
[] execVM "Client\credits.sqf";
["InitializePlayer", [player]] call BIS_fnc_dynamicGroups;