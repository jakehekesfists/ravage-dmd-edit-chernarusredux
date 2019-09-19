/* -----------------------------------
    File: lootHandler_client.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
// INFINITE LOOP ON CLIENT CHECKING FOR NEW BUILDINGS 
for "_i" from 0 to 1 step 0 do {
	// speed check so players dont spawn loot while driving fast through towns or flying over. 
	if (speed player < 15) then {
		private _nrBld = nearestObjects [player, ["house"], 100];         // get all buildings within 100m of player.
		// if player is near buildings
		if !(_nrBld isEqualTo []) then {
			{
				// check if loot cleanup variable set... if 0 send it to the lootspawner
				if ((_x getVariable ["lootSpawn",0]) isEqualTo 0) then {
					lootPushBack = [_x];
					publicVariableServer "lootPushBack";
				};
			} forEach _nrBld;
		};
	};
	sleep 20;
};