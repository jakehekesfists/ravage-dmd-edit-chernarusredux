// Foggy Days - set on server so will correctly sync across all clients. 
DMD_FOG_DAYS = [];
for "_i" from 1 to 31 do { if ((random 100) > 66) then { DMD_FOG_DAYS pushback _i; }; };
publicVariable "DMD_FOG_DAYS";

// generate the unique IDs for object and vehicle persistence. 
{ ["get", nil, _x] call dmd_fnc_persistIDCount; } forEach ["object", "vehicle"];

_cityPosArray = call dmd_fnc_getCityPos;						// get an array of all the cities/towns on the map. 
_cityPosArray = _cityPosArray call dmd_fnc_arrayShuffle;		// shuffle the array (so we get different invasion/redzone cities on each restart) 

// 5 cities to be used for RedZone strikes
_redZneCities = [];
for "_i" from 0 to 4 do { _redZneCities pushBack (_cityPosArray select _i); };

// remaining cities to be used for invasion missions 
_invadeCities = [];
for "_ii" from 5 to (count _cityPosArray)-1 do { _invadeCities pushBack (_cityPosArray select _ii); };


[] execVM "Server\PVEH.sqf";									// publicVariable eventhandlers for player <-> server communication. mostly saving stuff
[] execVM "Server\eventHandlers.sqf";							// handles kill rewards and player saving on disconnection

[] call dmd_fnc_persistObjLoadAll;								// load all the saved stuff (vehicles and objects) 

[] execVM "Server\Scripts\timeCycle.sqf";						// controls the speed that time passes 
[] execVM "Server\Scripts\persistent_date.sqf";					// server will save the date and time through restarts. useless, but kinda cool feature

[_cityPosArray] execVM "Server\createBaseObjects.sqf";			// use the entire citypos array to create base objects 
[_redZneCities] execVM "Server\redZone.sqf";					// start the red zone arty strikes
[_invadeCities] execVM "Server\AI\invasion.sqf";				// start the invasion missions loop
[] execVM "Server\ambientFlyby.sqf";							// ambient jets/planes will fly around the map at random intervals. 
[] execVM "Server\AI\mainMission.sqf";							// main missions system

[] spawn dmd_fnc_safezoneMarkers;								// makes green lights around the trader city.
[] spawn dmd_fnc_heliSpawn;										// spawns some helicopters around the map for players to use 
[] spawn dmd_fnc_boatSpawner;									// spawns some boats around the map for players to use 
[] execVM "Server\advancedTowing.sqf";							// sethdudas advanced towing script

["Initialize"] call BIS_fnc_dynamicGroups;						// groups system

[] execVM "DMD_LootSpawn\lootHandler_server.sqf";				// server loop for loot spawning/cleanup.