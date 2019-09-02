/* -----------------------------------
    File: fn_getPlayerInv.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_object"];
private _playerInv = [];
{
	if( _x != "") then { _playerInv pushBack _x; };
} forEach [
	(backpack _object),
	(goggles _object),
	(headgear _object),
	(handgunWeapon _object),
	(primaryWeapon _object),
	(secondaryWeapon _object),
	(uniform _object),
	(vest _object)
];
{  if (_x != "") then { _playerInv pushBack _x;  }; } forEach assignedItems _object;
{ { if (_x != "") then { _playerInv pushBack _x; }; } forEach _x; } forEach [
	(handgunItems _object),
	(primaryWeaponItems _object),
	(secondaryWeaponItems _object)
];
{
    { { if (_x != "") then { _playerInv pushBack _x; }; } forEach (_x select 0); } forEach [ (getWeaponCargo _x), (getItemCargo _x), (getMagazineCargo _x) ];
} forEach [
	(uniformContainer _object),
	(vestContainer _object),
	(backpackContainer _object)
];
_playerInv