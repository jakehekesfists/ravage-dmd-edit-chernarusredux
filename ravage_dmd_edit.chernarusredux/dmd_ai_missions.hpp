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

        class aiSkill {
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
            
            note:
                the objectcompositions were created years ago for my old epoch and exile servers using an addon that no longer works properly .(m3deditor).
                i would like to make a better way of dynamic firebase spawning, using relative positions.
                future updates perhaps?
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
            "prophet",
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
				{"CUP_A2_wf_field_hospital_east",{-4.53662,9.18311,0},0,{true,false}},
				{"CUP_A2_wf_field_hospital_west",{-11.4927,-7.59131,0},0,{true,false}},
				{"CUP_A2_mash_ep1",{7.03125,-6.35425,0},0,{true,false}},
				{"CUP_A2_mash_ep1",{13.4111,-6.68799,0},0,{true,false}},
				{"CUP_A2_mash_ep1",{19.8081,-6.68823,0},0,{true,false}},
				{"CUP_A2_b_corylus2s_summer",{6.18115,-0.630615,0},0,{true,false}},
				{"CUP_A2_b_corylus2s_summer",{11.3901,1.42065,0},0,{true,false}},
				{"CUP_A2_b_corylus2s_summer",{15.3086,3.43555,0},0,{true,false}},
				{"CUP_A2_b_corylus2s_summer",{20.3081,3.17334,0},0,{true,false}},
				{"CUP_A2_b_corylus2s_summer",{20.2588,0.515869,0},0,{true,false}},
				{"CUP_A2_b_corylus2s_summer",{17.7827,3.35718,0},0,{true,false}},
				{"CUP_A2_b_corylus2s_summer",{-19.6997,-15.4226,0},0,{true,false}},
				{"CUP_A2_b_corylus2s_summer",{-21.7104,-10.8906,0},0,{true,false}},
				{"CUP_A2_b_corylus2s_summer",{-17.3682,4.78711,0},0,{true,false}},
				{"CUP_A2_b_corylus2s_summer",{1.07959,28.1707,0},0,{true,false}},
				{"CUP_A2_b_corylus2s_summer",{-3.63232,23.9685,0},0,{true,false}},
				{"CUP_A2_b_prunus",{-21.9126,-14.0872,0},0,{true,false}},
				{"CUP_A2_barels2",{3.02734,-7.60498,0},0,{true,false}},
				{"CUP_A2_barels2",{2.95313,-5.80566,0},0,{true,false}},
				{"CUP_A2_palletsfoiled_heap",{-7.16553,-9.50513,0},0,{true,false}},
				{"Land_Wreck_Truck_F",{-26.7759,-18.8801,0},0,{true,false}}
			};
			
            hmgs = 1;
			mountedGuns[] = { {-2.34375,-10.5359,0} };
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
				{ "Land_Cargo_Tower_V1_No7_F", { 0, 0, 0 }, 45, { true, true } },
				{ "Land_Cargo_Patrol_V1_F", { 0, 40, 0 }, 0, { true, true } },
				{ "Land_Cargo_Patrol_V1_F", { 40, 0, 0 }, 90, { true, true } },
				{ "Land_Cargo_Patrol_V1_F", { 0, -40, 0 }, 180, { true, true } },
				{ "Land_Cargo_Patrol_V1_F", { -40, 0, 0 }, 270, { true, true } }
			};

            hmgs = 1;
			mountedGuns[] = { { -20, 20, 0 }, { 20, -20, 0 } };
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
                {"Land_Com_tower_ep1",{-0.697754,0.9375,9.53674e-007},0,{true,true}},
				{"Land_HBarrier_large",{-0.335205,13.687,0},0,{true,false}},
				{"Land_HBarrier_large",{6.19824,11.1978,0},44.3849,{true,false}},
				{"Land_HBarrier_large",{-6.36255,10.5718,0},308.169,{true,false}},
				{"Land_HBarrier_large",{0.0356445,-10.9692,0},0,{true,false}},
				{"Land_HBarrier_large",{6.57031,-7.68896,0},308.169,{true,false}},
				{"Land_HBarrier_large",{-6.69116,-8.47314,0},44.3849,{true,false}},
				{"Land_Dome_Small_F",{28.5356,-12.2891,4.76837e-007},313.469,{true,true}},
				{"Land_Cargo_Patrol_V1_F",{-13.8599,15.4546,-4.76837e-007},306.062,{true,false}},
				{"Land_Cargo_Patrol_V1_F",{-11.3435,-14.5054,-4.76837e-007},224.414,{true,false}}
			};

            hmgs = 1;
			mountedGuns[] = { { 11, 1, 0} };
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
				{"Land_Garaz_s_tankem",{-9.7915,-13.364,0},0,{true,false}},
				{"Land_Garaz_s_tankem",{-9.94727,13.3496,0},180,{true,false}},
				{"Land_Garaz_s_tankem",{-28.0698,0.244873,0},90,{true,false}},
				{"RU_WarfareBArtilleryRadar",{4.9624,17.0837,0},0,{true,false}},
				{"WireFence",{18.0303,6.27246,0},90.994,{true,false}},
				{"WireFence",{17.876,-1.94092,0},90.994,{true,false}},
				{"WireFence",{17.6108,-10.1003,0},90.994,{true,false}},
				{"CUP_A2_ural_wrecked",{3.79932,-13.1606,0},313.391,{true,false}}
			};

            hmgs = 1;
			mountedGuns[] = { {-10.7554,0.791992,0} };
		};

        class downedBird : defaultMission {
            aiTypes[] = { "baForces" };

            unts[] = {6,6};
            grps[] = {1,1};
            radius[] = {200, 200};

            txtName = "STR_AI_DOWNEDBIRD_NAME";
            txtStart = "STR_AI_DOWNEDBIRD_START";
            txtEnd = "STR_AI_DOWNEDBIRD_END";

            rifleMinMax[] = {10,10};

			objComposition[] = {
				{"Land_Wreck_Heli_Attack_01_F",{-3.43506,1.96924,0},0,{true,false}},
				{"Body",{-0.156738,1.48364,0},0,{true,false}},
				{"Body",{1.07373,1.35596,0},0,{true,false}},
				{"Body",{1.23096,-1.52856,0},0,{true,false}},
				{"Body",{-0.0117188,-1.35498,0},0,{true,false}},
				{"CUP_A2_cont_net3",{5.4082,4.59692,0},270.304,{true,false}}
			};

            hmgs = 1;
			mountedGuns[] = { {6.13184,-3.15527,0} };
		};

        class fobDelta : defaultMission {
            txtName = "STR_AI_FOBDELTA_NAME";
            txtStart = "STR_AI_FOBDELTA_START";
            txtEnd = "STR_AI_FOBDELTA_END";

            vehicle = 1;
            paradropVehicle = 1;

			objComposition[] = {
				{"Land_BagBunker_Large_F",{0.367676,27.2891,0},0,{true,true}},
				{"Land_BagBunker_Large_F",{25.6963,0.596191,0},90.205,{true,true}},
				{"Land_BagBunker_Large_F",{-26.5977,-0.254883,0},270.781,{true,true}},
				{"Land_BagBunker_Large_F",{-0.133789,-26.3394,0},183.385,{true,true}},
				{"CUP_A2_hbarrier5",{9.98633,29.6279,0},0,{true,true}},
				{"CUP_A2_hbarrier5",{15.563,29.6841,0},0,{true,true}},
				{"CUP_A2_hbarrier5",{21.1943,29.7534,0},0,{true,true}},
				{"CUP_A2_hbarrier5",{29.4214,12.2031,0},270.582,{true,true}},
				{"CUP_A2_hbarrier5",{29.4219,17.7803,0},270.582,{true,true}},
				{"CUP_A2_hbarrier5",{29.4097,23.4116,0},270.582,{true,true}},
				{"CUP_A2_hbarrier5",{29.021,-9.42188,0},91.2959,{true,true}},
				{"CUP_A2_hbarrier5",{28.9512,-14.9985,0},91.2959,{true,true}},
				{"CUP_A2_hbarrier5",{28.8931,-20.6299,0},91.2959,{true,true}},
				{"CUP_A2_hbarrier5",{11.1611,-28.458,0},1.87773,{true,true}},
				{"CUP_A2_hbarrier5",{16.7368,-28.5845,0},1.87773,{true,true}},
				{"CUP_A2_hbarrier5",{22.3672,-28.6997,0},1.87773,{true,true}},
				{"CUP_A2_hbarrier5",{-10.0806,-28.3408,0},180.694,{true,true}},
				{"CUP_A2_hbarrier5",{-15.6577,-28.3296,0},180.694,{true,true}},
				{"CUP_A2_hbarrier5",{-21.2891,-28.3306,0},180.694,{true,true}},
				{"CUP_A2_hbarrier5",{-29.3032,-10.6821,0},91.2756,{true,true}},
				{"CUP_A2_hbarrier5",{-29.3711,-16.2588,0},91.2756,{true,true}},
				{"CUP_A2_hbarrier5",{-29.4272,-21.8901,0},91.2756,{true,true}},
				{"CUP_A2_hbarrier5",{-28.8296,10.0698,0},269.715,{true,true}},
				{"CUP_A2_hbarrier5",{-28.9136,15.646,0},269.715,{true,true}},
				{"CUP_A2_hbarrier5",{-29.0107,21.2773,0},269.715,{true,true}},
				{"CUP_A2_hbarrier5",{-11.5015,29.5913,0},180.297,{true,true}},
				{"CUP_A2_hbarrier5",{-17.0786,29.564,0},180.297,{true,true}},
				{"CUP_A2_hbarrier5",{-22.71,29.5239,0},180.297,{true,true}},
				{"Land_wpp_Turbine_V1_F",{-8.7334,2.23828,0},0,{true,true}},
				{"Land_Barracks_01_grey_F",{6.49365,-0.319336,0},90,{true,true}},
				{"Land_PortableLight_double_F",{19.0503,24.7153,0},221.727,{true,true}},
				{"Land_PortableLight_double_F",{20.4897,-13.9175,0},309.563,{true,true}},
				{"Land_PortableLight_double_F",{-26.8506,-24.2549,0},230.624,{true,true}},
				{"Land_PortableLight_double_F",{-11.3574,-3.77539,0},99.5582,{true,true}},
				{"Gue_WarfareBBarracks",{-15.4814,15.1729,0},0,{true,true}}
			};

            hmgs = 1;
			mountedGuns[] = { {18.98,15.5063,0}, {-23.6621,-10.8213,0}, {21.916,-19.7681,0} };
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
				{"Land_HBarrier_5_F",{5.39258,-19.1318,0},0.0233765,{true,false}},
				{"Land_HBarrier_5_F",{-11.3818,10.3931,0},2.05508,{true,false}},
				{"Land_HBarrier_5_F",{-17.3862,6.12646,0},307.294,{true,false}},
				{"Land_HBarrier_5_F",{10.9609,-19.1416,0},0.0233765,{true,false}},
				{"Land_HBarrier_5_F",{10.6143,9.87158,0},2.05508,{true,false}},
				{"Land_HBarrier_5_F",{-7.83252,12.2573,0},270.667,{true,false}},
				{"Land_HBarrier_5_F",{-7.73682,17.9175,0},270.667,{true,false}},
				{"Land_HBarrier_5_F",{7.28467,11.98,0},270.667,{true,false}},
				{"Land_HBarrier_5_F",{7.32373,17.6343,0},270.667,{true,false}},
				{"Land_HBarrier_5_F",{-0.263672,-19.085,0},0.0233765,{true,false}},
				{"Land_HBarrier_5_F",{-18.894,1.52881,0},269.796,{true,false}},
				{"Land_HBarrier_5_F",{18.4751,-3.50244,0},269.796,{true,false}},
				{"Land_HBarrier_5_F",{18.4673,-9.07275,0},269.796,{true,false}},
				{"Land_HBarrier_5_F",{18.5435,-10.147,0},269.796,{true,false}},
				{"Land_Cargo_HQ_V2_F",{-10.9272,-8.84814,-4.76837e-007},270.541,{true,false}},
				{"Land_HBarrier_5_F",{-2.36475,-4.48682,0},269.796,{true,false}},
				{"Land_HBarrier_5_F",{-2.37256,-10.0552,0},269.796,{true,false}},
				{"Land_HBarrier_5_F",{-2.33545,-15.5942,0},269.796,{true,false}},
				{"Land_HBarrier_3_F",{-14.7212,9.47754,0},130,{true,false}},
				{"Land_HBarrier_5_F",{16.7891,5.90234,0},223.764,{true,false}},
				{"Land_HBarrier_3_F",{13.752,8.93262,0},46.4701,{true,false}},
				{"Land_HBarrier_5_F",{14.9683,-17.2012,0},305.711,{true,false}},
				{"Land_HBarrier_3_F",{17.5713,-13.7983,0},128.417,{true,false}},
				{"Land_Cargo_Patrol_V2_F",{-6.03418,14.5059,-4.76837e-007},1.91972,{true,false}},
				{"Land_HBarrier_5_F",{-4.16309,19.9204,0},2.05508,{true,false}},
				{"Land_HBarrier_5_F",{-4.45215,10.0708,0},2.05508,{true,false}},
				{"Land_HBarrier_5_F",{-2.42822,6.42725,0},270.119,{true,false}},
				{"Land_HBarrier_5_F",{18.5024,1.96045,0},269.796,{true,false}},
				{"Land_GarbageBags_F",{-5.73047,7.22119,0},301.591,{true,false}},
				{"Land_HBarrier_3_F",{-2.18896,17.4243,0},92.4857,{true,false}},
				{"Land_HBarrier_5_F",{-18.894,-9.60596,0},269.796,{true,false}},
				{"Land_HBarrier_5_F",{-18.9019,-15.1763,0},269.796,{true,false}},
				{"Land_HBarrier_5_F",{-18.8667,-4.14697,0},269.796,{true,false}},
				{"Land_HBarrier_5_F",{-11.3701,-18.8643,0},180.674,{true,false}},
				{"Land_HBarrier_5_F",{-5.81738,-18.9971,0},180.674,{true,false}},
				{"Land_HBarrier_5_F",{-16.8057,-18.7334,0},180.674,{true,false}},
				{"Land_Cargo_Patrol_V2_F",{15.0376,-14.7251,-4.76837e-007},126.833,{true,false}},
				{"Land_ScrapHeap_1_F",{1.97119,-10.2446,0},265.634,{true,false}},
				{"Land_ScrapHeap_2_F",{1.83936,-3.98242,0},85.4637,{true,false}},
				{"MetalBarrel_burning_F",{-10.6362,2.99414,0},289.211,{true,false}},
				{"Land_Garbage_square5_F",{-11.2207,3.10938,0},219.536,{true,false}},
				{"Land_JunkPile_F",{11.9492,3.11133,0},270.784,{true,false}},
				{"Land_Sign_WarningMilitaryArea_F",{-2.85889,21.064,0},2.31973,{true,false}},
				{"Land_Pallets_stack_F",{10.4517,1.49609,0},44.6072,{true,false}},
				{"Land_GarbageBarrel_01_F",{5.65283,-3.96289,0},98.2682,{true,false}},
				{"Land_Garbage_square5_F",{-2.16357,13.2002,0},271.827,{true,false}},
				{"Land_Garbage_square5_F",{3.72852,-6.46875,0},294.992,{true,false}},
				{"Land_CratesShabby_F",{10.6616,-0.0136719,0},161.852,{true,false}},
				{"Land_Loudspeakers_F",{-7.21387,-3.5752,0},271.827,{true,false}}
			};

            hmgs = 1;
			mountedGuns[] = { {7.93896,5.89258,0} };
		};

        class prophet : defaultMission {
            txtName = "STR_AI_PROPHET_NAME";
            txtStart = "STR_AI_PROPHET_START";
            txtEnd = "STR_AI_PROPHET_END";

            aiTypes[] = { "russianForces", "usForces" };

            unts[] = {20,24};
            grps[] = {4,6};

            rifleMinMax[] = {20,25};
            radius[] = {300,350};

            objComposition[] = {
                {"Land_Wreck_Traw2_F",{-6.375,6.89648,0},0,{true,false}},
				{"Land_Wreck_Traw_F",{2.65979,-15.6157,0},329.034,{true,false}},
				{"Land_Misc_Cargo2A_EP1",{-17.4907,3.92383,0},226.853,{true,false}},
				{"Land_Misc_Cargo2A_EP1",{-17.7355,-1.88086,0},23.5964,{true,false}},
				{"Land_Misc_Cargo1C_EP1",{-17.2067,13.4033,0},0,{true,false}},
				{"Land_Misc_Cargo1C_EP1",{-12.6035,-17.5977,0},0,{true,false}},
				{"snow",{-9.30591,25.0332,0},0,{true,false}},
				{"snow",{-14.9951,12.3882,0},0,{true,false}},
				{"snow",{-14.7238,3.1582,0},0,{true,false}},
				{"snow",{-20.5967,-9.87695,0},0,{true,false}},
				{"snow",{-20.2155,-9.70459,0},0,{true,false}},
				{"snow",{-9.76331,-7.64209,0},0,{true,false}},
				{"snow",{-8.41687,-15.6333,0},0,{true,false}},
				{"snow",{1.94849,4.78467,0},0,{true,false}},
				{"snow",{-9.08594,-1.81006,0},0,{true,false}},
				{"snow",{7.60083,-21.1821,0},0,{true,false}},
				{"snow",{8.271,11.5342,0},0,{true,false}},
				{"snow",{5.11694,41.5776,0},0,{true,false}},
				{"snow",{-6.24463,33.7988,0},0,{true,false}},
				{"snow",{5.86316,21.3096,0},0,{true,false}},
				{"snow",{35.0028,3.27051,0},206.542,{true,false}},
				{"snow",{62.0226,2.73145,0},251.247,{true,false}},
				{"snow",{48.5511,5.71094,0},310.647,{true,false}},
				{"snow",{22.6008,3.29736,0},0,{true,false}},
				{"snow",{13.6143,0.747559,0},0,{true,false}},
				{"snow",{5.3999,-12.8877,0},0,{true,false}},
				{"snow",{0.0334473,-6.78711,0},0,{true,false}},
				{"snow",{14.7268,-5.15918,0},0,{true,false}},
				{"snow",{-7.97485,14.0493,0},0,{true,false}},
				{"snow",{-4.14233,16.126,0},0,{true,false}},
				{"CUP_A2_snowman",{4.44128,-10.9111,0},55.8011,{true,false}},
				{"CargoNet_01_barrels_F",{-3.26941,0.034668,0},0,{true,false}},
				{"CargoNet_01_barrels_F",{-4.5719,1.80859,0},0,{true,false}},
				{"CargoNet_01_barrels_F",{-2.72021,2.14453,0},0,{true,false}},
				{"CargoNet_01_box_F",{-3.15625,3.41553,0},0,{true,false}},
				{"Land_Misc_Cargo2A_EP1",{10.3022,14.1953,0},325.688,{true,false}},
				{"CUP_A1_palm_08small",{-15.9727,-13.6167,0},0,{true,false}},
				{"CUP_A1_palm_08small",{-21.2949,-2.88281,0},0,{true,false}},
				{"CUP_A1_palm_09",{-9.35754,-20.3838,0},0,{true,false}},
				{"CUP_A1_palm_09",{-24.3591,-17.9141,0},0,{true,false}},
				{"CUP_A1_palm_09",{-22.7543,4.17725,0},0,{true,false}},
				{"CUP_A1_palm_09",{2.7262,37.8164,0},0,{true,false}},
				{"CUP_A1_palm_09",{27.9686,3.93896,0},0,{true,false}},
				{"CUP_A1_palm_09",{16.1897,-19.7212,0},0,{true,false}},
				{"CUP_palm_08small",{10.9725,8.88623,0},0,{true,false}},
				{"CUP_A1_rockS_02",{-1.50732,-37.7915,-9.53674e-007},352.986,{true,false}},
				{"CUP_A2_rubble_rocks_01",{5.0459,-28.0791,0},0,{true,false}},
				{"Land_Pier_wall_F",{21.6823,-39.938,0},0,{true,false}}
			};
        };
        
        class bellend : defaultMission {

            txtName = "STR_AI_BELLEND_NAME";
            txtStart = "STR_AI_BELLEND_START";
            txtEnd = "STR_AI_BELLEND_END";

            vehicle = 1;
            paradropVehicle = 1;
            
            hedgehogs = 1;
            
			objComposition[] = {
				{"Land_fort_rampart",{13.4563,5.25769,0},7.86644,{true,false}},
				{"Land_fort_rampart",{4.74121,6.45282,0},7.86644,{true,false}},
				{"Land_fort_rampart",{4.68774,-8.85516,0},171.334,{true,false}},
				{"Land_fort_rampart",{13.4526,-7.48907,0},171.334,{true,false}},
				{"Land_fort_artillery_nest",{26.1848,-1.77393,0},270,{true,false}},
				{"Land_fort_artillery_nest",{-10.5837,7.6355,0},135,{true,false}},
				{"Land_fort_artillery_nest",{-10.5891,-10.0229,0},45,{true,false}},
				{"Land_Shoot_House_Wall_Crouch_F",{28.6104,-1.94397,0},0,{true,false}},
				//  {"AmmoCrates_NoInteractive_Large",{-2.4895,3.57953,0},65.3558,{true,false}},
				//  {"AmmoCrates_NoInteractive_Medium",{-1.64526,2.43262,0},0,{true,false}},
				//  {"AmmoCrates_NoInteractive_Large",{-2.64429,2.35309,0},0,{true,false}},
				{"Land_Antenna",{-1.16235,1.7251,0},0,{true,false}},
				{"Land_CamoNetVar_EAST",{-10.6899,6.75275,0},127.698,{true,false}},
				{"Land_CamoNetVar_EAST",{-10.5222,-8.95673,0},45.8173,{true,false}},
				{"Land_Pallet_MilBoxes_F",{10.3862,-2.66681,0},0,{true,false}},
				{"Land_Shed_08_grey_F",{69.0332,18.5894,0},105.293,{true,false}},
				{"Land_Bunker_01_blocks_3_F",{65.3364,7.08521,0},108.242,{true,false}},
				{"Land_Bunker_01_blocks_3_F",{59.5925,-0.443115,0},150.559,{true,false}},
				{"Land_Bunker_01_blocks_3_F",{51.2839,-4.35907,0},158.858,{true,false}},
				{"Land_Bunker_01_blocks_3_F",{43.1143,-3.56219,0},200.123,{true,false}},
				{"CUP_oliva",{-3.36084,15.3663,0},0,{true,false}},
				{"CUP_oliva",{-7.05664,17.4606,0},0,{true,false}},
				{"CUP_oliva",{-12.0098,17.0548,0},0,{true,false}},
				{"CUP_oliva",{-15.1292,14.995,0},0,{true,false}},
				{"CUP_oliva",{-18.572,10.6563,0},0,{true,false}},
				{"CUP_oliva",{-19.4761,5.56134,0},0,{true,false}},
				{"CUP_oliva",{-16.4282,-1.5769,0},0,{true,false}},
				{"CUP_oliva",{-18.8486,-8.10248,0},0,{true,false}},
				{"CUP_oliva",{-13.4802,-18.0519,0},0,{true,false}},
				{"CUP_oliva",{-17.2998,-14.1666,0},0,{true,false}},
				{"CUP_oliva",{-8.03369,-18.5259,0},0,{true,false}},
				{"CUP_oliva",{-2.56592,-14.879,-0.282662},0,{true,false}},
				{"CUP_oliva",{-1.37695,11.1058,-0.421629},0,{true,false}},
				{"CUP_oliva",{-2.60986,-12.5026,-0.768505},0,{true,false}},
				{"CUP_oliva",{-3.87744,12.623,-0.539531},0,{true,false}},
				{"CUP_oliva",{-5.83569,-17.1689,-0.153094},0,{true,false}},
				{"CUP_oliva",{-3.56323,-16.9781,0},0,{true,false}},
				{"CUP_oliva",{-2.08594,9.19421,0},0,{true,false}},
				{"CUP_oliva",{-0.139404,9.05841,-0.252541},0,{true,false}},
				{"CUP_oliva",{-3.80249,10.6555,-0.951837},0,{true,false}},
				{"CUP_oliva",{2.10205,12.038,0},0,{true,false}},
				{"CUP_oliva",{1.44629,10.7679,0},0,{true,false}},
				{"CUP_oliva",{0.960449,12.7688,0},0,{true,false}},
				{"CUP_oliva",{-2.35986,6.54669,0},0,{true,false}},
				{"CUP_oliva",{-1.68506,5.9303,0},0,{true,false}},
				{"CUP_oliva",{-1.30615,-13.8986,-0.267819},0,{true,false}},
				{"CUP_oliva",{-0.487305,-14.146,-0.116563},0,{true,false}},
				{"CUP_oliva",{0.66626,-13.6124,0},0,{true,false}},
				{"CUP_oliva",{-0.687744,-12.0199,-0.460567},0,{true,false}},
				{"CUP_oliva",{2.56226,-13.7626,0},0,{true,false}},
				{"CUP_oliva",{0.110596,-10.7106,0},0,{true,false}},
				{"CUP_oliva",{-17.8303,-1.27783,0},0,{true,false}},
				{"CUP_oliva",{-18.647,-4.08264,0},0,{true,false}},
				{"CUP_oliva",{-19.5586,-3.36938,0},0,{true,false}},
				{"CUP_oliva",{-18.3086,-1.45966,0},0,{true,false}},
				{"CUP_oliva",{-17.3198,-0.166748,0},0,{true,false}},
				{"CUP_oliva",{-20.7185,0.572205,0},0,{true,false}},
				{"CUP_oliva",{-20.9883,-0.714111,0},0,{true,false}},
				{"CUP_oliva",{-22.4641,-2.20544,0},0,{true,false}},
				{"CUP_oliva",{-21.1829,1.27808,0},0,{true,false}},
				{"CUP_oliva",{-19.9373,2.65601,0},0,{true,false}},
				{"CUP_oliva",{-19.3743,-4.35614,0},0,{true,false}},
				{"CUP_oliva",{-19.9111,-5.50049,0},0,{true,false}}
			};

            hmgs = 1;
			mountedGuns[] = { { -10.5024, 7.82178, 0 }, { -10.6729, -10.1689, 0 } };
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
                {"UAZWreck",{0,0,0},0,{true,true}},
				{"Land_Fire_barrel_burning",{-6,-15,0},0,{true,true}},
				{"Land_Fire_barrel_burning",{6,-15,0},0,{true,true}}
            };
        };

        
        class plantation : defaultMission {

            txtName = "STR_AI_PLANTATION_NAME";
            txtStart = "STR_AI_PLANTATION_START";
            txtEnd = "STR_AI_PLANTATION_END";

            rifleMinMax[] = {10, 20};
            handgunMinMax[] = {1, 2};
            itemMinMax[] = {10, 15};
            aiTypes[] = { "baForces" };

            objComposition[] = {
                {"Land_ZalChata",{13.0195,4.98657,0},0,{true,false}},
                {"Land_Bouda2_vnitrek",{1.53613,-10.4993,0},89.7405,{true,false}},
                {"Land_WoodPile_large_F",{3.98535,0.374023,0},0,{true,false}},
                {"Land_WoodPile_large_F",{2.86133,0.23584,0},0,{true,false}},
                {"Land_Misc_Garb_4_EP1",{8.78662,7.427,0},0,{true,false}},
                {"Land_Fire_burning",{2.28076,7.29346,0},0,{true,false}},
                {"Land_CampingChair_V1_F",{3.13232,6.14355,0},309.439,{true,false}},
                {"Land_CampingChair_V1_F",{3.27832,8.48877,0},224.408,{true,false}},
                {"CUP_A2_uaz_wrecked",{-0.212402,0.490723,0},63.5037,{true,false}},
                {"CUP_A2_t_willow2s_dead_pmc",{-2.52686,3.95386,0},0,{true,false}},
                {"CUP_A2_t_willow2s_dead_pmc",{21.064,11.3071,0},0,{true,false}},
                {"CUP_A2_t_willow2s_dead_pmc",{11.2744,15.9297,0},0,{true,false}},
                {"CUP_A2_misc_fallentree1",{-0.65332,20.707,0},86.999,{true,false}},
                {"CUP_str_kastan",{16.7153,15.5068,0},0,{true,false}},
                {"CUP_str_kastan",{-0.0180664,18.4661,0},0,{true,false}},
                {"CUP_str_kastan",{14.9722,-9.17749,0},0,{true,false}},
                {"CUP_str_kastan",{8.65918,-17.0386,0},0,{true,false}},
                {"CUP_str_kastan",{-3.625,-20.019,0},0,{true,false}},
                {"CUP_str_kastan",{-9.38965,-17.0759,0},0,{true,false}},
                {"CUP_str_kastan",{-8.47168,-6.08008,0},0,{true,false}},
                {"CUP_str_kastan",{-15.8657,-4.92773,0},0,{true,false}},
                {"CUP_str_kastan",{-20.5776,-14.2969,0},0,{true,false}},
                {"CUP_str_kastan",{-13.4248,-24.6152,0},0,{true,false}},
                {"CUP_p_fiberPlant_EP1",{-6.45703,-3.73145,0},0,{true,false}},
                {"CUP_p_fiberPlant_EP1",{-11.0557,-3.43945,0},0,{true,false}},
                {"CUP_p_fiberPlant_EP1",{-7.2627,1.54663,0},0,{true,false}},
                {"CUP_p_fiberPlant_EP1",{-11.7632,2.21875,0},0,{true,false}},
                {"Land_CamoNetB_EAST",{-9.23438,-2.14966,0},0,{true,false}}
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
                {"Land_HBarrier_5_F",{13.4346,3.98804,0},268.147,{true,false}},
                {"Land_HBarrier_5_F",{11.5835,8.52319,0},227.148,{true,false}},
                {"Land_HBarrier_5_F",{-9.65723,3.94214,0},267.546,{true,false}},
                {"Land_HBarrier_5_F",{-7.9502,8.00659,0},135.892,{true,false}},
                {"Land_HBarrier_5_F",{-9.12451,-7.23608,0},87.9017,{true,false}},
                {"Land_HBarrier_5_F",{-3.22217,-13.5457,0},178.557,{true,false}},
                {"Land_HBarrier_5_F",{-7.26709,-11.7637,0},46.9021,{true,false}},
                {"Land_HBarrier_5_F",{7.8418,-13.1616,0},356.646,{true,false}},
                {"Land_HBarrier_5_F",{13.8711,-7.15698,0},87.3005,{true,false}},
                {"Land_Cargo_Patrol_V1_F",{2.18506,-11.9631,-4.76837e-007},178.651,{true,false}},
                {"Land_Cargo_House_V1_F",{7.90771,1.77368,0},267.76,{true,false}},
                {"Land_Cargo_House_V1_F",{-3.81104,-5.49609,0},87.6723,{true,false}},
                {"Land_HBarrier_5_F",{-3.47412,9.84888,0},178.557,{true,false}},
                {"Land_HBarrier_5_F",{7.53174,10.136,0},178.557,{true,false}},
                {"Land_HBarrier_5_F",{2.2876,-13.3562,0},178.557,{true,false}},
                {"Land_HBarrier_5_F",{-9.38574,-1.66016,0},87.7722,{true,false}},
                {"Land_HBarrier_5_F",{13.606,-1.62085,0},87.9017,{true,false}},
                {"Land_Razorwire_F",{-12.3408,12.4575,0},314.574,{true,false}},
                {"Land_Razorwire_F",{-11.8374,-16.9211,0},226.447,{true,false}},
                {"Land_Razorwire_F",{15.9414,13.0825,0},226.555,{true,false}},
                {"Land_Razorwire_F",{-16.397,-2.31738,0},265.407,{true,false}},
                {"Land_Razorwire_F",{2.75781,-21.1423,0},177.222,{true,false}},
                {"Land_Razorwire_F",{20.5679,-1.86035,0},265.407,{true,false}},
                {"Land_HBarrier_1_F",{12.355,16.7085,0},318.366,{true,false}},
                {"Land_HBarrier_1_F",{19.1187,9.4292,0},318.366,{true,false}},
                {"Land_HBarrier_1_F",{20.0771,2.89795,0},355.469,{true,false}},
                {"Land_HBarrier_1_F",{20.9541,-6.52588,0},355.469,{true,false}},
                {"Land_HBarrier_1_F",{7.4541,-20.9465,0},86.9207,{true,false}},
                {"Land_HBarrier_1_F",{-2.18457,-21.4934,0},86.9207,{true,false}},
                {"Land_HBarrier_1_F",{-8.64697,-20.3779,0},137.661,{true,false}},
                {"Land_HBarrier_1_F",{-15.397,-13.542,0},137.661,{true,false}},
                {"Land_HBarrier_1_F",{-16.1899,-7.16895,0},173.384,{true,false}},
                {"Land_HBarrier_1_F",{-16.9653,2.62012,0},173.384,{true,false}},
                {"Land_HBarrier_1_F",{-15.6738,9.09253,0},224.613,{true,false}},
                {"Land_HBarrier_1_F",{-8.9043,15.9851,0},224.613,{true,false}},
                {"Land_HBarrier_3_F",{6.1665,16.8318,0},358.802,{true,false}},
                {"Land_HBarrier_3_F",{-2.45654,16.5349,0},358.802,{true,false}},
                {"Land_PortableLight_double_F",{-6.99902,7.03735,0},136.662,{true,false}},
                {"Land_PortableLight_double_F",{5.80176,8.74097,0},340.729,{true,false}},
                {"Land_PaperBox_closed_F",{11.396,-6.22266,0},312.011,{true,false}},
                {"Land_PaperBox_closed_F",{9.47998,-5.54688,0},69.6406,{true,false}},
                {"Land_WaterTank_F",{8.30518,6.99146,0},358.416,{true,false}},
                {"Land_ToiletBox_F",{-7.22217,-0.739014,0},88.4168,{true,false}},
                {"Land_HBarrier_1_F",{13.8296,-10.0669,0},42.7515,{true,false}},
                {"Land_HBarrier_1_F",{10.8467,-12.8435,0},48.1634,{true,false}},
                {"Land_TTowerSmall_2_F",{-3.49609,-2.7356,0},358.802,{true,false}},
                {"Land_GarbageBarrel_01_F",{-6.78857,3.19653,0},164.046,{true,false}},
                {"Land_ToiletBox_F",{-7.30615,1.82739,0},88.4194,{true,false}},
                {"Land_HBarrier_3_F",{17.8892,-12.2185,0},305.431,{true,false}},
                {"Land_HBarrier_3_F",{13.1191,-17.1951,0},324.789,{true,false}},
                {"CUP_A2_t_amygdalusc2s_ep1",{-13.6738,18.2974,4.76837e-007},0,{true,false}},
                {"CUP_A2_t_amygdalusc2s_ep1",{-19.3115,13.4075,4.76837e-007},0,{true,false}},
                {"CUP_A2_t_amygdalusc2s_ep1",{-23.3037,5.80322,4.76837e-007},0,{true,false}},
                {"CUP_A2_t_amygdalusc2s_ep1",{-22.0513,-1.76221,4.76837e-007},0,{true,false}},
                {"CUP_A2_t_amygdalusc2s_ep1",{-16.7593,-17.6182,4.76837e-007},0,{true,false}},
                {"CUP_A2_t_amygdalusc2s_ep1",{-2.29053,-29.5593,4.76837e-007},0,{true,false}},
                {"CUP_A2_t_amygdalusc2s_ep1",{7.50684,-28.7292,4.76837e-007},0,{true,false}},
                {"CUP_A2_t_amygdalusc2s_ep1",{13.5947,-26.3386,4.76837e-007},0,{true,false}},
                {"CUP_A2_t_amygdalusc2s_ep1",{19.7163,-19.1792,4.76837e-007},0,{true,false}},
                {"CUP_A2_t_amygdalusc2s_ep1",{26.5786,-10.5427,4.76837e-007},0,{true,false}},
                {"CUP_A2_t_amygdalusc2s_ep1",{28.6685,-1.17554,4.76837e-007},0,{true,false}},
                {"CUP_A2_t_amygdalusc2s_ep1",{29.5176,11.6455,4.76837e-007},0,{true,false}},
                {"CUP_A2_t_amygdalusc2s_ep1",{21.4849,19.2864,4.76837e-007},0,{true,false}},
                {"CUP_A2_t_amygdalusc2s_ep1",{10.9473,21.4797,4.76837e-007},0,{true,false}},
                {"CUP_A2_t_amygdalusc2s_ep1",{-5.37256,25.8696,4.76837e-007},0,{true,false}},
                {"CUP_A2_t_amygdalusc2s_ep1",{-18.2266,22.2195,4.76837e-007},0,{true,false}},
                {"CUP_A2_t_amygdalusc2s_ep1",{-30.4199,21.1721,4.76837e-007},0,{true,false}},
                {"CUP_A2_t_amygdalusc2s_ep1",{-39.9019,10.665,4.76837e-007},0,{true,false}},
                {"CUP_A2_t_amygdalusc2s_ep1",{-39.5542,5.22144,4.76837e-007},0,{true,false}},
                {"CUP_A2_t_amygdalusc2s_ep1",{-32.2793,-7.62988,4.76837e-007},0,{true,false}},
                {"CUP_A2_t_amygdalusc2s_ep1",{4.02393,39.4236,4.76837e-007},0,{true,false}},
                {"CUP_A2_t_fagus2s",{5.17236,20.4133,0},0,{true,false}},
                {"CUP_A2_t_fagus2s",{-2.06201,20.2024,0},0,{true,false}},
                {"CUP_A2_t_fagus2s",{29.0254,-18.8767,0},0,{true,false}}
            };
            hmgs = 1;
            mountedGuns[] = { {1.58887,13.4902,0} };
        };

        class supermarket : defaultMission {
            aiTypes[] = { "baForces" };
            txtName = "STR_AI_SUPERMARKET_NAME";
            txtStart = "STR_AI_SUPERMARKET_START";
            txtEnd = "STR_AI_SUPERMARKET_END";
            
            objComposition[] = {
                {"Land_R_A_GeneralStore_01a",{-6.52539,14.186,0},0,{true,false}},
                {"LADAWreck",{-3.85693,-1.3396,0},0,{true,false}},
                {"Land_Wreck_CarDismantled_F",{4.78174,-1.26563,0},309.614,{true,false}},
                {"Land_Sacks_heap_F",{-1.53467,-1.32861,0},0,{true,false}},
                {"Land_Sacks_heap_F",{-1.34033,-3.00659,0},0,{true,false}},
                {"CUP_tv_a",{-1.32031,-4.19556,0},114.742,{true,false}},
                {"SmallTV",{-0.21875,-2.35229,0},0,{true,false}},
                {"CUP_A2_radio_b",{-0.344238,-3.10254,0},0,{true,false}},
                {"Land_FMradio_F",{-0.338379,-2.89478,0},0,{true,false}}
            };
        };

        class thunderdome : defaultMission {
            txtName = "STR_AI_THUNDERDOME_NAME";
            txtStart = "STR_AI_THUNDERDOME_START";
            txtEnd = "STR_AI_THUNDERDOME_END";

            aiTypes[] = { "russianForces", "usForces", "guerillas" };
            objComposition[] = {
                { "Land_Dome_Big_F", { 0, 0, 0 }, 45, { true, true } },
                { "Land_Dome_Small_F", { 0, 40, 0 }, 0, { true, true } },
                { "Land_Research_house_V1_F", { 40, 0, 0 }, 90, { true, true } },
                { "Land_Dome_Small_F", { 0, -40, 0 }, 180, { true, true } },
                { "Land_Research_house_V1_F", { -40, 0, 0 }, 270, { true, true } }
            };

            hmgs = 1;
            mountedGuns[] = {
                { -20, 20, 0 },
                { 20, 20, 0 },
                { 20, -20, 0 },
                { -20, -20, 0 }
            };
        };

        class solarTransformer : defaultMission {
            txtName = "STR_AI_SOLARTRANSFORMER_NAME";
            txtStart = "STR_AI_SOLARTRANSFORMER_START";
            txtEnd = "STR_AI_SOLARTRANSFORMER_END";

            aiTypes[] = { "guerillas", "baForces" };

            objComposition[] = {
                {"Land_spp_Transformer_F",{0.183594,-2.02478,0},0,{true,true}},
                {"Land_SolarPanel_1_F",{0.131836,4.36584,0},0,{true,true}},
                {"Land_SolarPanel_1_F",{0.0380859,-7.56348,0},180.837,{true,true}},
                {"Land_TTowerSmall_1_F",{-0.554199,1.73889,-4.76837e-007},0,{true,true}},
                {"Land_Airport_Tower_F",{12.6963,2.5647,0},0,{true,true}},
                {"Land_TinWall_01_m_4m_v2_F",{5.23096,9.0022,0},0,{true,false}},
                {"Land_TinWall_01_m_4m_v2_F",{1.2749,8.97961,0},0,{true,false}},
                {"Land_TinWall_01_m_4m_v2_F",{-2.72021,8.95947,0},0,{true,false}},
                {"Land_TinWall_01_m_4m_v2_F",{-6.67627,8.93689,0},0,{true,false}},
                {"Land_TinWall_01_m_4m_v2_F",{5.28564,-12.8948,0},0,{true,false}},
                {"Land_TinWall_01_m_4m_v2_F",{1.32959,-12.9174,0},0,{true,false}},
                {"Land_TinWall_01_m_4m_v2_F",{-2.66553,-12.9375,0},0,{true,false}},
                {"Land_TinWall_01_m_4m_v2_F",{-6.62158,-12.9601,0},0,{true,false}},
                {"Land_TinWall_01_m_4m_v2_F",{-8.52686,0.859863,0},269.757,{true,false}},
                {"Land_TinWall_01_m_4m_v2_F",{-8.4873,-3.09607,0},269.757,{true,false}},
                {"Land_TinWall_01_m_4m_v2_F",{-8.4502,-7.09106,0},269.757,{true,false}},
                {"Land_TinWall_01_m_4m_v2_F",{-8.41113,-11.047,0},269.757,{true,false}},
                {"Land_TinWall_01_m_4m_v2_F",{-8.5127,4.86768,0},269.757,{true,false}},
                {"Hedgehog_EP1",{-15.0752,-0.426636,0},0,{true,false}},
                {"Hedgehog_EP1",{-3.72217,12.533,0},0,{true,false}},
                {"Hedgehog_EP1",{-16.1699,-9.12708,0},0,{true,false}},
                {"Hedgehog_EP1",{4.46045,-23.868,0},0,{true,false}},
                {"Hedgehog_EP1",{29.3652,-17.2954,0},0,{true,false}},
                {"Hedgehog_EP1",{15.27,-8.31873,0},0,{true,false}},
                {"Hedgehog_EP1",{29.665,17.9703,0},0,{true,false}},
                {"Hedgehog_EP1",{-1.15771,18.3754,0},0,{true,false}},
                {"Hedgehog_EP1",{19.6909,24.5626,0},0,{true,false}},
                {"Hedgehog_EP1",{-20.4248,6.15454,0},0,{true,false}},
                {"CUP_A2_hmmwv_wrecked",{-14.1748,-2.91199,0},0,{true,false}}
            };
        };

        class radarDome : defaultMission {
            txtName = "STR_AI_RADARDOME_NAME";
            txtStart = "STR_AI_RADARDOME_START";
            txtEnd = "STR_AI_RADARDOME_END";

            objComposition[] = {
                {"Land_Radar_F",{-8.84619,3.26514,0},0,{true,true}},
                {"Land_Razorwire_F",{-5.83301,28.0098,0},0,{true,false}},
                {"Land_Razorwire_F",{-34.8921,3.83838,0},90.287,{true,false}},
                {"Land_Razorwire_F",{-34.7378,-12.0947,0},90.287,{true,false}},
                {"Land_Razorwire_F",{-34.6797,21.5786,0},90.287,{true,false}},
                {"Land_Razorwire_F",{-23.1001,28.6738,0},0,{true,false}},
                {"Land_Razorwire_F",{12.9141,27.6953,0},0,{true,false}},
                {"Land_Razorwire_F",{-5.53027,-22.6309,0},0,{true,false}},
                {"Land_Razorwire_F",{-22.7974,-21.9668,0},0,{true,false}},
                {"Land_Razorwire_F",{13.2168,-22.9453,0},0,{true,false}},
                {"Land_Razorwire_F",{20.7554,3.92236,0},90.287,{true,false}},
                {"Land_Razorwire_F",{20.9097,-12.0107,0},90.287,{true,false}},
                {"Land_Razorwire_F",{20.9678,21.6626,0},90.287,{true,false}},
                {"CUP_A2_buildingwip",{10.6792,-52.1143,0},0,{true,false}},
                {"CUP_A2_cranecon",{30.1416,4.55762,0},0,{true,false}}
            };

            hmgs = 1;
            mountedGuns[] = { {-6.32373,-28.0659,0} };
        };

        class drugLab : defaultMission {
            txtName = "STR_AI_DRUGLAB_NAME";
            txtStart = "STR_AI_DRUGLAB_START";
            txtEnd = "STR_AI_DRUGLAB_END";

            vehicle = 1;
            paradropVehicle = 1;

            aiTypes[] = { "guerillas", "baForces" };
            objComposition[] = {
                {"RU_WarfareBUAVterminal",{5.25293,-1.0354,0},0,{true,true}},
                {"Land_CampingTable_F",{1.68555,-2.23584,0},269.009,{false,false}},
                {"Land_Money_F",{1.53027,-1.64941,-0.813005},0,{false,false}},
                {"Land_Money_F",{1.74902,-1.80444,-0.813005},0,{false,false}},
                {"Land_Money_F",{1.5083,-1.85547,-0.813005},0,{false,false}},
                {"Land_Money_F",{1.79883,-2.03979,-0.813005},0,{false,false}},
                {"Land_Sacks_heap_F",{1.87891,-0.601563,0},0,{true,false}},
                {"Land_Sacks_heap_F",{1.74268,0.537354,0},0,{true,false}},
                {"Land_CamoNetVar_EAST",{-0.809082,-1.84351,0},0,{false,false}},
                {"Land_Barrel_water",{0.704102,-1.10059,0},0,{false,false}},
                {"Land_Barrel_water",{0.381836,-0.55127,0},0,{false,false}},
                {"Land_Fire_barrel_burning",{-0.371582,-3.70239,0},0,{true,false}},
                {"Land_House_C_10_dam_EP1",{-4.60986,9.59155,0},270,{true,false}}
            };
        };

        class usBarracks : defaultMission {
            txtName = "STR_AI_USBARRACKS_NAME";
            txtStart = "STR_AI_USBARRACKS_START";
            txtEnd = "STR_AI_USBARRACKS_END";
            
            hedgehogs = 1;

            aiTypes[] = { "usForces" };
            objComposition[] = {
                {"Fort_Barracks_USMC",{20.7412,-1.42139,0},0,{true,true}},
                {"US_WarfareBAircraftFactory_EP1",{8.25342,-7.8623,4.76837e-007},0,{true,true}},
                {"US_WarfareBArtilleryRadar_EP1",{-16.2075,5.88989,0},270,{true,true}},
                {"TK_GUE_WarfareBContructionSite1_EP1",{-12.3857,-14.2385,0},0,{true,true}},
                {"TK_GUE_WarfareBContructionSite1_EP1",{-16.0498,-17.1255,0},0,{true,true}},
                {"TK_GUE_WarfareBContructionSite1_EP1",{-12.2007,-6.03149,0},0,{true,true}},
                {"TK_GUE_WarfareBContructionSite1_EP1",{-15.8647,-8.91846,0},0,{true,true}},
                {"TK_GUE_WarfareBContructionSite1_EP1",{-12.2402,-22.0903,0},0,{true,true}},
                {"TK_GUE_WarfareBContructionSite1_EP1",{-15.9043,-24.9773,0},0,{true,true}},
                {"US_WarfareBFieldhHospital_EP1",{5.53564,22.469,0},0,{true,true}},
                {"TK_GUE_WarfareBFieldhHospital_EP1",{23.2593,26.4133,0},0,{true,true}},
                {"TK_GUE_WarfareBFieldhHospital_EP1",{23.3228,15.8049,0},0,{true,true}},
                {"US_WarfareBLightFactory_EP1",{-2.30811,-28.2014,0},270,{true,true}},
                {"FlagCarrierUSArmy_EP1",{12.5479,2.74219,0},0,{true,true}},
                {"FlagCarrierUSA",{12.3418,5.06226,0},0,{true,true}},
                {"Land_HBarrierBig_F",{14.646,-36.2104,0},0,{true,true}},
                {"Land_HBarrierBig_F",{21.7422,-33.9363,0},147.076,{true,true}},
                {"Land_HBarrierBig_F",{25.9014,-28.1045,0},106.665,{true,true}},
                {"Land_HBarrierBig_F",{26.814,-20.2883,0},89.1142,{true,true}},
                {"Land_HBarrierBig_F",{-17.1875,32.6006,0},182.237,{true,true}},
                {"Land_HBarrierBig_F",{-24.3667,30.6052,0},329.313,{true,true}},
                {"Land_HBarrierBig_F",{-28.7505,24.9402,0},288.902,{true,true}},
                {"Land_HBarrierBig_F",{-29.9673,17.1655,0},271.351,{true,true}},
                {"Land_HBarrierBig_F",{-9.1875,34.2739,0},342.476,{true,true}},
                {"Land_HBarrierBig_F",{2.20605,36.113,0},0.957986,{true,true}}
            };

            hmgs = 1;
            mountedGuns[] = { { 14.2871, -24.8044, 0 }, { 13.2139, 20.6504, 0 } };
        };

        class vtol : defaultMission {
            txtName = "STR_AI_VTOL_NAME";
            txtStart = "STR_AI_VTOL_START";
            txtEnd = "STR_AI_VTOL_END";

            aiTypes[] = { "russianForces", "guerillas", "baForces" };
            objComposition[] = {
                {"Land_UWreck_MV22_F",{-2.78638,0.692383,0},0,{true,false}},
                {"Land_PortableLight_double_F",{-4.1272,17.3423,0},180.215,{true,false}},
                {"Land_PortableLight_double_F",{-14.9275,5.03955,0},89.5964,{true,false}},
                {"US_WarfareBContructionSite1_EP1",{-10.7354,-6.14648,0},0,{true,false}},
                {"US_WarfareBContructionSite1_EP1",{-13.5847,-6.29883,0},0,{true,false}},
                {"CargoNet_01_barrels_F",{-8.3562,8.3125,0},0,{true,false}},
                {"CargoNet_01_barrels_F",{-8.46851,10.1172,0},0,{true,false}},
                {"CargoNet_01_box_F",{-11.469,8.88574,0},0,{true,false}},
                {"CUP_A2_hbarrier5",{11.8213,13.3477,0},270,{true,false}},
                {"CUP_A2_hbarrier5",{11.8352,7.9126,0},270,{true,false}},
                {"CUP_A2_hbarrier5",{11.8489,2.44092,0},270,{true,false}},
                {"CUP_A2_hbarrier5",{11.9895,-5.79102,0},270,{true,false}},
                {"CUP_A2_hbarrier5",{12.0034,-11.2261,0},270,{true,false}},
                {"CUP_A2_hbarrier5",{12.0171,-16.6978,0},270,{true,false}},
                {"CUP_A2_hbarrier5",{9.28369,-19.437,0},0,{true,false}},
                {"CUP_A2_hbarrier5",{3.90796,-19.4702,0},0,{true,false}},
                {"CUP_A2_hbarrier5",{-1.51416,-19.4585,0},0,{true,false}}
            };
            hmgs = 1;
            mountedGuns[] = { {-14.3135,14.4263,0} };
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
                {"Land_Fort_Watchtower",{-2.44434,-42.5898,0},180,{true,false}},
                {"Land_HBarrier_5_F",{-4.20972,-35.1992,0},90,{true,false}},
                {"Land_HBarrier_5_F",{-4.1377,-29.7523,0},90,{true,false}},
                {"Land_HBarrier_5_F",{3.52856,-45.2491,0},166.948,{true,false}},
                {"Land_HBarrier_5_F",{8.85107,-44.0892,0},166.948,{true,false}},
                {"Land_HBarrier_5_F",{14.0964,-42.7224,0},166.948,{true,false}},
                {"Land_Fort_Watchtower",{21.272,-39.8147,0},90,{true,false}},
                {"MASH",{18.3479,-29.8011,0},153.344,{true,false}},
                {"MASH",{23.697,-27.39,0},153.344,{true,false}},
                {"Land_HBarrier_5_F",{30.6592,-33.2212,0},90,{true,false}},
                {"Land_HBarrier_5_F",{30.7312,-27.7743,0},90,{true,false}},
                {"Land_HBarrier_5_F",{30.7593,-16.7531,0},90,{true,false}},
                {"Land_HBarrier_5_F",{30.6873,-22.2,0},90,{true,false}},
                {"Land_HBarrier_5_F",{30.7747,-11.329,0},90,{true,false}},
                {"Land_HBarrier_5_F",{30.8467,-5.88208,0},90,{true,false}},
                {"Land_HBarrier_5_F",{30.8027,-0.307739,0},90,{true,false}},
                {"Land_HBarrier_5_F",{30.4041,7.65125,0},80.4017,{true,false}},
                {"Land_HBarrier_5_F",{29.5669,13.0338,0},80.4017,{true,false}},
                {"Land_HBarrier_5_F",{27.7568,23.9055,0},80.4017,{true,false}},
                {"Land_HBarrier_5_F",{28.594,18.5228,0},80.4017,{true,false}},
                {"Land_HBarrier_5_F",{27.665,-8.43518,0},359.729,{true,false}},
                {"Land_HBarrier_5_F",{22.2178,-8.38904,0},359.729,{true,false}},
                {"Land_HBarrier_5_F",{11.1965,-8.41309,0},359.729,{true,false}},
                {"Land_HBarrier_5_F",{16.6438,-8.45935,0},359.729,{true,false}},
                {"Land_HBarrier_5_F",{24.3394,25.8402,0},359.729,{true,false}},
                {"Land_HBarrier_5_F",{18.8921,25.8864,0},359.729,{true,false}},
                {"Land_HBarrier_5_F",{7.87085,25.8623,0},359.729,{true,false}},
                {"Land_HBarrier_5_F",{13.3181,25.816,0},359.729,{true,false}},
                {"Land_HBarrier_5_F",{0.582275,-8.31702,0},359.729,{true,false}},
                {"Land_HBarrier_5_F",{6.02954,-8.36328,0},359.729,{true,false}},
                {"Land_HBarrier_5_F",{2.33105,25.8164,0},359.729,{true,false}},
                {"Land_HBarrier_5_F",{-2.01782,1.90137,0},91.4662,{true,false}},
                {"Land_HBarrier_5_F",{-1.80664,7.34485,0},91.4662,{true,false}},
                {"Land_HBarrier_5_F",{-1.49634,18.3617,0},91.4662,{true,false}},
                {"Land_HBarrier_5_F",{-1.70776,12.9183,0},91.4662,{true,false}},
                {"Land_HBarrier_5_F",{-1.37427,23.9004,0},91.4662,{true,false}},
                {"Land_GeneralStore_01a_PMC",{3.0979,51.9808,0},0,{true,false}},
                {"Land_HelipadCivil_F",{9.61133,15.9565,0},0,{true,false}},
                {"Land_Hlidac_Budka_EP1",{25.2808,29.7919,0},270,{true,false}},
                {"Land_Hlidac_Budka_EP1",{25.47,45.9758,0},0,{true,false}},
                {"Land_BarGate_01_open_F",{28.6135,38.0898,0},90,{true,false}},
                {"CampEastC",{23.0186,-1.20166,0},0,{true,false}},
                {"CampEastC",{12.4246,-1.20996,0},0,{true,false}},
                {"CampEmpty",{23.325,19.1777,0},0,{true,false}},
                {"Land_Wreck_Ural_F",{15.7668,33.4454,0},270.425,{true,false}},
                {"Mi8Wreck",{8.43188,13.1244,0},28.2729,{true,false}},
                {"Land_Wreck_Ural_F",{3.49487,31.7385,0},270.425,{true,false}},
                {"Land_Cargo_House_V2_F",{5.06787,-15.2096,0},180,{true,false}},
                {"Land_Cargo_House_V2_F",{15.312,-15.2983,0},180,{true,false}},
                {"Land_Cargo_House_V2_F",{24.3911,-15.3599,0},180,{true,false}},
                {"CUP_A2_bunker_pmc",{-45.3232,14.4849,0},90,{true,false}},
                {"CUP_A2_bunker_pmc",{-45.3232,4.48486,0},90,{true,false}},
                {"Land_BagBunker_Large_F",{-30.6111,-39.6934,0},135,{true,false}},
                {"Land_HBarrier_5_F",{-27.501,-45.9581,0},180.153,{true,false}},
                {"Land_HBarrier_5_F",{-22.0542,-46.0447,0},180.153,{true,false}},
                {"Land_HBarrier_5_F",{-13.5178,-46.3407,0},180.153,{true,false}},
                {"Land_HBarrier_5_F",{-8.07104,-46.4272,0},180.153,{true,false}},
                {"Land_HBarrier_5_F",{-38.3408,-26.6521,0},91.4662,{true,false}},
                {"Land_HBarrier_5_F",{-38.1296,-21.2086,0},91.4662,{true,false}},
                {"Land_HBarrier_5_F",{-37.8193,-10.1918,0},91.4662,{true,false}},
                {"Land_HBarrier_5_F",{-38.0308,-15.6351,0},91.4662,{true,false}},
                {"Land_HBarrier_5_F",{-37.6973,-4.65308,0},91.4662,{true,false}},
                {"Land_HBarrier_5_F",{-38.188,23.3021,0},91.4662,{true,false}},
                {"Land_HBarrier_5_F",{-37.9768,28.7456,0},91.4662,{true,false}},
                {"Land_HBarrier_5_F",{-37.6665,39.7625,0},91.4662,{true,false}},
                {"Land_HBarrier_5_F",{-37.8779,34.3191,0},91.4662,{true,false}},
                {"Land_HBarrier_5_F",{-37.5444,45.3011,0},91.4662,{true,false}},
                {"CampEastC",{-12.2263,-21.8358,0},270.889,{true,false}},
                {"CampEastC",{-12.3826,-32.4287,0},270.889,{true,false}},
                {"Land_Cargo_Tower_V1_No4_F",{-22.9795,-7.78564,0},0,{true,false}},
                {"Land_Fire_barrel_burning",{-38.3887,-30.0691,0},0,{true,false}},
                {"Land_Fire_barrel_burning",{-18.4202,-13.8828,0},0,{true,false}},
                {"Land_Fire_barrel_burning",{10.0725,-15.4435,0},0,{true,false}},
                {"Land_Fire_barrel_burning",{15.1384,18.5898,0},0,{true,false}},
                {"Land_Fire_barrel_burning",{14.0679,42.8473,0},0,{true,false}},
                {"Land_Fire_barrel_burning",{-24.6851,43.5526,0},0,{true,false}},
                {"Land_PortableLight_single_F",{-2.72363,-28.5831,0},83.8475,{true,false}},
                {"Land_PortableLight_single_F",{25.6672,-23.8601,0},293.873,{true,false}},
                {"Land_PortableLight_single_F",{10.7439,51.3815,-0.0620131},231.453,{true,false}},
                {"Land_LampAirport_F",{-2.09961,-0.630737,0},0,{true,false}},
                {"CUP_A2_cargo2a",{-24.3174,27.6229,0},91.1926,{true,false}},
                {"CUP_A2_cargo1d",{-12.0364,28.4561,0},0,{true,false}},
                {"CUP_A2_cargo1b",{-16.3518,28.3907,0},0,{true,false}},
                {"CUP_A2_cargo1b",{-22.3801,21.3519,0},74.1319,{true,false}},
                {"WarfareBCamp",{-32.2961,49.6741,0},321.668,{true,false}},
                {"INS_WarfareBFieldhHospital",{7.3623,-33.2354,0},0,{true,false}},
                {"RU_WarfareBLightFactory",{-11.4143,8.38513,0},180,{true,false}},
                {"GUE_WarfareBUAVterminal",{-14.1416,45.5579,0},7.51725,{true,false}}
            };

            hmgs = 1;
            mountedGuns[] = { {-34.7598,-32.3944,0}, {-23.198,56.4691,0} };
        };
    };
};