
class CfgRoles {
	class Survivalist {
		displayName = "01 - Survivalist";
		icon = "\A3\ui_f\data\igui\cfg\simpleTasks\types\run_ca.paa";
	};

	class Mechanic {
		displayName = "02 - Mechanic";
		icon = "\A3\ui_f\data\igui\cfg\simpleTasks\types\repair_ca.paa";
	};

	class Bandit {
		displayName = "03 - Bandit";
		icon = "\A3\ui_f\data\igui\cfg\simpleTasks\types\kill_ca.paa";
	};
};

class CfgRespawnInventory {
    /*
        Survivors have 2 FAK and a Pistol
        Mechanics have 1 FAK, 1 Toolkit and a Pistol
        Bandits have 0 FAK/Toolkit. But they have a primary Weapon
        
        Create your own classes in virtual arsenal. use ctrl+shift+c to export to clipboard in cfg format.
    */

	class Survivor01 {
		displayName = "Survivor 01";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Survivalist";

		uniformClass = "U_C_Poloshirt_blue";
		backpack = "B_AssaultPack_rgr";
		weapons[] = {"hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","rvg_flare","rvg_flare"};
		items[] = {"FirstAidKit","FirstAidKit"};
		linkedItems[] = {"H_Cap_grn","rvg_ItemMap","ItemCompass","ItemWatch"};
	};

	class Survivor02 {
		displayName = "Survivor 02";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Survivalist";

		uniformClass = "rvg_retro_grey";
		backpack = "rvg_assault";
		weapons[] = {"hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","rvg_flare","rvg_flare"};
		items[] = {"FirstAidKit","FirstAidKit"};
		linkedItems[] = {"H_Cap_usblack","rvg_ItemMap","ItemCompass","ItemWatch"};
	};

	class Survivor03 {
		displayName = "Survivor 03";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Survivalist";

		uniformClass = "rvg_hoodie_kabeiroi";
		backpack = "rvg_assault";
		weapons[] = {"hgun_Rook40_F","Throw","Put"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","rvg_flare","rvg_flare"};
		items[] = {"FirstAidKit","FirstAidKit"};
		linkedItems[] = {"H_Booniehat_khk","rvg_ItemMap","ItemCompass","ItemWatch"};
	};

	class Survivor04 {
		displayName = "Survivor 04 (APEX DLC)";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Survivalist";

		uniformClass = "U_I_C_Soldier_Bandit_5_F";
		backpack = "B_AssaultPack_tna_F";
		weapons[] = {"hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","rvg_flare","rvg_flare"};
		items[] = {"FirstAidKit","FirstAidKit"};
		linkedItems[] = {"H_Booniehat_tna_F","rvg_ItemMap","ItemCompass","ItemWatch"};
	};

	class Survivor05 {
		displayName = "Survivor 05 (CONTACT DLC)";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Survivalist";

		uniformClass = "U_C_Uniform_Farmer_01_F";
		backpack = "B_FieldPack_green_F";
		weapons[] = {"hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","rvg_flare","rvg_flare","11Rnd_45ACP_Mag"};
		items[] = {"FirstAidKit","FirstAidKit"};
		linkedItems[] = {"H_Booniehat_eaf","rvg_ItemMap","ItemCompass","ItemWatch"};				
	};
	////////////////////////////////////////////////////
	class Mechanic01 {
		displayName = "Mechanic 01";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Mechanic";

		uniformClass = "U_C_WorkerCoverallsBlack";
		backpack = "B_FieldPack_blk";
		weapons[] = {"hgun_Pistol_heavy_02_F","Throw","Put"};
		magazines[] = {"6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","Chemlight_blue","rvg_flare","rvg_flare","Chemlight_blue","Chemlight_yellow","Chemlight_yellow"};
		items[] = {"FirstAidKit","ToolKit"};
		linkedItems[] = {"H_Bandanna_gry","rvg_ItemMap","ItemCompass","ItemWatch"};
	};

	class Mechanic02 {
		displayName = "Mechanic 02";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Mechanic";

		uniformClass = "U_C_Driver_3";
		backpack = "B_FieldPack_cbr";
		weapons[] = {"hgun_Rook40_F","Throw","Put"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","rvg_flare","rvg_flare","Chemlight_blue","Chemlight_yellow","Chemlight_yellow"};
		items[] = {"FirstAidKit","ToolKit"};
		linkedItems[] = {"H_RacingHelmet_1_red_F","rvg_ItemMap","ItemCompass","ItemWatch"};
	};

	class Mechanic03 {
		displayName = "Mechanic 03";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Mechanic";

		uniformClass = "rvg_retro_grey";
		backpack = "B_FieldPack_cbr";
		weapons[] = {"hgun_P07_F","Throw","Put"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","rvg_flare","rvg_flare","Chemlight_blue","Chemlight_yellow","Chemlight_yellow"};
		items[] = {"FirstAidKit","ToolKit"};
		linkedItems[] = {"rvg_construction_1","rvg_ItemMap","ItemCompass","ItemWatch"};		
	};

	class Mechanic04 {
		displayName = "Mechanic 04 (APEX DLC)";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Mechanic";

		uniformClass = "U_B_GEN_Soldier_F";
		backpack = "B_FieldPack_ghex_F";
		weapons[] = {"hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","Chemlight_blue","rvg_flare","rvg_flare","Chemlight_blue","Chemlight_yellow","Chemlight_yellow"};
		items[] = {"FirstAidKit","ToolKit"};
		linkedItems[] = {"H_Helmet_Skate","G_Lowprofile","rvg_ItemMap","ItemCompass","ItemWatch"};		
	};

	class Mechanic05 {
		displayName = "Mechanic 05 (CONTACT DLC)";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Mechanic";

		uniformClass = "U_O_R_Gorka_01_black_F";
		backpack = "B_RadioBag_01_black_F";
		weapons[] = {"hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","Chemlight_blue","rvg_flare","rvg_flare","Chemlight_blue","Chemlight_yellow","Chemlight_yellow"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"H_Tank_eaf_F","rvg_eyeprotector","rvg_ItemMap","ItemCompass","ItemWatch"};
	};

	////////////////////////////////////////////////////
	class Bandit01 {
		displayName = "Bandit 01";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Bandit";

		uniformClass = "U_I_G_resistanceLeader_F";
		backpack = "B_FieldPack_blk";
		weapons[] = {"SMG_01_F","Throw","Put"};
		magazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","rvg_flare","rvg_flare","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red"};
		items[] = {};
		linkedItems[] = {"H_ShemagOpen_khk","rvg_ItemMap","ItemCompass","ItemWatch"};
	};

	class Bandit02 {
		displayName = "Bandit 02";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Bandit";

		uniformClass = "rvg_hoodie_bandit";
		backpack = "B_FieldPack_khk";
		weapons[] = {"hgun_PDW2000_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","rvg_flare","rvg_flare","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red"};
		items[] = {};
		linkedItems[] = {"H_ShemagOpen_tan","rvg_ItemMap","ItemCompass","ItemWatch"};
	};

	class Bandit03 {
		displayName = "Bandit 03";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Bandit";

		uniformClass = "rvg_bandit";
		backpack = "B_FieldPack_khk";
		weapons[] = {"SMG_03_TR_black","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","rvg_flare","rvg_flare","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red"};
		items[] = {};
		linkedItems[] = {"H_Shemag_olive","rvg_ItemMap","ItemCompass","ItemWatch"};
	};

	class Bandit04 {
		displayName = "Bandit 04 (APEX DLC)";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Bandit";

		uniformClass = "U_I_C_Soldier_Para_1_F";
		backpack = "B_FieldPack_ghex_F";
		weapons[] = {"SMG_05_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","rvg_flare","rvg_flare","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red"};
		items[] = {};
		linkedItems[] = {"G_Balaclava_TI_blk_F","rvg_ItemMap","ItemCompass","ItemWatch"};
	};

	class Bandit05 {
		displayName = "Bandit 05 (CONTACT DLC)";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Bandit";

		uniformClass = "U_O_R_Gorka_01_F";
		backpack = "B_FieldPack_green_F";
		weapons[] = {"sgun_HunterShotgun_01_sawedoff_F","Throw","Put"};
		magazines[] = {"2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","rvg_flare","rvg_flare","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Slug"};
		items[] = {};
		linkedItems[] = {"G_AirPurifyingRespirator_02_olive_F","rvg_ItemMap","ItemCompass","ItemWatch"};
	};
};
