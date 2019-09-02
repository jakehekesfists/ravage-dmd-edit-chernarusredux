/* -----------------------------------
    File: fn_addLootToZ.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_zomb"];
([[ "ServerSettings"],[ "zombieLoot", "zombieVests" ]] call dmd_fnc_getMissionCfg ) params ["_zLoot", "_zVests"];
_rand = floor(random 3);
if (_rand > 0) then {
	if (isNil (vest _zomb)) then { _zomb addVest (selectRandom _zVests); };
	for "_i" from 0 to _rand do {
		_ri = selectRandom _zLoot;
		_ok = _zomb canAddItemToVest _ri;
		if (_ok) then { _zomb addItemToVest _ri; };
	};
};