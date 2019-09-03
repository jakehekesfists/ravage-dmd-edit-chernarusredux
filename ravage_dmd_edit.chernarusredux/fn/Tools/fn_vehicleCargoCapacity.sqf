/* -----------------------------------
    File: fn_vehicleCargoCapacity.sqf
    Author:  JakeHekesFists[DMD] 2019
    
    gets all backpack, mags and weapon capacity and calculates the carry capacity for use with R3F Logistics
-------------------------------------- */

private _xxx = (configfile >> "CfgVehicles" ) call BIS_fnc_getCfgSubClasses;
private _arr = [];
private _arr2 = [];

{
    if (
        (_x isKindOf "Car") ||
        (_x isKindOf "Motorcycle") ||
        (_x isKindOf "Tank") ||
        (_x isKindOf "Air") ||
        (_x isKindOf "Ship")
    ) then { _arr pushBackUnique _x; };
} forEach _xxx;

{
    private _bpn = getNumber(configfile >> "CfgVehicles" >> _x >> "transportMaxBackpacks");
    private _mgn = getNumber(configfile >> "CfgVehicles" >> _x >> "transportMaxMagazines");
    private _wpn = getNumber(configfile >> "CfgVehicles" >> _x >> "transportMaxWeapons");
	private _tot = (_bpn + _mgn + _wpn)/3;
	_arr2 set [(count _arr2), [_x, floor(_tot)]];
} forEach _arr;

_arr2