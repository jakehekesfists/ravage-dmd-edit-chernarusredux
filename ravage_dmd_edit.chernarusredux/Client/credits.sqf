/* -----------------------------------
    File: credits.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */

player createDiarySubject ["Credits","Credits"];
player createDiarySubject ["Features","Mission Features"];
player createDiarySubject ["Author", "Mission Creator"];

player createDiaryRecord ["Author",
[
	"Created by",
	"
	This mission was created by JakeHekesFists[DMD]<br/>
	<br/>
	I hope you enjoy playing this mission as much as I have<br/>
	I enjoyed creating it, and I plan to continue adding features to it<br/>
	<br/>
	To any devs out there, You are free to edit any of my code as you see fit<br/>
	I look forward to seeing what amazing stuff people can add to this mission<br/>	
	<br/>
	I Highly recommend that anyone attempting to edit this mission does themselves a huge favour<br/>
	and Download themselves a copy of Visual Studio Code. And be sure to get the SQF plugin<br/>
	https://code.visualstudio.com/<br/>
	https://marketplace.visualstudio.com/items?itemName=Armitxes.sqf<br/>
	I have tried every editor out there, and nothing else comes close.<br/>
	The best free software a dev can get<br/>
	"
]];

// add in reverse order
player createDiaryRecord ["Features",
[
	"Spooky Nighttime Fog",
	"
	A feature from my old A3 Exile Mod server<br/>
	Spooky fog spawns only at night time to add to the atmos-fear.<br/> 
	"
]];

player createDiaryRecord ["Features",
[
	"Spawn Selection & Loadouts",
	"
	Players can choose to spawn at Preset Locations near the Coast<br/>
	There are 3 Classes, with 3 Preset Loadouts for each class to choose from<br/>
	Survivalists wear Civilian clothes and spawn with a Pistol and 2 First Aid Kits<br/>
	Mechanics wear Overalls or Firefighter gear, they spawn with a Pistol, a First Aid Kit and a Toolbox to repair Vehicles<br/>
	Bandits wear Facemasks and spawn with a Rifle, but they don't have any First Aid Kits or Toolbox
	"
]];

player createDiaryRecord ["Features",
[
	"Status Bar",
	"
	A nice clean UI to display your all of your vital statistics<br/>
	Based on GFs Ravage Status HUD. It has been rewritten and redesigned. It displays everything from your Health, Hunger, Thirst, Wallet Funds and Bank Balance<br/>	
	"
]];

player createDiaryRecord ["Features",
[
	"Helicopters",
	"
	Some Helicopters may spawn around the map.<br/>
	They are intended to be quite rare, and may spawn without any fuel<br/>
	Keep your eyes peeled and a Jerry can on you at all times...<br/>
	"
]];

player createDiaryRecord ["Features",
[
	"Banking and Money",
	"
	Players are rewarded with Banknotes for Killing Zombies<br/>
	AI Units may also be carrying currency<br/>
	These funds can be deposited into a players Bank Account by using the ATM which is located in the Trader City<br/>
	The Bank account is fully persistent<br/>
	"
]];

player createDiaryRecord ["Features",
[
	"Trader City & SafeZone",
	"
	A Trader City has been built at Guglovo<br/>
	Using HALs Equipment store we have a nice user friendly GUI, with a custom Selling system added to it<br/>
	The traders have limited stock of many items, and many items are not stocked at all. Players can add to the traders stock levels by selling Items they recover either by looting, or by completing AI missions and selling the loot<br/>
	<br/>
	A custom safe zone has been placed around the Trader City which creates markers around the protected area and deletes any Zombies who attempt to venture into the area. <br/>
	The safezone is also guarded by friendly AI who will attempt to kill any AI bandits who try and venture in<br/>
	"
]];

player createDiaryRecord ["Features",
[
	"Location Spam",
	"
	Inspired by an early version of the Vanilla DayZ mod.<br/>
	A custom Intro message displays when Players move into new areas<br/>
	This broadcasts the name of the Area and the current ingame time and date<br/>
	"
]];

player createDiaryRecord ["Features",
[
	"Custom Actions",
	"
	This Mission has additional actions added<br/>
	Such as the ability to salvage food, drink and refill their water bottles from certain objects<br/>
	Players can set fire to any Loot crates they find, depriving others of valuable weapons<br/>
	Players can use 3 stage Earplugs by pressing the [5] Key<br/>
	Pressing the Vault key while moving forward will allow players to Jump<br/>
	A Custom Jerry Can refuel script has been written due to the default Ravage one erroring out<br/>
	Locking/Unlocking Vehicles is tied to the player who saves the Vehicle<br/>
	Players can attempt to Hotwire vehicles with a Toolkit<br/>
	A successful Hotwire attempt takes ownership of the vehicle<br/>
	"
]];
player createDiaryRecord ["Features",
[
	"Dynamic Base Building",
	"
	Inspired by the infamous Wasteland mission from Arma 2 and 3<br/>
	Base objects ranging from Concrete ramps, cargo towers, lights and more will spawn around cities<br/>
	Players can move these objects and load them into their vehicles using the R3F Logistics System<br/>
	The objects are then saved to the database<br/>
	"
]];
player createDiaryRecord ["Features",
[
	"Persistence",
	"
	Using code34s iniDBI2, this mission has a custom persistence system written into it<br/>
	Anyone hosting this mission MUST be running iniDBI2 (available from the steam workshop)<br/>
	Players data, gear and bank accounts are saved to a database<br/>
	Players can also choose to save vehicles they find to the database<br/>
	Saved vehicles are then made lockable/unlockable by the owner<br/>
	<br/>
	The Mission also saves the ingame date and time between restarts<br/>
	<br/>
	Dynamic Base Building Parts also store to the database<br/>
	<br/>
	Unused objects are cleaned up after 21 days without use<br/>
	Hosts can change this setting in the mission file<br/>
	"
]];
player createDiaryRecord ["Features",
[
	"RedZone",
	"
	Inspired by PUBG, Certain areas may be targeted for bombardment<br/>
	If you're in an area and the RedZone starts, you may wanna get the fuck out of there<br/>
	"
]];
player createDiaryRecord ["Features",
[
	"AI Missions",
	"
	Features custom made DayZ Epoch/Exile style AI missions<br/>
	Also Includes Dynamic Town/City Invasions<br/>
	And Jets and Civilian Aircraft doing Flybys<br/>
	"
]];
player createDiaryRecord ["Features",
[
	"Custom Loot Spawn",
	"
	This Mission features BOTH the default Ravage loot spawn<br/>
	and a Custom written, ground loot spawn system<br/>
	<br/>
	One of the major complaints about Ravage mod is the scarcity of loot<br/>
	I have attempted to balance this out a little<br/>
	People can edit the loot tables and drop rates in the DMD_LootSpawn folder<br/>
	This system will work on any map, as it dynamically creates lootspawns for any nearby buildings<br/>
	<br/>
	I plan to release this as a standalone system in future<br/>
	"
]];

player createDiaryRecord ["Credits",
[
	"[R3F] Logistics",
	"
	<font color='#2d9101' size='14' face='PuristaSemiBold'>[R3F] Logistics - madbull</font>
	<font color='#003cff' size='12' face='RobotoCondensedLight'>https://forums.bohemia.net/forums/topic/170033-r3f-logistics/</font><br/>
	"
]];

player createDiaryRecord ["Credits",
[
	"GEORGE FLOROS GR",
	"
	<font color='#2d9101' size='14' face='PuristaSemiBold'>GF - GEORGE FLOROS GR</font>
	<font color='#003cff' size='12' face='RobotoCondensedLight'>https://forums.bohemia.net/forums/topic/215645-gf-ravage-status-bar-script/</font><br/>
	<font color='#FFFFFF' size='14' face='RobotoCondensed'>I used this status bar as inspiration for my own status bar. Many thanks to GF.</font>
	"
]];

player createDiaryRecord ["Credits",
[
	"Advanced Towing",
	"
	<font color='#2d9101' size='14' face='PuristaSemiBold'>Advanced Towing - sethduda</font>
	<font color='#003cff' size='12' face='RobotoCondensedLight'>https://github.com/sethduda/AdvancedTowing</font>
	"
]];

player createDiaryRecord ["Credits",
[
	"HALs Equipment Store",
	"
	<font color='#2d9101' size='14' face='PuristaSemiBold'>HALs Equipment Store - HallyG</font>
	<font color='#003cff' size='12' face='RobotoCondensedLight'>https://forums.bohemia.net/forums/topic/208648-release-hals-equipment-store-v11/</font><br/>
	<font color='#FFFFFF' size='14' face='RobotoCondensed'>I suck at creating working arma dialogs, I didnt like the ravage traders. HALs looks great.<br/>Using this store as a base, I've made it work with ravage and added the ability to sell items</font>
	"
]];

player createDiaryRecord ["Credits",
[
	"KillzoneKid",
	"
	<font color='#2d9101' size='14' face='PuristaSemiBold'>KillzoneKid</font>
	<font color='#003cff' size='12' face='RobotoCondensedLight'>http://killzonekid.com/category/tutorials/</font><br/>
	<font color='#FFFFFF' size='14' face='RobotoCondensed'>Without his tutorials, none of this would be possible.<br/>If you want to learn to code for Arma. go here and read, read, read.</font>
	"
]];

player createDiaryRecord ["Credits",
[
	"Chernarus Redux",
	"
	<font color='#2d9101' size='14' face='PuristaSemiBold'>Chernarus Redux</font>
	<font color='#003cff' size='12' face='RobotoCondensedLight'>http://www.armaholic.com/page.php?id=33271</font><br/>
	<font color='#FFFFFF' size='14' face='RobotoCondensed'>Very cool map, saves me from using my old building replacement script and making a tonne of map edits to modernise cherno.<br/>Huge thanks to the Team for making this great terrain<br/>AxiosODST (Lead Developer)<br/>Killjoy (Lead Developer)<br/>ComatoseBadger (Lead Developer)<br/>Smiffy (Terrain Developer)<br/>WreckedEm (Terrain Developer)<br/>NiiRoZz (Model Developer)<br/>Dan Tronic (Sound Developer)</font>
	"
]];


player createDiaryRecord ["Credits",
[
	"iniDBI2",
	"
	<font color='#2d9101' size='14' face='PuristaSemiBold'>iniDBI2 - code34</font>
	<font color='#003cff' size='12' face='RobotoCondensedLight'>https://forums.bohemia.net/forums/topic/186131-inidbi2-save-and-load-data-to-the-server-or-your-local-computer-without-databases/</font><br/>
	<font color='#FFFFFF' size='14' face='RobotoCondensed'>Yay for persistence, takes some fiddling to make things work. but its great at what it does.</font>
	"
]];


player createDiaryRecord ["Credits",
[
	"Ravage Mod",
	"
	<font color='#2d9101' size='18' face='PuristaSemiBold'>Ravage Mod - Haleks</font>
	<font color='#003cff' size='14' face='RobotoCondensedLight'>https://forums.bohemia.net/forums/topic/183264-ravage/</font><br/>
	<font color='#FFFFFF' size='14' face='RobotoCondensed'>Fantastic zombie mod, does what DayZ standalone never could</font>
	"
]];

player createDiaryRecord ["Credits",
[
	"A Brief Word",
	"
	<font color='#15a9bf' size='18' face='PuristaSemiBold'>Credit Where Credit is Due...</font><br/>
	<font color='#FFFFFF' size='14' face='RobotoCondensed'>
	In amongst all the various functions and scripts i have written from scratch<br/>
	This mission wouldn't be possible without the work of many others.<br/>
	I have taken inspiration for some elements of the game from the mods dayz epoch, wasteland and exile.<br/>
	I have wholesale modified a shitload of code to make this all at least 'semi-functional'<br/>
	I would like to give thanks to the following coders and their scripts/mods.<br/>
	<br/>
	- JakeHekesFists[DMD] 16/08/2019
	</font><br/>
	"
]];