/* -----------------------------------
    File: fn_playerNear.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
private _r = false;
params [ "_pos", "_rad" ];
if (isNil "_rad") then {_rad = 500;} else {_rad};
{ if ((isPlayer _x) && ((speed _x) < 250) && (((position _x) distance _pos) < _rad)) exitWith {_r = true}; } forEach allPlayers;
_r