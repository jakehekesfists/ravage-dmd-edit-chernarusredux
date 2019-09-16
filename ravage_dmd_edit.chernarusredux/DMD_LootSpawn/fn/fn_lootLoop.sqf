/* -----------------------------------
    File: fn_lootLoop.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */

// spawn an infinite loop on the player
for "_i" from 0 to 1 step 0 do {
	sleep 20;		// 20 second delay. dont set too low or performance will suffer
	/* check if player less than 15km/h so they dont spawn loot if flying or driving past buildings really quickly */
	if (speed player < 15) then {
		private _nearBuildings = nearestObjects [player, ["house"], 100];		// get all buildings within 100m of player.
		{ [_x] call dmd_fnc_getlootpos; sleep 0.1; } forEach _nearBuildings;				// send each building to the loot spawner function. 
	};
};