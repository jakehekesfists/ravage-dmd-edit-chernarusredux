/* -----------------------------------
    File: fn_getPosInCircle.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [ "_lp", "_rad", "_rpt", "_hse" ];
_lp params ["_cXX", "_cYY", "_cZZ"];

if (isNil "_hse") then { _hse = false; } else { _hse };
private _ba = [];

for "_i" from 0 to 5000 do {
	private _rDir = random 360;
	private _rRad = random _rad;
	private _offX = _rRad * (cos _rDir);
	private _offY = _rRad * (sin _rDir);
	_ba pushBack [_cXX + _offX, _cYY + _offY, 0];
};

if (_hse) then {
	private _nrObj = nearestObjects [_lp, ["house", "Man", "Car", "Tank", "Truck"], _rad];
	for "_ii" from 0 to (count _nrObj)-1 do {
		private _bPos = getPosATL (_nrObj select _ii);
		_ba pushBack [_bPos select 0, _bPos select 1, 0];	
	};
};
_ba call DMD_fnc_arrayShuffle;
_ba resize _rpt;
_ba