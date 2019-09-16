class AI_Missions {
    
    class lootSettings {

        crateTypes[] = {
            #ifdef DMD_USE_RHS
                "rhs_weapon_crate",
                "rhsusf_mags_crate",
            #endif
            
            #ifdef DMD_USE_CUP
                "CUP_RUVehicleBox",
                "CUP_TKVehicleBox_EP1",
                "CUP_USVehicleBox_EP1",
                "CUP_USVehicleBox",
            #endif
            
            "Box_NATO_AmmoVeh_F",
            "Box_IND_AmmoVeh_F",
            "C_supplyCrate_F",
            "B_Slingload_01_Cargo_F"
        };
        
        // loot that can spawn in AI mission crates
        rifles[] = {

            #ifdef DMD_USE_CUP
                "CUP_arifle_AK101",
                "CUP_arifle_AK102",
                "CUP_arifle_AK107",
                "CUP_arifle_AK108",
                "CUP_arifle_AK109_railed",
                "CUP_arifle_AK47_Early",
                "CUP_arifle_AKS_Gold",
                "CUP_arifle_Colt727_M203",
                "CUP_arifle_CZ805_A1",
                "CUP_arifle_CZ805_B",
                "CUP_arifle_FNFAL",
                "CUP_arifle_FNFAL5061",
                "CUP_arifle_HK417_12_Wood",
                "CUP_arifle_HK417_20",
                "CUP_arifle_L85A2_G",
                "CUP_arifle_L85A2_GL",
                "CUP_arifle_L86A2",
                "CUP_arifle_M16A1",
                "CUP_arifle_M16A2",
                "CUP_arifle_M4A1_BUIS_camo_GL",
                "CUP_arifle_MG36_hex",
                "CUP_arifle_Mk16_CQC_FG",
                "CUP_arifle_Mk16_STD_EGLM_woodland",
                "CUP_arifle_Mk16_STD_SFG",
                "CUP_arifle_Mk20",
                "CUP_arifle_SBR_black",
                "CUP_arifle_XM8_Carbine",
                "CUP_arifle_XM8_Compact",
                "CUP_arifle_xm8_SAW",
                "CUP_lmg_L110A1",
                "CUP_lmg_L7A2",
                "CUP_lmg_Mk48_wdl",
                "CUP_sgun_AA12",
                "CUP_sgun_M1014",
                "CUP_sgun_Saiga12K",
                "CUP_smg_bizon",
                "CUP_smg_EVO",
                "CUP_smg_saiga9",
                "CUP_srifle_AWM_wdl",
                "CUP_srifle_CZ550",
                "CUP_srifle_G22_wdl",
                "CUP_srifle_ksvk",
                "CUP_srifle_L129A1",
                "CUP_srifle_LeeEnfield_rail",
                "CUP_srifle_M110",
                "CUP_srifle_M14_DMR",
            #endif

            #ifdef DMD_USE_RHS
                // RHS SHOTGUNS BROKEN ON RELOAD    - re-add if they fix it
                //  "rhs_weap_Izh18",
                //  "rhs_weap_M590_8RD",
                //  "rhs_weap_M590_5RD",
                "rhs_weap_ak103_2_npz",
                "rhs_weap_ak104_npz",
                "rhs_weap_ak105_zenitco01_b33",
                "rhs_weap_ak105",
                "rhs_weap_ak74_2",
                "rhs_weap_ak74_3",
                "rhs_weap_ak74",
                "rhs_weap_ak74m_desert_npz",
                "rhs_weap_ak74m",
                "rhs_weap_ak74mr",
                "rhs_weap_ak74n_npz",
                "rhs_weap_akm_gp25",
                "rhs_weap_akm",
                "rhs_weap_akmn_gp25",
                "rhs_weap_akms",
                "rhs_weap_aks74_2",
                "rhs_weap_aks74u",
                "rhs_weap_asval_grip_npz",
                "rhs_weap_asval",
                "rhs_weap_g36c",
                "rhs_weap_g36kv_ag36",
                "rhs_weap_g36kv",
                "rhs_weap_hk416d10_LMT_wd",
                "rhs_weap_hk416d10",
                "rhs_weap_hk416d145_d_2",
                "rhs_weap_hk416d145_m320",
                "rhs_weap_kar98k",
                "rhs_weap_l1a1_wood",
                "rhs_weap_M107_w",
                "rhs_weap_m14ebrri",
                "rhs_weap_m16a4_carryhandle",
                "rhs_weap_m16a4_imod",
                "rhs_weap_m1garand_sa43",
                "rhs_weap_m21a",
                "rhs_weap_m21s_pr",
                "rhs_weap_m240B",
                "rhs_weap_m249_pip_S_para",
                "rhs_weap_m249",
                "rhs_weap_m24sws",
                "rhs_weap_m27iar",
                "rhs_weap_m38_rail",
                "rhs_weap_m3a1_specops",
                "rhs_weap_m3a1",
                "rhs_weap_m4_carryhandle_mstock",
                "rhs_weap_m40a5",
                "rhs_weap_m4a1_blockII",
                "rhs_weap_m84",
                "rhs_weap_mg42",
                "rhs_weap_minimi_para_railed",
                "rhs_weap_MP44",
                "rhs_weap_pkm",
                "rhs_weap_pkp",
                "rhs_weap_SCARH_FDE_LB",
                "rhs_weap_scorpion",
                "rhs_weap_sr25_ec",
                "rhs_weap_svdp_wd_npz",
                "rhs_weap_svdp",
                "rhs_weap_svds",
                "rhs_weap_t5000",
                "rhs_weap_vhsd2_ct15x",
                "rhs_weap_vhsk2",
                "rhs_weap_vss_grip_npz",
                "rhs_weap_XM2010",
                "rhsusf_weap_MP7A2_desert",
            #endif

            "Rusty_DMR_05_base_F",
            "Rusty_LMG_Zafir_F",
            "Rusty_MMG_01_tan_F",
            "Rusty_MMG_02_black_F",
            "Rusty_srifle_DMR_02_F",
            "Rusty_srifle_DMR_03_F",
            "Rusty_srifle_DMR_04_F",

            "arifle_Katiba_C_F",
            "arifle_Katiba_F",
            "arifle_Mk20C_plain_F",
            "arifle_MX_Black_F",
            "arifle_MX_SW_F",
            "arifle_TRG21_F",
            "hgun_PDW2000_F",
            "LMG_Mk200_F",
            "SMG_02_F",
            "SMG_03_camo",
            "SMG_03_TR_black",
            "SMG_03C_hex",
            "srifle_DMR_01_F",
            "srifle_EBR_F",
            "srifle_LRR_F"
        };
        
        handguns[] = {

            #ifdef DMD_USE_CUP
                "CUP_hgun_Compact",
                "CUP_hgun_Duty",
                "CUP_hgun_Glock17",
                "CUP_hgun_MicroUzi",
                "CUP_hgun_PB6P9",
                "CUP_hgun_Phantom",
                "CUP_hgun_PMM",
                "CUP_hgun_TaurusTracker455_gold",
                "CUP_hgun_TaurusTracker455",
            #endif

            #ifdef DMD_USE_RHS
                "rhs_weap_makarov_pm",
                "rhs_weap_pp2000_folded",
                "rhs_weap_pya",
                "rhs_weap_savz61_folded",
                "rhs_weap_tt33",
                "rhs_weap_type94_new",
                "rhsusf_weap_m1911a1",
                "rhsusf_weap_m9",
            #endif

            "hgun_Rook40_F"
        };
        
        items[] = {

            #ifdef DMD_USE_CUP
                "CUP_1Rnd_HE_M203",
                "CUP_H_C_Beanie_03",
                "CUP_H_Navy_CrewHelmet_Green",
                "CUP_H_RACS_Beret_Blue",
                "CUP_H_RACS_Helmet_Headset_mech",
                "CUP_H_TKI_Lungee_Open_02",
                "CUP_H_USArmy_HelmetMICH_ESS",
                "CUP_H_USMC_Helmet_Pilot",
                "CUP_H_USMC_LWH_ESS_HS_DES",
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_WDL",
                "CUP_HandGrenade_RGD5",
                "CUP_HandGrenade_RGO",
                "CUP_NVG_GPNVG_black",
                "CUP_NVG_PVS7",
                "CUP_V_B_Eagle_SPC_Rifleman",
                "CUP_V_B_LHDVest_Red",
                "CUP_V_B_MTV_Patrol",
                "CUP_V_B_RRV_Scout2",
                "CUP_V_BAF_Osprey_Mk2_DPM_Officer",
                "CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader",
                "CUP_V_CDF_6B3_1_Green",
                "CUP_V_I_RACS_Carrier_Vest_wdl_3",
                "CUP_V_O_Ins_Carrier_Rig",
                "CUP_V_OI_TKI_Jacket2_04",
                "CUP_V_OI_TKI_Jacket3_05",
                "CUP_V_OI_TKI_Jacket4_02",
                "CUP_V_PMC_CIRAS_Coyote_Grenadier",
                "CUP_V_PMC_IOTV_Black_Gren",
            #endif

            #ifdef DMD_USE_RHS
                "rhs_1PN138",
                "rhs_6b23_digi_6sh92_radio",
                "rhs_6b23_digi_crew",
                "rhs_6b26_bala",
                "rhs_6b27m_bala",
                "rhs_6b28_flora_bala",
                "rhs_altyn_novisor_ess_bala",
                "rhs_grenade_anm8_mag",
                "rhs_grenade_anm8_mag",
                "rhs_grenade_mki_mag",
                "rhs_grenade_mkii_mag",
                "rhs_grenade_sthgr43_heerfrag_mag",
                "rhs_grenade_sthgr43_mag",
                "rhs_grenade_sthgr43_SSfrag_mag",
                "rhs_mag_an_m8hc",
                "rhs_mag_an_m8hc",
                "rhs_mag_f1",
                "rhs_mag_m18_green",
                "rhs_mag_m18_green",
                "rhs_mag_m18_purple",
                "rhs_mag_m18_purple",
                "rhs_mag_m18_red",
                "rhs_mag_m18_red",
                "rhs_mag_m18_yellow",
                "rhs_mag_m18_yellow",
                "rhs_mag_M441_HE",
                "rhs_mag_m67",
                "rhs_mag_rgd5",
                "rhs_mag_rgn",
                "rhs_mag_rgo",
                "rhs_mag_zarya2",
                "rhs_VOG25",
                "rhsgref_6b23_ttsko_mountain_nco",
                "rhssaf_helmet_m97_black_nocamo",
                "rhssaf_mag_br_m75",
                "rhssaf_mag_br_m84",
                "rhssaf_mag_brd_m83_blue",
                "rhssaf_mag_brd_m83_blue",
                "rhssaf_mag_brd_m83_green",
                "rhssaf_mag_brd_m83_green",
                "rhssaf_mag_brd_m83_orange",
                "rhssaf_mag_brd_m83_orange",
                "rhssaf_mag_brd_m83_red",
                "rhssaf_mag_brd_m83_red",
                "rhssaf_mag_brd_m83_white",
                "rhssaf_mag_brd_m83_white",
                "rhssaf_mag_brd_m83_yellow",
                "rhssaf_mag_brd_m83_yellow",
                "rhssaf_vest_md98_woodland",
                "rhsusf_ach_bare_wood_headset",
                "rhsusf_ach_bare_wood",
                "rhsusf_ANPVS_15",
                "rhsusf_bino_lerca_1200_black",
                "rhsusf_bino_lrf_Vector21",
                "rhsusf_bino_m24_ARD",
                "rhsusf_mich_helmet_marpatd_norotos_arc",
                "rhsusf_opscore_mc_cover_pelt_nsw",
                "rhsusf_opscore_mc",
                "rhsusf_opscore_ut_pelt",
                "rhsusf_spc_corpsman",
            #endif

            "rvg_antiRad",
            "rvg_bacon",
            "rvg_beans",
            "rvg_canOpener",
            "rvg_canteenEmpty",
            "rvg_flare",
            "rvg_franta",
            "rvg_guttingKnife",
            "rvg_hose",
            "rvg_matches",
            "rvg_milk",
            "rvg_money",
            "rvg_notepad",
            "rvg_plasticBottlePurified",
            "rvg_purificationTablets",
            "rvg_rice",
            "rvg_rustyCan",
            "rvg_tire",

            "H_Cap_headphones",
            "H_PilotHelmetFighter_I",
            "H_PilotHelmetHeli_O",
            "H_Shemag_olive_hs",
            "HandGrenade",
            "MiniGrenade",
            "NVGoggles_INDEP",
            "Binocular",
            "Chemlight_blue",
            "Chemlight_blue",
            "Chemlight_green",
            "Chemlight_green",
            "Chemlight_red",
            "Chemlight_red",
            "Chemlight_yellow",
            "Chemlight_yellow",
            "SmokeShell",
            "SmokeShell",
            "SmokeShellBlue",
            "SmokeShellBlue",
            "SmokeShellGreen",
            "SmokeShellGreen",
            "SmokeShellOrange",
            "SmokeShellOrange",
            "SmokeShellPurple",
            "SmokeShellPurple",
            "SmokeShellRed",
            "SmokeShellRed",
            "SmokeShellYellow",
            "SmokeShellYellow",
            "V_Chestrig_khk",
            "V_PlateCarrierGL_blk",
            "V_PlateCarrierIA2_dgtl",
            "V_PlateCarrierSpec_blk",
            "V_RebreatherIR",
            "V_Safety_orange_F"
        };
    };
    
    class AISettings {
        // AI SKILLS CAN BE SET IN MISSION PARAMS ON STARTUP BY HOST. OR BY EDITING THE DEFAULT VALUE IN dmd_config.hpp
        class aiSkillVeryEasy {
            accuracy = 0.3;
            aimingShake = 0.3;
            aimingSpeed = 0.25;
            endurance = 0.5;
            spotDistance = 0.3;
            spotTime = 0.3;
            courage = 1;
            reloadSpeed = 0.2;
            commanding = 1;
            general = 0.25;
        };

        class aiSkillEasy {
            accuracy = 0.4;
            aimingShake = 0.5;
            aimingSpeed = 0.3;
            endurance = 0.7;
            spotDistance = 0.4;
            spotTime = 0.5;
            courage = 1;
            reloadSpeed = 0.4;
            commanding = 1;
            general = 0.4;
        };

        class aiSkillMedium {
            accuracy = 0.6;
            aimingShake = 0.5;
            aimingSpeed = 0.45;
            endurance = 0.8;
            spotDistance = 0.6;
            spotTime = 0.65;
            courage = 1;
            reloadSpeed = 0.5;
            commanding = 1;
            general = 0.6;
        };

        class aiSkillHard {
            accuracy = 0.8;
            aimingShake = 0.7;
            aimingSpeed = 0.6;
            endurance = 0.9;
            spotDistance = 0.7;
            spotTime = 0.8;
            courage = 1;
            reloadSpeed = 0.8;
            commanding = 1;
            general = 0.75;
        };

        // Types of Emplaced Weapon AI can use
        emplacedTypes[] = {

            #ifdef DMD_USE_CUP
                "CUP_B_L111A1_BAF_DDPM",
                "CUP_B_M2StaticMG_GER_Fleck",
                "CUP_B_M2StaticMG_MiniTripod_GER_Fleck",
                "CUP_O_KORD_high_RU",
            #endif

            #ifdef DMD_USE_RHS
                "rhsgref_ins_DSHKM",
                "rhsgref_ins_NSV_TriPod",
            #endif

            "O_HMG_01_A_F",
            "O_HMG_01_high_F"
        };

        // AI soldiers may also be carrying the following kinds of loot items.
        items[] = {
            "rvg_canteenEmpty","rvg_canOpener","rvg_plasticBottlePurified","rvg_franta","rvg_beans","rvg_bacon","rvg_milk","rvg_rice","rvg_rustyCan","rvg_hose","rvg_guttingKnife","rvg_tire","rvg_purificationTablets","rvg_flare","rvg_matches","rvg_antiRad","rvg_money","rvg_notepad"
        };

        // define the different types of AI - configure the loadouts in dmd_ai_loadouts.hpp
        class russianForces {
            displayName = "STR_AI_NAME_RUSSIANFORCES";
            defaultColour = "ColorOPFOR";
            loadouts[] = {
                #ifdef DMD_USE_RHS
                    "ru_leader_rhs",
                    "ru_rifleman_rhs",
                    "ru_lightinf_rhs",
                    "ru_support_rhs",
                    "ru_sniper_rhs",
                #endif
                
                #ifdef DMD_USE_CUP
                    "ru_leader_cup",
                    "ru_rifleman_cup",
                    "ru_lightinf_cup",
                    "ru_support_cup",
                    "ru_sniper_cup",
                #endif
                
                "ru_leader",
                "ru_rifleman",
                "ru_lightinf",
                "ru_support",
                "ru_sniper"
            };
        };

        class baForces {
            displayName = "STR_AI_NAME_BAFORCES";
            defaultColour = "ColorGUER";
            loadouts[] = {
                #ifdef DMD_USE_RHS
                    "ba_leader_rhs",
                    "ba_rifleman_rhs",
                    "ba_lightinf_rhs",
                    "ba_support_rhs",
                    "ba_sniper_rhs",
                #endif
                
                #ifdef DMD_USE_CUP
                    "ba_leader_cup",
                    "ba_rifleman_cup",
                    "ba_lightinf_cup",
                    "ba_support_cup",
                    "ba_sniper_cup",
                #endif
                
                "ba_leader",
                "ba_rifleman",
                "ba_lightinf",
                "ba_support",
                "ba_sniper"
            };
        };

        class usForces {
            displayName = "STR_AI_NAME_USFORCES";
            defaultColour = "colorBLUFOR";
            loadouts[] = {
                #ifdef DMD_USE_RHS
                    "us_leader_rhs",
                    "us_rifleman_rhs",
                    "us_lightinf_rhs",
                    "us_support_rhs",
                    "us_sniper_rhs",
                #endif
                
                #ifdef DMD_USE_CUP
                    "us_leader_cup",
                    "us_lightinf_cup",
                    "us_rifleman_cup",
                    "us_support_cup",
                    "us_sniper_cup",
                #endif
                
                "us_leader",
                "us_rifleman",
                "us_lightinf",
                "us_support",
                "us_sniper"
            };
        };

        class guerillas {
            displayName = "STR_AI_NAME_GUERILLAS";
            defaultColour = "ColorOPFOR";
            loadouts[] = {
                #ifdef DMD_USE_RHS
                    "gu_leader_rhs",
                    "gu_lightinf_rhs",
                    "gu_rifleman_rhs",
                    "gu_support_rhs",
                    "gu_sniper_rhs",
                #endif
                
                #ifdef DMD_USE_CUP
                    "gu_leader_cup",
                    "gu_lightinf_cup",
                    "gu_rifleman_cup",
                    "gu_support_cup",
                    "gu_sniper_cup",
                #endif
                
                "gu_leader",
                "gu_lightinf",
                "gu_rifleman",
                "gu_support",
                "gu_sniper"
            };
        };
    };
    
    class ambientFlyby {
        enable = 1;                     // set to 0 to disable / 1 to enable
        randDelay[] = { 1200, 3600 };   // min/max (delay between invasion missions)
        //  randDelay[] = { 20, 30 };
        minPlayers = 1;                 // minimum players online before mission will start - recommend 1 for single player fun
        vehTypes[] = {

            #ifdef DMD_USE_RHS
                "RHS_A10",
                "RHS_C130J",
                "RHS_Su25SM_vvs",
                "RHS_T50_vvs_051",
                "rhsusf_f22",
            #endif

            "B_Plane_CAS_01_F",
            "B_Plane_Fighter_01_F",
            "B_Plane_Fighter_01_Stealth_F",
            "B_T_VTOL_01_armed_F",
            "I_C_Plane_Civil_01_F",
            "I_Plane_Fighter_04_F",
            "O_Plane_CAS_02_F",
            "O_Plane_Fighter_02_Stealth_F"
        };
    };

    // invasion mission settings
    class Invasion {
        enable = 1;                     // set to 0 to disable / 1 to enable
        
        txtName = "STR_AI_INVASION_NAME";
        txtStart = "STR_AI_INVASION_START";
        txtEnd = "STR_AI_INVASION_END";
        
        aiTypes[] = { "russianForces", "usForces", "guerillas" };
        randDelay[] = {1800, 3600};     // min/max (delay between invasion missions)
        //  randDelay[] = {20, 30};     // debug settings
        minPlayers = 1;                 // minimum players online before mission will start - recommend 1 for single player fun
        cityRadius[] = { 300, 600};     // min/max (city radius size, affects spawning of ai groups and their patrol radius)
        
        //  the mission system will evenly distribute units across the total number of groups.
        //  eg. 30 units = 3 groups of 10 or 6 groups of 5.
        units[] = { 16, 30 };           // min/max total number of units
        groups[] = { 3, 6 };            // min/max total number of groups
        
        killPercentage = 0.9;           // 0.9 = 90% killed to complete mission
        // LOOT SETTINGS                --- objects defined above in AI_Missions >> lootSettings
        lootRifles[] = {2, 6};          // min/max (rifles to spawn in loot crate)
        lootHGuns[] = {2, 4};           // min/max (handguns to spawn in loot crate)
        lootItems[] = {15, 30};         // min/max (items to spawn in loot crate)
    };

    // red zone settings
    class RedZone {
        enable = 1;                     // set to 0 to disable / 1 to enable
        minPlayers = 1;                 // minimum players online before mission will start - recommend 1 for single player fun
        shellArray[] = { "M_Mo_155mm_AT_LG","M_Mo_82mm_AT_LG","M_Mo_82mm_AT_LG","M_Mo_120mm_AT","M_Titan_AP" };     // types of shells used
        randDelay[] = {2700, 5400};     // min/max (delay between bombing of cities)
        //  randDelay[] = { 60, 90};        // my debug setting.
        bombRadius[] = {250, 500};      // min/max radius of area to shell
        bombQty[] = {25, 70};           // min/max number of bombs to drop
    };
    
    // main missions (standard epoch/exile style. random pos, some objects. 3-4 groups. box at end.

    class mainMission {
        enable = 1;
        randDelay[] = { 900, 1800};         // min/max delay between missions. in seconds. 1800 = 30 minutes
        //  randDelay[] = { 20, 60};        // my debug setting.
        minPlayers = 1;
        
        /*
            missions are defined in subclasses below.
            mission text is defined in the stringtable.xml file

            UPDATED VERSION 
                New layouts to be created without using mod items for maximum compatability across different missions. 
                
                - REDOING MISSION COMPOSITIONS USING  [getPos player, 100] call BIS_fnc_objectsGrabber;
            
            OUTPUTS OBJECT ARRAY TO CLIPBOARD. THEN CHANGE ALL SQUARE BRACKETS [] TO CURLY BRACES {} 
            eg. ["Land_SatelliteAntenna_01_F",[4.45361,-2.49585,-0.00387907],289.012,1,0,[],"","",true,false],
                becomes
                {"Land_SatelliteAntenna_01_F",{4.45361,-2.49585,-0.00387907},289.012,1,0,{},"","",true,false},            
        */
        
        missionList[] = {
            "armedBandits",
            "bellend",
            "usBarracks",
            "vtol",
            "xerxes",
            "drugLab",
            "radarDome",
            "solarTransformer",
            "thunderdome",
            "supermarket",
            "smallFirebase",
            "plantation",
            "outpost",
            "fobDelta",
            "downedBird",
            "ammoBunker",
            "radioTower",
            "lucky7",
            "medicalCamp"
        };

        class defaultMission {
            // Default Mission Settings - Will be used if not overwritten below.
            missionName = "STR_AI_MAINMISSION_NAME";
            aiTypes[] = { "russianForces", "usForces", "guerillas", "baForces" };

            txtName = "STR_AI_DEFAULT_NAME";
            txtStart = "STR_AI_DEFAULT_START";
            txtEnd = "STR_AI_DEFAULT_END";
            //  the mission system will evenly distribute units across the total number of groups.
            //  eg. 30 units = 3 groups of 10 or 6 groups of 5.
            unts[] = {12, 20};
            grps[] = {2, 4};
            radius[] = { 200, 300 };
            killPercentage = 0.9;
            objComposition[] = {};                 // array of objects
            hmgs = 0;                              // does the mision use hmgs
            mountedGuns[] = {};                    // array of hmg positions.

            rifleMinMax[] = {10, 15};            // min/max number of rifles per loot box
            handgunMinMax[] = {4, 6};           // min/max number of handguns per loot box
            itemMinMax[] = {10, 20};            // min/max number of items per loot box
            
            hedgehogs = 0;                      // spawn a ring of hedgehogs around the mission 0 = off / 1 = on
            
            
            // VEHICLE REWARDS
            // I have these turned off by default, and enabled below on a per-mission basis.
            vehicle = 0;                        //  mission rewards you with a vehicle 0 = off / 1 = on
            //  types of vehicle the mission can reward you with
            vehicleTypes[] = {
                #ifdef DMD_USE_CUP
                    "CUP_B_BAF_Coyote_L2A1_W",
                    "CUP_B_Jackal2_L2A1_GB_W",
                    "CUP_B_Kamaz_CDF",
                    "CUP_B_LR_Ambulance_GB_W",
                    "CUP_B_LR_MG_CZ_W",
                    "CUP_B_LR_Transport_CZ_W",
                    "CUP_B_M1151_Deploy_NATO_T",
                    "CUP_B_M1151_Deploy_USMC",
                    "CUP_B_M1152_NATO_T",
                    "CUP_B_Mastiff_HMG_GB_W",
                    "CUP_B_RG31E_M2_OD_USMC",
                    "CUP_B_RG31E_M2_USA",
                    "CUP_B_Ridgback_LMG_GB_W",
                    "CUP_B_T810_Refuel_CZ_WDL",
                    "CUP_B_UAZ_MG_ACR",
                    "CUP_B_Ural_Empty_CDF",
                    "CUP_B_Ural_Open_CDF",
                    "CUP_B_Ural_Repair_CDF",
                    "CUP_B_Wolfhound_LMG_GB_W",
                    "CUP_C_Datsun_4seat",
                    "CUP_C_Datsun_Covered",
                    "CUP_C_Datsun_Tubeframe",
                    "CUP_C_Datsun",
                    "CUP_C_Golf4_black_Civ",
                    "CUP_C_Golf4_camodark_Civ",
                    "CUP_C_Golf4_kitty_Civ",
                    "CUP_C_Golf4_red_Civ",
                    "CUP_C_Golf4_reptile_Civ",
                    "CUP_C_Lada_White_CIV",
                    "CUP_C_LR_Transport_CTK",
                    "CUP_C_Octavia_CIV",
                    "CUP_C_Skoda_Blue_CIV",
                    "CUP_C_Skoda_Green_CIV",
                    "CUP_C_Skoda_White_CIV",
                    "CUP_C_SUV_CIV",
                    "CUP_C_Volha_Gray_TKCIV",
                    "CUP_C_Volha_Limo_TKCIV",
                    "CUP_I_4WD_LMG_ION",
                    "CUP_I_4WD_unarmed_ION",
                    "CUP_I_Datsun_PK_Random",
                    "CUP_I_FENNEK_ION",
                    "CUP_I_LR_SF_HMG_AAF",
                    "CUP_I_LR_Transport_RACS",
                    "CUP_I_LSV_02_Minigun_ION",
                    "CUP_I_LSV_02_unarmed_ION",
                    "CUP_I_MATV_ION",
                    "CUP_I_RG31_M2_GC_ION",
                    "CUP_I_RG31_M2_ION",
                    "CUP_I_RG31E_M2_ION",
                    "CUP_I_SUV_Armored_ION",
                    "CUP_I_SUV_ION",
                    "CUP_I_Ural_Repair_UN",
                    "CUP_I_Van_ammo_ION",
                    "CUP_I_Van_Cargo_ION",
                    "CUP_I_Van_Transport_ION",
                    "CUP_LADA_LM_CIV",
                    "CUP_O_Datsun_PK_Random",
                    "CUP_O_Datsun_PK",
                    "CUP_O_Kamaz_Refuel_RU",
                    "CUP_O_UAZ_AMB_RU",
                    "CUP_O_UAZ_MG_CSAT",
                    "CUP_O_Ural_RU",
                    "CUP_O_V3S_Refuel_TKM",
                    "CUP_V3S_Open_NAPA",
                #endif

                #ifdef DMD_USE_RHS
                    "rhs_tigr_3camo_msv",
                    "rhs_tigr_m_3camo_vdv",
                    "rhs_tigr_m_msv",
                    "rhs_tigr_msv",
                    "rhs_tigr_sts_vdv",
                    "rhs_uaz_open_MSV_01",
                    "rhs_uaz_vv",
                    "rhsgref_cdf_b_reg_uaz_open",
                    "rhsgref_cdf_reg_uaz_dshkm",
                    "rhsgref_cdf_reg_uaz_open",
                    "rhsgref_cdf_reg_uaz_spg9",
                    "rhsgref_hidf_m1025_m2",
                    "rhsgref_hidf_M998_2dr_halftop",
                    "rhsgref_hidf_M998_4dr_fulltop",
                    "rhsgref_ins_uaz_dshkm",
                    "rhsgref_un_uaz",
                    "rhssaf_un_uaz_open",
                    "rhsusf_m998_d_4dr",
                    "rhsusf_m998_w_2dr_halftop",
                    "rhsusf_m998_w_4dr_halftop",
                    "rhsusf_m998_w_4dr",
                    "rhsusf_mrzr4_d",
                #endif
                
                "B_G_Offroad_01_armed_F",
                "B_G_Offroad_01_AT_F",
                "B_G_Offroad_01_F",
                "B_G_Van_01_fuel_F",
                "C_Offroad_01_F",
                "C_SUV_01_F",
                "C_Truck_02_fuel_F",
                "C_Truck_02_transport_F",
                "C_Van_01_box_F",
                "C_Van_01_fuel_F",
                "C_Van_01_transport_F",
                "I_G_Offroad_01_armed_F",
                "I_G_Van_01_fuel_F",
                "I_G_Van_01_transport_F",
                "O_G_Offroad_01_armed_F",
                "O_G_Offroad_01_F",
                "O_G_Offroad_01_repair_F",
                "O_G_Van_01_fuel_F",
                "O_G_Van_01_transport_F",
                "O_Truck_02_transport_F"
            };
            paradropVehicle = 0;                // drop the vehicle in, or spawn it on the ground   0= ground / 1= paradrop
        };
        
        class medicalCamp : defaultMission {
            txtName = "STR_AI_MEDICALCAMP_NAME";
            txtStart = "STR_AI_MEDICALCAMP_START";
            txtEnd = "STR_AI_MEDICALCAMP_END";
            
			objComposition[] = {
                    {"Land_PortableLight_02_quad_yellow_F",{-2.3667,-4.95337,0},140.196,1,0,{},"","",true,false}, 
                    {"Land_FoodSacks_01_cargo_white_idap_F",{2.26758,-5.73853,-9.53674e-007},0.000225507,1,0,{},"","",true,false}, 
                    {"Land_FoodSacks_01_cargo_white_idap_F",{0.172852,-6.32251,-4.76837e-007},360,1,0,{},"","",true,false}, 
                    {"Land_FoodSacks_01_cargo_white_idap_F",{2.50195,-7.9917,4.76837e-007},117.357,1,0,{},"","",true,false}, 
                    {"Land_FoodSacks_01_cargo_white_idap_F",{-0.22168,-8.42432,4.76837e-007},226.819,1,0,{},"","",true,false}, 
                    {"Land_PortableCabinet_01_4drawers_sand_F",{9.72607,-5.91455,6.67572e-006},135.164,1,0,{},"","",true,false}, 
                    {"Land_Stretcher_01_olive_F",{11.9224,-1.50122,4.76837e-007},6.50568e-005,1,0,{},"","",true,false}, 
                    {"Land_Cargo20_IDAP_F",{5.25684,-10.9099,-4.76837e-007},360,1,0,{},"","",true,false}, 
                    {"Land_MedicalTent_01_wdl_closed_F",{12.105,-3.43799,0},270,1,0,{},"","",true,false}, 
                    {"Land_Stretcher_01_olive_F",{13.1875,-1.49194,4.76837e-007},3.37148e-005,1,0,{},"","",true,false}, 
                    {"Land_PortableDesk_01_black_F",{11.96,-5.99683,-6.86646e-005},359.998,1,0,{},"","",true,false}, 
                    {"Land_TentSolar_01_olive_F",{9.44727,8.8103,0},45.5371,1,0,{},"","",true,false}, 
                    {"Land_TentSolar_01_olive_F",{11.6675,6.49268,0},45.5371,1,0,{},"","",true,false}, 
                    {"Land_Stretcher_01_olive_F",{14.6343,-1.4502,4.76837e-007},6.50568e-005,1,0,{},"","",true,false}, 
                    {"Land_Cargo40_IDAP_F",{5.99316,-14.063,4.76837e-007},179.071,1,0,{},"","",true,false}, 
                    {"Land_TentLamp_01_standing_F",{15.6978,-6.51611,0},0,1,0,{},"","",true,false}, 
                    {"Land_ConnectorTent_01_wdl_open_F",{18.9541,-3.43799,0},90,1,0,{},"","",true,false}, 
                    {"Land_DeconTent_01_wdl_F",{25.2349,-3.43799,0},270,1,0,{},"","",true,false}
			};
			
            hmgs = 1;
			mountedGuns[] = { {0.265137,-3.54272,0} };
		};
        
        class lucky7 : defaultMission {
            
            txtName = "STR_AI_LUCKY7_NAME";
            txtStart = "STR_AI_LUCKY7_START";
            txtEnd = "STR_AI_LUCKY7_END";

            unts[] = { 20, 30 };
            grps[] = { 3, 4};
            rifleMinMax[] = {20, 30};
            
            hedgehogs = 1;
            
            vehicle = 1;
            paradropVehicle = 1;
            
			objComposition[] = {
                {"Land_Barricade_01_10m_F",{-8.81885,9.93042,0},158.569,1,0,{},"","",true,false}, 
                {"Land_Cargo_Patrol_V1_F",{4.5835,13.2761,0},180,1,0,{},"","",true,false}, 
                {"Land_Cargo_Tower_V1_No7_F",{4.89941,-6.36523,0},0,1,0,{},"","",true,false}, 
                {"Land_Barricade_01_10m_F",{-15.313,5.13062,0},124.47,1,0,{},"","",true,false}, 
                {"Land_Cargo_Patrol_V1_F",{-16.666,-7.96802,0},90,1,0,{},"","",true,false}, 
                {"Land_Cargo_Patrol_V1_F",{25.8271,-7.97339,0},270,1,0,{},"","",true,false}, 
                {"Land_Cargo_Patrol_V1_F",{4.57764,-29.2175,0},0,1,0,{},"","",true,false}
			};

            hmgs = 1;
			mountedGuns[] = { { -9.99219,4.64038,0 }, { 16.6099,-20.2471,0 } };
		};

        class radioTower : defaultMission {
            txtName = "STR_AI_RADIOTOWER_NAME";
            txtStart = "STR_AI_RADIOTOWER_START";
            txtEnd = "STR_AI_RADIOTOWER_END";

            unts[] = { 20, 24 };
            grps[] = { 3, 4};
            rifleMinMax[] = {15, 20};

            vehicle = 1;
            paradropVehicle = 1;

			objComposition[] = {
                {"Land_SatelliteAntenna_01_F",{4.45361,-2.49585,-0.00387907},289.012,1,0,{},"","",true,false}, 
                {"Land_Wreck_Van_F",{4.97754,2.14111,0},127.781,1,0,{},"","",true,false}, 
                {"Land_PortableGenerator_01_black_F",{5.19287,-3.1167,4.76837e-007},121.133,1,0,{},"","",true,false}, 
                {"CargoNet_01_barrels_F",{6.60254,-4.60669,0},0.000725472,1,0,{},"","",true,false}, 
                {"Land_FoodSacks_01_cargo_brown_F",{8.85547,-3.37354,0},3.86845e-005,1,0,{},"","",true,false}, 
                {"Land_GuardHouse_03_F",{-3.40576,-12.7302,0},270,1,0,{},"","",true,false}, 
                {"Land_Canal_Wall_10m_F",{5.4375,-13.6179,3.24038},0,1,0,{},"","",true,false}, 
                {"Land_Communication_F",{6.34375,-1.79956,0},0,1,0,{},"","",true,false}, 
                {"Land_Canal_Wall_10m_F",{15.2554,-13.6289,3.24038},0,1,0,{},"","",true,false}, 
                {"Land_ControlTower_02_F",{8.8584,21.2397,0},270,1,0,{},"","",true,false}, 
                {"Land_Canal_Wall_10m_F",{19.4023,10.7087,3.24},180,1,0,{},"","",true,false}, 
                {"Land_Canal_Wall_10m_F",{25.3052,-3.3811,3.24},270,1,0,{},"","",true,false}, 
                {"Land_Canal_Wall_10m_F",{25.3081,6.58105,3.24},270,1,0,{},"","",true,false}, 
                {"Land_ControlTower_01_F",{23.147,-11.8062,0},0,1,0,{},"","",true,false}
			};
		};
		

        class ammoBunker : defaultMission {
            txtName = "STR_AI_AMMOBUNKER_NAME";
            txtStart = "STR_AI_AMMOBUNKER_START";
            txtEnd = "STR_AI_AMMOBUNKER_END";

            rifleMinMax[] = {25,30};
            handgunMinMax[] = {4,4};
            itemMinMax[] = {5,10};
            
            hedgehogs = 1;           

			objComposition[] = {
                {"Land_PaperBox_open_full_F",{-2.66016,-0.634766,0},221.967,1,0,{},"","",true,false}, 
                {"Land_PaperBox_open_empty_F",{-4.68701,0.395996,0},170.316,1,0,{},"","",true,false}, 
                {"Land_PaperBox_open_full_F",{-4.67871,-1.92651,0},0,1,0,{},"","",true,false}, 
                {"Land_Bunker_F",{3.12891,-4.35889,0},180,1,0,{},"","",true,false}, 
                {"Land_Bunker_F",{-3.21094,-4.37134,0},180,1,0,{},"","",true,false}, 
                {"Land_PortableLight_double_F",{7.40234,0.956787,0},61.2078,1,0,{},"","",true,false}, 
                {"Land_Scrap_MRAP_01_F",{-9.00586,1.12329,0},125.27,1,0,{},"","",true,false}, 
                {"Land_R_rock_general2",{0.673828,-12.9988,0},0,1,0,{},"","",true,false}, 
                {"Land_R_rock_general3",{11.1753,-7.41406,0},141.713,1,0,{},"","",true,false}, 
                {"Land_R_rock_general3",{-13.4927,-10.4219,0},0,1,0,{},"","",true,false}
			};

            hmgs = 1;
			mountedGuns[] = { {-2.52148,2.92114,0} };
		};

        class downedBird : defaultMission {
            txtName = "STR_AI_DOWNEDBIRD_NAME";
            txtStart = "STR_AI_DOWNEDBIRD_START";
            txtEnd = "STR_AI_DOWNEDBIRD_END";

            aiTypes[] = { "baForces" };
            unts[] = {6,6};
            grps[] = {1,1};
            radius[] = {200, 200};

            rifleMinMax[] = {10,10};

			objComposition[] = {
                {"MetalBarrel_burning_F",{0.124512,-5.07568,0},0,1,0,{},"","",true,false}, 
                {"Land_Cargo10_sand_F",{-4.23779,4.26953,0},360,1,0,{},"","",true,false}, 
                {"Land_Wreck_Ural_F",{-6.84473,-3.08252,0.00151062},139.924,1,0,{},"","",true,false}, 
                {"Land_CratesWooden_F",{4.69727,-6.13599,0},232.461,1,0,{},"","",true,false}, 
                {"Land_PalletTrolley_01_yellow_F",{7.71777,-5.84937,4.76837e-007},163.843,1,0,{},"","",true,false}, 
                {"Land_Sacks_heap_F",{7.03223,-7.9668,0},199.424,1,0,{},"","",true,false}, 
                {"Land_Wreck_Heli_Attack_01_F",{3.28906,-11.6133,0},106.379,1,0,{},"","",true,false}
			};

            hmgs = 1;
			mountedGuns[] = { {2.29932,-0.300537,0} };
		};

        class fobDelta : defaultMission {
            txtName = "STR_AI_FOBDELTA_NAME";
            txtStart = "STR_AI_FOBDELTA_START";
            txtEnd = "STR_AI_FOBDELTA_END";

            vehicle = 1;
            paradropVehicle = 1;

			objComposition[] = { 
                {"Land_HBarrier_5_F",{3.32959,-3.82397,0},270.119,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{3.10693,-5.14233,0},2.05508,1,0,{},"","",true,false}, 
                {"Land_Garbage_square5_F",{2.99561,-8.30835,0},271.827,1,0,{},"","",true,false}, 
                {"Land_ScrapHeap_2_F",{-1.34619,8.99634,0},85.4637,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-6.16162,-9.27539,0},270.667,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{3.27881,7.09009,0},269.796,1,0,{},"","",true,false}, 
                {"Land_GarbageBarrel_01_F",{-4.78857,8.81738,0.00197124},98.754,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-11.7163,-4.8418,0},2.05508,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{8.7124,-9.65405,0},270.667,1,0,{},"","",true,false}, 
                {"Land_Garbage_square5_F",{-2.87549,11.385,0},294.993,1,0,{},"","",true,false}, 
                {"MetalBarrel_burning_F",{11.5386,1.85767,0},289.211,1,0,{},"","",true,false}, 
                {"Land_Loudspeakers_F",{8.21826,8.43774,0},271.827,1,0,{},"","",true,false}, 
                {"Land_Cargo_Patrol_V1_F",{6.8916,-10.9006,0},1.92,1,0,{},"","",true,false}, 
                {"Land_HBarrier_3_F",{3.1167,-11.4587,0},92.4857,1,0,{},"","",true,false}, 
                {"Land_HBarrier_3_F",{-13.3901,-3.1875,0},46.4701,1,0,{},"","",true,false}, 
                {"Land_JunkPile_F",{-3.54346,12.6658,0},139.094,1,0,{},"","",true,false}, 
                {"Land_CratesShabby_F",{-6.58154,11.699,0},30.1617,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{10.0366,-5.4646,0},2.05508,1,0,{},"","",true,false}, 
                {"Land_Pallets_stack_F",{-5.62744,12.8701,-0.000999928},272.626,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-6.20068,-14.9297,0},270.667,1,0,{},"","",true,false}, 
                {"Land_ScrapHeap_1_F",{-1.24072,15.176,0},265.634,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{3.28662,12.6584,0},269.796,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{8.6167,-15.3142,0},270.667,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-14.0171,-2.50195,0},223.764,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{2.81787,-14.9919,0},2.05508,1,0,{},"","",true,false}, 
                {"Land_HBarrier_3_F",{16.3218,-3.75757,0},130,1,0,{},"","",true,false}, 
                {"Land_Sign_WarningMilitaryArea_F",{3.76123,-16.2185,0},2.31973,1,0,{},"","",true,false}, 
                {"RoadCone_F",{2.58154,-16.6248,-3.8147e-006},0.00410632,1,0.00491796,{},"","",true,false}, 
                {"ArrowDesk_L_F",{2.83154,-16.6248,0},90,1,0,{},"","",true,false}, 
                {"Flag_NATO_F",{3.08105,-16.6252,0},0,1,0,{},"","",true,false}, 
                {"RoadCone_F",{-5.67529,-16.5234,-3.8147e-006},0.00410632,1,0.00491796,{},"","",true,false}, 
                {"ArrowDesk_R_F",{-5.92529,-16.5234,0},270,1,0,{},"","",true,false}, 
                {"Land_JunkPile_F",{-6.52832,17.0452,0},270.784,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{16.9292,-3.06616,0},307.294,1,0,{},"","",true,false}, 
                {"Flag_US_F",{-6.17578,-16.5234,0},180,1,0,{},"","",true,false}, 
                {"Land_Cargo_HQ_V1_F",{11.0635,14.5017,0},270.541,1,0,{},"","",true,false}, 
                {"Land_Pallets_stack_F",{-4.99561,18.4717,5.34058e-005},44.1616,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{19.8081,1.07446,0},269.796,1,0,{},"","",true,false}, 
                {"Land_CratesShabby_F",{-5.22949,19.9573,0},161.852,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{3.24951,18.1975,0},269.796,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{19.7808,6.75024,0},269.796,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-17.5532,11.676,0},269.796,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-17.6294,12.7502,0},269.796,1,0,{},"","",true,false}, 
                {"Land_Barracks_02_F",{-25.6362,6.20288,0},0,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-1.08252,23.9338,0},0.0233765,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-6.73877,23.9807,0},0.0233765,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{19.8081,12.2092,0},269.796,1,0,{},"","",true,false}, 
                {"Land_Cargo_Patrol_V1_F",{-15.1309,20.3262,0},126.833,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{8.96826,23.8264,0},180.674,1,0,{},"","",true,false}, 
                {"Land_HBarrier_3_F",{-15.9946,19.5374,0},128.417,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-12.3071,23.9905,0},0.0233765,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-15.3755,20.2249,0},305.711,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{14.521,23.6936,0},180.674,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{19.8159,17.7795,0},269.796,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{19.9565,23.5627,0},180.674,1,0,{},"","",true,false}
			};

            hmgs = 1;
			mountedGuns[] = { {13.7012,0.404785,0}, {-4.28955,4.95605,0} };
		};

        class outpost : defaultMission {

            txtName = "STR_AI_OUTPOST_NAME";
            txtStart = "STR_AI_OUTPOST_START";
            txtEnd = "STR_AI_OUTPOST_END";

            aiTypes[] = { "russianForces", "usForces", "baForces" };

            vehicle = 1;
            paradropVehicle = 1;

            unts[] = {25,30};
            grps[] = {3,5};

            rifleMinMax[] = {25,30};
            radius[] = {300,350};

            objComposition[] = {
                {"Land_HBarrier_5_F",{-0.0234375,2.80664,0},0.751239,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{-1.53271,-3.26099,0},1.72326,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-4.96802,-1.53345,0},273.146,1,0,{},"","",true,false}, 
                {"Land_PaperBox_closed_F",{3.85266,-3.63525,0},3.95785,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{6.2561,6.47046,0},178.557,1,0,{},"","",true,false}, 
                {"Land_PaperBox_closed_F",{6.61438,-4.67896,0},215.691,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{5.63208,2.71484,0},2.31524,1,0,{},"","",true,false}, 
                {"Land_WaterTank_F",{-1.77527,-8.52979,-2.24113e-005},88.2092,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{1.66565,-8.47607,0},90.1898,1,0,{},"","",true,false}, 
                {"Land_Pallets_stack_F",{8.48938,-3.61133,0},90.1899,1,0,{},"","",true,false}, 
                {"Land_PortableLight_double_F",{-5.3103,7.63843,0},340.729,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-4.74976,6.18335,0},178.557,1,0,{},"","",true,false}, 
                {"Land_WaterTank_F",{-5.00623,-8.49902,3.00407e-005},88.2093,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{-8.74988,-6.79028,0},306.946,1,0,{},"","",true,false}, 
                {"Land_HBarrier_1_F",{-11.8162,-0.455322,0},318.366,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{10.0959,9.82007,0},135.892,1,0,{},"","",true,false}, 
                {"Land_PortableLight_double_F",{7.62134,9.12866,0},136.662,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-9.51733,6.0896,0},227.148,1,0,{},"","",true,false}, 
                {"Land_GarbageBarrel_01_F",{7.31189,13.0632,-0.00603104},164.044,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{14.9713,2.47632,0},179.971,1,0,{},"","",true,false}, 
                {"Land_PortableLight_double_F",{-10.6443,-11.4287,0},330.811,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{-14.2673,1.87476,-2.38419e-006},226.555,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{1.69177,-13.4995,0},90.1898,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{10.2913,10.0701,0},267.546,1,0,{},"","",true,false}, 
                {"Land_Cargo_House_V1_F",{-8.35132,14.447,0},267.76,1,0,{},"","",true,false}, 
                {"Land_BarrelEmpty_grey_F",{-1.27222,-16.9329,1.90735e-006},90.1955,1,0,{},"","",true,false}, 
                {"Land_BarrelTrash_grey_F",{-1.43408,-17.6653,1.90735e-006},96.3043,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-12.824,10.0232,0},268.147,1,0,{},"","",true,false}, 
                {"Land_WaterBarrel_F",{0.250732,-17.9377,4.29153e-006},279.017,1,0,{},"","",true,false}, 
                {"Land_MetalBarrel_F",{-0.825806,-18.092,1.4782e-005},26.8098,1,0.00496497,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{-15.702,-10.4651,0},1.72326,1,0,{},"","",true,false}, 
                {"Land_HBarrier_1_F",{-18.5798,6.82397,0},318.366,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{9.82837,20.1658,0},87.7722,1,0,{},"","",true,false}, 
                {"Land_PortableLight_double_F",{20.6658,-1.84375,0},44.2361,1,0,{},"","",true,false}, 
                {"Land_TTowerSmall_2_F",{4.42603,18.4724,0},358.802,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-13.158,20.1267,0},87.9017,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{22.219,-0.455566,0},225.732,1,0,{},"","",true,false}, 
                {"Land_Cargo_House_V1_F",{5.32251,21.7947,0},87.6723,1,0,{},"","",true,false}, 
                {"Land_HBarrier_1_F",{17.4983,13.6462,0},173.384,1,0,{},"","",true,false}, 
                {"Land_Cargo_Patrol_V1_F",{-16.0469,-16.3696,0},89.4716,1,0,{},"","",true,false}, 
                {"Land_PaperBox_closed_F",{-8.9353,21.8123,0},69.6406,1,0,{},"","",true,false}, 
                {"Land_HBarrier_1_F",{-19.5427,13.3533,0},355.469,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-19.0854,-12.0317,0},90.1898,1,0,{},"","",true,false}, 
                {"Land_PortableLight_double_F",{-17.6545,-16.7,0},90.1898,1,0,{},"","",true,false}, 
                {"Land_PaperBox_closed_F",{-10.8728,22.488,0},312.011,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{17.0022,16.8474,-2.38419e-006},265.407,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{9.57251,25.7419,0},87.9017,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{25.6567,-8.07227,0},268.05,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-17.7634,-21.8752,0},1.41945,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-13.447,25.6619,0},87.3005,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{-19.9626,16.3904,-2.38419e-006},265.407,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-19.0886,-17.5752,0},90.1898,1,0,{},"","",true,false}, 
                {"Land_Cargo_Patrol_V1_F",{-1.67749,29.4685,0},178.651,1,0,{},"","",true,false}, 
                {"Land_Airport_Tower_F",{21.7002,-16.0862,0},270.905,1,0,{},"","",true,false}, 
                {"Land_HBarrier_1_F",{16.7229,23.4353,0},173.384,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{6.26196,29.6619,0},46.9021,1,0,{},"","",true,false}, 
                {"Land_HBarrier_1_F",{-13.3005,26.3201,0},42.7515,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-4.13306,-31.1235,0},313.643,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{0.494385,29.6755,0},178.557,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{6.00415,29.865,0},178.557,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-9.55249,29.2849,0},356.646,1,0,{},"","",true,false}, 
                {"Land_HBarrier_1_F",{-20.4197,22.7771,0},355.469,1,0,{},"","",true,false}, 
                {"Land_HBarrier_1_F",{-10.3181,29.0974,0},48.1634,1,0,{},"","",true,false}, 
                {"Land_PortableLight_double_F",{-1.56836,-30.7993,0},301.098,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-9.86877,-31.0327,0},1.41945,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{23.4847,-25.0786,0},269.323,1,0,{},"","",true,false}, 
                {"Land_HBarrier_3_F",{-17.9822,27.5564,0},305.431,1,0,{},"","",true,false}, 
                {"Land_HBarrier_1_F",{15.926,29.8064,0},137.661,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{19.9662,-28.5498,0},318.133,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{13.5139,31.8806,-2.38419e-006},226.447,1,0,{},"","",true,false}, 
                {"Land_HBarrier_3_F",{-13.4822,32.7927,0},324.789,1,0,{},"","",true,false}, 
                {"Land_BagBunker_Tower_F",{-15.2695,-33.3435,0},92.3846,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{-0.493896,37.4177,-2.38419e-006},177.222,1,0,{},"","",true,false}, 
                {"Land_HBarrier_1_F",{9.17603,36.6423,0},137.661,1,0,{},"","",true,false}, 
                {"Land_HBarrier_1_F",{-6.92749,37.2048,0},86.9207,1,0,{},"","",true,false}, 
                {"Land_HBarrier_1_F",{2.71118,37.7517,0},86.9207,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{13.4004,-34.4124,0},89.9315,1,0,{},"","",true,false}, 
                {"Land_Cargo20_military_green_F",{1.42383,-39.9553,0},222.395,1,0,{},"","",true,false}, 
                {"Land_Cargo20_military_green_F",{9.96362,-39.2632,0},270.023,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-18.2979,-36.4424,0},59.2396,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{32.6787,-29.7947,0},179.279,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-15.6642,-40.7307,0},1.77831,1,0,{},"","",true,false}, 
                {"Land_Pallets_F",{15.1373,-40.1104,0},84.2356,1,0,{},"","",true,false}, 
                {"Land_Cargo20_military_green_F",{-5.39917,-43.9958,4.76837e-007},110.006,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{13.7612,-43.9189,0},268.05,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{34.1848,-34.0439,0},268.05,1,0,{},"","",true,false}, 
                {"Land_Cargo_Patrol_V1_F",{31.1415,-35.4568,0},268.131,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{-11.2982,-45.3953,0},90.1898,1,0,{},"","",true,false}, 
                {"Land_PortableLight_double_F",{32.5795,-34.9624,0},268.05,1,0,{},"","",true,false}, 
                {"Land_ToiletBox_F",{17.5001,-44.6528,5.72205e-006},179.651,1,0,{},"","",true,false}, 
                {"Land_ToiletBox_F",{19.687,-44.5818,4.76837e-007},179.652,1,0,{},"","",true,false}, 
                {"Land_PortableLight_double_F",{11.2146,-48.3386,0},120.628,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{34.3729,-39.5833,0},268.05,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{24.2292,-45.2017,0},124.805,1,0,{},"","",true,false}, 
                {"Land_Cargo20_military_green_F",{3.1803,-51.4834,-4.76837e-007},178.946,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{31.0555,-41.2839,0},179.583,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{17.1555,-49.0007,0},179.583,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{-8.39746,-51.5918,0},47.8717,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{-0.781616,-54.9651,0},2.11143,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{8.76245,-54.8145,0},180.175,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{14.4001,-54.8752,0},180.175,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{20.3385,-50.6921,0},91.0048,1,0,{},"","",true,false}
            };
            hmgs = 1;
            mountedGuns[] = { {15.1304,7.26855,0},{-8.44287,-26.865,0} };
		};
        
        class bellend : defaultMission {
            txtName = "STR_AI_BELLEND_NAME";
            txtStart = "STR_AI_BELLEND_START";
            txtEnd = "STR_AI_BELLEND_END";

            vehicle = 1;
            paradropVehicle = 1;            
            hedgehogs = 1;
            
			objComposition[] = {
                {"Land_ConcreteHedgehog_01_F",{4.51514,4.92358,0.0119934},0.000792607,1,0,{},"","",true,false}, 
                {"Land_WoodenPlanks_01_messy_pine_F",{3.02832,-6.3479,0},98.0918,1,0,{},"","",true,false}, 
                {"Land_Pallet_MilBoxes_F",{-1.10706,-8.19482,0},0,1,0,{},"","",true,false}, 
                {"Land_ConcreteHedgehog_01_F",{-6.95789,4.71777,0.0119934},0.000792679,1,0,{},"","",true,false}, 
                {"Land_ConcreteHedgehog_01_palette_F",{1.08984,-9.5376,0.00299358},296.015,1,0,{},"","",true,false}, 
                {"Land_Pallets_stack_F",{-4.17456,-10.2156,0},254.382,1,0,{},"","",true,false}, 
                {"Land_Pallets_F",{-2.46741,-11.8833,0},0,1,0,{},"","",true,false}, 
                {"Land_ConcreteHedgehog_01_F",{-11.4712,0.968262,0.0119934},0.000792577,1,0,{},"","",true,false}, 
                {"Land_ConcreteHedgehog_01_palette_F",{2.42444,-11.3064,0.00301838},183.55,1,0,{},"","",true,false}, 
                {"Land_PalletTrolley_01_yellow_F",{-1.47449,-12.6792,0},164.006,1,0,{},"","",true,false}, 
                {"Land_ConcreteHedgehog_01_palette_F",{0.893799,-13.3149,0.00301933},130.002,1,0,{},"","",true,false}, 
                {"Land_Pallets_stack_F",{-3.78528,-13.0066,0},360,1,0,{},"","",true,false}, 
                {"Land_Unfinished_Building_01_F",{11.3545,-10.9634,0},88.3249,1,0,{},"","",true,false}, 
                {"Land_ConcreteHedgehog_01_F",{8.26636,12.6812,0.0119934},0.000792638,1,0,{},"","",true,false}, 
                {"Land_SilageWall_01_l_5m_F",{14.0249,-1.46582,0},351.145,1,0,{},"","",true,false}, 
                {"Land_ConcreteHedgehog_01_F",{-16.3296,-3.64453,0.0119934},0.000792691,1,0,{},"","",true,false}, 
                {"Land_SilageWall_01_l_5m_F",{2.14941,-18.0342,0},179.809,1,0,{},"","",true,false}, 
                {"Land_ConcreteHedgehog_01_F",{17.3518,8.60303,0.0119934},0.000792698,1,0,{},"","",true,false}, 
                {"Land_SilageWall_01_l_5m_F",{-2.85474,-18.1013,0},179.809,1,0,{},"","",true,false}, 
                {"Land_SilageWall_01_l_5m_F",{6.94141,-19.4956,0},197.352,1,0,{},"","",true,false}, 
                {"Land_ConcreteHedgehog_01_F",{-15.6169,-13.7671,0.0119934},0.000792674,1,0,{},"","",true,false}, 
                {"Land_SilageWall_01_l_5m_F",{18.8845,-0.69165,0},53.5635,1,0,{},"","",true,false}, 
                {"Land_ConcreteHedgehog_01_F",{-20.4756,9.1604,0.0119934},0.000792635,1,0,{},"","",true,false}, 
                {"Land_SilageWall_01_l_5m_F",{-7.88806,-18.1404,0},151.98,1,0,{},"","",true,false}, 
                {"Land_SilageWall_01_l_5m_F",{11.785,-20.9624,0},197.352,1,0,{},"","",true,false}, 
                {"Land_SilageWall_01_l_5m_F",{23.955,-4.97021,-1.87115},54.9743,1,0,{},"","",true,false}, 
                {"Land_SilageWall_01_l_5m_F",{16.5601,-19.1643,0},159.886,1,0,{},"","",true,false}, 
                {"Land_R_rock_general2",{-1.54285,-26.9795,0},0,1,0,{},"","",true,false}, 
                {"Land_SilageWall_01_l_5m_F",{21.3584,-17.6584,0},163.144,1,0,{},"","",true,false}, 
                {"Land_R_rock_general3",{27.3785,-1.1687,0},256.09,1,0,{},"","",true,false}, 
                {"Land_ConcreteHedgehog_01_F",{25.5228,11.1199,0.0119934},0.000792628,1,0,{},"","",true,false}, 
                {"Land_SilageWall_01_l_5m_F",{24.5914,-8.65137,0},87.9638,1,0,{},"","",true,false}, 
                {"Land_ConcreteHedgehog_01_F",{-15.9094,-23.8972,0.0119934},0.000792615,1,0,{},"","",true,false}, 
                {"Land_SilageWall_01_l_5m_F",{24.6962,-13.7231,0},129.338,1,0,{},"","",true,false}, 
                {"Land_R_rock_general2",{14.2153,-26.9143,0},160.613,1,0,{},"","",true,false}, 
                {"Land_ConcreteHedgehog_01_F",{-23.3938,-23.5979,0.0119934},0.000792604,1,0,{},"","",true,false}, 
                {"Land_R_rock_general3",{26.7404,-22.1106,0},163.439,1,0,{},"","",true,false}, 
                {"Land_R_rock_general2",{33.6296,-11.3184,0},91.1319,1,0,{},"","",true,false}	
			};

            hmgs = 1;
			mountedGuns[] = { { -3.625,-1.15063,0 } };
		};
        
        class armedBandits : defaultMission {
            txtName = "STR_AI_ARMEDBANDITS_NAME";
            txtStart = "STR_AI_ARMEDBANDITS_START";
            txtEnd = "STR_AI_ARMEDBANDITS_END";

            vehicle = 1;
            vehicleTypes[] = {
                #ifdef DMD_USE_CUP
                    "CUP_I_SUV_Armored_ION",
                    "CUP_I_FENNEK_ION",
                    "CUP_I_MATV_ION",
                    "CUP_I_4WD_LMG_ION",
                    "CUP_I_4WD_unarmed_ION",
                    "CUP_I_LSV_02_Minigun_ION",
                    "CUP_I_LSV_02_unarmed_ION",
                    "CUP_I_RG31_M2_ION",
                    "CUP_I_RG31_M2_GC_ION",
                    "CUP_I_RG31E_M2_ION",
                    "CUP_I_SUV_ION",
                #endif
                "I_G_Van_01_fuel_F",
                "I_G_Offroad_01_armed_F",
                "I_G_Van_01_transport_F"
            };
            paradropVehicle = 0;

            aiTypes[] = { "guerillas", "baForces" };
            unts[] = {12, 15};
            grps[] = {2, 3};
            rifleMinMax[] = {8,10};
            handgunMinMax[] = {2,4};
            itemMinMax[] = {10,15};
            
            objComposition[] = {
                {"Land_PaperBox_01_open_boxes_F",{1.54688,0.169434,0.045464},0.498879,1,0,{},"","",true,false}, 
                {"MetalBarrel_burning_F",{2.42566,2.19971,0},0,1,0,{},"","",true,false}, 
                {"Land_V3S_wreck_F",{0.900269,-2.59497,0},87.6296,1,0,{},"","",true,false}, 
                {"Land_WoodenBox_02_F",{3.34131,-0.566895,0},164.068,1,0,{},"","",true,false}, 
                {"Land_WoodenBox_02_F",{4.69385,-0.391113,0},0,1,0,{},"","",true,false}, 
                {"CamoNet_INDP_big_F",{3.0636,-3.26196,-1.0734},164.929,1,0,{},"","",true,false}
            };
        };

        
        class plantation : defaultMission {

            txtName = "STR_AI_PLANTATION_NAME";
            txtStart = "STR_AI_PLANTATION_START";
            txtEnd = "STR_AI_PLANTATION_END";
            aiTypes[] = { "baForces" };

            rifleMinMax[] = {10, 20};
            handgunMinMax[] = {1, 2};
            itemMinMax[] = {10, 15};

            objComposition[] = {
                {"Campfire_burning_F",{-0.891968,-0.925537,0.0299988},0,1,0,{},"","",true,false}, 
                {"Land_CampingChair_V1_F",{0.91333,-2.44604,0.00308895},128.854,1,0,{},"","",true,false}, 
                {"Land_CampingChair_V1_F",{-2.67261,0.532959,0.00308847},300.881,1,0,{},"","",true,false}, 
                {"Land_Sacks_heap_F",{2.6991,-1.5332,0},58.8616,1,0,{},"","",true,false}, 
                {"Land_CampingChair_V1_F",{-1.96045,-2.5647,0.00309038},195.784,1,0,{},"","",true,false}, 
                {"Land_Sacks_heap_F",{2.99243,-3.00024,0},0,1,0,{},"","",true,false}, 
                {"Land_FlowerPot_01_Flower_F",{4.98071,-1.03833,0},0.0159444,1,0,{},"","",true,false}, 
                {"Land_FlowerPot_01_Flower_F",{5.09802,0.0129395,0},359.973,1,0,{},"","",true,false}, 
                {"Land_FlowerPot_01_Flower_F",{5.09778,1.11572,0},215.973,1,0,{},"","",true,false}, 
                {"Land_FlowerPot_01_Flower_F",{4.98059,-2.03833,0},128.973,1,0,{},"","",true,false}, 
                {"Land_FlowerPot_01_Flower_F",{5.98059,-1.03833,0},359.973,1,0,{},"","",true,false}, 
                {"Land_FlowerPot_01_Flower_F",{6.09802,0.0129395,0},45.973,1,0,{},"","",true,false}, 
                {"Land_FlowerPot_01_Flower_F",{6.09778,1.11572,0},78.973,1,0,{},"","",true,false}, 
                {"Land_FlowerPot_01_Flower_F",{5.98071,-2.03833,0},0.0159444,1,0,{},"","",true,false}, 
                {"Land_MedicalTent_01_NATO_generic_outer_F",{6.49719,-1.26563,0},89.9086,1,0,{},"","",true,false}, 
                {"Land_Slum_House02_F",{-1.74512,-7.34839,0},87.6543,1,0,{},"","",true,false}, 
                {"Land_FlowerPot_01_Flower_F",{6.98059,-1.03833,0},260.973,1,0,{},"","",true,false}, 
                {"Land_FlowerPot_01_Flower_F",{7.09814,0.0131836,0},90.968,1,0,{},"","",true,false}, 
                {"Land_FlowerPot_01_Flower_F",{7.09778,1.11572,0},359.973,1,0,{},"","",true,false}, 
                {"Land_FlowerPot_01_Flower_F",{6.98083,-2.03809,0},270.973,1,0,{},"","",true,false}, 
                {"WaterPump_01_forest_F",{6.63513,-3.63989,0.000850201},89.0452,1,0,{},"","",true,false}, 
                {"Land_FlowerPot_01_Flower_F",{7.98059,-1.03833,0},359.973,1,0,{},"","",true,false}, 
                {"Land_FlowerPot_01_Flower_F",{8.09827,0.0129395,0},359.982,1,0,{},"","",true,false}, 
                {"Land_FlowerPot_01_Flower_F",{8.09778,1.11572,0},359.973,1,0,{},"","",true,false}, 
                {"Land_FlowerPot_01_Flower_F",{7.98059,-2.03833,0},359.973,1,0,{},"","",true,false}
            };
        };

        class smallFirebase : defaultMission {
            txtName = "STR_AI_SMALLFIREBASE_NAME";
            txtStart = "STR_AI_SMALLFIREBASE_START";
            txtEnd = "STR_AI_SMALLFIREBASE_END";
            
            hedgehogs = 1;
            vehicle = 1;
            paradropVehicle = 1;

            aiTypes[] = { "russianForces", "usForces" };

			objComposition[] = {
                {"Land_HBarrierBig_F",{2.77246,-9.32275,0},0.792412,1,0,{},"","",true,false}, 
                {"Land_HBarrierTower_F",{-8.33545,-5.7627,0},0,1,0,{},"","",true,false}, 
                {"Land_i_Barracks_V1_F",{-3.15283,11.5669,0},0,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{11.2588,-9.14307,0},359.697,1,0,{},"","",true,false}, 
                {"Land_LampHalogen_F",{12.1523,-6.43359,0},233.547,1,0,{},"","",true,false}, 
                {"Land_Mil_WiredFence_F",{1.66113,-16.0552,-9.53674e-006},359.2,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{16.3564,2.76318,0},270.301,1,0,{},"","",true,false}, 
                {"Land_Sign_WarningMilitaryArea_F",{-0.178711,-16.8892,0},359.892,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{16.3486,-5.76611,0},271.956,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{-15.7412,-9.18018,0},0.792412,1,0,{},"","",true,false}, 
                {"Land_Mil_WiredFence_F",{9.5127,-15.9048,-9.53674e-006},0.102386,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{16.2783,9.25537,0},271.054,1,0,{},"","",true,false}, 
                {"Land_LampHalogen_F",{-18.79,-6.04614,0},315.121,1,0,{},"","",true,false}, 
                {"Land_Mil_WiredFence_F",{20.6338,3.23779,-9.53674e-006},269.14,1,0,{},"","",true,false}, 
                {"Land_Mil_WiredFence_F",{20.708,-4.55322,-9.53674e-006},269.14,1,0,{},"","",true,false}, 
                {"Land_Mil_WiredFence_F",{-13.9795,-16.1255,-9.53674e-006},359.2,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{-21.4932,2.53467,0},271.204,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{-21.21,-6.03369,0},269.27,1,0,{},"","",true,false}, 
                {"Land_Mil_WiredFence_F",{20.5342,11.0854,-9.53674e-006},269.14,1,0,{},"","",true,false}, 
                {"Land_Mil_WiredFence_F",{17.3604,-15.8911,-9.53674e-006},0.102386,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{-21.5693,10.939,0},271.204,1,0,{},"","",true,false}, 
                {"Land_Mil_WiredFence_F",{20.8467,-12.3794,-9.53674e-006},269.14,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{-1.87207,25.0425,0},181.375,1,0,{},"","",true,false}, 
                {"Land_Mil_WiredFence_F",{-25.6807,2.96436,-9.53674e-006},89.3037,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{6.75098,25.146,0},181.375,1,0,{},"","",true,false}, 
                {"Land_Mil_WiredFence_F",{-25.6826,-4.85596,-9.53674e-006},89.3037,1,0,{},"","",true,false}, 
                {"Land_HBarrierTower_F",{-9.34668,24.821,0},180,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{16.2139,21.7769,0},271.956,1,0,{},"","",true,false}, 
                {"Land_LampHalogen_F",{14.147,22.4553,0},113.38,1,0,{},"","",true,false}, 
                {"Land_Mil_WiredFence_F",{-21.8818,-16.1919,-9.53674e-006},359.2,1,0,{},"","",true,false}, 
                {"Land_Mil_WiredFence_F",{20.4268,18.9194,-9.53674e-006},269.14,1,0,{},"","",true,false}, 
                {"Land_Mil_WiredFence_F",{-25.7998,10.7749,-9.53674e-006},89.3037,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{12.9854,25.0952,0},181.89,1,0,{},"","",true,false}, 
                {"Land_Mil_WiredFence_F",{-25.5459,-12.688,-9.53674e-006},89.3037,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{-21.5947,19.4585,0},271.568,1,0,{},"","",true,false}, 
                {"Land_LampHalogen_F",{-19.0254,22.4863,0},48.7488,1,0,{},"","",true,false}, 
                {"Land_Mil_WiredFence_F",{0.993164,30.2808,-9.53674e-006},179.508,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{-18.5361,24.7944,0},181.375,1,0,{},"","",true,false}, 
                {"Land_Mil_WiredFence_F",{-6.85059,30.2085,-9.53674e-006},179.508,1,0,{},"","",true,false}, 
                {"Land_Mil_WiredFenceD_F",{8.81934,30.3159,-9.53674e-006},179.244,1,0,{},"","",true,false}, 
                {"Land_Mil_WiredFenceD_F",{-25.9424,18.6245,-9.53674e-006},89.5986,1,0,{},"","",true,false}, 
                {"Land_Mil_WiredFence_F",{-14.6826,30.1284,-9.53674e-006},179.508,1,0,{},"","",true,false}, 
                {"Land_Mil_WiredFence_F",{20.2861,26.7925,-9.53674e-006},269.14,1,0,{},"","",true,false}, 
                {"Land_Mil_WiredFence_F",{16.667,30.4019,-9.53674e-006},179.508,1,0,{},"","",true,false}, 
                {"Land_Mil_WiredFence_F",{-26.0479,26.4604,-9.53674e-006},89.3037,1,0,{},"","",true,false}, 
                {"Land_Mil_WiredFence_F",{-22.5127,30.0737,-9.53674e-006},179.508,1,0,{},"","",true,false}
			};

            hmgs = 1;
			mountedGuns[] = { {2.81445,-0.0314941,0} };
        };

        class supermarket : defaultMission {
            aiTypes[] = { "baForces" };
            txtName = "STR_AI_SUPERMARKET_NAME";
            txtStart = "STR_AI_SUPERMARKET_START";
            txtEnd = "STR_AI_SUPERMARKET_END";
            
            objComposition[] = {
                {"MetalBarrel_burning_F",{-1.76697,0.568115,0},0,1,0,{},"","",true,false}, 
                {"Land_PaperBox_01_open_boxes_F",{-3.97131,-0.987793,0.000928402},0.00154873,1,0,{},"","",true,false}, 
                {"Land_PaperBox_01_small_destroyed_white_IDAP_F",{-3.29858,-3.11792,0.0271444},347.74,1,0,{},"","",true,false}, 
                {"Land_Barricade_01_10m_F",{4.50671,-1.85815,0},0,1,0,{},"","",true,false}, 
                {"Land_AirConditioner_01_F",{-2.27979,-4.39233,-0.000816345},62.3222,1,0,{},"","",true,false}, 
                {"Land_Microwave_01_F",{-1.7251,-4.98999,-4.76837e-007},22.1067,1,0,{},"","",true,false}, 
                {"Land_Portable_generator_F",{0.551025,-5.41382,-0.000800133},0.0037068,1,0,{},"","",true,false}, 
                {"Land_GamingSet_01_powerSupply_F",{-1.56543,-5.55127,0},360,1,0,{},"","",true,false}, 
                {"Land_FlatTV_01_F",{-2.50085,-5.61108,1.14441e-005},319.754,1,0,{},"","",true,false}, 
                {"Land_PCSet_01_case_F",{-2.25879,-6.25195,1.14441e-005},290.645,1,0,{},"","",true,false}, 
                {"Land_PCSet_01_case_F",{-2.65796,-6.57666,-1.43051e-006},290.654,1,0,{},"","",true,false}, 
                {"Land_PaperBox_01_open_empty_F",{-3.92834,-6.21802,0.000928879},0.000374778,1,0,{},"","",true,false}, 
                {"Land_PCSet_01_case_F",{-2.81384,-6.88037,-1.43051e-006},290.654,1,0,{},"","",true,false}, 
                {"Land_Barricade_01_10m_F",{-5.21765,6.18237,0},90.2815,1,0,{},"","",true,false}, 
                {"Land_V3S_wreck_F",{-7.75415,-6.46558,0},45.033,1,0,{},"","",true,false}, 
                {"Land_Supermarket_01_malden_F",{5.69568,14.7446,0},359.996,1,0,{},"","",true,false}, 
                {"Land_Barricade_01_10m_F",{-5.16565,16.031,0},90.2815,1,0,{},"","",true,false}
            };
        };

        class thunderdome : defaultMission {
            txtName = "STR_AI_THUNDERDOME_NAME";
            txtStart = "STR_AI_THUNDERDOME_START";
            txtEnd = "STR_AI_THUNDERDOME_END";
            aiTypes[] = { "russianForces", "usForces", "guerillas" };

            objComposition[] = {
                {"Land_Cargo_House_V2_F",{-2.57898,-15.9878,0},0,1,0,{},"","",true,false}, 
                {"Land_PortableWeatherStation_01_olive_F",{11.3337,-16.8694,0},360,1,0,{},"","",true,false}, 
                {"Land_Cargo_House_V2_F",{-11.4158,-16.0735,0},0,1,0,{},"","",true,false}, 
                {"Land_PortableLight_double_F",{-18.3768,-16.9031,0},319.222,1,0,{},"","",true,false}, 
                {"Land_DomeParts_01_struts_stack_F",{16.6791,19.4048,0},173.097,1,0,{},"","",true,false}, 
                {"Land_DomeParts_01_struts_stack_F",{14.0477,21.283,0},21.8241,1,0,{},"","",true,false}, 
                {"Land_Dome_Small_WIP2_F",{26.0044,-0.806152,0},0,1,0,{},"","",true,false}, 
                {"Land_Cargo_House_V2_F",{-3.08276,-27.7334,0},180,1,0,{},"","",true,false}, 
                {"Land_Cargo_House_V2_F",{-11.9196,-27.8191,0},180,1,0,{},"","",true,false}, 
                {"Land_DomeParts_01_struts_stack_F",{18.6432,24.1367,0},159.445,1,0,{},"","",true,false}, 
                {"Land_DomeParts_01_panel_white_stack_F",{21.5448,22.0334,0},82.9895,1,0,{},"","",true,false}, 
                {"Land_Dome_01_big_green_ruins_v1_F",{-16.2589,24.103,0},0,1,0,{},"","",true,false}, 
                {"Land_PortableLight_double_F",{16.0566,27.7739,0},327.751,1,0,{},"","",true,false}, 
                {"Land_DomeDebris_01_struts_small_green_F",{-27.7999,16.2766,-1.90735e-006},0,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{4.74683,-35.1919,0},343.95,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{10.1702,-33.7039,0},343.95,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-0.866211,-35.3459,0},0,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-6.48962,-35.2766,0},0,1,0,{},"","",true,false}, 
                {"Land_DomeParts_01_panel_white_stack_F",{28.1819,22.5469,0},203.151,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{15.5709,-32.1799,0},343.95,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-12.1012,-35.248,0},0,1,0,{},"","",true,false}, 
                {"Land_DomeParts_01_panel_white_stack_F",{30.8612,-20.1885,0},0,1,0,{},"","",true,false}, 
                {"Land_DomeParts_01_panel_white_stack_F",{25.957,26.6768,0},182.721,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{20.9943,-30.6917,0},343.95,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-17.7246,-35.1787,0},0,1,0,{},"","",true,false}, 
                {"Land_DomeParts_01_panel_white_stack_F",{36.7618,-17.1072,0},239.838,1,0,{},"","",true,false}, 
                {"Land_DomeParts_01_panel_white_stack_F",{34.5306,-23.1113,0},339.57,1,0,{},"","",true,false}, 
                {"Land_DomeParts_01_struts_stack_F",{40.2023,-12.7771,0},329.946,1,0,{},"","",true,false}, 
                {"Land_DomeParts_01_struts_stack_F",{40.257,-17.9004,0},316.294,1,0,{},"","",true,false}, 
                {"Land_DomeParts_01_struts_stack_F",{43.3602,-13.4695,0},178.673,1,0,{},"","",true,false}, 
                {"Land_PortableLight_double_F",{44.0651,-20.2278,0},124.6,1,0,{},"","",true,false}
            };

            hmgs = 1;
            mountedGuns[] = { {-24.3223,-9.91943,0},{20.5497,33.2288,0} };
        };

        class solarTransformer : defaultMission {
            txtName = "STR_AI_SOLARTRANSFORMER_NAME";
            txtStart = "STR_AI_SOLARTRANSFORMER_START";
            txtEnd = "STR_AI_SOLARTRANSFORMER_END";
            aiTypes[] = { "guerillas", "baForces" };

            objComposition[] = {
                {"Land_spp_Panel_F",{1.83044,1.82886,-2.86102e-006},0,1,0,{},"","",true,false}, 
                {"Land_spp_Panel_F",{5.01282,-8.229,-2.86102e-006},0,1,0,{},"","",true,false}, 
                {"Land_spp_Panel_F",{12.1051,1.95703,-2.86102e-006},0,1,0,{},"","",true,false}, 
                {"Land_spp_Panel_F",{-5.18774,-8.6145,-2.86102e-006},0,1,0,{},"","",true,false}, 
                {"Land_spp_Panel_F",{15.2875,-8.10083,-2.86102e-006},0,1,0,{},"","",true,false}, 
                {"Land_spp_Panel_F",{-8.37012,1.44336,-2.86102e-006},0,1,0,{},"","",true,false}, 
                {"Land_spp_Transformer_F",{16.2395,4.52612,0},0,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{0.184326,-17.5945,0},0,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{-5.81384,-17.6165,0},0,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{6.13257,-17.6113,0},0,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{-11.8298,-17.5867,0},0,1,0,{},"","",true,false}, 
                {"Land_spp_Transformer_F",{21.0475,4.38843,0},0,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{12.0349,-17.6243,0},0,1,0,{},"","",true,false}, 
                {"Land_LampAirport_F",{16.4358,9.4585,0},0,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{-17.7322,-17.5737,0},0,1,0,{},"","",true,false}, 
                {"Land_spp_Tower_ruins_F",{15.0109,19.4631,0},0,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{18.0509,-17.6541,0},0,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{-26.7117,1.69067,0},89.9565,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{-26.7201,-4.21167,0},89.9565,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{-26.6993,7.63892,0},89.9565,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{-23.6804,-17.5569,0},0,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{28.9479,0.890137,0},89.9565,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{-26.7454,-10.2278,0},89.9565,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{-26.6941,13.6252,0},89.9565,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{28.9563,6.79248,0},89.9565,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{28.9226,-5.12598,0},89.9565,1,0,{},"","",true,false}, 
                {"Land_Airport_Tower_F",{23.7764,-16.8164,0},321.028,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{28.9686,12.7407,0},89.9565,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{-26.6688,19.6414,0},89.9565,1,0,{},"","",true,false}, 
                {"Land_spp_Tower_F",{-5.17566,19.8555,0},0,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{28.9739,18.7271,0},89.9565,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{-26.6604,25.5437,0},89.9565,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{-0.879883,36.3186,0},180.053,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{5.10645,36.3032,0},180.053,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{-6.82813,36.3408,0},180.053,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{28.9991,24.7432,0},89.9565,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{11.1224,36.2681,0},180.053,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{-12.7305,36.3591,0},180.053,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{17.0248,36.2498,0},180.053,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{-26.6481,31.4919,0},89.9565,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{-18.7465,36.3945,0},180.053,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{29.0076,30.6455,0},89.9565,1,0,{},"","",true,false}, 
                {"Land_Wall_IndCnc_4_F",{22.973,36.2273,0},180.053,1,0,{},"","",true,false}
            };
        };

        class radarDome : defaultMission {
            txtName = "STR_AI_RADARDOME_NAME";
            txtStart = "STR_AI_RADARDOME_START";
            txtEnd = "STR_AI_RADARDOME_END";

            objComposition[] = {
                {"CargoNet_01_barrels_F",{-8.0293,5.85059,-9.53674e-007},0.000648001,1,0,{},"","",true,false}, 
                {"MetalBarrel_burning_F",{-7.18066,10.1733,0},0,1,0,{},"","",true,false}, 
                //  {"O_CargoNet_01_ammo_F",{-13.0762,2.91455,-4.76837e-007},0.00128477,1,0,{},"","",true,false}, 
                {"CargoNet_01_barrels_F",{-9.59375,9.80908,0},5.22926e-005,1,0,{},"","",true,false}, 
                {"Land_Radar_Small_F",{5.75635,13.9927,0},0,1,0,{},"","",true,false}, 
                {"Land_Cargo20_blue_F",{-14.8711,15.272,-4.76837e-007},360,1,0,{},"","",true,false}, 
                {"Land_Radar_01_antenna_base_F",{-20.2651,-19.7725,0},269.101,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{2.45703,23.6982,-2.38419e-006},0,1,0,{},"","",true,false}, 
                {"Land_Radar_ruins_F",{17.687,-11.9932,0},0,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{-12.2915,23.9341,-2.38419e-006},0,1,0,{},"","",true,false}, 
                {"Land_Cargo40_light_green_F",{-20.2188,19.9043,0},1.60488e-005,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{17.3169,23.3096,-2.38419e-006},0,1,0,{},"","",true,false}, 
                {"Land_Sawmill_01_illuminati_tower_F",{-31.1289,16.1978,0},0,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{-37.7417,3.43896,-2.38419e-006},89.1093,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{-37.748,-11.3115,-2.38419e-006},89.1093,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{46.3008,1.16748,-2.38419e-006},89.1093,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{-37.9058,-26.1758,-2.38419e-006},89.1093,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{46.2944,-13.583,-2.38419e-006},89.1093,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{-2.02979,-50.0376,-2.38419e-006},0,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{-16.7783,-49.8018,-2.38419e-006},0,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{12.8301,-50.4263,-2.38419e-006},0,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{46.1367,-28.4473,-2.38419e-006},89.1093,1,0,{},"","",true,false}, 
                {"Land_Sawmill_01_illuminati_tower_F",{37.918,-43.3853,0},0,1,0,{},"","",true,false}
            };

            hmgs = 1;
            mountedGuns[] = { {-6.32373,-28.0659,0} };
        };

        class drugLab : defaultMission {
            txtName = "STR_AI_DRUGLAB_NAME";
            txtStart = "STR_AI_DRUGLAB_START";
            txtEnd = "STR_AI_DRUGLAB_END";
            aiTypes[] = { "guerillas", "baForces" };

            vehicle = 1;
            paradropVehicle = 1;

            objComposition[] = {
                {"Land_Money_F",{1.3501,-0.748535,-9.53674e-007},65.6954,1,0,{},"","",true,false}, 
                {"Land_Money_F",{1.15039,-1.04102,0.0039587},0.0904102,1,0,{},"","",true,false}, 
                {"Land_Money_F",{1.2915,-1.31738,-9.53674e-007},0.00815134,1,0,{},"","",true,false}, 
                {"Land_Money_F",{1.50732,-1.11475,0.00797272},0.0119717,1,0,{},"","",true,false}, 
                {"Land_Money_F",{1.67773,-0.911133,0.0086031},0.049912,1,0,{},"","",true,false}, 
                {"Land_Money_F",{1.66211,-1.36572,3.8147e-005},0.0681539,1,0,{},"","",true,false}, 
                {"Land_Money_F",{1.86523,-1.15674,0.00500298},0.00422931,1,0,{},"","",true,false}, 
                {"CamoNet_wdl_open_F",{-1.14746,1.63184,0.879},94.341,1,0,{},"","",true,false}, 
                {"Land_Sacks_heap_F",{0.820801,-2.67334,0},67.2693,1,0,{},"","",true,false}, 
                {"Land_PortableLight_double_F",{1.35352,2.46338,0},47.891,1,0,{},"","",true,false}, 
                {"Land_PowerGenerator_F",{2.88672,-0.244629,0},0,1,0,{},"","",true,false}, 
                {"Land_Sacks_heap_F",{2.37695,-2.23047,0},0,1,0,{},"","",true,false}, 
                {"Land_PortableGenerator_01_black_F",{1.83643,2.99609,0},330.534,1,0,{},"","",true,false}, 
                {"Land_VillageStore_01_F",{6.97266,0.992188,0},0,1,0,{},"","",true,false}, 
                {"Land_Sacks_heap_F",{2.2041,-3.64502,0},227.466,1,0,{},"","",true,false}, 
                {"Land_Caravan_01_green_F",{-3.75,3.15967,0},0,1,0,{},"","",true,false}, 
                {"Land_WoodenBox_02_F",{-5.41943,-0.469238,0},0,1,0,{},"","",true,false}, 
                {"Land_WoodenBox_02_F",{-5.72461,1.23779,0},0,1,0,{},"","",true,false}
            };
        };

        class usBarracks : defaultMission {
            txtName = "STR_AI_USBARRACKS_NAME";
            txtStart = "STR_AI_USBARRACKS_START";
            txtEnd = "STR_AI_USBARRACKS_END";
            
            hedgehogs = 1;

            aiTypes[] = { "usForces" };
            objComposition[] = {
                {"Land_WheelCart_F",{-1.64014,-2.8584,0.000800133},265.465,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{3.95215,-2.30127,0},142.619,1,0,{},"","",true,false}, 
                {"Land_BarrelSand_grey_F",{-3.63574,-5.52979,1.90735e-006},256.848,1,0,{},"","",true,false}, 
                {"Land_LampHalogen_F",{5.11084,-1.3833,0},104.427,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{6.82129,-6.7915,0},54.4756,1,0,{},"","",true,false}, 
                {"Land_HBarrier_3_F",{12.2168,0.812988,0},208.107,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{-3.26172,-9.17432,0},141.987,1,0,{},"","",true,false}, 
                {"Land_PortableLight_double_F",{0.3125,-11.8911,0},234.545,1,0,{},"","",true,false}, 
                {"Land_Scaffolding_F",{-5.23291,13.0298,0},269.743,1,0,{},"","",true,false}, 
                {"Land_WaterTank_F",{11.6763,-6.7749,-4.76837e-007},322.95,1,0,{},"","",true,false}, 
                {"Land_ToiletBox_F",{-0.821777,-14.9517,1.90735e-006},231.968,1,0,{},"","",true,false}, 
                {"Land_WaterTank_F",{13.4727,-8.98584,-2.38419e-006},322.95,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{-5.2666,-16.3335,0},53.5254,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{12.019,-13.437,0},54.4756,1,0,{},"","",true,false}, 
                {"Land_Shoot_House_Wall_Stand_F",{-12.7505,13.7739,0},359.941,1,0,{},"","",true,false}, 
                {"Land_Cargo_Tower_V1_F",{2.28467,-15.3345,0},232.337,1,0,{},"","",true,false}, 
                {"Land_Shoot_House_Wall_Stand_F",{-14.7349,13.7622,0},359.941,1,0,{},"","",true,false}, 
                {"Land_HBarrier_3_F",{17.4004,12.6538,0},208.107,1,0,{},"","",true,false}, 
                {"Land_Shoot_House_Wall_Stand_F",{-15.8384,14.6704,0},88.7147,1,0,{},"","",true,false}, 
                {"MetalBarrel_burning_F",{-10.7759,18.5493,0},128.839,1,0,{},"","",true,false}, 
                {"Land_Unfinished_Building_02_F",{-7.82471,20.6255,0},180.205,1,0,{},"","",true,false}, 
                {"Land_PortableLight_double_F",{3.26514,-20.0039,0},52.4674,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{0.00390625,-22.7939,0},52.7417,1,0,{},"","",true,false}, 
                {"Land_CinderBlocks_F",{-16.4683,16.0771,1.7643e-005},287.925,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{15.5532,-17.1606,0},141.807,1,0,{},"","",true,false}, 
                {"Land_Pallets_stack_F",{-12.0342,-20.9224,0},188.636,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{23.8916,3.84082,0},255.808,1,0,{},"","",true,false}, 
                {"Land_Shoot_House_Corner_F",{0.468262,25.0552,0},180.205,1,0,{},"","",true,false}, 
                {"Land_CinderBlocks_F",{-16.0347,19.2554,0.0408688},179.033,1,0,{},"","",true,false}, 
                {"Land_Pallets_stack_F",{-10.5962,-22.8325,-4.76837e-007},227.272,1,0,{},"","",true,false}, 
                {"Land_Shoot_House_Wall_Long_F",{-2.5415,25.02,0},180.205,1,0,{},"","",true,false}, 
                {"Land_Shoot_House_Wall_Stand_F",{-15.6548,20.8501,0},88.7147,1,0,{},"","",true,false}, 
                {"Land_HBarrier_5_F",{6.63184,-24.2861,0},142.354,1,0,{},"","",true,false}, 
                {"Land_HBarrier_3_F",{-15.8633,-21.7671,0},261.877,1,0,{},"","",true,false}, 
                {"Land_Shoot_House_Wall_Crouch_F",{-4.45752,26.1118,0},269.188,1,0,{},"","",true,false}, 
                {"Land_Shoot_House_Wall_Stand_F",{-9.72705,25.6196,0},88.7147,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{18.0972,20.2085,-2.38419e-006},26.8166,1,0,{},"","",true,false}, 
                {"Land_Shoot_House_Wall_Stand_F",{-15.6743,22.8481,0},89.8735,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{27.5449,-3.91797,0},237.875,1,0,{},"","",true,false}, 
                {"Land_Shoot_House_Wall_Crouch_F",{-5.37158,27.1978,0},180.205,1,0,{},"","",true,false}, 
                {"Land_Wreck_Car3_F",{-19.6548,19.877,0},6.54897,1,0,{},"","",true,false}, 
                {"Land_Shoot_House_Corner_Stand_F",{-15.7192,24.8423,0},90.1112,1,0,{},"","",true,false}, 
                {"Land_i_Barracks_V1_F",{-28.4502,-5.86816,0},90.4158,1,0,{},"","",true,false}, 
                {"Land_HBarrier_3_F",{23.1143,-16.582,0},92.7769,1,0,{},"","",true,false}, 
                {"Land_LampHalogen_F",{3.07227,-28.9019,0},260.581,1,0,{},"","",true,false}, 
                {"Land_Bricks_V4_F",{-12.1836,27.4717,0},162.602,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{-26.0313,15.7695,0},290.437,1,0,{},"","",true,false}, 
                {"Land_Bricks_V2_F",{-14.749,27.1445,-9.53674e-007},272.435,1,0,{},"","",true,false}, 
                {"Land_Bricks_V1_F",{-13.5659,28.0581,9.53674e-007},175.948,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{32.9556,2.32471,-2.38419e-006},243.039,1,0,{},"","",true,false}, 
                {"Land_PaperBox_closed_F",{6.96631,-31.8364,0},233.438,1,0,{},"","",true,false}, 
                {"Land_HBarrier_3_F",{13.8291,-30.7432,0},193.654,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{-24.4077,24.2476,0},276.275,1,0,{},"","",true,false}, 
                {"Land_PaperBox_closed_F",{7.0918,-33.9692,0},263.904,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{17.8813,-31.5771,0},145.447,1,0,{},"","",true,false}, 
                {"Land_HBarrier_3_F",{4.92627,-36.4346,0},193.654,1,0,{},"","",true,false}, 
                {"Land_LampHalogen_F",{-34.7935,9.77002,0},48.3691,1,0,{},"","",true,false}, 
                {"Land_HBarrier_3_F",{34.105,-17.3047,0},92.7769,1,0,{},"","",true,false}, 
                {"Land_Barracks_06_F",{-17.5347,-37.5942,0},0,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{-35.0142,20.1523,-2.38419e-006},281.045,1,0,{},"","",true,false}, 
                {"Land_HBarrierBig_F",{28.5107,-29.8569,0},142.182,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{40.3066,-16.7212,-2.38419e-006},94.3209,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{8.80322,-43.8975,-2.38419e-006},176.12,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{24.9258,-37.8472,-2.38419e-006},141.415,1,0,{},"","",true,false}, 
                {"Land_Razorwire_F",{35.1108,-35.8242,-2.38419e-006},139.224,1,0,{},"","",true,false}, 
                {"Land_LampHalogen_F",{-35.272,-46.103,0},310.818,1,0,{},"","",true,false}
            };

            hmgs = 1;
            mountedGuns[] = { { 27.9346,-21.9063,0 }, { -30.832,20.0552,0 } };
        };

        class vtol : defaultMission {
            txtName = "STR_AI_VTOL_NAME";
            txtStart = "STR_AI_VTOL_START";
            txtEnd = "STR_AI_VTOL_END";

            aiTypes[] = { "russianForces", "guerillas", "baForces" };
            objComposition[] = {
                {"Land_TankEngine_01_F",{1.63477,0.596191,0.000136852},116.259,1,0,{},"","",true,false}, 
                {"Land_LuggageHeap_05_F",{5.89355,-0.528809,0},0,1,0,{},"","",true,false}, 
                {"Land_Mil_WallBig_debris_F",{4.5918,3.39014,-7.62939e-006},0,1,0,{},"","",true,false}, 
                {"MetalBarrel_burning_F",{5.4209,-4.1084,0},0,1,0,{},"","",true,false}, 
                {"Land_HBarrier_3_F",{-8.33496,-0.600098,0},63.4054,1,0,{},"","",true,false}, 
                {"Land_Tyres_F",{8.21973,0.0463867,0.00659704},0,1,0,{},"","",true,false}, 
                {"Oil_Spill_F",{7.75928,2.73291,0},0,1,0,{},"","",true,false}, 
                {"Oil_Spill_F",{8.75732,1.69873,0.277243},0,1,0,{},"","",true,false}, 
                {"Land_PortableLight_02_quad_sand_F",{-4.83936,8.84912,0},331.539,1,0,{},"","",true,false}, 
                {"Land_ScrapHeap_1_F",{9.86865,-3.28516,0},125.835,1,0,{},"","",true,false}, 
                {"Land_Mil_WallBig_debris_F",{10.5024,-0.779297,-7.62939e-006},0,1,0,{},"","",true,false}, 
                {"Land_Mil_WallBig_debris_F",{9.76514,4.45801,-7.62939e-006},0,1,0,{},"","",true,false}, 
                {"Land_UWreck_MV22_F",{4.13232,8.60303,0},137.581,1,0,{},"","",true,false}, 
                {"Land_ShellCrater_02_debris_F",{8.12598,-7.29297,0},0,1,0,{},"","",true,false}, 
                {"Land_HBarrier_3_F",{-0.202148,-11.0029,0},28.0707,1,0,{},"","",true,false}, 
                {"Oil_Spill_F",{12.228,2.15869,0.258247},0,1,0,{},"","",true,false}, 
                {"Land_PortableLight_02_quad_sand_F",{11.564,-7.17725,0},159.222,1,0,{},"","",true,false}, 
                {"Land_Mil_WallBig_debris_F",{15.4824,5.68164,-7.62939e-006},0,1,0,{},"","",true,false}, 
                {"Land_Cargo_Tower_V3_derelict_F",{-3.38184,17.3872,0},0,1,0,{},"","",true,false}, 
                {"Land_HBarrier_3_F",{19.5615,-5.62549,0},311.162,1,0,{},"","",true,false}, 
                {"Land_HBarrier_3_F",{24.417,10.0435,0},255.939,1,0,{},"","",true,false}, 
                {"Land_HBarrier_3_F",{15.3677,23.9048,0},205.425,1,0,{},"","",true,false}
            };
            hmgs = 1;
            mountedGuns[] = { {1.74707,-2.73047,0} };
        };

        class xerxes : defaultMission {

            txtName = "STR_AI_XERXES_NAME";
            txtStart = "STR_AI_XERXES_START";
            txtEnd = "STR_AI_XERXES_END";

            unts[] = {20, 30};
            grps[] = {4, 5};
            
            rifleMinMax[] = {18, 25};
            handgunMinMax[] = {2, 4};
            itemMinMax[] = {20, 30};

            vehicle = 1;
            paradropVehicle = 1;
            vehicleTypes[] = {
                #ifdef DMD_USE_CUP
                    "CUP_B_LR_MG_CZ_W",
                    "CUP_B_M1151_Deploy_NATO_T",
                    "CUP_B_M1151_Deploy_USMC",
                    "CUP_B_M1152_NATO_T",
                    "CUP_B_Mastiff_HMG_GB_W",
                    "CUP_B_RG31E_M2_OD_USMC",
                    "CUP_B_RG31E_M2_USA",
                    "CUP_B_Ridgback_LMG_GB_W",
                    "CUP_B_Wolfhound_LMG_GB_W",
                    "CUP_I_4WD_LMG_ION",
                    "CUP_I_4WD_unarmed_ION",
                    "CUP_I_FENNEK_ION",
                    "CUP_I_LSV_02_Minigun_ION",
                    "CUP_I_LSV_02_unarmed_ION",
                    "CUP_I_MATV_ION",
                    "CUP_I_RG31_M2_GC_ION",
                    "CUP_I_RG31_M2_ION",
                    "CUP_I_RG31E_M2_ION",
                    "CUP_I_SUV_Armored_ION",
                    "CUP_I_SUV_ION",
                    "CUP_I_Van_ammo_ION",
                    "CUP_O_Datsun_PK",
                    "CUP_O_Kamaz_Refuel_RU",
                #endif

                #ifdef DMD_USE_RHS
                    "rhsgref_hidf_m1025_m2",
                    "rhsgref_hidf_M998_2dr_halftop",
                    "rhsgref_hidf_M998_4dr_fulltop",
                    "rhsusf_m998_d_4dr",
                    "rhsusf_m998_w_2dr_halftop",
                    "rhsusf_m998_w_4dr_halftop",
                    "rhsusf_m998_w_4dr",
                #endif

                "B_G_Offroad_01_armed_F",
                "B_G_Offroad_01_AT_F",
                "B_G_Offroad_01_F",
                "O_G_Offroad_01_armed_F",
                "O_G_Offroad_01_repair_F"
            };

            objComposition[] = {
                {"Land_ConcreteWall_03_m_6m_F",{-5.60156,2.07178,0},90,1,0,{},"","",true,false}, 
                {"Land_ConcreteWall_03_m_6m_F",{-5.57666,-3.84668,0},90,1,0,{},"","",true,false}, 
                {"Land_i_Barracks_V1_F",{8.04834,4.06104,0},90.2566,1,0,{},"","",true,false}, 
                {"Land_ConcreteWall_03_m_6m_F",{-5.57813,8.01123,0},90,1,0,{},"","",true,false}, 
                {"Land_ConcreteWall_03_m_6m_F",{-5.60107,-9.79541,0},90,1,0,{},"","",true,false}, 
                {"Land_ConcreteWall_03_m_6m_F",{-5.55273,13.9497,0},90,1,0,{},"","",true,false}, 
                {"Land_Cargo_Patrol_V1_F",{3.55127,-18.9688,0},0,1,0,{},"","",true,false}, 
                {"Land_CncBarrierMedium4_F",{3.48047,-18.7402,0},0,1,0,{},"","",true,false}, 
                {"Land_LampHalogen_F",{1.71777,19.7202,0},44.5378,1,0,{},"","",true,false}, 
                {"Land_LampHalogen_F",{15.4072,-13.3896,0},216.046,1,0,{},"","",true,false}, 
                {"Land_CncBarrierMedium4_F",{14.2983,-18.7085,0},0,1,0,{},"","",true,false}, 
                {"Land_ConcreteWall_03_m_6m_F",{24.2124,2.24707,0},90,1,0,{},"","",true,false}, 
                {"Land_ConcreteWall_03_m_6m_F",{24.2373,-3.67139,0},90,1,0,{},"","",true,false}, 
                {"Land_BagFence_Round_F",{8.9873,-23.2554,-0.00130129},0,1,0,{},"","",true,false}, 
                {"Land_ConcreteWall_03_m_6m_F",{24.2358,8.18652,0},90,1,0,{},"","",true,false}, 
                {"Land_CncBarrierMedium4_F",{3.34766,25.4146,0},0,1,0,{},"","",true,false}, 
                {"Land_ConcreteWall_03_m_6m_F",{24.2129,-9.62012,0},90,1,0,{},"","",true,false}, 
                {"Land_ConcreteWall_03_m_6m_F",{24.2612,14.125,0},90,1,0,{},"","",true,false}, 
                {"Land_CncBarrierMedium4_F",{14.1655,25.4463,0},0,1,0,{},"","",true,false}, 
                {"Land_Cargo_Patrol_V1_F",{16.9648,25.6221,0},180,1,0,{},"","",true,false}, 
                {"Land_BagFence_Round_F",{9.31689,31.4771,-0.00130129},180,1,0,{},"","",true,false}
            };

            hmgs = 1;
            mountedGuns[] = { {9.06836,-21.9106,0}, {8.94043,29.0313,0} };
        };
    };
};