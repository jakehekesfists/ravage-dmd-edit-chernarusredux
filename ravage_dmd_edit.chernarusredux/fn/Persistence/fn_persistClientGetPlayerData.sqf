/* -----------------------------------
    File: fn_persistClientGetPlayerData.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
_myUID = getPlayerUID player;
_myPos = getPosATL player;
_myDir = direction player;
_myAni = animationState player;
_myDmg = damage player;
_myGear = getUnitLoadout player;
_hunger = player getVariable ["hunger", 100];
_thirst = player getVariable ["thirst", 100];

dmd_db_esc_save = [_myUID, _myPos,_myDir,_myAni,_myDmg,_myGear,_hunger,_thirst];
publicVariableServer "dmd_db_esc_save";
dmd_db_esc_save = nil;