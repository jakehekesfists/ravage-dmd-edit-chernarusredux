class dmd_ai_loadouts {
    /*
        use the virtual arsenal and ctrl+shift+c to export loadout in cfg format like below.
        add any new classes to
            AI_Missions >> AISettings >> YOUR_FACTION_HERE
        in dmd_ai_missions.hpp
        
        remember to add any additional weapons to the traders list if its not already there  (HALs\Addons\store\config.hpp)
    */

    // BANDITS 
    class ba_leader {
        uniformClass = "rvg_shirt_bandit";
        backpack = "B_Carryall_khk";
        weapons[] = {"rhs_weap_vhsd2_ct15x","Throw","Put"};
        magazines[] = {"rhsgref_30rnd_556x45_vhs2","rhsgref_30rnd_556x45_vhs2","rhsgref_30rnd_556x45_vhs2","rhsgref_30rnd_556x45_vhs2","rhs_mag_m18_purple","rhs_mag_m18_purple","rhs_grenade_sthgr43_heerfrag_mag","rhs_grenade_sthgr43_heerfrag_mag","rhs_grenade_sthgr43_SSfrag_mag","rhs_grenade_sthgr43_SSfrag_mag"};
        items[] = {"FirstAidKit","ToolKit"};
        linkedItems[] = {"V_PlateCarrier1_blk","rhssaf_helmet_m97_black_nocamo","CUP_PMC_Facewrap_Skull","rvg_ItemMap","ItemCompass","ItemRadio","CUP_NVG_HMNVS"};
    };

    class ba_lightinf {
        uniformClass = "rvg_bandit";
        backpack = "B_Carryall_oli";
        weapons[] = {"SMG_03C_black","Throw","Put"};
        magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","rhs_mag_m18_purple","rhs_mag_m18_purple","rhs_grenade_sthgr43_heerfrag_mag","rhs_grenade_sthgr43_SSfrag_mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag"};
        items[] = {"FirstAidKit","FirstAidKit"};
        linkedItems[] = {"rhsgref_alice_webbing","rhs_tsh4_ess","G_Bandanna_beast","rvg_ItemMap","ItemCompass","ItemRadio","rvg_O_NVGoggles_urb_F"};
    };

    class ba_rifleman {
        uniformClass = "rvg_retro_green";
        backpack = "CUP_B_GER_Pack_Flecktarn";
        weapons[] = {"CUP_arifle_FNFAL_railed","Throw","Put"};
        magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","rhs_mag_m18_purple","rhs_mag_m18_purple","rhs_grenade_sthgr43_heerfrag_mag","rhs_grenade_sthgr43_heerfrag_mag","rhs_grenade_sthgr43_SSfrag_mag","rhs_grenade_sthgr43_SSfrag_mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
        items[] = {"FirstAidKit","FirstAidKit"};
        linkedItems[] = {"rhsgref_alice_webbing","rhssaf_booniehat_woodland","CUP_PMC_Facewrap_Skull","rvg_ItemMap","ItemCompass","ItemRadio"};
    };

    class ba_support {
        uniformClass = "CUP_U_I_GUE_Flecktarn2";
        backpack = "CUP_B_GER_Pack_Flecktarn";
        weapons[] = {"CUP_arifle_MG36_wdl","Throw","Put"};
        magazines[] = {"CUP_100Rnd_556x45_BetaCMag_wdl","rhs_mag_m18_purple","rhs_mag_m18_purple","rhs_grenade_sthgr43_heerfrag_mag","rhs_grenade_sthgr43_heerfrag_mag","rhs_grenade_sthgr43_SSfrag_mag","rhs_grenade_sthgr43_SSfrag_mag","CUP_100Rnd_556x45_BetaCMag_wdl","CUP_100Rnd_556x45_BetaCMag_wdl","CUP_100Rnd_556x45_BetaCMag_wdl","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","rhs_grenade_mkii_mag","rhs_grenade_mkii_mag","CUP_100Rnd_556x45_BetaCMag_wdl","CUP_100Rnd_556x45_BetaCMag_wdl"};
        items[] = {"FirstAidKit","FirstAidKit"};
        linkedItems[] = {"CUP_V_CZ_vest08","rvg_presshelmet_1","Mask_M40","rvg_ItemMap","ItemCompass","ItemRadio"};
    };

    class ba_sniper {
        uniformClass = "U_B_T_Sniper_F";
        backpack = "CUP_B_GER_Pack_Flecktarn";
        weapons[] = {"CUP_srifle_AWM_wdl","Throw","Put"};
        magazines[] = {"CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1","rhs_mag_m18_purple","rhs_mag_m18_purple","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","rhs_grenade_mkii_mag","rhs_grenade_mkii_mag","CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1"};
        items[] = {"FirstAidKit","Medikit"};
        linkedItems[] = {"V_Pocketed_olive_F","rhs_beanie","PU_shemagh_OD","rvg_ItemMap","ItemCompass","ItemRadio"};
    };

    // TAKISTANIS 
    class tk_leader {
        uniformClass = "CUP_U_O_TK_Officer";
        backpack = "rvg_messengerbag_4";
        weapons[] = {"rhs_weap_ak74_3","Binocular","Throw","Put"};
        magazines[] = {"rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_mag_rgo"};
        items[] = {"FirstAidKit"};
        linkedItems[] = {"CUP_V_O_TK_CrewBelt","CUP_H_TKI_SkullCap_03","L_Shemagh_Tan","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };

    class tk_lightinf {
        uniformClass = "CUP_U_O_TK_Green";
        backpack = "rhs_sidor";
        weapons[] = {"Binocular","rhs_weap_asval_grip_npz","Throw","Put"};
        magazines[] = {"rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_mag_rgo"};
        items[] = {"Medikit"};
        linkedItems[] = {"CUP_V_OI_TKI_Jacket5_01","CUP_H_TKI_Pakol_1_02","rhsusf_shemagh2_grn","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };

    class tk_rifleman {
        uniformClass = "CUP_U_O_TK_MixedCamo";
        backpack = "rhs_assault_umbts";
        weapons[] = {"Binocular","rhs_weap_ak103_zenitco01_b33","Throw","Put"};
        magazines[] = {"rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer","rhs_mag_rgo","rhs_mag_rgo"};
        items[] = {"MineDetector","FirstAidKit","FirstAidKit"};
        linkedItems[] = {"CUP_V_OI_TKI_Jacket4_02","CUP_H_TKI_Lungee_Open_03","G_Aviator","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };

    class tk_support {
        uniformClass = "CUP_U_O_TK_Green";
        backpack = "rhs_rpg_empty";
        weapons[] = {"Binocular","rhs_weap_m84","rhs_weap_rpg7","Throw","Put"};
        magazines[] = {"rhs_100Rnd_762x54mmR","rhs_rpg7_PG7V_mag","rhs_mag_rgo","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_rpg7_PG7V_mag"};
        items[] = {"MineDetector","FirstAidKit","FirstAidKit"};
        linkedItems[] = {"CUP_V_PMC_IOTV_Black_AR","rhssaf_helmet_m97_black_nocamo","G_Balaclava_blk","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };

    class tk_sniper {
        uniformClass = "CUP_U_I_Ghillie_Top";
        backpack = "rvg_legstrappack_4";
        weapons[] = {"Binocular","rhs_weap_svds_npz","Throw","Put"};
        magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_an_m14_th3","rhs_mag_an_m14_th3","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N14","rhs_10Rnd_762x54mmR_7N14"};
        items[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
        linkedItems[] = {"CUP_V_CDF_OfficerBelt","rhs_balaclava1_olive","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };

    
    // US ARMY
    class us_leader {
        uniformClass = "rhs_uniform_g3_mc";
        backpack = "rhsusf_assault_eagleaiii_ucp";
        weapons[] = {"rhsusf_bino_lerca_1200_black","rhs_weap_hk416d10_m320","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203"};
        items[] = {"FirstAidKit"};
        linkedItems[] = {"rhsusf_iotv_ocp_Teamleader","rhs_8point_marpatwd","rhsusf_shemagh2_gogg_od","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","rhsusf_ANPVS_15"};
    };

    class us_lightinf {
        uniformClass = "rhs_uniform_g3_rgr";
        backpack = "rhsusf_falconii";
        weapons[] = {"rhs_weap_m3a1_specops","Throw","Put"};
        magazines[] = {"rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG"};
        items[] = {"FirstAidKit"};
        linkedItems[] = {"rhsusf_spcs_ucp_crewman","rhsusf_mich_bare_norotos_alt_semi","rhsusf_oakley_goggles_ylw","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","rhsusf_ANPVS_14"};
    };

    class us_rifleman {
        uniformClass = "rhs_uniform_g3_rgr";
        backpack = "rhsusf_falconii";
        weapons[] = {"Binocular","rhs_weap_m4a1_carryhandle","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhssaf_mag_br_m75","rhssaf_mag_br_m75","rhssaf_mag_br_m75","rhssaf_mag_br_m75","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203"};
        items[] = {"FirstAidKit","FirstAidKit","ToolKit"};
        linkedItems[] = {"rhsusf_spcs_ucp_crewman","rhsusf_mich_bare","L_Shemagh_OD","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","rhsusf_ANPVS_15"};
    };

    class us_support {
        uniformClass = "rhs_uniform_g3_aor2";
        backpack = "rhsgref_ttsko_alicepack";
        weapons[] = {"Binocular","rhs_weap_m240B","Throw","Put"};
        magazines[] = {"rhsusf_100Rnd_762x51","rhssaf_mag_br_m75","rhssaf_mag_br_m75","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","rhsusf_50Rnd_762x51_m80a1epr","rhsusf_50Rnd_762x51_m80a1epr"};
        items[] = {"FirstAidKit","FirstAidKit","ToolKit"};
        linkedItems[] = {"rvg_platecarrier_3","Mask_M40_OD","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
    };

    class us_sniper {
        uniformClass = "U_B_FullGhillie_lsh";
        backpack = "B_FieldPack_oli";
        weapons[] = {"Binocular","rhs_weap_m40a5_wd","Throw","Put"};
        magazines[] = {"rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_5Rnd_762x51_AICS_m993_Mag","rhsusf_5Rnd_762x51_AICS_m993_Mag","SmokeShellBlue","SmokeShellPurple","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","rhsusf_50Rnd_762x51_m80a1epr","rhsusf_50Rnd_762x51_m80a1epr"};
        items[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
        linkedItems[] = {"rvg_tacvest_2","rvg_balaclava_5","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
    };
    
    // RUSSIAN ARMY
    class ru_leader {
        uniformClass = "CUP_U_B_US_BDU_OD";
        backpack = "rhs_assault_umbts";
        weapons[] = {"rhs_weap_ak74mr","Throw","Put"};
        magazines[] = {"rhs_30Rnd_545x39_7N10_AK","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_mag_f1","rhs_mag_f1"};
        items[] = {"FirstAidKit"};
        linkedItems[] = {"rhs_6sh92_digi","rhs_beret_milp","rvg_balaclava_3","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","rhsusf_ANPVS_15"};
    };

    class ru_rifleman {
        uniformClass = "rhs_uniform_gorka_r_g";
        backpack = "rhs_assault_umbts";
        weapons[] = {"rhs_weap_ak103_1_npz","Throw","Put"};
        magazines[] = {"rhs_30Rnd_762x39mm_polymer","MiniGrenade","rhs_30Rnd_762x39mm_polymer","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_mag_f1","rhs_mag_f1","rhs_30Rnd_762x39mm_polymer_tracer","rhs_30Rnd_762x39mm_polymer_tracer","rhs_75Rnd_762x39mm_tracer","rhs_75Rnd_762x39mm_tracer","rhs_mag_rgo","rhs_mag_rgo"};
        items[] = {"FirstAidKit"};
        linkedItems[] = {"rhs_6sh92_digi_vog_headset","rhs_altyn_novisor_bala","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","rhsusf_ANPVS_15"};
    };

    class ru_lightinf {
        uniformClass = "rhs_uniform_gorka_r_g";
        backpack = "rhsgref_wdl_alicepack";
        weapons[] = {"rhs_weap_m3a1","Throw","Put"};
        magazines[] = {"rhsgref_30rnd_1143x23_M1911B_SMG","SmokeShell","SmokeShellRed","Chemlight_blue","Chemlight_blue","rhsgref_30rnd_1143x23_M1T_2mag_SMG","rhsgref_30rnd_1143x23_M1T_2mag_SMG","rhsgref_30rnd_1143x23_M1T_2mag_SMG","rhsgref_30rnd_1143x23_M1T_2mag_SMG","rhsgref_30rnd_1143x23_M1T_2mag_SMG","rhs_mag_rgd5","rhs_mag_rgd5","rhs_75Rnd_762x39mm_tracer","rhs_75Rnd_762x39mm_tracer","rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_7N13","rhs_grenade_mki_mag","rhsgref_30rnd_1143x23_M1T_2mag_SMG","rhsgref_30rnd_1143x23_M1T_2mag_SMG","rhsgref_30rnd_1143x23_M1T_2mag_SMG","rhsgref_30rnd_1143x23_M1T_2mag_SMG"};
        items[] = {"FirstAidKit"};
        linkedItems[] = {"rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz","rhs_tsh4_bala","G_Bandanna_beast","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
    };

    class ru_support {
        uniformClass = "rhs_uniform_gorka_r_y";
        backpack = "rhsgref_wdl_alicepack";
        weapons[] = {"rhs_weap_pkp","Throw","Put"};
        magazines[] = {"rhs_100Rnd_762x54mmR","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_mag_f1","rhs_mag_f1","rhs_30Rnd_762x39mm_polymer_tracer","rhs_mag_rgo","rhs_mag_rgo","rhs_75Rnd_762x39mm_tracer","rhs_75Rnd_762x39mm_tracer","rhs_mag_rgo","rhs_mag_rgo","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_7N13"};
        items[] = {"FirstAidKit"};
        linkedItems[] = {"rhs_6sh92_vog_headset","rhs_altyn_visordown","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","rhsusf_ANPVS_15"};
    };

    class ru_sniper {
        uniformClass = "U_I_FullGhillie_lsh";
        backpack = "rhsgref_wdl_alicepack";
        weapons[] = {"rhs_weap_svds_npz","Throw","Put"};
        magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_75Rnd_762x39mm_tracer","rhs_75Rnd_762x39mm_tracer","rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_7N13","rhs_grenade_mki_mag"};
        items[] = {"FirstAidKit"};
        linkedItems[] = {"rhs_6b23_digi_6sh92_headset_mapcase","G_Bandanna_beast","rvg_ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","rhsusf_ANPVS_15"};
    };

};