params ["_pos", "_group", "_loadouts"];
private _unit = _group createUnit ["rhs_msv_sergeant", _pos, [], 0, "NONE"];

[_unit, _loadouts] spawn dmd_fnc_aiGear;
[_unit] spawn dmd_fnc_aiSkills;
_unit enableSimulationGlobal false;
[_unit, "FAR"] call RVG_fnc_setName;
//	_unit addEventHandler ["Fired", {_this spawn RVG_fnc_Fired}];			// was throwing mad errors. take it out
_unit setCombatMode "RED";
_unit setBehaviour "SAFE";
[_unit] joinSilent _group;
_unit enableSimulationGlobal true;

_unit