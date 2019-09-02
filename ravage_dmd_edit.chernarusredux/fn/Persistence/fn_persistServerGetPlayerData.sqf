/* -----------------------------------
    File: fn_persistServerGetPlayerData.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_plr"];
_myPos = getPosATL _plr;
_myDir = direction _plr;
_myAni = animationState _plr;
_myDmg = damage _plr;
_myGear = getUnitLoadout _plr;
// hunger and thirst not grabbed from empty obj!
[_myPos,_myDir,_myAni,_myDmg,_myGear]