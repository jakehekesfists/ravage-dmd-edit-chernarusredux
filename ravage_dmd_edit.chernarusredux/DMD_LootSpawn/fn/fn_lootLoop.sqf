/* -----------------------------------
    File: fn_lootLoop.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */

for "_i" from 0 to 1 step 0 do {
	sleep 5;
	if (speed player < 15) then {
		private _nearBuildings = nearestObjects [player, ["house"], 100];
		{ [_x] spawn dmd_fnc_getlootpos; } forEach _nearBuildings;
	};
};