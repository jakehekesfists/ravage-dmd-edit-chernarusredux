class dmd_cfg_settings {

    class ServerSettings {
        
        terrainGrid = 25;       // grass level. set 50 for no grass.
        viewDist = 1600;        // max view distance
        objectDist = 1600;      // object draw distance
        shadowDist = 100;       // distance that shadows are rendered

        // an array of positions along the coast where player may spawn first time they join. 
        // the script will pick a spot along the coast within a 500m radius of any of these predefined positions. 
        spawnLocations[] = { 
            {1809,2093},
            {3580,2128},
            {4669,2145},
            {6400,2195},
            {7376,2770},
            {8373,2471},
            {9469,1901},
            {10853,2324},
            {11795,3414},
            {13577,4035},
            {13422,5380},
            {13457,5907},
            {13502,6398},
            {13283,7099},
            {13072,8032},
            {12920,8748},
            {8309,6685}
        };

        hotwireFailureChance = 66;     // 66% chance of hotwire attempt failing

        // Spooky Night Fog :  NOTE: this has nothing to do with the weather, this is a fog effect created around players to add atmosphere
        enableFog = 1;                                                  // enable spooky night fog. 1 for on / 0 for off. 
        fogHours[] = {0,1,2,3,4,23};                                    // spooky fog may appear between these hours. 11pm - 4am by default. 
        fogDays[] = { 1,2,5,7,8,10,14,15,16,17,20,21,24,28,29,30 };     // spooky fog can only appear on these ingame dates. I dont want fog every night.
        //  fogDays[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};      // debug setting - fog every night.
        
        // used to stop blank ammunition spawning on AI / Loot Crates
        blackListMags[] = {
            "rhsusf_100Rnd_762x51_m82_blank",
            "rhsusf_50Rnd_762x51_m82_blank",
            "rhs_mag_30Rnd_556x45_M200_Stanag",
            "rhs_mag_20Rnd_556x45_M200_Stanag",
            "rhsusf_100Rnd_556x45_M200_soft_pouch",
            "rhsusf_100Rnd_556x45_M200_soft_pouch_ucp",
            "rhsusf_100Rnd_556x45_M200_soft_pouch_coyote"
        };

        // smoke shell colours - these are used across a few scripts. just call/edit them from here. 
        smokeShellColours[] = {"SmokeShell","SmokeShellYellow","SmokeShellRed","SmokeShellGreen","SmokeShellPurple","SmokeShellBlue","SmokeShellOrange"};

        exclusionZones[] = {"Guglovo", "Chernogorsk", "Elektrozavodsk"};        // exclude these cities from being used for missions and base object spawn.
        exclusionDist = 1000;       // missions wont spawn 1000 meters  from the above locations.
        exclusionPos[] = {};        // {{position},radius}  eg. {{2000,2000,0},100}     // missions wont spawn radius meters from position.
        playerDist = 800;           // missions wont spawn within this distance of any players
        
        cleanupDays = 21;               // if an item/vehicle is more than X days since last used it will be cleaned up.
        salePriceCoef = 0.75;           // any items will be sold at 75% percent of their purchase price.
        maxVehiclesTowed = 4;           // maximum vehicles to chain together. sethduda advanced towing slows down if vehicles too heavy anyways.
        // Respawn classes to use - these are defined in dmd_respawn_config.hpp
        RespawnClasses[] = { "Survivor01", "Survivor02", "Survivor03", "Mechanic01", "Mechanic02", "Mechanic03", "Bandit01", "Bandit02", "Bandit03" };

        // Zombie Loot
        zombieLoot[] = {"rvg_plasticBottleEmpty","rvg_canteenEmpty","rvg_canOpener","rvg_plasticBottle","rvg_plasticBottlePurified","rvg_spirit","rvg_franta","rvg_beans","rvg_bacon","rvg_milk","rvg_rice","rvg_rustyCan","rvg_hose","rvg_guttingKnife","rvg_tire","rvg_purificationTablets","rvg_flare","rvg_rustyCanEmpty","rvg_beansEmpty","rvg_baconEmpty","rvg_spiritEmpty","rvg_frantaEmpty","rvg_beansEmpty","rvg_baconEmpty","rvg_matches","rvg_antiRad","rvg_foldedTent","rvg_money","rvg_notepad"};
        zombieVests[] = {"V_LegStrapBag_black_F","CUP_V_CDF_CrewBelt","rvg_rangemaster_1","rhsgref_alice_webbing"};

        // Vehicle Repair Stations
        class vehRepairs {
            costPerPart = 100;              // cost per hitpart to repair
            maxCost = 1000;                 // maximum cost to repair a vehicle
            timeToRepair = 2;               // time to repair each part
        };

        // Helicopter Spawning
        class HeliSpawn {
            enable = 1;                     // enable/disable the helispawn script. (1 on / 0 off).
            debugMarkers = 0;               // create a map marker to show where the helis have spawned (1 on / 0 off).
            heliQty[] = { 2, 3 };           // min / max amount of helis to spawn around the map
            heliFuel[] = { 0.1, 0.75 };     // min / max amount of fuel a heli can spawn with.
            heliFuelEmptyChance = 30;       // 30% of helicopter spawning with no fuel.
            
            // types of helicopters that can spawn.
            heliTypes[] = {
                "rhs_uh1h_hidf",
                "RHS_CH_47F_10",
                "RHS_UH60M2_d",
                "RHS_Mi8T_vvsc",
                "rhssaf_airforce_o_ht40",
                "CUP_B_MH6J_OBS_USA",
                "CUP_B_MH6M_USA",
                "rhs_uh1h_un",
                "rhs_uh1h_idap",
                "RHS_Mi8t_civilian",
                "C_Heli_Light_01_civil_F"
            };
            
            // just using an array of preset locations for now.
            heliSpawnLoc[] = {
                {12226.1,12603.7,0},
                {4117.85,10579.7,0},
                {4691.25,2492.7,0},
                {6370.2,7790.87,0},
                {2569.73,5115.78,0},
                {12248.9,9735.88,0},
                {12782.7,9766.24,0},
                {12243.1,12597.8,0},
                {11938.5,12788.4,0},
                {12897.4,12772.3,0},
                {8746.95,13310.3,0},
                {4515.08,10798.5,0},
                {4806.65,10124.3,0},
                {4824.92,10060.1,0},
                {4872.19,10015.3,0}
            };
        };

        class safeZones {
            // {{posX, posY, posZ}, radius},
            positions[] = {
                {{8309, 6685, 0}, 75}
            };
        };

        class timeCycle {
            // note: ravage respawns loot every 24 hrs ingame, keep this high
            // consider adding a persistent date/time system. can do easily with inidbi2.
            dayMultiplier = 20;
            nightMultiplier = 60;               // 60 = 1 ingame hour every minute. max 12 minute night cycle
        };

        // spawn base parts around the map
        class objectSpawner {
            radius[] = {350, 600};          // min/max - radius around city marker to spawn objects
            objectCount[] = {20, 80};       // min/max - number of base parts to spawn in the area
            objectList[] = {
                "Land_BagBunker_Large_F",
                "Land_BagBunker_Small_F",
                "Land_BagBunker_Tower_F",
                "Land_BagFence_Corner_F",
                "Land_BagFence_End_F",
                "Land_BagFence_Long_F",
                "Land_BagFence_Round_F",
                "Land_BagFence_Short_F",
                "Land_BarGate_F",
                "Land_Canal_WallSmall_10m_F",
                "Land_Canal_Wall_Stairs_F",
                "Land_CargoBox_V1_F",
                "Land_Cargo_Patrol_V1_F",
                "Land_Cargo_Tower_V1_F",
                "Land_CncBarrier_F",
                "Land_CncBarrierMedium_F",
                "Land_CncBarrierMedium4_F",
                "Land_CncShelter_F",
                "Land_CncWall1_F",
                "Land_CncWall4_F",
                "Land_Crash_barrier_F",
                "Land_HBarrierBig_F",
                "Land_HBarrierTower_F",
                "Land_HBarrierWall4_F",
                "Land_HBarrierWall6_F",
                "Land_HBarrier_1_F",
                "Land_HBarrier_3_F",
                "Land_HBarrier_5_F",
                "Land_LampHarbour_F",
                "Land_LampShabby_F",
                "Land_MetalBarrel_F",
                "Land_Mil_ConcreteWall_F",
                "Land_Mil_WallBig_4m_F",
                "Land_Obstacle_Ramp_F",
                "Land_Pipes_large_F",
                "Land_RampConcreteHigh_F",
                "Land_RampConcrete_F",
                "Land_Razorwire_F",
                "Land_Sacks_goods_F",
                "Land_Scaffolding_F",
                "Land_Shoot_House_Wall_F",
                "Land_Stone_8m_F",
                "Land_ToiletBox_F",
                "Land_BarrelWater_F",
                "BlockConcrete_F",
                "Land_GH_Stairs_F",
                "Land_Canal_Wall_10m_F",
                "Land_Shoot_House_Tunnel_Crouch_F",
                "Land_PierLadder_F",
                "Land_GH_Platform_F",
                "Land_Barricade_01_4m_F",
                "Land_Barricade_01_10m_F",
                "Land_SandbagBarricade_01_hole_F",
                "Land_Bunker_01_blocks_3_F",
                "Land_Bunker_01_blocks_1_F",
                "Land_SandbagBarricade_01_half_F",
                "Land_SandbagBarricade_01_F",
                "Land_Misc_Cargo2E",
                "TK_GUE_WarfareBContructionSite_Base_EP1",
                "Land_Cargo10_IDAP_F",
                "Misc_cargo_cont_small_EP1",
                "Land_cargo_house_slum_F",
                "FenceWood",
                "FenceWoodPalet",
                "Land_LampHalogen_F",
                "Land_Bricks_V1_F",
                "Land_Slum_House01_F",
                "Land_fort_bagfence_long",
                "Land_fort_bagfence_corner",
                "Land_fort_bagfence_round",
                "Land_fort_artillery_nest",
                "Land_fort_rampart",
                "Fort_Barricade_EP1",
                "Hhedgehog_concreteBig",
                "Hedgehog_EP1",
                "ShedSmall",
                "Land_Hlaska",
                "Land_Camping_Light_F",
                "Land_PortableLight_double_F",
                "Land_PortableLight_single_F",
                "Land_PortableLight_02_double_sand_F",
                "Land_TentLamp_01_standing_F",
                "Land_Leseni4x",
                "Land_ConcreteHedgehog_01_F",
                "Land_CzechHedgehog_01_new_F",
                "Land_DragonsTeeth_01_4x2_old_redwhite_F",
                "Land_Bunker_02_double_F",
                "Land_Bunker_02_left_F",
                "Land_Bunker_02_right_F",
                "Land_MedicalTent_01_wdl_generic_open_F",
                "Land_Highway_Pillar_01_garage_F",
                "Land_Highway_Pillar_01_F",
                "Land_Barrel_water",
                "Land_FoodContainer_01_F",
                "Land_FoodContainer_01_White_F",
                "Land_FoodSacks_01_large_white_idap_F"
            };
        };
    };

    /***    SETTINGS FOR PLAYERS        ***/
    class ClientSettings {
        
        class initPlayerLocal {
            // reduce weapon sway and stamina
            aimCoef = 0.34;         // 34% weapon sway
            recoilCoef = 0.50;      // 50% recoil
            enableStamina = 0;      // disable stamina and fatigue
            
            // Traits - see : https://community.bistudio.com/wiki/setUnitTrait for more information
            enableTraits[] = { "medic", "explosiveSpecialist", "UAVHacker" };   // set these traits to true
            traitValues[] = {
                {"camouflageCoef", 0.9},
                {"audibleCoef", 0.9}
            };
        };
        
    };
    
    /***    SETTINGS FOR AI MISSIONS       ***/
    #include "dmd_ai_missions.hpp"
};
/***    PRESET AI LOADOUTS (no shit, sherlock)      ***/
#include "dmd_ai_loadouts.hpp"          