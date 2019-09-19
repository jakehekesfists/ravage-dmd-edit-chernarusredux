class dmd {
    
    class LootSpawn {
        file = "DMD_LootSpawn\fn";
        class createLoot {};
    };
    
	class AI {
		file = "fn\AI";
		class aiGear {};
		class aiSkills {};
		class killedMonitor {};
		class spawnGroup {};
		class addLootToZ {};
		class missionCleanup {};
		class createUnit {};
		class staticWeapons {};
	};

	class Client {
		file = "fn\Client";
		class locationSpam {};
		class jumpScript {};
		class earplugs {};
		class playerActions {};
		class safezone {};
		class createFire {};
		class spookyFog {};
		class vehicleService {};
		class breathFog {};
	};

	class Missions {
		file = "fn\Missions";
		class bombPlopper {};
		class cleanLootCrate {};
		class createBldRelative {};
		class createMissionMarker {};
		class delMissionMarker {};
		class lootCrate {};
		class missionBroadcast {};
		class playerNear {};
		class taskHandle {};
		class KK_fx {};
		class KK_vehicleParadrop {};
		class missionVehicleSetup {};
		class hedgehogs {};
		class crateParadrop {};
		class crateMarkers {};
	};

	class Persistence {
		file = "fn\Persistence";
		class bank_update {};
		class calculateAge {};
		class getDBNames {};
		
		class persistClientGetPlayerData {};
		class persistIDCount {};
		class persistLoadData {};
		class persistQuery {};

		class persistServerDeleteData {};
		class persistServerGetPlayerData {};
		class persistServerSaveData {};

		class persistObjSave {};
		class persistObjCreate {};
		class persistObjLoadAll {};
		class persistObjDelete {};
		class persistObjSetupEH {};

		class persistVehCreate {};
		class persistVehDelete {};
		class persistVehSave {};
		class persistVehSetupEH {};
	};

	class Server {
		file = "fn\Server";
		class heliSpawn {};
		class boatSpawner {};
		class spawnObjects {};
		class safezoneMarkers {};
	};

	class Tools {
		file = "fn\Tools";
		class KK_inString {};
		class arrayShuffle {};
		class cleanUnit {};
		class delayDelete {};
		class findLocName {};
		class findSafePos {};
		class getCfgType {};
		class getCityPos {};
		class getMissionCfg {};
		class getPlayerInv {};
		class getPosInCircle {};
		class getRandomPosInCircle {};
		class isEquipmentEmpty {};
		class sanitiseMags {};
		class findSafeMissionPos {};
		class positionFilter {};
		class vehicleCargoCapacity {};
		class isItNightTime {};
	};
};