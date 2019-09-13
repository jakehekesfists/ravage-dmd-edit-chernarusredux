/* -----------------------------------
    File: fn_isEquipmentEmpty.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
	"_unit",
	["_classname",""]
];
if (_classname isEqualTo "") exitWith {};
([_classname] call BIS_fnc_itemType) params ["_itemCategory", "_itemType"];
private _ret = call {
	if !(_itemCategory isEqualTo "Equipment") exitWith { true };
	if !(_itemType in ["Vest", "Uniform", "Backpack"]) exitWith { true };
	if ((_itemType isEqualTo "Vest") && ((vest _unit) isEqualTo _classname) && !((vestItems _unit) isEqualTo [])) exitWith { false };
	if ((_itemType isEqualTo "Uniform") && ((uniform _unit) isEqualTo _classname) && !((uniformItems _unit) isEqualTo [])) exitWith { false };
	if ((_itemType isEqualTo "Backpack") && ((backpack _unit) isEqualTo _classname) && !((backpackItems _unit) isEqualTo [])) exitWith { false };
	true
};
_ret