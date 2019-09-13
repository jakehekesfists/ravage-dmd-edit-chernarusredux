/* -----------------------------------
    File: fn_killedMonitor.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
	["_allUnits",[]],
	["_kpr",0.9]
];
private _untCount = (count _allUnits);
if (_untCount > 0) then {
	_k = 0;
	_kp = round(_kpr * _untCount);
	while {true} do {
		scopeName "killCheckLoop";
		_k = 0;
		{if (((damage _x) isEqualTo 1) || (isNull _x)) then {_k = _k + 1}} forEach _allUnits;
		if (_k < _kp) then {sleep 3} else {breakOut "killCheckLoop"};
	};
};