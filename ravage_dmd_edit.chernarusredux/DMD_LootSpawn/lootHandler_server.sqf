/* -----------------------------------
    File: lootHandler_server.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */

// empty arrays
DMD_LootSpawner = [];
DMD_LootCleanUp = [];

// addPublicVariableEventHandler to allow players to add buildings to the array
"lootPushBack" addPublicVariableEventHandler {
	_pack = _this select 1;
	_pack params ["_building"];
	DMD_LootSpawner pushBackUnique _building; 
};

// We'll create 2 separate thread so cleanup and spawning can run concurrently. 

// LOOT CREATION THREAD
[] spawn {
	for "_i" from 0 to 1 step 0 do {
		// LOOTSPAWNER SETS VARIABLE ON BUILDING AND SENDS TO LOOT CREATION FUNCTION
		if ((count DMD_LootSpawner) > 0) then {
			{
				// create the loot holders and spawn loot 
				private _lootPos = [_x] call dmd_fnc_createLoot;			// returns the weapon holders for cleanup
				// set the cleanup timer and pushback to the cleanup array
				private _endTime = diag_tickTime + 300;
				_x setVariable ["lootSpawn",_endTime,true];
				DMD_LootCleanUp pushBack [_x, _lootPos, _endTime];
				// remove the building from the loot spawner array
				DMD_LootSpawner deleteAt _forEachIndex;
				sleep 0.1;			// performance sleep. 
			} forEach DMD_LootSpawner;
		};
		sleep 10;
	};
};

// LOOT CLEANUP THREAD 
[] spawn {
	for "_i" from 0 to 1 step 0 do {
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
		sleep 10;
	};
};