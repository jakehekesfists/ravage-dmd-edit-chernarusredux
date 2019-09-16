DMD_LootCleanUp = [];			// empty array to start 

// spawn an infinite cleanup loop
for "_i" from 0 to 1 step 0 do {
	// check if the array is empty 
	if ((count DMD_LootCleanUp) > 0) then {
		{
			_x params ["_obj", "_all", "_end"];
			// check if the cleanup timer is past the end time 
			if (diag_tickTime > _end) then {
				// check to make sure no players are nearby
				private _nearby = [(getPos _obj), 100] call dmd_fnc_playerNear;
				if (!_nearby) then {
					{ deleteVehicle _x } forEach _all;					// cleanup the loot piles.
					_obj setVariable ["lootSpawn",0,true];				// reset the building so loot can respawn later
					DMD_LootCleanUp deleteAt _forEachIndex;				// remove the building from the cleanup array
				};
			};
		} forEach DMD_LootCleanup;
	};
	sleep 10;			// only check every 10 seconds. make sure you dont set this value too low or performance will suffer. 
};