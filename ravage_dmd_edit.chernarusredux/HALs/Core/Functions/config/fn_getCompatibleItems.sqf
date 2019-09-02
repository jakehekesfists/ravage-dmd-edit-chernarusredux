/*
	Function: HALs_fnc_getCompatibleItems
	Author: HallyG
	Returns all items and magazines compatible with a weapon.

	Argument(s):
	0: Weapon classname <STRING>

	Return Value:
	<ARRAY>

	Example:
	(primaryWeapon player) call HALs_fnc_getCompatibleItems;

	// edited by JakeHekesFists[DMD] - requires CBA (obviously). HALs store method wasnt picking up all compatible items on all weapons. 
__________________________________________________________________*/
private _weaponClassName = param [0, "", [""]];

private _compatibleItems = [_weaponClassName] call dmd_fnc_sanitiseMags;
{ { _compatibleItems pushBackUnique _x; } forEach ([_weaponClassName, _x] call CBA_fnc_compatibleItems); } forEach ["optic", "pointer", "bipod", "muzzle"];

_compatibleItems 