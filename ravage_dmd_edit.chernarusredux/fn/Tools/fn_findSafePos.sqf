/* -----------------------------------
    File: fn_findSafePos.sqf
    Author:  JakeHekesFists[DMD] 2019

	adapted from BIS_fnc_findSafePos
-------------------------------------- */
params [
	"_pos",
	["_minDist",0],
	["_maxDist",100],
	["_objDist",1],
	["_waterMode",0],
	["_maxGradient",999],
	["_shoreMode",0],
	["_vehicleType",""]
];

([[ "ServerSettings", "worldSettings", worldName],[ "exclusionZones" ]] call dmd_fnc_getMissionCfg ) params ["_excl"];

if (_shoreMode == 0) then {_shoreMode = false} else {_shoreMode = true};
//See if default world values should be used.
if (count _pos == 0) then { _pos = getArray (configFile >> "CfgWorlds" >> worldName >> "safePositionAnchor"); };
if (count _pos == 0) exitWith {debugLog "Log: [findSafePos] No center position was passed!"; []};
if (_maxDist == -1) then { _maxDist = getNumber(configFile >> "CfgWorlds" >> worldName >> "safePositionRadius"); };

private _newPos = [];
_pos params ["_posX", "_posY"];
if (count _pos == 2) then { _pos set [2, 0] };

for "_a" from 0 to 999 do {
	private _testPos = _pos vectorAdd ([[_minDist + random (_maxDist - _minDist), 0, 0], random 360] call BIS_fnc_rotateVector2D);
	if (count (_testPos isFlatEmpty [_objDist, 0, _maxGradient, _objDist max 3, _waterMode, _shoreMode, objNull]) > 0) exitWith { _newPos = _testPos; };
};

if (count _newPos == 0) then {
	private _params = [_minDist, _maxDist];
	if (_vehicleType != "") then { _params set [2, _vehicleType]; };
	_newPos = _pos findEmptyPosition _params;
};
//No position was found, use defaults.
if (count _newPos == 0) then { _newPos = _pos; };
//Still nothing was found, use world center positions.
if (count _newPos == 0) then { _newPos = getArray (configFile >> "CfgWorlds" >> worldName >> "centerPosition"); };
_newPos