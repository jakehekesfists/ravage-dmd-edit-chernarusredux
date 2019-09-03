class dmd_ai_loadouts {
    /*
        use the virtual arsenal and ctrl+shift+c to export loadout in cfg format like below.
        add any new classes to
            AI_Missions >> AISettings >> YOUR_FACTION_HERE
        in dmd_ai_missions.hpp
        
        remember to add any additional weapons to the traders list if its not already there  (HALs\Addons\store\config.hpp)

        TODO: Add more classes. allow hosts to easily enable rhs/cup/a3 type ai.
    */

    // BANDITS
    // Vanilla A3 Only
        class ba_leader {
            uniformClass = "U_BG_Guerrilla_6_1";
            backpack = "";
            weapons[] = {"Binocular","srifle_EBR_F","Throw","Put"};
            magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","CUP_HandGrenade_RGD5"};
            items[] = {};
            linkedItems[] = {"V_TacVest_camo","H_Shemag_olive_hs","G_Shades_Black","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        };

        class ba_lightinf {
            uniformClass = "U_I_C_Soldier_Para_4_F";
            backpack = "B_AssaultPack_blk";
            weapons[] = {"Binocular","SMG_02_F","Throw","Put"};
            magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","CUP_HandGrenade_RGD5"};
            items[] = {};
            linkedItems[] = {"V_BandollierB_rgr","G_Balaclava_blk","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        };

        class ba_rifleman {
            uniformClass = "U_BG_Guerilla2_1";
            backpack = "B_AssaultPack_blk";
            weapons[] = {"Binocular","arifle_Katiba_F","Throw","Put"};
            magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","CUP_HandGrenade_RGD5"};
            items[] = {};
            linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_ShemagOpen_tan","G_Shades_Black","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        };

        class ba_support {
            uniformClass = "U_I_C_Soldier_Para_1_F";
            backpack = "B_ViperHarness_ghex_F";
            weapons[] = {"Binocular","LMG_03_F","Throw","Put"};
            magazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F"};
            items[] = {};
            linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetSpecO_blk","G_Balaclava_blk","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        };

        class ba_sniper {
            uniformClass = "U_I_GhillieSuit";
            backpack = "B_ViperHarness_ghex_F";
            weapons[] = {"Binocular","srifle_DMR_01_F","Throw","Put"};
            magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","CUP_HandGrenade_RGD5"};
            items[] = {};
            linkedItems[] = {"V_HarnessOGL_brn","G_Balaclava_oli","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        };
    // RHS VARIANTS
        class ba_leader_rhs {
            uniformClass = "rvg_hoodie_grey";
            backpack = "rvg_legstrappack_1";
            weapons[] = {"rhsusf_bino_lrf_Vector21","rhs_weap_mk18","Throw","Put"};
            magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
            items[] = {};
            linkedItems[] = {"rhsusf_plateframe_sapi","rhsusf_shemagh2_gogg_tan","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        };

        class ba_rifleman_rhs {
            uniformClass = "rvg_hoodie_kabeiroi";
            backpack = "rvg_legstrappack_1";
            weapons[] = {"rhsusf_bino_lrf_Vector21","rhs_weap_ak105_zenitco01_b33","Throw","Put"};
            magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK"};
            items[] = {};
            linkedItems[] = {"rhs_6b23_6sh92_radio","rhs_6b7_1m","rvg_bandanaAvi_2","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        };

        class ba_lightinf_rhs {
            uniformClass = "rvg_shirt_check";
            backpack = "rvg_messengerbag_4";
            weapons[] = {"rhsusf_bino_lrf_Vector21","rhsusf_weap_MP7A2_winter","Throw","Put"};
            magazines[] = {"rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ"};
            items[] = {};
            linkedItems[] = {"V_BandollierB_rgr","rhs_altyn_novisor_bala","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        };

        class ba_support_rhs {
            uniformClass = "U_O_R_Gorka_01_black_F";
            backpack = "rhsgref_wdl_alicepack";
            weapons[] = {"rhsusf_bino_lrf_Vector21","rhs_weap_m249_light_L","rhs_weap_smaw","Throw","Put"};
            magazines[] = {"rhsusf_200Rnd_556x45_box","rhs_mag_smaw_HEAA","rhs_mag_smaw_SR","rhsusf_200Rnd_556x45_box","rhsusf_200Rnd_556x45_box","rhs_mag_smaw_HEAA","rhs_mag_smaw_HEAA","rhs_mag_smaw_SR","rhs_mag_smaw_SR","rhs_mag_smaw_SR"};
            items[] = {};
            linkedItems[] = {"rhs_6b23_digi_6sh92_vog","rhs_altyn_novisor","Mask_M50","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        };

        class ba_sniper_rhs {
            uniformClass = "U_B_CTRG_Soldier_urb_2_F";
            backpack = "rvg_kitbag";
            weapons[] = {"rhsusf_bino_lrf_Vector21","rhs_weap_m82a1","Throw","Put"};
            magazines[] = {"rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33"};
            items[] = {};
            linkedItems[] = {"rhs_vydra_3m","H_Watchcap_blk","rvg_bandanaSport_4","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        };

    // CUP VARIANTS
        class ba_leader_cup {
            uniformClass = "CUP_U_I_GUE_Anorak_01";
            backpack = "CUP_B_GER_Medic_FLecktarn";
            weapons[] = {"Binocular","CUP_arifle_AKS_Gold","Throw","Put"};
            magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
            items[] = {};
            linkedItems[] = {"CUP_V_I_Guerilla_Jacket","Mask_M50","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        };

        class ba_rifleman_cup {
            uniformClass = "CUP_U_I_GUE_Anorak_03";
            backpack = "";
            weapons[] = {"Binocular","CUP_srifle_Mk12SPR","Throw","Put"};
            magazines[] = {"CUP_20Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_RGD5"};
            items[] = {};
            linkedItems[] = {"CUP_V_B_GER_Carrier_Vest","CUP_H_USArmy_Helmet_Pro_gog","G_Balaclava_TI_tna_F","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        };

        class ba_lightinf_cup {
            uniformClass = "CUP_I_B_PMC_Unit_17";
            backpack = "CUP_B_RUS_Backpack";
            weapons[] = {"Binocular","CUP_smg_vityaz_vfg_front_rail","Throw","Put"};
            magazines[] = {"CUP_30Rnd_9x19AP_Vityaz","CUP_30Rnd_9x19AP_Vityaz","CUP_30Rnd_9x19AP_Vityaz","CUP_30Rnd_9x19AP_Vityaz","CUP_HandGrenade_RGD5","CUP_30Rnd_9x19AP_Vityaz","CUP_30Rnd_9x19AP_Vityaz","CUP_30Rnd_9x19AP_Vityaz","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
            items[] = {};
            linkedItems[] = {"CUP_V_PMC_CIRAS_Black_Empty","rvg_balaclava_3","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        };

        class ba_support_cup {
            uniformClass = "CUP_U_O_Partisan_TTsKO_Mixed";
            backpack = "CUP_B_GER_Pack_Flecktarn";
            weapons[] = {"Binocular","CUP_arifle_RPK74_top_rail","CUP_launch_RPG18","Throw","Put"};
            magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_RPG18_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_HandGrenade_RGD5","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_RPG18_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_RPG18_M"};
            items[] = {};
            linkedItems[] = {"CUP_V_CZ_vest16","CUP_H_CZ_Helmet04","G_Balaclava_oli","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        };

        class ba_sniper_cup {
            uniformClass = "CUP_U_I_Ghillie_Top";
            backpack = "CUP_B_Kombat_Olive";
            weapons[] = {"Binocular","CUP_srifle_AWM_wdl","Throw","Put"};
            magazines[] = {"CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1","CUP_HandGrenade_RGD5","CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1"};
            items[] = {};
            linkedItems[] = {"CUP_V_O_SLA_M23_1_OD","G_Balaclava_oli","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        };

    // GUERILLAS
            // RHS VARIANTS
            class gu_leader_rhs {};
            class gu_lightinf_rhs {};
            class gu_rifleman_rhs {};
            class gu_support_rhs {};
            class gu_sniper_rhs {};
            
            // CUP VARIANTS
            class gu_leader_cup {};
            class gu_lightinf_cup {};
            class gu_rifleman_cup {};
            class gu_support_cup {};
            class gu_sniper_cup {};

    class gu_leader {
        uniformClass = "CUP_U_O_TK_Officer";
        backpack = "rvg_messengerbag_4";
        weapons[] = {"rhs_weap_ak74_3","Binocular","Throw","Put"};
        magazines[] = {"rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_mag_rgo"};
        items[] = {"FirstAidKit"};
        linkedItems[] = {"CUP_V_O_TK_CrewBelt","CUP_H_TKI_SkullCap_03","L_Shemagh_Tan","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };

    class gu_lightinf {
        uniformClass = "CUP_U_O_TK_Green";
        backpack = "rhs_sidor";
        weapons[] = {"Binocular","rhs_weap_asval_grip_npz","Throw","Put"};
        magazines[] = {"rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_mag_rgo"};
        items[] = {"Medikit"};
        linkedItems[] = {"CUP_V_OI_TKI_Jacket5_01","CUP_H_TKI_Pakol_1_02","rhsusf_shemagh2_grn","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };

    class gu_rifleman {
        uniformClass = "CUP_U_O_TK_MixedCamo";
        backpack = "rhs_assault_umbts";
        weapons[] = {"Binocular","rhs_weap_ak103_zenitco01_b33","Throw","Put"};
        magazines[] = {"rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer","rhs_mag_rgo","rhs_mag_rgo"};
        items[] = {"MineDetector","FirstAidKit","FirstAidKit"};
        linkedItems[] = {"CUP_V_OI_TKI_Jacket4_02","CUP_H_TKI_Lungee_Open_03","G_Aviator","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };

    class gu_support {
        uniformClass = "CUP_U_O_TK_Green";
        backpack = "rhs_rpg_empty";
        weapons[] = {"Binocular","rhs_weap_m84","rhs_weap_rpg7","Throw","Put"};
        magazines[] = {"rhs_100Rnd_762x54mmR","rhs_rpg7_PG7V_mag","rhs_mag_rgo","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_rpg7_PG7V_mag"};
        items[] = {"MineDetector","FirstAidKit","FirstAidKit"};
        linkedItems[] = {"CUP_V_PMC_IOTV_Black_AR","rhssaf_helmet_m97_black_nocamo","G_Balaclava_blk","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };

    class gu_sniper {
        uniformClass = "CUP_U_I_Ghillie_Top";
        backpack = "rvg_legstrappack_4";
        weapons[] = {"Binocular","rhs_weap_svds_npz","Throw","Put"};
        magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_an_m14_th3","rhs_mag_an_m14_th3","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N14","rhs_10Rnd_762x54mmR_7N14"};
        items[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
        linkedItems[] = {"CUP_V_CDF_OfficerBelt","rhs_balaclava1_olive","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };

    
    // US ARMY
        // RHS VARIANTS
            class us_leader_rhs {
                uniformClass = "rhs_uniform_g3_mc";
                backpack = "rhsusf_assault_eagleaiii_ucp";
                weapons[] = {"rhsusf_bino_lerca_1200_black","rhs_weap_hk416d10_m320","Throw","Put"};
                magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"};
                items[] = {"FirstAidKit"};
                linkedItems[] = {"rhsusf_iotv_ocp_Teamleader","rhs_8point_marpatwd","rhsusf_shemagh2_gogg_od","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","rhsusf_ANPVS_15"};
            };
        
            class us_lightinf_rhs {
                uniformClass = "rhs_uniform_g3_rgr";
                backpack = "rhsusf_falconii";
                weapons[] = {"rhs_weap_m3a1_specops","Throw","Put"};
                magazines[] = {"rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG"};
                items[] = {"FirstAidKit"};
                linkedItems[] = {"rhsusf_spcs_ucp_crewman","rhsusf_mich_bare_norotos_alt_semi","rhsusf_oakley_goggles_ylw","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","rhsusf_ANPVS_14"};
            };
        
            class us_rifleman_rhs {
                uniformClass = "rhs_uniform_g3_rgr";
                backpack = "rhsusf_falconii";
                weapons[] = {"Binocular","rhs_weap_m4a1_carryhandle","Throw","Put"};
                magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhssaf_mag_br_m75","rhssaf_mag_br_m75"};
                items[] = {"FirstAidKit"};
                linkedItems[] = {"rhsusf_spcs_ucp_crewman","rhsusf_mich_bare","L_Shemagh_OD","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","rhsusf_ANPVS_15"};
            };
        
            class us_support_rhs {
                uniformClass = "rhs_uniform_g3_aor2";
                backpack = "rhsgref_ttsko_alicepack";
                weapons[] = {"Binocular","rhs_weap_m240B","Throw","Put"};
                magazines[] = {"rhsusf_100Rnd_762x51","rhssaf_mag_br_m75","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51","rhsusf_50Rnd_762x51_m80a1epr","rhsusf_50Rnd_762x51_m80a1epr"};
                items[] = {"FirstAidKit","ToolKit"};
                linkedItems[] = {"rvg_platecarrier_3","Mask_M40_OD","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
            };
        
            class us_sniper_rhs {
                uniformClass = "U_B_FullGhillie_lsh";
                backpack = "B_FieldPack_oli";
                weapons[] = {"Binocular","rhs_weap_m40a5_wd","Throw","Put"};
                magazines[] = {"rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_5Rnd_762x51_AICS_m993_Mag","rhsusf_5Rnd_762x51_AICS_m993_Mag","SmokeShellBlue","SmokeShellPurple"};
                items[] = {"FirstAidKit","FirstAidKit"};
                linkedItems[] = {"rvg_tacvest_2","rvg_balaclava_5","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
            };
            
            // CUP VARIANTS
            class us_leader_cup {};
            class us_lightinf_cup {};
            class us_rifleman_cup {};
            class us_support_cup {};
            class us_sniper_cup {};
            
            
            // VANILLA A3 ONLY
            class us_leader {};
            class us_lightinf {};
            class us_rifleman {};
            class us_support {};
            class us_sniper {};
    
    // RUSSIAN ARMY
        // RHS VARIANTS
        class ru_leader_rhs {
            uniformClass = "rhs_uniform_m88_patchless";
            backpack = "rhs_medic_bag";
            weapons[] = {"Binocular","rhs_weap_ak105_zenitco01_b33","Throw","Put"};
            magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK"};
            items[] = {};
            linkedItems[] = {"rhs_vest_commander","rhs_beret_milp","G_Aviator","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","rhs_1PN138"};
        };

        class ru_rifleman_rhs {
            uniformClass = "rhs_uniform_gorka_r_g";
            backpack = "rhs_sidor";
            weapons[] = {"Binocular","rhs_weap_ak74m","Throw","Put"};
            magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK"};
            items[] = {};
            linkedItems[] = {"rhs_6b23_digi_6sh92","rhs_6b26_bala_green","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","rhs_1PN138"};
        };

        class ru_lightinf_rhs {
            uniformClass = "rhs_uniform_mvd_izlom";
            backpack = "rhs_assault_umbts_engineer_empty";
            weapons[] = {"Binocular","rhs_weap_asval_grip_npz","Throw","Put"};
            magazines[] = {"rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_mag_rgo","rhs_mag_rgo","rhs_mag_rgn","rhs_mag_rgn"};
            items[] = {};
            linkedItems[] = {"rhs_6sh92","rhs_tsh4_ess_bala","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        };

        class ru_support_rhs {
            uniformClass = "rhs_uniform_gorka_r_y";
            backpack = "rhs_rpg_empty";
            weapons[] = {"Binocular","rhs_weap_pkp","rhs_weap_rpg7","Throw","Put"};
            magazines[] = {"rhs_100Rnd_762x54mmR","rhs_rpg7_PG7V_mag","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_rgo","rhs_mag_rgo","rhs_mag_rgn","rhs_mag_rgn","rhs_100Rnd_762x54mmR","rhs_rpg7_PG7V_mag"};
            items[] = {};
            linkedItems[] = {"rhs_6b23_6sh116_vog_flora","rhs_altyn_bala","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        };

        class ru_sniper_rhs {
            uniformClass = "U_O_T_FullGhillie_tna_F";
            backpack = "rhs_rpg_empty";
            weapons[] = {"rhs_weap_t5000","Rangefinder","Throw","Put"};
            magazines[] = {"rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_mag_rgo","rhs_mag_rgo","SmokeShellRed","SmokeShellRed","SmokeShellRed","SmokeShellRed"};
            items[] = {};
            linkedItems[] = {"rhs_6b23_sniper","rhs_balaclava","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","rhs_1PN138"};
        };

        // CUP VARIANTS
        class ru_leader_cup {
            uniformClass = "CUP_U_O_RUS_M88_MSV";
            backpack = "CUP_B_RUS_Backpack";
            weapons[] = {"Binocular","CUP_arifle_AK107_GL_railed","Throw","Put"};
            magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M","HandGrenade","HandGrenade"};
            items[] = {};
            linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Com","CUP_H_RUS_Beret_Spetsnaz","G_Aviator","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","CUP_NVG_PVS14"};
        };

        class ru_rifleman_cup {
            uniformClass = "CUP_U_O_RUS_VSR93_MSV";
            backpack = "CUP_B_GER_Pack_Flecktarn";
            weapons[] = {"Binocular","CUP_arifle_AK109","Throw","Put"};
            magazines[] = {"CUP_30Rnd_762x39_AK103_bakelite_M","CUP_30Rnd_762x39_AK103_bakelite_M","CUP_30Rnd_762x39_AK103_bakelite_M","CUP_30Rnd_762x39_AK103_bakelite_M","HandGrenade","HandGrenade"};
            items[] = {};
            linkedItems[] = {"CUP_V_CDF_6B3_5_FST","CUP_H_RUS_6B27_NVG_olive","CUP_RUS_Balaclava_blk","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","CUP_NVG_PVS14"};
        };

        class ru_lightinf_cup {
            uniformClass = "CUP_U_O_RUS_VSR98_VDV_rolled_up";
            backpack = "";
            weapons[] = {"Binocular","CUP_smg_bizon","Throw","Put"};
            magazines[] = {"CUP_64Rnd_9x19_Bizon_M","CUP_64Rnd_9x19_Bizon_M","CUP_64Rnd_9x19_Bizon_M","HandGrenade","HandGrenade","CUP_64Rnd_9x19_Bizon_M","CUP_64Rnd_9x19_Bizon_M"};
            items[] = {};
            linkedItems[] = {"CUP_V_B_ALICE","CUP_RUS_Balaclava_blk","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        };

        class ru_support_cup {
            uniformClass = "CUP_U_O_RUS_Gorka_Partizan";
            backpack = "CUP_B_GER_Pack_Flecktarn";
            weapons[] = {"Binocular","CUP_lmg_Pecheneg","CUP_launch_RPG7V","Throw","Put"};
            magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_PG7V_M","HandGrenade","HandGrenade","HandGrenade","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_OG7_M"};
            items[] = {};
            linkedItems[] = {"CUP_V_B_GER_Vest_2","CUP_H_RUS_6B47_SF","CUP_RUS_Balaclava_blk","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        };

        class ru_sniper_cup {
            uniformClass = "CUP_U_B_BAF_MTP_GHILLIE";
            backpack = "B_ViperLightHarness_oli_F";
            weapons[] = {"Binocular","CUP_srifle_ksvk","Throw","Put"};
            magazines[] = {"CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","HandGrenade","HandGrenade","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M"};
            items[] = {};
            linkedItems[] = {"CUP_V_B_ALICE","CUP_H_PMC_PRR_Headset","G_Balaclava_oli","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        };
        
        // Vanilla A3 Items only
    class ru_leader {
        uniformClass = "U_O_OfficerUniform_ocamo";
        backpack = "";
        weapons[] = {"Binocular","arifle_AKM_F","Throw","Put"};
        magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
        items[] = {};
        linkedItems[] = {"V_BandollierB_cbr","H_MilCap_ocamo","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles"};
    };

    class ru_rifleman {
        uniformClass = "U_O_CombatUniform_ocamo";
        backpack = "B_FieldPack_khk";
        weapons[] = {"Binocular","arifle_AK12_GL_F","Throw","Put"};
        magazines[] = {"30Rnd_762x39_AK12_Mag_F","1Rnd_HE_Grenade_shell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
        items[] = {};
        linkedItems[] = {"V_HarnessOGL_brn","H_HelmetCrew_O","G_Balaclava_blk","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","O_NVGoggles_hex_F"};
    };

    class ru_lightinf {
        uniformClass = "U_O_SpecopsUniform_ocamo";
        backpack = "B_TacticalPack_ocamo";
        weapons[] = {"Binocular","SMG_03C_camo","Throw","Put"};
        magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03"};
        items[] = {};
        linkedItems[] = {"V_Rangemaster_belt","H_Bandanna_khk","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
    };

    class ru_support {
        uniformClass = "U_I_G_resistanceLeader_F";
        backpack = "B_Carryall_oli";
        weapons[] = {"Binocular","arifle_CTARS_ghex_F","Throw","Put"};
        magazines[] = {"100Rnd_580x42_ghex_Mag_F","100Rnd_580x42_ghex_Mag_F","100Rnd_580x42_ghex_Mag_F","100Rnd_580x42_ghex_Mag_F","100Rnd_580x42_ghex_Mag_F","100Rnd_580x42_ghex_Mag_F"};
        items[] = {};
        linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetB_Enh_tna_F","G_Balaclava_blk","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
    };

    class ru_sniper {
        uniformClass = "U_O_GhillieSuit";
        backpack = "B_Carryall_oli";
        weapons[] = {"Binocular","srifle_DMR_04_F","Throw","Put"};
        magazines[] = {"10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag"};
        items[] = {};
        linkedItems[] = {"V_BandollierB_oli","G_Balaclava_blk","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
    };

};