/* -----------------------------------
    File: fn_arrayShuffle.sqf
    Author:  JakeHekesFists[DMD] 2019
	http://killzonekid.com/arma-scripting-tutorials-arrays-part-4-arrayshuffle/	
	(Fisher-Yates algorithm)
-------------------------------------- */
for "_i" from count _this - 1 to 0 step -1 do {
	private _el = _this select _i;
	private _rnd = floor random (_i + 1);
	_this set [_i, _this select _rnd];
	_this set [_rnd, _el];
};
_this