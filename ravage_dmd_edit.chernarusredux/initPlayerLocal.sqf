player linkItem "rvg_itemMap";
cutText ["","BLACK OUT",0.1];

[] execVM "Client\PVEH.sqf";
[] execVM "Client\keyDownEH.sqf";
[] execVM "Client\nightFogLoop.sqf";

[] execVM "StatusBar\statusBar.sqf";
[] execVM "Client\locationSpam.sqf";
[] execVM "Client\credits.sqf";

["InitializePlayer", [player]] call BIS_fnc_dynamicGroups;