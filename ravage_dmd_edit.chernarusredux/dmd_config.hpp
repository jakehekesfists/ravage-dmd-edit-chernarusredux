class dmd_cfg_settings {
    #include "DMD_LootSpawn\dmd_lootTables.hpp"

    class ServerSettings {
        
        terrainGrid = 25;       // grass level. set 50 for no grass.
        viewDist = 1600;        // max view distance
        objectDist = 1600;      // object draw distance
        shadowDist = 100;       // distance that shadows are rendered

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
        RespawnClasses[] = {
            "Survivor01", "Survivor02", "Survivor03", "Survivor04", "Survivor05",
            "Mechanic01", "Mechanic02", "Mechanic03", "Mechanic04", "Mechanic05",
            "Bandit01", "Bandit02", "Bandit03", "Bandit04", "Bandit05"
        };

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
                #ifdef DMD_USE_CUP
                "CUP_B_MH6J_OBS_USA",
                "CUP_B_MH6M_USA",
                #endif
                #ifdef DMD_USE_RHS
                "RHS_CH_47F_10",
                "RHS_Mi8t_civilian",
                "RHS_Mi8T_vvsc",
                "rhs_uh1h_hidf",
                "rhs_uh1h_idap",
                "rhs_uh1h_un",
                "RHS_UH60M2_d",
                "rhssaf_airforce_o_ht40",
                #endif
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

        // spawn base parts around the map
        class objectSpawner {
            radius[] = {350, 600};          // min/max - radius around city marker to spawn objects
            objectCount[] = {20, 80};       // min/max - number of base parts to spawn in the area
            objectList[] = {
                "Land_PortableLight_double_F",
                "Land_PortableLight_single_F",
                "Land_PortableLight_02_double_olive_F",
                "Land_PortableLight_02_quad_black_F",
                "Land_CzechHedgehog_01_new_F",
                "Land_DragonsTeeth_01_1x1_new_redwhite_F",
                "Land_BagFence_End_F",
                "Land_BagFence_Corner_F",

                "Land_Stone_pillar_F",
                "Land_BrickWall_04_l_pole_old_F",
                "Land_Shoot_House_Corner_Crouch_F",
                "Land_Shoot_House_Wall_Crouch_F",
                "Land_CncBarrier_F",
                "Land_CncBarrierMedium_F",
                "Land_CncBarrier_stripes_F",
                "Land_HBarrier_1_F",
                "Land_WallCity_01_pillar_grey_F",
                "Land_FoodSacks_01_cargo_brown_idap_F",
                "Land_FoodSacks_01_cargo_white_idap_F",
                "Land_FoodSacks_01_large_white_idap_F",
                "Land_FoodSacks_01_large_brown_F",
                "Land_Sacks_goods_F",
                "Land_BarrelWater_F",
                "Land_BarrelWater_grey_F",
                "Land_WaterBarrel_F",
                "Box_NATO_AmmoVeh_F",
                "C_IDAP_supplyCrate_F",
                "Box_NATO_WpsSpecial_F",
                "Box_EAF_Equip_F",
                "Land_Bricks_V1_F",
                "Land_StallWater_F",
                "Land_ConcreteHedgehog_01_F",
                "Land_BagFence_Long_F",
                "Land_BagFence_Round_F",
                "Land_BagFence_Short_F",

                "Land_Shoot_House_Corner_F",
                "Land_Shoot_House_Tunnel_F",
                "Land_Shoot_House_Wall_F",
                "Land_CncWall1_F",
                "Land_Concrete_SmallWall_4m_F",
                "Land_BarGate_F",
                "Land_HBarrier_3_F",
                "Land_Mil_WallBig_Corner_F",
                "Land_Wall_IndCnc_2deco_F",
                "Land_Wall_Tin_4",
                "Land_Ancient_Wall_4m_F",
                "Land_ConcreteWall_03_m_2m_F",
                "Land_WallCity_01_4m_plain_blue_F",
                "Land_Barricade_01_4m_F",
                "Land_Bunker_01_blocks_1_F",
                "Land_SandbagBarricade_01_half_F",
                "Land_SandbagBarricade_01_F",
                "Land_SandbagBarricade_01_hole_F",
                "Land_ConcretePipe_F",
                "Land_BagBunker_Small_F",
                "Land_DragonsTeeth_01_4x2_old_redwhite_F",
                "Land_CncShelter_F",
                "Land_GH_Stairs_F",

                "Land_WoodenWall_05_m_4m_v1_F",
                "Land_Stone_Gate_F",
                "Land_BrickWall_04_l_5m_old_F",
                "Land_BrickWall_01_l_5m_F",
                "Land_Shoot_House_Wall_Long_F",
                "Land_Shoot_House_Wall_Long_Stand_F",
                "Land_CncWall4_F",
                "Land_Concrete_SmallWall_8m_F",
                "Land_CamoConcreteWall_01_l_4m_v1_F",
                "Land_CamoConcreteWall_01_l_4m_d_v2_F",
                "Land_HBarrier_5_F",
                "Land_Mil_WallBig_4m_F",
                "Land_WallCity_01_gate_grey_F",
                "Land_WallCity_01_4m_grey_F",
                "Land_ConcreteWall_03_m_6m_F",
                "Land_SilageWall_01_l_5m_F",
                "Land_Scaffolding_F",
                "Land_Scaffolding_New_F",
                "Land_Cargo10_yellow_F",
                "Land_Barricade_01_10m_F",
                "Land_Bunker_01_blocks_3_F",
                "Land_DeerStand_02_F",
                "Land_Caravan_01_green_F",
                "Land_cargo_house_slum_F",
                "Land_Slum_House01_F",
                "CamoNet_wdl_F",

                "Land_Stone_8m_F",
                "Land_CncBarrierMedium4_F",
                "Land_HBarrier_Big_F",
                "Land_HBarrierWall_corridor_F",
                "Land_HBarrierWall_corner_F",
                "Land_WallCity_01_8m_grey_F",
                "Land_WallCity_01_8m_plain_blue_F",
                "Land_Cargo20_EMP_F",
                "Land_Cargo20_red_F",
                "B_Slingload_01_Cargo_F",
                "Land_MedicalTent_01_wdl_generic_inner_F",
                "Land_BagBunker_Tower_F",
                "Land_Cargo_House_V1_F",
                "Land_Cargo_Patrol_V1_F",
                "BlockConcrete_F",
                "Land_RampConcrete_F",
                "Land_RampConcreteHigh_F",

                "Land_HBarrierTower_F",
                "Land_Canal_Wall_10m_F",
                "Land_Canal_Wall_Stairs_F",
                "Land_Cargo40_blue_F",
                "Land_Cargo40_military_green_F",
                "Land_Bunker_01_small_F",
                "Land_Bunker_02_left_F",
                "Land_Bunker_02_double_F",
                "Land_BagBunker_Large_F",
                "CargoPlaftorm_01_jungle_F",

                "Land_Bunker_01_big_F",
                "Land_Bunker_01_tall_F",
                "Land_Cargo_Tower_V1_F"
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