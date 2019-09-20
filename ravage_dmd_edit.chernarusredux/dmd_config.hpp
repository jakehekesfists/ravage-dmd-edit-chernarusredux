// SETTINGS EASILY CHANGED BY PLAYER HOST THROUGH PARAMETERS ON STARTUP
// IF RUNNING IN DEDI, JUST CHANGE THE DEFAULT VALUE
class params {
	class aiskillsettings {
		title = "AI Mission Difficulty";
		values[] = {0,1,2,3};
		texts[] = {"Very Easy","Easy","Medium","Hard"};
		default = 2;
	};

    // speed that time passes during the day
	class daytimeMultiplier {
		title = "Daytime Multiplier";
		values[] = { 1, 2, 4, 8, 10, 20, 60 };
		texts[] = {"Realtime", "2x", "4x", "8x", "10x", "20x", "60x"};
		default = 4;
	};

    // speed that time passes at night
	class nighttimeMultiplier {
		title = "Nighttime Multiplier";
		values[] = { 1, 2, 4, 8, 10, 20, 60 };
		texts[] = {"Realtime", "2x", "4x", "8x", "10x", "20x", "60x"};
		default = 10;
	};

    // spooky night time fog FX - does not effect weather. 
    class spookyNightFog {
        title = "Spooky Night Fog";
        values[] = { 0, 1, 2 };
        texts[] = { "OFF", "ON (Every Night)", "ON (Some Nights)" };
        default = 2; 
    };

    // percent at which items are sold at. default = 3 is 75%   - sell $100 item for $75
    class salePriceCoef {
        title = "Sale Price Factor";
        values[] = { 0, 1, 2, 3, 4 };
        texts[] = { "10%", "25%", "50%", "75%", "100%" };
        default = 3;
    };

    class groundLootDropper {
        title = "GroundLoot Spawner Scarcity";
        values[] = { 0, 1, 2 };
        texts[] = {"Not Much Loot", "Default Loot", "Heaps of Loot"};
        default = 1; 
    };
};

// SETTINGS FOR RAVAGE MODULES - THIS ALLOWS ADDITION/REMOVAL OF CUP/RHS ITEMS BY EDITING dmd_defines.h
#include "dmd_ravageModuleSettings.hpp"

// SETTINGS DEFINED ELSEWHERE
class dmd_cfg_settings {
    #include "DMD_LootSpawn\dmd_lootTables.hpp"

    class ServerSettings {
        
        terrainGrid = 25;       // grass level. set 50 for no grass.
        viewDist = 1600;        // max view distance
        objectDist = 1600;      // object draw distance
        shadowDist = 100;       // distance that shadows are rendered

        hotwireFailureChance = 66;     // 66% chance of hotwire attempt failing
        
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

        // World Specific Settings (this should make it easier for people to port this mission to other maps - many scripts will switch values based on worldName 
        class worldSettings {

            class defaultMap {
                friendlyName = "";
                safeZones[] = {};           // format is {{position}, radius} --- eg. {{2000,2000,0},100}
                exclusionZones[] = {};      // {"Guglovo"} missions wont spawn within 1000m of guglovo, and base objects wont spawn there either.
                exclusionPos[] = {};        // {{position},radius}  eg. {{2000,2000,0},100}     // missions wont spawn radius meters from position. 

                exclusionDist = 1000;       // missions wont spawn x meters  from the exclusionZones locations.
                playerDist = 800;           // missions wont spawn within this distance of any players

                boatSpawner = 0;            // use the boatspawner script
            };

            // CHERNARUS REDUX 
            class chernarusredux : defaultMap {
                friendlyName = "Chernarus Redux";
                safeZones[] = {
                    {{8309, 6685, 0}, 75}
                };
                exclusionZones[] = {"Guglovo", "Chernogorsk", "Elektrozavodsk"};
            };

            // ISLA DUALA A3
            class isladuala3 : defaultMap {
                friendlyName = "Isla Duala";
                safeZones[] = {
                    {{3593,9267,0}, 75},
                    {{8795,1522,0}, 75}
                };
                boatSpawner = 1;
            };

            // VANILLA TERRAINS
            class Altis : defaultMap {
                friendlyName = "Altis";
                safeZones[] = {
                    {{9264, 13780,0},125},
                    {{14009, 17532,0},125},
                    {{19884, 11214,0},125}
                };

                exclusionZones[] = {"Kavala","Pyrgos"};
                boatSpawner = 1;
            };

            class Malden : defaultMap {
                friendlyName = "Malden";
                safeZones[] = {
                    {{7076, 6699,0},75}
                };
                boatSpawner = 1;
            };

            class Tanoa : defaultMap {
                friendlyName = "Tanoa";
            };

            class Stratis : defaultMap {
                friendlyName = "Stratis";
            };

            // CUP Terrains
            class sara : defaultMap {
                friendlyName = "Sahrani";
            };

            class saralite : defaultMap {
                friendlyName = "Southern Sahrani";
            };

            class sara_dbe1 : defaultMap {
                friendlyName = "United Sahrani";
            };

            class chernarus : defaultMap {
                friendlyName = "Chernarus";
            };

            class chernarus_summer : defaultMap {
                friendlyName = "Chernarus (Summer)";
            };

            class Chernarus_Winter : defaultMap {
                friendlyName = "Chernarus (Winter)";
            };

            class takistan : defaultMap {
                friendlyName = "Takistan"; 
            };

            class utes : defaultMap {
                friendlyName = "Utes";
            };
            
        };

        // smoke shell colours - these are used across a few scripts. just call/edit them from here.
        smokeShellColours[] = {"SmokeShell","SmokeShellYellow","SmokeShellRed","SmokeShellGreen","SmokeShellPurple","SmokeShellBlue","SmokeShellOrange"};

        
        
        cleanupDays = 21;               // if an item/vehicle is more than X days since last used it will be cleaned up.
        maxVehiclesTowed = 4;           // maximum vehicles to chain together. sethduda advanced towing slows down if vehicles too heavy anyways.
        
        // Respawn classes to use - these are defined in dmd_respawn_config.hpp
        RespawnClasses[] = {
            "Survivor01", "Survivor02", "Survivor03", "Survivor04", "Survivor05",
            "Mechanic01", "Mechanic02", "Mechanic03", "Mechanic04", "Mechanic05",
            "Bandit01", "Bandit02", "Bandit03", "Bandit04", "Bandit05"
        };

        // Zombie Loot
        zombieLoot[] = {"rvg_plasticBottleEmpty","rvg_canteenEmpty","rvg_canOpener","rvg_plasticBottle","rvg_plasticBottlePurified","rvg_spirit","rvg_franta","rvg_beans","rvg_bacon","rvg_milk","rvg_rice","rvg_rustyCan","rvg_hose","rvg_guttingKnife","rvg_tire","rvg_purificationTablets","rvg_flare","rvg_rustyCanEmpty","rvg_beansEmpty","rvg_baconEmpty","rvg_spiritEmpty","rvg_frantaEmpty","rvg_beansEmpty","rvg_baconEmpty","rvg_matches","rvg_antiRad","rvg_foldedTent","rvg_money","rvg_notepad"};
        zombieVests[] = {
            #ifdef DMD_USE_CUP
            "CUP_V_CDF_CrewBelt",
            #endif
            #ifdef DMD_USE_RHS
            "rhsgref_alice_webbing",
            #endif
            "rvg_rangemaster_1",
            "V_LegStrapBag_black_F"
        };

        // Vehicle Repair Stations
        class vehRepairs {
            costPerPart = 100;              // cost per hitpart to repair
            maxCost = 1000;                 // maximum cost to repair a vehicle
            timeToRepair = 2;               // time to repair each part
        };

        // Boat Spawning
        class boatSpawn {

            debugMarkers = 0;
            boatQty[] = { 15, 25 };

            classes[] = {
                #ifdef DMD_USE_CUP
                    "CUP_B_RHIB_USMC",
                    "CUP_B_Zodiac_USMC",
                    "CUP_C_Fishing_Boat_Chernarus",
                    "CUP_C_PBX_CIV",
                    "CUP_C_Zodiac_CIV",
                    "CUP_O_PBX_RU",
                #endif
                #ifdef DMD_USE_RHS
                    "rhsgref_civ_canoe",
                    "rhsgref_hidf_assault_boat",
                    "rhsgref_hidf_canoe",
                    "rhsgref_hidf_rhib",
                #endif
                "B_G_Boat_Transport_01_F",
                "B_Lifeboat",
                "C_Boat_Civil_01_F",
                "C_Boat_Civil_01_police_F",
                "C_Boat_Civil_01_rescue_F",
                "C_Boat_Transport_02_F",
                "C_Rubberboat",
                "C_Scooter_Transport_01_F"
            };
        };

        // Helicopter Spawning
        class HeliSpawn {
            enable = 1;                     // enable/disable the helispawn script. (1 on / 0 off).
            debugMarkers = 0;               // create a map marker to show where the helis have spawned (1 on / 0 off).
            heliQty[] = { 4, 8 };           // min / max amount of helis to spawn around the map
            heliFuel[] = { 0.1, 0.75 };     // min / max amount of fuel a heli can spawn with.
            heliFuelEmptyChance = 30;       // 30% of helicopter spawning with no fuel.
            
            // types of helicopters that can spawn.
            heliTypes[] = {
                #ifdef DMD_USE_CUP
                "CUP_B_MH6J_OBS_USA",
                "CUP_B_MH6J_USA",
                "CUP_B_MH6M_USA",
                "CUP_B_UH1Y_MEV_USMC",
                "CUP_B_UH1Y_UNA_USMC",
                "CUP_B_UH60M_Unarmed_FFV_US",
                "CUP_B_UH60M_Unarmed_US",
                "CUP_B_UH60M_US",
                "CUP_C_Mi17_Civilian_RU",
                "CUP_I_MH6J_RACS",
                "CUP_O_Mi8_medevac_CHDKZ",
                "CUP_O_UH1H_SLA",
                "CUP_O_UH1H_slick_SLA",
                #endif
                #ifdef DMD_USE_RHS
                "RHS_CH_47F_10",
                "rhs_ka60_grey",
                "RHS_Mi8amt_civilian",
                "RHS_Mi8mt_Cargo_vv",
                "RHS_Mi8t_civilian",
                "rhs_uh1h_hidf",
                "rhs_uh1h_hidf_unarmed",
                "rhs_uh1h_idap",
                "RHS_UH1Y_d",
                "RHS_UH1Y_UNARMED_d",
                "RHS_UH60M2",
                "rhsgref_ins_Mi8amt",
                "rhssaf_airforce_o_ht40",
                #endif
                "B_Heli_Light_01_F",
                "B_Heli_Transport_01_F",
                "B_Heli_Transport_03_F",
                "B_Heli_Transport_03_unarmed_F",
                "C_Heli_Light_01_civil_F",
                "C_IDAP_Heli_Transport_02_F",
                "I_Heli_light_03_unarmed_F",
                "I_Heli_Transport_02_F",
                "O_Heli_Light_02_unarmed_F",
                "O_Heli_Transport_04_bench_F",
                "O_Heli_Transport_04_F"
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