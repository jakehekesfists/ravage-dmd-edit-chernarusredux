/* -----------------------------------
    File: fn_removeItemCargo.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
if (!isServer) exitWith {};

params [
	["_container", objNull, [objNull]],
	["_classname", "", [""]],
	["_amount", 1, [0]]
];

if (isNull _container) exitWith {};
if (_classname isEqualTo "") exitWith {};
if (_amount < 1) exitWith {};

// remove from backpack first - fixed items not being taken
if (_classname in (backpackItems _container)) exitWith { _container removeItemFromBackpack _classname; };
if (_classname in (vestItems _container)) exitWith { _container removeItemFromVest _classname; };
if (_classname in (uniformItems _container)) exitWith { _container removeItemFromUniform _classname; };
if (_classname in (primaryWeaponItems _container)) exitWith { _container removePrimaryWeaponItem _classname; };
if (_classname in (secondaryWeaponItems _container)) exitWith { _container removeSecondaryWeaponItem _classname; };

// check if the player is wearing the item
if (_classname isEqualTo (vest _container)) exitWith {  removeVest _container; };
if (_classname isEqualTo (uniform _container)) exitWith {  removeUniform _container; };
if (_classname isEqualTo (backpack _container)) exitWith {  removeBackpack _container; };
if (_classname isEqualTo (headgear _container)) exitWith { removeHeadgear _container; };
if (_classname isEqualTo (goggles _container)) exitWith { removeGoggles _container; };
if (_classname isEqualTo (binocular _container)) exitWith { _container removeWeapon _classname; };
if ((_classname in (assignedItems _container)) || (_classname isEqualTo (hmd _container))) exitWith { _container unassignItem _classname; _container removeItem _classname; };

switch ([_classname] call HALs_store_fnc_getItemType) do {
	case 1: {_container removeMagazineGlobal _classname };
	case 2: {_container removeWeaponGlobal _classname };
	case 3: { removeBackpackGlobal _container };
	case 4: {_container removeItem _classname };
	default {};
};