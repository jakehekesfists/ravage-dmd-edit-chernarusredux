/* -----------------------------------
    File: fn_createUnit.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
    "_pos",
    ["_group", grpNull],
    ["_loadouts",[]]
];

if (isNull _group) exitWith { diag_log __FILE__ + "Error: NO GROUP"; };
if (_loadouts isEqualTo []) exitWith { diag_log __FILE__ + "Error: NO LOADOUTS"; };

private _unit = _group createUnit ["O_Soldier_unarmed_F", _pos, [], 0, "NONE"];

[_unit, _loadouts] spawn dmd_fnc_aiGear;
[_unit] call dmd_fnc_aiSkills;
_unit enableSimulationGlobal false;
[_unit, "FAR"] call RVG_fnc_setName;
//	_unit addEventHandler ["Fired", {_this spawn RVG_fnc_Fired}];			// was throwing mad errors. take it out
_unit setCombatMode "RED";
_unit setBehaviour "SAFE";
[_unit] joinSilent _group;
_unit enableSimulationGlobal true;

_unit