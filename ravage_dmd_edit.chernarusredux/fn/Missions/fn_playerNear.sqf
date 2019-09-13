/* -----------------------------------
    File: fn_playerNear.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
    ["_pos",[]],
    ["_rad", 500]
];
if (_pos isEqualTo []) exitWith { diag_log __FILE__ + "ERROR: NO POS"; };
private _r = false;
{ if ((isPlayer _x) && ((speed _x) < 250) && (((position _x) distance _pos) < _rad)) exitWith {_r = true}; } forEach allPlayers;
_r