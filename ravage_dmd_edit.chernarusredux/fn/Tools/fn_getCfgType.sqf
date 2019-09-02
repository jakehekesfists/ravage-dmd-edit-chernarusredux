/* -----------------------------------
    File: fn_getCfgType.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_item"];
private _r = call {
    if (isClass (configFile >> "CfgWeapons" >> _item)) exitWith { "CfgWeapons" };
    if (isClass (configFile >> "CfgVehicles" >> _item)) exitWith { "CfgVehicles" };
    if (isClass (configFile >> "CfgMagazines" >> _item)) exitWith { "CfgMagazines" };
    nil
};
_r