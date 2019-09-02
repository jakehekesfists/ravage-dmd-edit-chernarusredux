/* -----------------------------------
    File: fn_sanitiseMags.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_wep"];
( [	[ "ServerSettings" ], [ "blackListMags" ] ] call dmd_fnc_getMissionCfg ) params [ "_bl" ];
private _return = [];
_return = getArray(configFile >> "CfgWeapons" >> _wep >> "magazines");
{ if (_x in _return) then { _return deleteAt (_return find _x); }; } forEach _bl;
_return