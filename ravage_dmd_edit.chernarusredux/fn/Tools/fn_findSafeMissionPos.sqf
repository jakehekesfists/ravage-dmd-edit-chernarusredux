/* -----------------------------------
    File: fn_findSafeMissionPos.sqf
    Author:  JakeHekesFists[DMD] 2019

	adapted from BIS_fnc_findSafePos
-------------------------------------- */
params [
	"_pos",
	["_mnDst",0],
	["_mxDst",100],
	["_obDst",1],
	["_wtrMode",0],
	["_mxGrad",999],
	["_shrMode",0],
	["_vehTyp",""]
];

if (_shrMode == 0) then {_shrMode = false} else {_shrMode = true};
//See if default world values should be used.
if (count _pos == 0) then { _pos = getArray (configFile >> "CfgWorlds" >> worldName >> "safePositionAnchor"); };
if (count _pos == 0) exitWith {debugLog "Log: [findSafePos] No center position was passed!"; []};
if (_mxDst == -1) then { _mxDst = getNumber(configFile >> "CfgWorlds" >> worldName >> "safePositionRadius"); };

private _newPos = [];
_pos params ["_posX", "_posY"];
if (count _pos == 2) then { _pos set [2, 0] };

for "_a" from 0 to 999 do {
	private _testPos = _pos vectorAdd ([[_mnDst + random (_mxDst - _mnDst), 0, 0], random 360] call BIS_fnc_rotateVector2D);
    private _fndBad = [_testPos] call dmd_fnc_positionFilter;
	if ((count (_testPos isFlatEmpty [_obDst, 0, _mxGrad, _obDst max 3, _wtrMode, _shrMode, objNull]) > 0) && (!_fndBad)) exitWith { _newPos = _testPos; };
};

if (count _newPos == 0) then {
	private _params = [_mnDst, _mxDst];
	if (_vehTyp != "") then { _params set [2, _vehTyp]; };
	_newPos = _pos findEmptyPosition _params;
};
//No position was found, use defaults.
if (count _newPos == 0) then { _newPos = _pos; };
//Still nothing was found, use world center positions.
if (count _newPos == 0) then { _newPos = getArray (configFile >> "CfgWorlds" >> worldName >> "centerPosition"); };
_newPos