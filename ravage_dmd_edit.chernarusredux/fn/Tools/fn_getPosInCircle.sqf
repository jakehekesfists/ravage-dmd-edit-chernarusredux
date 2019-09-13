/* -----------------------------------
    File: fn_getPosInCircle.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
	"_lp",
	["_rad",250],
	["_rpt",30],
	["_hse", false]
];
_lp params ["_cXX", "_cYY", "_cZZ"];

private _ba = [];
for "_i" from 0 to 1 step 0 do {
	private _rDir = random 360;
	private _rRad = random _rad;
	private _offX = _rRad * (cos _rDir);
	private _offY = _rRad * (sin _rDir);
	private _newPos = [_cXX + _offX, _cYY + _offY, 0];
	if !(surfaceIsWater _newPos) then { _ba pushBack _newPos; };
	if (count _ba > 3500) exitWith { _i = 2; };		// exit the loop
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