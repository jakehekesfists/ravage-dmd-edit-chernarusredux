/* -----------------------------------
    File: fn_bombPlopper.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_lp", "_rad", "_rpt", "_shl"];
_bpArray = [_lp, _rad, _rpt, true] call dmd_fnc_getPosInCircle; 
for "_i" from 0 to (count _bpArray)-1 do {
	private _bpos = (_bpArray select _i);
	_bpos set [2, 175];
	private _b = (selectRandom _shl) createVehicle _bpos;
	_b setVectorDirAndUp [[0,0,-1],[0,0.8,0]];
	sleep 2;
};