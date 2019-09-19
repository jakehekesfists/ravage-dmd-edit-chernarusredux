# ravage-dmd-edit
## Arma 3 - Ravage Mod - Sandbox Missions by JakeHekesFists[DMD]
## _These has not been properly tested in a dedicated server environment, so server admins.... Use at your own risk_
--------------------------------------------------------------------------------------

The PBO files in this folder are all based upon the same source code from the chernarus redux mission.
It is very easy to add/remove CUP Pack or RHS Full pack from these missions. 
simply edit dmd_defines.h
The configuration has been set up to automatically add/remove items from traders, loot tables and vehicle spawns based on this file. 

These are some preset missions.
Simply download and copy your chosen .pbo files to your MPMissions folder and Run as Multiplayer (Multiplayer > Host > LAN)

The scripts and functions are exactly the same from mission to mission.
dmd_defines.h differs depending on the mod preset, and the ravage gear module is changed in eden editor. 
each map will contain some additional barracks/military loot areas and some features. 
eg, a bridge connecting the main island to the military base on malden
I haven't gone too crazy with the map editing. Feel free to open these up in eden and change whatever you see fit. 

MOD REQUIREMENTS
--------------------------
All Mods require
* CBA_A3
* Ravage
* INIDBI2 - Official Extension (Host/Server only)

If the filename is 
	-vanillaA3.mapname.pbo
		this does not require additional weapons/vehicles mods.
		
	-rhs_only.mapname.pbo
		this will require the full RHS pack (RHSUSF, RHSAFRF, RHSSAF, RHSGREF)
		
	-cup_only.mapname.pbo
		this will require the full CUP pack (weapons, units, vehicles)
	
	-full.mapname.pbo
		or
	ravage_dmd_edit.chernarusredux.pbo
		this requires the full CUP pack (weapons, units, vehicles)
		AND the full RHS pack (RHSUSF, RHSAFRF, RHSSAF, RHSGREF)