player linkItem "rvg_itemMap";			// map so players can see respawn screen on first connect.
cutText ["","BLACK OUT",0.1];			

[] execVM "Client\PVEH.sqf";			// PublicVariableEventHandlers for server communication (saving etc)
[] execVM "Client\keyDownEH.sqf";		// custom keybinds
[] execVM "Client\nightFogLoop.sqf";	// creepy night time loop
[] spawn dmd_fnc_breathFog;				// hijacked haleks breathfog script to only work at night/early morning (personal preference. doesnt make sense to have foggy breath on a sunny day imo)

[] execVM "StatusBar\statusBar.sqf";	// player hud (obviously)
[] execVM "Client\locationSpam.sqf";	// little message popup with location and date when you enter new areas. 
[] execVM "Client\credits.sqf";			// adds credits/thanks/shoutouts to the diary on map screen.

[] execVM "DMD_LootSpawn\lootHandler_client.sqf";		// client loop for loot spawning.

["InitializePlayer", [player]] call BIS_fnc_dynamicGroups;			// groups system