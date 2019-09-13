/* -----------------------------------
    File: fn_aiGear.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
    ["_unit", objNull],
    ["_loadouts", []]
];

if (isNull _unit) exitwith { diag_log __FILE__ + "ERROR: No Unit"; };
if (_loadouts isEqualTo []) exitWith { diag_log __FILE__ + "ERROR: No Loadouts"; };

([[ "AI_Missions", "AISettings" ],[ "items" ]] call dmd_fnc_getMissionCfg ) params ["_itemsArray"];

private _addToUnit = [];
private _selected = selectRandom _loadouts;
[_unit] call dmd_fnc_cleanUnit;
_unit setUnitLoadout (missionConfigFile >> "dmd_ai_loadouts" >> _selected);

for "_i" from 0 to (floor (random 4)) do { _addToUnit pushBack (selectRandom _itemsArray); };
{ if ( _unit canAdd _x ) then { _unit addItem _x; }; } forEach _addToUnit;

private _weapon = primaryWeapon _unit;
private _optics = [_weapon, "optic"] call CBA_fnc_compatibleItems;
private _pointers = [_weapon, "pointer"] call CBA_fnc_compatibleItems;

_rand = floor(random 100);
if (count _optics > 0) then { _unit addPrimaryWeaponItem (selectRandom _optics); };
if (count _pointers > 0) then { _unit addPrimaryWeaponItem (selectRandom _pointers); };
if (_rand >= 90) then {
	_silencers = [_weapon, "muzzle"] call CBA_fnc_compatibleItems;
	if (count _silencers > 0) then { _unit addPrimaryWeaponItem (selectRandom _silencers); };
};
if ((_rand > 20) && (_rand < 35)) then {
	private _bipods = [_weapon, "bipod"] call CBA_fnc_compatibleItems;
	if (count _bipods > 0) then { _unit addPrimaryWeaponItem (selectRandom _bipods); };
};

for "_i" from 0 to (_rand) step 3 do { _unit addItemToUniform "rvg_money"; };
_unit enablegunlights "forceOn";