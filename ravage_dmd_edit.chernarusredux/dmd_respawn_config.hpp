
class CfgRoles {
	class Survivalist {
		displayName = "Survivalist";
		icon = "\A3\ui_f\data\igui\cfg\simpleTasks\types\run_ca.paa";
	};

	class Mechanic {
		displayName = "Mechanic";
		icon = "\A3\ui_f\data\igui\cfg\simpleTasks\types\repair_ca.paa";
	};

	class Bandit {
		displayName = "Bandit";
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

		uniformClass = "rvg_hoodie_kabeiroi";
		backpack = "rvg_assault";
		weapons[] = {"rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue","rvg_flare","rvg_flare"};
		items[] = {"FirstAidKit","FirstAidKit"};
		linkedItems[] = {"rvg_hat_brown","rvg_ItemMap","ItemCompass","ItemWatch"};
	};

	class Survivor02 {
		displayName = "Survivor 02";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Survivalist";

		uniformClass = "rvg_hoodie_blue";
		backpack = "rvg_assault";
		weapons[] = {"rhs_weap_pya","Throw","Put"};
		magazines[] = {"rhs_mag_9x19_17","rhs_mag_9x19_17","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue","rvg_flare","rvg_flare"};
		items[] = {"FirstAidKit","FirstAidKit"};
		linkedItems[] = {"rvg_safari_1","rvg_ItemMap","ItemCompass","ItemWatch"};
	};

	class Survivor03 {
		displayName = "Survivor 03";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Survivalist";

		uniformClass = "CUP_U_O_CHDKZ_Lopotev";
		backpack = "rvg_field";
		weapons[] = {"rhsusf_weap_m9","Throw","Put"};
		magazines[] = {"rhsusf_mag_15Rnd_9x19_JHP","rhsusf_mag_15Rnd_9x19_JHP","rhsusf_mag_15Rnd_9x19_JHP","rhsusf_mag_15Rnd_9x19_JHP","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue","rvg_flare","rvg_flare"};
		items[] = {"FirstAidKit","FirstAidKit"};
		linkedItems[] = {"rhs_beanie_green","G_Aviator","rvg_ItemMap","ItemCompass","ItemWatch"};
	};

	class Mechanic01 {
		displayName = "Mechanic 01";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Mechanic";

		uniformClass = "rvg_shirt_check";
		backpack = "rvg_field";
		weapons[] = {"rhsusf_weap_m9","Throw","Put"};
		magazines[] = {"rhsusf_mag_15Rnd_9x19_JHP","rhsusf_mag_15Rnd_9x19_JHP","rhsusf_mag_15Rnd_9x19_JHP","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue","rvg_flare","rvg_flare"};
		items[] = {"FirstAidKit","ToolKit"};
		linkedItems[] = {"rhs_altyn","rvg_ItemMap","ItemCompass","ItemWatch"};
	};

	class Mechanic02 {
		displayName = "Mechanic 02";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Mechanic";

		uniformClass = "U_C_WorkerCoverallsBlack";
		backpack = "rvg_field";
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		magazines[] = {"rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue","rvg_flare","rvg_flare"};
		items[] = {"FirstAidKit","ToolKit"};
		linkedItems[] = {"rvg_construction_2","rvg_ItemMap","ItemCompass","ItemWatch"};
	};

	class Mechanic03 {
		displayName = "Mechanic 03";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Mechanic";

		uniformClass = "CUP_U_C_Fireman_01";
		backpack = "CUP_B_RUS_Backpack";
		weapons[] = {"rhs_weap_pb_6p9","Throw","Put"};
		magazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue","rvg_flare","rvg_flare"};
		items[] = {"FirstAidKit","ToolKit"};
		linkedItems[] = {"CUP_H_C_Fireman_Helmet_01","rvg_ItemMap","ItemCompass","ItemWatch"};
	};

	class Bandit01 {
		displayName = "Bandit 01";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Bandit";

		uniformClass = "rvg_retro_bandit";
		backpack = "rvg_messengerbag_1";
		weapons[] = {"rhs_weap_m1garand_sa43","Throw","Put"};
		magazines[] = {"rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rvg_flare","rvg_flare","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red"};
		items[] = {};
		linkedItems[] = {"PU_shemagh_TanCLR","rvg_ItemMap","ItemCompass","ItemWatch"};
	};

	class Bandit02 {
		displayName = "Bandit 02";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Bandit";

		uniformClass = "rvg_shirt_bandit";
		backpack = "rvg_messengerbag_1";
		weapons[] = {"rhs_weap_m3a1","Throw","Put"};
		magazines[] = {"rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_2mag_SMG","rhsgref_30rnd_1143x23_M1911B_2mag_SMG","rvg_flare","rvg_flare","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red"};
		items[] = {};
		linkedItems[] = {"rvg_balaclava_3","rvg_ItemMap","ItemCompass","ItemWatch"};
	};

	class Bandit03 {
		displayName = "Bandit 03";
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
		role = "Bandit";

		uniformClass = "CUP_U_I_GUE_Anorak_03";
		backpack = "rvg_messengerbag_3";
		weapons[] = {"rhs_weap_m38","Throw","Put"};
		magazines[] = {"rhsgref_5Rnd_762x54_m38","rhsgref_30rnd_1143x23_M1911B_2mag_SMG","rhsgref_30rnd_1143x23_M1911B_2mag_SMG","rhsgref_5Rnd_762x54_m38","rvg_flare","rvg_flare","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38"};
		items[] = {};
		linkedItems[] = {"rvg_balaclavaCombat_4","rvg_ItemMap","ItemCompass","ItemWatch"};
	};
};
