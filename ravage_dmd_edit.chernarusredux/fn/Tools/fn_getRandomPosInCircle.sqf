/* -----------------------------------
    File: fn_getRandomPosInCircle.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
    "_pos",
    ["_rad",200]
];
_pos params ["_cX", "_cY", "_cZ"];
private _rDir = random 360;
private _rRad = random _rad;
private _offX = _rRad * (cos _rDir);
private _offY = _rRad * (sin _rDir);
[_cX + _offX, _cY + _offY, _cZ]