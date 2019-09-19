//  #define DMD_USE_RHS 1
//  #define DMD_USE_CUP 1

class cfgHALsStore {
	containerTypes[] = {"LandVehicle", "Air", "Ship"};
	containerRadius = 10;
	currencySymbol = "$";
	debug = 1;

	class categories {

		class headgear {
			displayName = "Headgear";
			picture = "";
			// tier 1 headgear
			#ifdef DMD_USE_CUP
			class CUP_H_BAF_Officer_Beret		            { price = 10; stock = 100; };
			class CUP_H_BAF_Officer_Beret_PRR_O	            { price = 10; stock = 100; };
			class CUP_H_BAF_Officer_Beret_PRR_U	            { price = 10; stock = 100; };
			class CUP_H_C_Beanie_01           				{ price = 10; stock = 100; };
			class CUP_H_C_Beanie_02							{ price = 10; stock = 100; };
			class CUP_H_C_Beanie_03							{ price = 10; stock = 100; };
			class CUP_H_C_Beanie_04							{ price = 10; stock = 100; };
			class CUP_H_C_Beret_01							{ price = 10; stock = 100; };
			class CUP_H_C_Beret_02							{ price = 10; stock = 100; };
			class CUP_H_C_Beret_03							{ price = 10; stock = 100; };
			class CUP_H_C_Beret_04							{ price = 10; stock = 100; };
			class CUP_H_C_Fireman_Helmet_01					{ price = 10; stock = 100; };
			class CUP_H_C_MAGA_01							{ price = 10; stock = 100; };
			class CUP_H_C_Policecap_01						{ price = 10; stock = 100; };
			class CUP_H_C_TrackIR_01						{ price = 10; stock = 100; };
			class CUP_H_C_Ushanka_01						{ price = 10; stock = 100; };
			class CUP_H_C_Ushanka_02						{ price = 10; stock = 100; };
			class CUP_H_C_Ushanka_03						{ price = 10; stock = 100; };
			class CUP_H_C_Ushanka_04						{ price = 10; stock = 100; };
			class CUP_H_CDF_Beret_UN		            	{ price = 10; stock = 100; };
			class CUP_H_CDF_OfficerCap_DST		            { price = 10; stock = 100; };
			class CUP_H_CDF_OfficerCap_FST		            { price = 10; stock = 100; };
			class CUP_H_CDF_OfficerCap_MNT		            { price = 10; stock = 100; };
			class CUP_H_CDF_OfficerCap_UN		            { price = 10; stock = 100; };
			class CUP_H_ChDKZ_Beanie						{ price = 10; stock = 100; };
			class CUP_H_ChDKZ_Beret							{ price = 10; stock = 100; };
			class CUP_H_ChDKZ_Cap							{ price = 10; stock = 100; };
			class CUP_H_FR_Bandana_Headset					{ price = 10; stock = 100; };
			class CUP_H_FR_BandanaGreen						{ price = 10; stock = 100; };
			class CUP_H_FR_BandanaWdl						{ price = 10; stock = 100; };
			class CUP_H_FR_BeanieGreen						{ price = 10; stock = 100; };
			class CUP_H_FR_BoonieMARPAT						{ price = 10; stock = 100; };
			class CUP_H_FR_BoonieWDL						{ price = 10; stock = 100; };
			class CUP_H_FR_Cap_Headset_Green				{ price = 10; stock = 100; };
			class CUP_H_FR_Cap_Officer_Headset				{ price = 10; stock = 100; };
			class CUP_H_FR_ECH								{ price = 10; stock = 100; };
			class CUP_H_FR_Headband_Headset					{ price = 10; stock = 100; };
			class CUP_H_FR_Headset							{ price = 10; stock = 100; };
			class CUP_H_FR_PRR_BoonieWDL					{ price = 10; stock = 100; };
			class CUP_H_GER_Boonie_desert					{ price = 10; stock = 100; };
			class CUP_H_GER_Boonie_Flecktarn				{ price = 10; stock = 100; };
			class CUP_H_NAPA_Fedora							{ price = 10; stock = 100; };
			class CUP_H_PMC_Cap_Back_EP_Tan					{ price = 10; stock = 100; };
			class CUP_H_PMC_Cap_Grey						{ price = 10; stock = 100; };
			class CUP_H_PMC_Cap_PRR_Grey					{ price = 10; stock = 100; };
			class CUP_H_PMC_Cap_PRR_Tan						{ price = 10; stock = 100; };
			class CUP_H_PMC_Cap_Tan							{ price = 10; stock = 100; };
			class CUP_H_PMC_EP_Headset          			{ price = 10; stock = 100; };
			class CUP_H_PMC_PRR_Headset         			{ price = 10; stock = 100; };
			class CUP_H_RACS_Beret_Blue         			{ price = 10; stock = 100; };
			class CUP_H_RUS_Bandana_HS		            	{ price = 10; stock = 100; };
			class CUP_H_RUS_Beret_Spetsnaz		            { price = 10; stock = 100; };
			class CUP_H_RUS_Beret_VDV		            	{ price = 10; stock = 100; };
			class CUP_H_SLA_BeanieGreen           			{ price = 10; stock = 100; };
			class CUP_H_SLA_Beret               			{ price = 10; stock = 100; };
			class CUP_H_SLA_Boonie              			{ price = 10; stock = 100; };
			class CUP_H_SLA_OfficerCap          			{ price = 10; stock = 100; };
			class CUP_H_SLA_SLCap               			{ price = 10; stock = 100; };
			class CUP_H_TK_Beret              				{ price = 10; stock = 100; };
			class CUP_H_TK_Lungee             				{ price = 10; stock = 100; };
			class CUP_H_TKI_Lungee_01           			{ price = 10; stock = 100; };
			class CUP_H_TKI_Lungee_02           			{ price = 10; stock = 100; };
			class CUP_H_TKI_Lungee_03           			{ price = 10; stock = 100; };
			class CUP_H_TKI_Lungee_04           			{ price = 10; stock = 100; };
			class CUP_H_TKI_Lungee_05           			{ price = 10; stock = 100; };
			class CUP_H_TKI_Lungee_06           			{ price = 10; stock = 100; };
			class CUP_H_TKI_Lungee_Open_01      			{ price = 10; stock = 100; };
			class CUP_H_TKI_Lungee_Open_02      			{ price = 10; stock = 100; };
			class CUP_H_TKI_Lungee_Open_03      			{ price = 10; stock = 100; };
			class CUP_H_TKI_Lungee_Open_04      			{ price = 10; stock = 100; };
			class CUP_H_TKI_Lungee_Open_05      			{ price = 10; stock = 100; };
			class CUP_H_TKI_Lungee_Open_06      			{ price = 10; stock = 100; };
			class CUP_H_TKI_Pakol_1_01          			{ price = 10; stock = 100; };
			class CUP_H_TKI_Pakol_1_02          			{ price = 10; stock = 100; };
			class CUP_H_TKI_Pakol_1_03          			{ price = 10; stock = 100; };
			class CUP_H_TKI_Pakol_1_04          			{ price = 10; stock = 100; };
			class CUP_H_TKI_Pakol_1_05          			{ price = 10; stock = 100; };
			class CUP_H_TKI_Pakol_1_06          			{ price = 10; stock = 100; };
			class CUP_H_TKI_Pakol_2_01          			{ price = 10; stock = 100; };
			class CUP_H_TKI_Pakol_2_02          			{ price = 10; stock = 100; };
			class CUP_H_TKI_Pakol_2_03          			{ price = 10; stock = 100; };
			class CUP_H_TKI_Pakol_2_04        				{ price = 10; stock = 100; };
			class CUP_H_TKI_Pakol_2_05        				{ price = 10; stock = 100; };
			class CUP_H_TKI_Pakol_2_06        				{ price = 10; stock = 100; };
			class CUP_H_TKI_SkullCap_01       				{ price = 10; stock = 100; };
			class CUP_H_TKI_SkullCap_02       				{ price = 10; stock = 100; };
			class CUP_H_TKI_SkullCap_03       				{ price = 10; stock = 100; };
			class CUP_H_TKI_SkullCap_04       				{ price = 10; stock = 100; };
			class CUP_H_TKI_SkullCap_05       				{ price = 10; stock = 100; };
			class CUP_H_TKI_SkullCap_06       				{ price = 10; stock = 100; };
			class CUP_H_USMC_Officer_Cap      				{ price = 10; stock = 100; };
			#endif

			#ifdef DMD_USE_RHS
			class rhs_Booniehat_marpatd						{ price = 10; stock = 100; };
			class rhs_Booniehat_marpatwd					{ price = 10; stock = 100; };
			class rhssaf_booniehat_digital				 	{ price = 10; stock = 100; };
			class rhssaf_booniehat_md2camo				 	{ price = 10; stock = 100; };
			class rhssaf_booniehat_woodland				 	{ price = 10; stock = 100; };
			#endif

			class H_Bandanna_camo							{ price = 10; stock = 100; };
			class H_Bandanna_cbr							{ price = 10; stock = 100; };
			class H_Bandanna_gry							{ price = 10; stock = 100; };
			class H_Bandanna_khk							{ price = 10; stock = 100; };
			class H_Bandanna_khk_hs							{ price = 10; stock = 100; };
			class H_Bandanna_mcamo							{ price = 10; stock = 100; };
			class H_Bandanna_sgg							{ price = 10; stock = 100; };
			class H_Bandanna_surfer							{ price = 10; stock = 100; };
			class H_Beret_02								{ price = 10; stock = 100; };
			class H_Beret_blk								{ price = 10; stock = 100; };
			class H_Beret_blk_POLICE						{ price = 10; stock = 100; };
			class H_Beret_brn_SF							{ price = 10; stock = 100; };
			class H_Beret_Colonel							{ price = 10; stock = 100; };
			class H_Beret_gen_F								{ price = 10; stock = 100; };
			class H_Beret_grn								{ price = 10; stock = 100; };
			class H_Beret_grn_SF							{ price = 10; stock = 100; };
			class H_Beret_ocamo								{ price = 10; stock = 100; };
			class H_Beret_red								{ price = 10; stock = 100; };
			class H_Booniehat_dgtl							{ price = 10; stock = 100; };
			class H_Booniehat_dirty							{ price = 10; stock = 100; };
			class H_Booniehat_grn							{ price = 10; stock = 100; };
			class H_Booniehat_indp							{ price = 10; stock = 100; };
			class H_Booniehat_khk							{ price = 10; stock = 100; };
			class H_Booniehat_khk_hs						{ price = 10; stock = 100; };
			class H_Booniehat_mcamo							{ price = 10; stock = 100; };
			class H_Booniehat_tan							{ price = 10; stock = 100; };
			class H_Booniehat_tna_F							{ price = 10; stock = 100; };
			class H_Cap_Black_IDAP_F						{ price = 10; stock = 100; };
			class H_Cap_blk									{ price = 10; stock = 100; };
			class H_Cap_blk_Raven							{ price = 10; stock = 100; };
			class H_Cap_blk_Syndikat_F						{ price = 10; stock = 100; };
			class H_Cap_blu									{ price = 10; stock = 100; };
			class H_Cap_brn_SPECOPS							{ price = 10; stock = 100; };
			class H_Cap_grn									{ price = 10; stock = 100; };
			class H_Cap_grn_Syndikat_F						{ price = 10; stock = 100; };
			class H_Cap_headphones							{ price = 10; stock = 100; };
			class H_Cap_khaki_specops_UK					{ price = 10; stock = 100; };
			class H_Cap_oli									{ price = 10; stock = 100; };
			class H_Cap_oli_Syndikat_F						{ price = 10; stock = 100; };
			class H_Cap_Orange_IDAP_F						{ price = 10; stock = 100; };
			class H_Cap_press								{ price = 10; stock = 100; };
			class H_Cap_red									{ price = 10; stock = 100; };
			class H_Cap_tan									{ price = 10; stock = 100; };
			class H_Cap_tan_specops_US						{ price = 10; stock = 100; };
			class H_Cap_tan_Syndikat_F						{ price = 10; stock = 100; };
			class H_Cap_White_IDAP_F						{ price = 10; stock = 100; };
			class H_EarProtectors_black_F					{ price = 10; stock = 100; };
			class H_EarProtectors_red_F						{ price = 10; stock = 100; };
			class H_EarProtectors_yellow_F					{ price = 10; stock = 100; };
			class H_FakeHeadgear_Syndikat_F					{ price = 10; stock = 100; };
			class H_Hat_blue								{ price = 10; stock = 100; };
			class H_Hat_brown								{ price = 10; stock = 100; };
			class H_Hat_camo								{ price = 10; stock = 100; };
			class H_Hat_checker								{ price = 10; stock = 100; };
			class H_Hat_grey								{ price = 10; stock = 100; };
			class H_Hat_Safari_olive_F						{ price = 10; stock = 100; };
			class H_Hat_Safari_sand_F						{ price = 10; stock = 100; };
			class H_Hat_tan									{ price = 10; stock = 100; };
			class H_HeadBandage_bloody_F					{ price = 10; stock = 100; };
			class H_HeadBandage_clean_F						{ price = 10; stock = 100; };
			class H_HeadBandage_stained_F					{ price = 10; stock = 100; };
			class H_HeadSet_black_F							{ price = 10; stock = 100; };
			class H_HeadSet_orange_F						{ price = 10; stock = 100; };
			class H_HeadSet_white_F							{ price = 10; stock = 100; };
			class H_Helmet_Skate              				{ price = 10; stock = 100; };
			class H_MilCap_blue 							{ price = 10; stock = 100; };
			class H_MilCap_dgtl 							{ price = 10; stock = 100; };
			class H_MilCap_gen_F              				{ price = 10; stock = 100; };
			class H_MilCap_ghex_F             				{ price = 10; stock = 100; };
			class H_MilCap_mcamo 							{ price = 10; stock = 100; };
			class H_MilCap_ocamo 							{ price = 10; stock = 100; };
			class H_MilCap_oucamo 							{ price = 10; stock = 100; };
			class H_MilCap_rucamo 							{ price = 10; stock = 100; };
			class H_MilCap_tna_F              				{ price = 10; stock = 100; };
			class H_Shemag_khk								{ price = 10; stock = 100; };
			class H_Shemag_olive							{ price = 10; stock = 100; };
			class H_Shemag_olive_hs							{ price = 10; stock = 100; };
			class H_Shemag_tan								{ price = 10; stock = 100; };
			class H_ShemagOpen_khk							{ price = 10; stock = 100; };
			class H_ShemagOpen_tan							{ price = 10; stock = 100; };
			class H_StrawHat								{ price = 10; stock = 100; };
			class H_StrawHat_dark							{ price = 10; stock = 100; };
			class H_TurbanO_blk								{ price = 10; stock = 100; };
			class H_Watchcap_blk 							{ price = 10; stock = 100; };
			class H_Watchcap_camo 							{ price = 10; stock = 100; };
			class H_Watchcap_khk 							{ price = 10; stock = 100; };
			class H_Watchcap_sgg 							{ price = 10; stock = 100; };
			class H_WirelessEarpiece_F						{ price = 10; stock = 100; };

			// tier 2 headgear
			#ifdef DMD_USE_CUP
			class CUP_H_CDF_H_PASGT_DST		            	{ price = 30; stock = 100; };
			class CUP_H_CDF_H_PASGT_FST		            	{ price = 30; stock = 100; };
			class CUP_H_CDF_H_PASGT_MNT		            	{ price = 30; stock = 100; };
			class CUP_H_CDF_H_PASGT_UN		            	{ price = 30; stock = 100; };
			class CUP_H_RACS_Helmet_Goggles_mech			{ price = 30; stock = 100; };
			class CUP_H_RACS_Helmet_Headset_mech			{ price = 30; stock = 100; };
			class CUP_H_RACS_Helmet_mech					{ price = 30; stock = 100; };
			class CUP_H_RUS_TSH_4_Brown		            	{ price = 30; stock = 100; };
			class CUP_H_RUS_ZSH_1							{ price = 30; stock = 100; };
			class CUP_H_RUS_ZSH_1_Goggles					{ price = 30; stock = 100; };
			class CUP_H_RUS_ZSH_Shield_Down					{ price = 30; stock = 100; };
			class CUP_H_RUS_ZSH_Shield_Up					{ price = 30; stock = 100; };
			class CUP_H_SLA_Helmet                    		{ price = 30; stock = 100; };
			class CUP_H_SLA_Pilot_Helmet                  	{ price = 30; stock = 100; };
			class CUP_H_SLA_TankerHelmet                  	{ price = 30; stock = 100; };
			class CUP_H_TK_Helmet                    		{ price = 30; stock = 100; };
			class CUP_H_TK_PilotHelmet                    	{ price = 30; stock = 100; };
			class CUP_H_TK_TankerHelmet                   	{ price = 30; stock = 100; };
			class CUP_H_USMC_Crew_Helmet                  	{ price = 30; stock = 100; };
			class CUP_H_USMC_Goggles_HelmetWDL            	{ price = 30; stock = 100; };
			class CUP_H_USMC_HeadSet_GoggleW_HelmetWDL    	{ price = 30; stock = 100; };
			class CUP_H_USMC_HeadSet_HelmetWDL            	{ price = 30; stock = 100; };
			class CUP_H_USMC_Helmet_Pilot                 	{ price = 30; stock = 100; };
			class CUP_H_USMC_HelmetWDL                   	{ price = 30; stock = 100; };
			class CUP_H_USMC_LWH_DES                 		{ price = 30; stock = 100; };
			class CUP_H_USMC_LWH_ESS_DES					{ price = 30; stock = 100; };
			class CUP_H_USMC_LWH_ESS_HS_DES					{ price = 30; stock = 100; };
			class CUP_H_USMC_LWH_ESS_HS_WDL					{ price = 30; stock = 100; };
			class CUP_H_USMC_LWH_ESS_LR_DES					{ price = 30; stock = 100; };
			class CUP_H_USMC_LWH_ESS_LR_WDL					{ price = 30; stock = 100; };
			class CUP_H_USMC_LWH_ESS_WDL					{ price = 30; stock = 100; };
			class CUP_H_USMC_LWH_NVGMOUNT_DES				{ price = 30; stock = 100; };
			class CUP_H_USMC_LWH_NVGMOUNT_ESS_DES			{ price = 30; stock = 100; };
			class CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES		{ price = 30; stock = 100; };
			class CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_WDL		{ price = 30; stock = 100; };
			class CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES		{ price = 30; stock = 100; };
			class CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_WDL		{ price = 30; stock = 100; };
			class CUP_H_USMC_LWH_NVGMOUNT_ESS_WDL			{ price = 30; stock = 100; };
			class CUP_H_USMC_LWH_NVGMOUNT_WDL	        	{ price = 30; stock = 100; };
			class CUP_H_USMC_LWH_WDL	              		{ price = 30; stock = 100; };
			#endif

			#ifdef DMD_USE_RHS
			class rhs_6b27m									{ price = 30; stock = 100; };
			class rhs_6b27m_bala							{ price = 30; stock = 100; };
			class rhs_6b27m_digi							{ price = 30; stock = 100; };
			class rhs_6b27m_digi_bala						{ price = 30; stock = 100; };
			class rhs_6b27m_digi_ess						{ price = 30; stock = 100; };
			class rhs_6b27m_digi_ess_bala					{ price = 30; stock = 100; };
			class rhs_6b27m_ess								{ price = 30; stock = 100; };
			class rhs_6b27m_ess_bala						{ price = 30; stock = 100; };
			class rhs_6b27m_ml								{ price = 30; stock = 100; };
			class rhs_6b27m_ml_bala							{ price = 30; stock = 100; };
			class rhs_6b27m_ml_ess							{ price = 30; stock = 100; };
			class rhs_6b27m_ML_ess_bala						{ price = 30; stock = 100; };
			#endif

			class H_Construction_basic_black_F		        { price = 30; stock = 100; };
			class H_Construction_earprot_orange_F		    { price = 30; stock = 100; };
			class H_Construction_earprot_white_F		    { price = 30; stock = 100; };
			class H_Construction_earprot_yellow_F		    { price = 30; stock = 100; };
			class H_Construction_headset_red_F		        { price = 30; stock = 100; };
			class H_HelmetB_light							{ price = 30; stock = 100; };
			class H_HelmetB_light_black						{ price = 30; stock = 100; };
			class H_HelmetB_light_desert					{ price = 30; stock = 100; };
			class H_HelmetB_light_grass						{ price = 30; stock = 100; };
			class H_HelmetB_light_sand						{ price = 30; stock = 100; };
			class H_HelmetB_light_snakeskin					{ price = 30; stock = 100; };
			class H_HelmetB_Light_tna_F       				{ price = 30; stock = 100; };
			class H_HelmetIA								{ price = 30; stock = 100; };
			class H_HelmetIA_camo							{ price = 30; stock = 100; };
			class H_HelmetIA_net							{ price = 30; stock = 100; };
			class H_PASGT_basic_blue_F		           		{ price = 30; stock = 100; };
			class H_PASGT_basic_blue_press_F		        { price = 30; stock = 100; };
			class H_PASGT_basic_olive_F		           		{ price = 30; stock = 100; };
			class H_PASGT_basic_white_F		           		{ price = 30; stock = 100; };
			class H_PASGT_neckprot_blue_press_F		        { price = 30; stock = 100; };
			
			// tier 3 headgear
			#ifdef DMD_USE_CUP
			class CUP_H_BAF_Crew_Helmet_DDPM						{ price = 75; stock = 100; };
			class CUP_H_BAF_Crew_Helmet_DPM							{ price = 75; stock = 100; };
			class CUP_H_BAF_Crew_Helmet_MTP							{ price = 75; stock = 100; };
			class CUP_H_BAF_Helmet_1_DDPM							{ price = 75; stock = 100; };
			class CUP_H_BAF_Helmet_1_DPM							{ price = 75; stock = 100; };
			class CUP_H_BAF_Helmet_1_MTP							{ price = 75; stock = 100; };
			class CUP_H_BAF_Helmet_2_DDPM							{ price = 75; stock = 100; };
			class CUP_H_BAF_Helmet_2_DPM							{ price = 75; stock = 100; };
			class CUP_H_BAF_Helmet_2_MTP							{ price = 75; stock = 100; };
			class CUP_H_BAF_Helmet_3_DDPM							{ price = 75; stock = 100; };
			class CUP_H_BAF_Helmet_3_DPM							{ price = 75; stock = 100; };
			class CUP_H_BAF_Helmet_3_MTP							{ price = 75; stock = 100; };
			class CUP_H_BAF_Helmet_4_DDPM							{ price = 75; stock = 100; };
			class CUP_H_BAF_Helmet_4_DPM							{ price = 75; stock = 100; };
			class CUP_H_BAF_Helmet_4_MTP							{ price = 75; stock = 100; };
			class CUP_H_BAF_Helmet_Net_2_DDPM						{ price = 75; stock = 100; };
			class CUP_H_BAF_Helmet_Net_2_DPM						{ price = 75; stock = 100; };
			class CUP_H_BAF_Helmet_Net_2_MTP						{ price = 75; stock = 100; };
			class CUP_H_BAF_Helmet_Pilot							{ price = 75; stock = 100; };
			class CUP_H_Navy_CrewHelmet_Blue              			{ price = 75; stock = 100; };
			class CUP_H_Navy_CrewHelmet_Brown             			{ price = 75; stock = 100; };
			class CUP_H_Navy_CrewHelmet_Green             			{ price = 75; stock = 100; };
			class CUP_H_Navy_CrewHelmet_Red               			{ price = 75; stock = 100; };
			class CUP_H_Navy_CrewHelmet_Violet            			{ price = 75; stock = 100; };
			class CUP_H_Navy_CrewHelmet_White             			{ price = 75; stock = 100; };
			class CUP_H_Navy_CrewHelmet_Yellow            			{ price = 75; stock = 100; };
			class CUP_H_RACS_Helmet_Des                   			{ price = 75; stock = 100; };
			class CUP_H_RACS_Helmet_DPAT                  			{ price = 75; stock = 100; };
			class CUP_H_RACS_Helmet_Goggles_Des           			{ price = 75; stock = 100; };
			class CUP_H_RACS_Helmet_Goggles_DPAT          			{ price = 75; stock = 100; };
			class CUP_H_RACS_Helmet_Headset_Des           			{ price = 75; stock = 100; };
			class CUP_H_RACS_Helmet_Headset_DPAT          			{ price = 75; stock = 100; };
			class CUP_H_RUS_6B27									{ price = 75; stock = 100; };
			class CUP_H_RUS_6B27_NVG								{ price = 75; stock = 100; };
			class CUP_H_RUS_6B27_NVG_olive							{ price = 75; stock = 100; };
			class CUP_H_RUS_6B27_olive								{ price = 75; stock = 100; };
			class CUP_H_USArmy_Helmet_M1_btp               			{ price = 75; stock = 100; };
			class CUP_H_USArmy_Helmet_M1_m81                		{ price = 75; stock = 100; };
			class CUP_H_USArmy_Helmet_M1_Olive             			{ price = 75; stock = 100; };
			class CUP_H_USArmy_Helmet_M1_Vine              			{ price = 75; stock = 100; };
			class CUP_H_USArmy_HelmetMICH							{ price = 75; stock = 100; };
			class CUP_H_USArmy_HelmetMICH_earpro					{ price = 75; stock = 100; };
			class CUP_H_USArmy_HelmetMICH_earpro_ess				{ price = 75; stock = 100; };
			class CUP_H_USArmy_HelmetMICH_ESS						{ price = 75; stock = 100; };
			class CUP_H_USArmy_HelmetMICH_headset					{ price = 75; stock = 100; };
			class CUP_H_USArmy_HelmetMICH_headset_ess				{ price = 75; stock = 100; };
			class CUP_H_USArmy_HelmetMICH_wdl						{ price = 75; stock = 100; };
			class CUP_H_USMC_MICH2000_COMM_DES						{ price = 75; stock = 100; };
			class CUP_H_USMC_MICH2000_COMM_WDL						{ price = 75; stock = 100; };
			class CUP_H_USMC_MICH2000_DEF_DES						{ price = 75; stock = 100; };
			class CUP_H_USMC_MICH2000_DEF_ESS_DES					{ price = 75; stock = 100; };
			class CUP_H_USMC_MICH2000_DEF_ESS_WDL					{ price = 75; stock = 100; };
			class CUP_H_USMC_MICH2000_DEF_WDL						{ price = 75; stock = 100; };
			class CUP_H_USMC_MICH2000_DES							{ price = 75; stock = 100; };
			class CUP_H_USMC_MICH2000_ESS_COMM_DES					{ price = 75; stock = 100; };
			class CUP_H_USMC_MICH2000_ESS_COMM_WDL					{ price = 75; stock = 100; };
			class CUP_H_USMC_MICH2000_WDL							{ price = 75; stock = 100; };
			#endif

			#ifdef DMD_USE_RHS
			class rhs_6b26											{ price = 75; stock = 100; };
			class rhs_6b26_bala										{ price = 75; stock = 100; };
			class rhs_6b26_bala_green								{ price = 75; stock = 100; };
			class rhs_6b26_ess										{ price = 75; stock = 100; };
			class rhs_6b26_ess_bala									{ price = 75; stock = 100; };
			class rhs_6b26_ess_bala_green							{ price = 75; stock = 100; };
			class rhs_6b26_ess_green								{ price = 75; stock = 100; };
			class rhs_6b26_green									{ price = 75; stock = 100; };
			class rhs_6b27m_green									{ price = 75; stock = 100; };
			class rhs_6b27m_green_ess								{ price = 75; stock = 100; };
			class rhs_6b27m_green_ess_bala							{ price = 75; stock = 100; };
			class rhs_6b28											{ price = 75; stock = 100; };
			class rhs_6b28_bala										{ price = 75; stock = 100; };
			class rhs_6b28_ess										{ price = 75; stock = 100; };
			class rhs_6b28_ess_bala									{ price = 75; stock = 100; };
			class rhs_6b28_flora									{ price = 75; stock = 100; };
			class rhs_6b28_flora_bala								{ price = 75; stock = 100; };
			class rhs_6b28_flora_ess								{ price = 75; stock = 100; };
			class rhs_6b28_flora_ess_bala							{ price = 75; stock = 100; };
			class rhs_6b28_green									{ price = 75; stock = 100; };
			class rhs_6b28_green_bala								{ price = 75; stock = 100; };
			class rhs_6b28_green_ess								{ price = 75; stock = 100; };
			class rhs_6b28_green_ess_bala							{ price = 75; stock = 100; };
			class rhs_Booniehat_digi								{ price = 75; stock = 100; };
			class rhs_Booniehat_flora								{ price = 75; stock = 100; };
			class rhs_Booniehat_m81									{ price = 75; stock = 100; };
			class rhs_Booniehat_ocp									{ price = 75; stock = 100; };
			class rhs_Booniehat_ucp									{ price = 75; stock = 100; };
			class rhs_ssh68											{ price = 75; stock = 100; };
			class rhsgref_6b27m										{ price = 75; stock = 100; };
			class rhsgref_6b27m_ttsko_digi							{ price = 75; stock = 100; };
			class rhsgref_6b27m_ttsko_forest						{ price = 75; stock = 100; };
			class rhsgref_6b27m_ttsko_mountain						{ price = 75; stock = 100; };
			class rhsgref_6b27m_ttsko_urban							{ price = 75; stock = 100; };
			class rhsgref_Booniehat_alpen							{ price = 75; stock = 100; };
			class rhsgref_fieldcap									{ price = 75; stock = 100; };
			class rhsgref_fieldcap_ttsko_digi						{ price = 75; stock = 100; };
			class rhsgref_fieldcap_ttsko_forest						{ price = 75; stock = 100; };
			class rhsgref_fieldcap_ttsko_mountain					{ price = 75; stock = 100; };
			class rhsgref_fieldcap_ttsko_urban						{ price = 75; stock = 100; };
			class rhsgref_patrolcap_specter							{ price = 75; stock = 100; };
			class rhsgref_ssh68										{ price = 75; stock = 100; };
			class rhsgref_ssh68_emr									{ price = 75; stock = 100; };
			class rhsgref_ssh68_ttsko_digi							{ price = 75; stock = 100; };
			class rhsgref_ssh68_ttsko_forest						{ price = 75; stock = 100; };
			class rhsgref_ssh68_ttsko_mountain						{ price = 75; stock = 100; };
			class rhsgref_ssh68_un									{ price = 75; stock = 100; };
			class rhssaf_beret_black				 				{ price = 75; stock = 100; };
			class rhssaf_beret_blue_un				 				{ price = 75; stock = 100; };
			class rhssaf_beret_green				 				{ price = 75; stock = 100; };
			class rhssaf_beret_red				 					{ price = 75; stock = 100; };
			class rhssaf_helmet_hgu56p				 				{ price = 75; stock = 100; };
			class rhssaf_helmet_m59_85_nocamo						{ price = 75; stock = 100; };
			class rhssaf_helmet_m59_85_oakleaf				 		{ price = 75; stock = 100; };
			class rhssaf_helmet_m97_black_nocamo				 	{ price = 75; stock = 100; };
			class rhssaf_helmet_m97_black_nocamo_black_ess			{ price = 75; stock = 100; };
			class rhssaf_helmet_m97_black_nocamo_black_ess_bare		{ price = 75; stock = 100; };
			class rhssaf_Helmet_m97_digital				 			{ price = 75; stock = 100; };
			class rhssaf_helmet_m97_digital_black_ess				{ price = 75; stock = 100; };
			class rhssaf_helmet_m97_digital_black_ess_bare			{ price = 75; stock = 100; };
			class rhssaf_Helmet_m97_md2camo				 			{ price = 75; stock = 100; };
			class rhssaf_helmet_m97_md2camo_black_ess				{ price = 75; stock = 100; };
			class rhssaf_helmet_m97_md2camo_black_ess_bare			{ price = 75; stock = 100; };
			class rhssaf_helmet_m97_nostrap_blue				 	{ price = 75; stock = 100; };
			class rhssaf_helmet_m97_nostrap_blue_tan_ess			{ price = 75; stock = 100; };
			class rhssaf_helmet_m97_nostrap_blue_tan_ess_bare		{ price = 75; stock = 100; };
			class rhssaf_Helmet_m97_oakleaf							{ price = 75; stock = 100; };
			class rhssaf_helmet_m97_oakleaf_black_ess				{ price = 75; stock = 100; };
			class rhssaf_helmet_m97_oakleaf_black_ess_bare			{ price = 75; stock = 100; };
			class rhssaf_helmet_m97_olive_nocamo					{ price = 75; stock = 100; };
			class rhssaf_helmet_m97_olive_nocamo_black_ess			{ price = 75; stock = 100; };
			class rhssaf_helmet_m97_olive_nocamo_black_ess_bare	 	{ price = 75; stock = 100; };
			class rhssaf_Helmet_m97_woodland				 		{ price = 75; stock = 100; };
			class rhssaf_helmet_m97_woodland_black_ess				{ price = 75; stock = 100; };
			class rhssaf_helmet_m97_woodland_black_ess_bare			{ price = 75; stock = 100; };
			class rhsusf_ach_bare									{ price = 75; stock = 100; };
			class rhsusf_ach_bare_des								{ price = 75; stock = 100; };
			class rhsusf_ach_bare_des_ess							{ price = 75; stock = 100; };
			class rhsusf_ach_bare_ess								{ price = 75; stock = 100; };
			class rhsusf_ach_bare_semi								{ price = 75; stock = 100; };
			class rhsusf_ach_bare_semi_ess							{ price = 75; stock = 100; };
			class rhsusf_ach_bare_tan								{ price = 75; stock = 100; };
			class rhsusf_ach_bare_tan_ess							{ price = 75; stock = 100; };
			class rhsusf_ach_bare_wood								{ price = 75; stock = 100; };
			class rhsusf_ach_bare_wood_ess							{ price = 75; stock = 100; };
			class rhsusf_ach_helmet_ESS_ocp							{ price = 75; stock = 100; };
			class rhsusf_ach_helmet_ESS_ucp							{ price = 75; stock = 100; };
			class rhsusf_ach_helmet_ocp								{ price = 75; stock = 100; };
			class rhsusf_ach_helmet_ocp_norotos						{ price = 75; stock = 100; };
			class rhsusf_ach_helmet_ucp								{ price = 75; stock = 100; };
			class rhsusf_ach_helmet_ucp_norotos						{ price = 75; stock = 100; };
			class rhsusf_Bowman										{ price = 75; stock = 100; };
			class rhsusf_bowman_cap									{ price = 75; stock = 100; };
			class rhsusf_lwh_helmet_M1942							{ price = 75; stock = 100; };
			class rhsusf_lwh_helmet_marpatd							{ price = 75; stock = 100; };
			class rhsusf_lwh_helmet_marpatd_ess						{ price = 75; stock = 100; };
			class rhsusf_lwh_helmet_marpatwd						{ price = 75; stock = 100; };
			class rhsusf_lwh_helmet_marpatwd_ess					{ price = 75; stock = 100; };
			class rhsusf_mich_bare									{ price = 75; stock = 100; };
			class rhsusf_mich_bare_alt								{ price = 75; stock = 100; };
			class rhsusf_mich_bare_alt_semi							{ price = 75; stock = 100; };
			class rhsusf_mich_bare_alt_tan							{ price = 75; stock = 100; };
			class rhsusf_mich_bare_norotos							{ price = 75; stock = 100; };
			class rhsusf_mich_bare_norotos_alt						{ price = 75; stock = 100; };
			class rhsusf_mich_bare_norotos_alt_semi					{ price = 75; stock = 100; };
			class rhsusf_mich_bare_norotos_alt_tan					{ price = 75; stock = 100; };
			class rhsusf_mich_bare_norotos_arc						{ price = 75; stock = 100; };
			class rhsusf_mich_bare_norotos_arc_alt					{ price = 75; stock = 100; };
			class rhsusf_mich_bare_norotos_arc_alt_semi				{ price = 75; stock = 100; };
			class rhsusf_mich_bare_norotos_arc_alt_tan				{ price = 75; stock = 100; };
			class rhsusf_mich_bare_norotos_arc_semi					{ price = 75; stock = 100; };
			class rhsusf_mich_bare_norotos_arc_tan					{ price = 75; stock = 100; };
			class rhsusf_mich_bare_norotos_semi						{ price = 75; stock = 100; };
			class rhsusf_mich_bare_norotos_tan						{ price = 75; stock = 100; };
			class rhsusf_mich_bare_semi								{ price = 75; stock = 100; };
			class rhsusf_mich_bare_tan								{ price = 75; stock = 100; };
			class rhsusf_mich_helmet_marpatwd						{ price = 75; stock = 100; };
			class rhsusf_mich_helmet_marpatwd_norotos				{ price = 75; stock = 100; };
			class rhsusf_mich_helmet_marpatwd_norotos_arc			{ price = 75; stock = 100; };
			#endif

			class H_HelmetB											{ price = 75; stock = 100; };
			class H_HelmetB_black									{ price = 75; stock = 100; };
			class H_HelmetB_camo									{ price = 75; stock = 100; };
			class H_HelmetB_desert									{ price = 75; stock = 100; };
			class H_HelmetB_grass									{ price = 75; stock = 100; };
			class H_HelmetB_paint									{ price = 75; stock = 100; };
			class H_HelmetB_plain_blk								{ price = 75; stock = 100; };
			class H_HelmetB_sand									{ price = 75; stock = 100; };
			class H_HelmetB_snakeskin								{ price = 75; stock = 100; };
			class H_HelmetB_tna_F             						{ price = 75; stock = 100; };
			
			// tier 4 headgear
			class H_CrewHelmetHeli_B								{ price = 125; stock = 20; };
			class H_CrewHelmetHeli_I								{ price = 125; stock = 20; };
			class H_CrewHelmetHeli_O								{ price = 125; stock = 20; };
			class H_HelmetB_Enh_tna_F         						{ price = 125; stock = 20; };
			class H_HelmetB_TI_tna_F          						{ price = 125; stock = 20; };
			class H_HelmetCrew_B									{ price = 125; stock = 20; };
			class H_HelmetCrew_I									{ price = 125; stock = 20; };
			class H_HelmetCrew_O									{ price = 125; stock = 20; };
			class H_HelmetCrew_O_ghex_F       						{ price = 125; stock = 20; };
			class H_HelmetO_ghex_F            						{ price = 125; stock = 20; };
			class H_HelmetSpecB										{ price = 125; stock = 20; };
			class H_HelmetSpecB_blk									{ price = 125; stock = 20; };
			class H_HelmetSpecB_paint1								{ price = 125; stock = 20; };
			class H_HelmetSpecB_paint2								{ price = 125; stock = 20; };
			class H_HelmetSpecO_blk									{ price = 125; stock = 20; };
			class H_HelmetSpecO_ghex_F        						{ price = 125; stock = 20; };
			class H_HelmetSpecO_ocamo								{ price = 125; stock = 20; };
			class H_PilotHelmetHeli_B								{ price = 125; stock = 20; };
			class H_PilotHelmetHeli_I								{ price = 125; stock = 20; };
			class H_PilotHelmetHeli_O								{ price = 125; stock = 20; };

			#ifdef DMD_USE_RHS
			class rhs_altyn_novisor 								{ price = 125; stock = 20; };
			class rhs_altyn_novisor_bala							{ price = 125; stock = 20; };
			class rhs_altyn_novisor_ess								{ price = 125; stock = 20; };
			class rhs_altyn_novisor_ess_bala						{ price = 125; stock = 20; };
			class rhsusf_ach_bare_des_headset						{ price = 125; stock = 20; };
			class rhsusf_ach_bare_des_headset_ess					{ price = 125; stock = 20; };
			class rhsusf_ach_bare_headset							{ price = 125; stock = 20; };
			class rhsusf_ach_bare_headset_ess						{ price = 125; stock = 20; };
			class rhsusf_ach_bare_semi_headset						{ price = 125; stock = 20; };
			class rhsusf_ach_bare_semi_headset_ess					{ price = 125; stock = 20; };
			class rhsusf_ach_bare_tan_headset						{ price = 125; stock = 20; };
			class rhsusf_ach_bare_tan_headset_ess					{ price = 125; stock = 20; };
			class rhsusf_ach_bare_wood_headset						{ price = 125; stock = 20; };
			class rhsusf_ach_bare_wood_headset_ess					{ price = 125; stock = 20; };
			class rhsusf_ach_helmet_camo_ocp						{ price = 125; stock = 20; };
			class rhsusf_ach_helmet_headset_ess_ocp					{ price = 125; stock = 20; };
			class rhsusf_ach_helmet_headset_ess_ucp					{ price = 125; stock = 20; };
			class rhsusf_ach_helmet_headset_ocp						{ price = 125; stock = 20; };
			class rhsusf_ach_helmet_headset_ucp						{ price = 125; stock = 20; };
			class rhsusf_ach_helmet_M81								{ price = 125; stock = 20; };
			class rhsusf_lwh_helmet_marpatd_headset					{ price = 125; stock = 20; };
			class rhsusf_lwh_helmet_marpatwd_headset				{ price = 125; stock = 20; };
			class rhsusf_mich_bare_headset							{ price = 125; stock = 20; };
			class rhsusf_mich_bare_norotos_alt_headset				{ price = 125; stock = 20; };
			class rhsusf_mich_bare_norotos_alt_semi_headset			{ price = 125; stock = 20; };
			class rhsusf_mich_bare_norotos_alt_tan_headset			{ price = 125; stock = 20; };
			class rhsusf_mich_bare_norotos_arc_alt_headset			{ price = 125; stock = 20; };
			class rhsusf_mich_bare_norotos_arc_alt_semi_headset		{ price = 125; stock = 20; };
			class rhsusf_mich_bare_norotos_arc_alt_tan_headset		{ price = 125; stock = 20; };
			class rhsusf_mich_bare_norotos_arc_headset				{ price = 125; stock = 20; };
			class rhsusf_mich_bare_norotos_arc_semi_headset			{ price = 125; stock = 20; };
			class rhsusf_mich_bare_norotos_headset					{ price = 125; stock = 20; };
			class rhsusf_mich_bare_norotos_semi_headset				{ price = 125; stock = 20; };
			class rhsusf_mich_bare_norotos_tan_headset				{ price = 125; stock = 20; };
			class rhsusf_mich_bare_semi_headset						{ price = 125; stock = 20; };
			class rhsusf_mich_bare_tan_headset						{ price = 125; stock = 20; };
			class rhsusf_mich_helmet_marpatd_alt_headset			{ price = 125; stock = 20; };
			class rhsusf_mich_helmet_marpatd_headset				{ price = 125; stock = 20; };
			class rhsusf_mich_helmet_marpatd_norotos				{ price = 125; stock = 20; };
			class rhsusf_mich_helmet_marpatd_norotos_arc			{ price = 125; stock = 20; };
			class rhsusf_mich_helmet_marpatd_norotos_arc_headset	{ price = 125; stock = 20; };
			class rhsusf_mich_helmet_marpatd_norotos_headset		{ price = 125; stock = 20; };
			class rhsusf_mich_helmet_marpatwd_alt					{ price = 125; stock = 20; };
			class rhsusf_mich_helmet_marpatwd_alt_headset			{ price = 125; stock = 20; };
			class rhsusf_mich_helmet_marpatwd_headset				{ price = 125; stock = 20; };
			class rhsusf_mich_helmet_marpatwd_norotos_arc_headset	{ price = 125; stock = 20; };
			class rhsusf_mich_helmet_marpatwd_norotos_headset		{ price = 125; stock = 20; };
			#endif
			
			// tier 5 headgear
			class H_HelmetLeaderO_ghex_F							{ price = 250; stock = 2; };
			class H_HelmetLeaderO_ocamo								{ price = 250; stock = 1; };
			class H_HelmetLeaderO_oucamo							{ price = 250; stock = 1; };
			class H_HelmetO_ocamo									{ price = 250; stock = 2; };
			class H_HelmetO_oucamo									{ price = 250; stock = 1; };
			class H_PilotHelmetFighter_B							{ price = 250; stock = 2; };
			class H_PilotHelmetFighter_I							{ price = 250; stock = 1; };
			class H_PilotHelmetFighter_O							{ price = 250; stock = 1; };

			#ifdef DMD_USE_RHS
			class rhs_altyn											{ price = 250; stock = 4; };
			class rhs_altyn_bala									{ price = 250; stock = 4; };
			class rhs_altyn_visordown								{ price = 250; stock = 4; };
			class rhsusf_opscore_bk									{ price = 250; stock = 4; };
			class rhsusf_opscore_bk_pelt							{ price = 250; stock = 4; };
			class rhsusf_opscore_coy_cover							{ price = 250; stock = 4; };
			class rhsusf_opscore_coy_cover_pelt						{ price = 250; stock = 4; };
			class rhsusf_opscore_fg									{ price = 250; stock = 4; };
			class rhsusf_opscore_fg_pelt							{ price = 250; stock = 4; };
			class rhsusf_opscore_fg_pelt_cam						{ price = 250; stock = 4; };
			class rhsusf_opscore_fg_pelt_nsw						{ price = 250; stock = 4; };
			class rhsusf_opscore_mar_fg								{ price = 250; stock = 4; };
			class rhsusf_opscore_mar_fg_pelt						{ price = 250; stock = 4; };
			class rhsusf_opscore_mar_ut								{ price = 250; stock = 4; };
			class rhsusf_opscore_mar_ut_pelt						{ price = 250; stock = 4; };
			class rhsusf_opscore_mc									{ price = 250; stock = 4; };
			class rhsusf_opscore_mc_cover							{ price = 250; stock = 4; };
			class rhsusf_opscore_mc_cover_pelt						{ price = 250; stock = 4; };
			class rhsusf_opscore_mc_cover_pelt_cam					{ price = 250; stock = 4; };
			class rhsusf_opscore_mc_cover_pelt_nsw					{ price = 250; stock = 4; };
			class rhsusf_opscore_mc_pelt							{ price = 250; stock = 4; };
			class rhsusf_opscore_mc_pelt_nsw						{ price = 250; stock = 4; };
			class rhsusf_opscore_paint								{ price = 250; stock = 4; };
			class rhsusf_opscore_paint_pelt							{ price = 250; stock = 4; };
			class rhsusf_opscore_paint_pelt_nsw						{ price = 250; stock = 4; };
			class rhsusf_opscore_paint_pelt_nsw_cam					{ price = 250; stock = 4; };
			class rhsusf_opscore_rg_cover							{ price = 250; stock = 4; };
			class rhsusf_opscore_rg_cover_pelt						{ price = 250; stock = 4; };
			class rhsusf_opscore_ut									{ price = 250; stock = 4; };
			class rhsusf_opscore_ut_pelt							{ price = 250; stock = 4; };
			class rhsusf_opscore_ut_pelt_cam						{ price = 250; stock = 4; };
			class rhsusf_opscore_ut_pelt_nsw						{ price = 250; stock = 4; };
			class rhsusf_opscore_ut_pelt_nsw_cam					{ price = 250; stock = 4; };
			class rhsusf_protech_helmet								{ price = 250; stock = 4; };
			class rhsusf_protech_helmet_ess							{ price = 250; stock = 4; };
			class rhsusf_protech_helmet_rhino						{ price = 250; stock = 4; };
			class rhsusf_protech_helmet_rhino_ess					{ price = 250; stock = 4; };
			#endif
		};

		class backpacks {
			displayName = "Backpacks";
			picture = "";
			// Parachutes
			class B_Parachute						{ price = 200; stock = 100; };

			// tier 1
			class B_AssaultPack_blk					{ price = 50; stock = 50; };
			class B_AssaultPack_cbr					{ price = 50; stock = 50; };
			class B_AssaultPack_dgtl				{ price = 50; stock = 50; };
			class B_AssaultPack_khk					{ price = 50; stock = 50; };
			class B_AssaultPack_mcamo				{ price = 50; stock = 50; };
			class B_AssaultPack_rgr					{ price = 50; stock = 50; };
			class B_AssaultPack_sgg					{ price = 50; stock = 50; };
			class B_AssaultPack_tna_F				{ price = 50; stock = 50; };
			class B_HuntingBackpack					{ price = 50; stock = 50; };
			class B_LegStrapBag_black_F				{ price = 50; stock = 50; };
			class B_LegStrapBag_coyote_F			{ price = 50; stock = 50; };
			class B_LegStrapBag_olive_F				{ price = 50; stock = 50; };
			class B_OutdoorPack_blk					{ price = 50; stock = 50; };
			class B_OutdoorPack_blu					{ price = 50; stock = 50; };
			class B_OutdoorPack_tan					{ price = 50; stock = 50; };
			#ifdef DMD_USE_CUP
			class CUP_B_ACRScout_m95				{ price = 50; stock = 50; };
			class CUP_B_AssaultPack_Coyote			{ price = 50; stock = 50; };
			#endif

			// tier 2
			class B_FieldPack_blk					{ price = 75; stock = 40; };
			class B_FieldPack_cbr					{ price = 75; stock = 40; };
			class B_FieldPack_ghex_F				{ price = 75; stock = 40; };
			class B_FieldPack_ocamo					{ price = 75; stock = 40; };
			class B_FieldPack_oli 					{ price = 75; stock = 40; };
			class B_FieldPack_oucamo				{ price = 75; stock = 40; };
			class B_Messenger_Black_F				{ price = 75; stock = 40; };
			class B_Messenger_Coyote_F				{ price = 75; stock = 40; };
			class B_Messenger_Gray_F				{ price = 75; stock = 40; };
			class B_Messenger_IDAP_F				{ price = 75; stock = 40; };
			class B_Messenger_Olive_F				{ price = 75; stock = 40; };
			class B_TacticalPack_blk				{ price = 75; stock = 40; };
			class B_TacticalPack_mcamo				{ price = 75; stock = 40; };
			class B_TacticalPack_ocamo				{ price = 75; stock = 40; };
			class B_TacticalPack_oli				{ price = 75; stock = 40; };
			class B_TacticalPack_rgr				{ price = 75; stock = 40; };
			class rvg_legstrappack_4 				{ price = 75; stock = 40; };
			class rvg_messengerbag_4 				{ price = 75; stock = 40; };
			#ifdef DMD_USE_CUP
			class CUP_B_GER_Medic_FLecktarn			{ price = 75; stock = 40; };
			class CUP_B_MedicPack_ACU				{ price = 75; stock = 40; };
			class CUP_B_RUS_Backpack				{ price = 75; stock = 40; };
			#endif
			#ifdef DMD_USE_RHS
			class rhssaf_Kitbag_base				{ price = 75; stock = 40; };
			class rhssaf_kitbag_digital				{ price = 75; stock = 40; };
			class rhssaf_kitbag_md2camo				{ price = 75; stock = 40; };
			class rhssaf_kitbag_smb					{ price = 75; stock = 40; };
			#endif

			// tier 3
			class B_Kitbag_cbr						{ price = 100; stock = 20; };
			class B_Kitbag_mcamo					{ price = 100; stock = 20; };
			class B_Kitbag_sgg						{ price = 100; stock = 20; };
			class B_ViperLightHarness_base_F        { price = 100; stock = 20; };
			class B_ViperLightHarness_blk_F         { price = 100; stock = 20; };
			class B_ViperLightHarness_ghex_F        { price = 100; stock = 20; };
			class B_ViperLightHarness_hex_F         { price = 100; stock = 20; };
			class B_ViperLightHarness_khk_F         { price = 100; stock = 20; };
			class B_ViperLightHarness_oli_F         { price = 100; stock = 20; };
			#ifdef DMD_USE_CUP
			class CUP_B_ACRPara_m95					{ price = 100; stock = 20; };
			class CUP_B_AlicePack_Bedroll			{ price = 100; stock = 20; };
			class CUP_B_AlicePack_Khaki				{ price = 100; stock = 20; };
			class CUP_B_GER_Pack_Flecktarn			{ price = 100; stock = 20; };
			class CUP_B_GER_Pack_Tropentarn			{ price = 100; stock = 20; };
			class CUP_B_HikingPack_Civ				{ price = 100; stock = 20; };
			#endif
			#ifdef DMD_USE_RHS
			class rhs_assault_umbts					{ price = 100; stock = 20; };
			class rhs_assault_umbts_engineer_empty	{ price = 100; stock = 20; };
			class rhs_medic_bag						{ price = 100; stock = 20; };
			class rhs_rpg_empty						{ price = 100; stock = 20; };
			class rhs_sidor							{ price = 100; stock = 20; };
			class rhsusf_assault_eagleaiii_coy		{ price = 100; stock = 20; };
			class rhsusf_assault_eagleaiii_ocp		{ price = 100; stock = 20; };
			class rhsusf_assault_eagleaiii_ucp		{ price = 100; stock = 20; };
			class rhsusf_falconii					{ price = 100; stock = 20; };
			class rhsusf_falconii_coy				{ price = 100; stock = 20; };
			class rhsusf_falconii_mc				{ price = 100; stock = 20; };
			#endif

			// tier 4
			class B_Carryall_cbr					{ price = 150; stock = 10; };
			class B_Carryall_ghex_F					{ price = 150; stock = 10; };
			class B_Carryall_khk					{ price = 150; stock = 10; };
			class B_Carryall_mcamo					{ price = 150; stock = 10; };
			class B_Carryall_ocamo					{ price = 150; stock = 10; };
			class B_Carryall_oli					{ price = 150; stock = 10; };
			class B_Carryall_oucamo					{ price = 150; stock = 10; };
			class B_ViperHarness_base_F				{ price = 150; stock = 10; };
			class B_ViperHarness_blk_F				{ price = 150; stock = 10; };
			class B_ViperHarness_ghex_F				{ price = 150; stock = 10; };
			class B_ViperHarness_hex_F				{ price = 150; stock = 10; };
			class B_ViperHarness_khk_F				{ price = 150; stock = 10; };
			class B_ViperHarness_oli_F              { price = 150; stock = 10; };
			#ifdef DMD_USE_RHS
			class rhsgref_hidf_alicepack			{ price = 150; stock = 10; };
			class rhsgref_ttsko_alicepack			{ price = 150; stock = 10; };
			class rhsgref_wdl_alicepack				{ price = 150; stock = 10; };
			#endif

			// tier 5
			class B_Bergen_blk						{ price = 200; stock = 2; };
			class B_Bergen_mcamo					{ price = 200; stock = 2; };
			class B_Bergen_rgr						{ price = 200; stock = 2; };
			class B_Bergen_sgg						{ price = 200; stock = 2; };
			class B_Bergen_Base_F					{ price = 200; stock = 5; };
			class B_Bergen_dgtl_F					{ price = 200; stock = 5; };
			class B_Bergen_hex_F					{ price = 200; stock = 5; };
			class B_Bergen_mcamo_F					{ price = 200; stock = 5; };
			class B_Bergen_tna_F					{ price = 200; stock = 5; };
		};

		class vests {
			displayName = "Vests";
			picture = "";
			// tier 1
			#ifdef DMD_USE_CUP
			class CUP_V_B_LHDVest_Blue        		{ price = 50; stock = 50; };
			class CUP_V_B_LHDVest_Brown         	{ price = 50; stock = 50; };
			class CUP_V_B_LHDVest_Green         	{ price = 50; stock = 50; };
			class CUP_V_B_LHDVest_Red        		{ price = 50; stock = 50; };
			class CUP_V_B_LHDVest_Violet        	{ price = 50; stock = 50; };
			class CUP_V_B_LHDVest_White        		{ price = 50; stock = 50; };
			class CUP_V_B_LHDVest_Yellow       		{ price = 50; stock = 50; };
			class CUP_V_C_Police_Holster			{ price = 50; stock = 50; };
			class CUP_V_CDF_CrewBelt          		{ price = 50; stock = 50; };
			class CUP_V_CDF_OfficerBelt       		{ price = 50; stock = 50; };
			class CUP_V_CDF_OfficerBelt2       		{ price = 50; stock = 50; };
			class CUP_V_CZ_vest08 					{ price = 50; stock = 50; };
			class CUP_V_I_Carrier_Belt				{ price = 50; stock = 50; };
			class CUP_V_O_Ins_Carrier_Rig			{ price = 50; stock = 50; };
			class CUP_V_O_Ins_Carrier_Rig_Com		{ price = 50; stock = 50; };
			class CUP_V_O_Ins_Carrier_Rig_Light		{ price = 50; stock = 50; };
			class CUP_V_O_Ins_Carrier_Rig_MG		{ price = 50; stock = 50; };
			class CUP_V_O_SLA_Carrier_Belt			{ price = 50; stock = 50; };
			class CUP_V_O_SLA_Carrier_Belt02		{ price = 50; stock = 50; };
			class CUP_V_O_SLA_Carrier_Belt03		{ price = 50; stock = 50; };
			class CUP_V_O_TK_CrewBelt				{ price = 50; stock = 50; };
			class CUP_V_O_TK_OfficerBelt			{ price = 50; stock = 50; };
			class CUP_V_O_TK_OfficerBelt2			{ price = 50; stock = 50; };
			class CUP_V_O_TK_Vest_1					{ price = 50; stock = 50; };
			class CUP_V_O_TK_Vest_2					{ price = 50; stock = 50; };
			class CUP_V_OI_TKI_Jacket2_01           { price = 50; stock = 50; };
			class CUP_V_OI_TKI_Jacket2_02           { price = 50; stock = 50; };
			class CUP_V_OI_TKI_Jacket2_03           { price = 50; stock = 50; };
			class CUP_V_OI_TKI_Jacket2_04           { price = 50; stock = 50; };
			class CUP_V_OI_TKI_Jacket2_05           { price = 50; stock = 50; };
			class CUP_V_OI_TKI_Jacket2_06           { price = 50; stock = 50; };
			class CUP_V_OI_TKI_Jacket3_01           { price = 50; stock = 50; };
			class CUP_V_OI_TKI_Jacket3_02           { price = 50; stock = 50; };
			class CUP_V_OI_TKI_Jacket3_03           { price = 50; stock = 50; };
			class CUP_V_OI_TKI_Jacket3_04           { price = 50; stock = 50; };
			class CUP_V_OI_TKI_Jacket3_05           { price = 50; stock = 50; };
			class CUP_V_OI_TKI_Jacket3_06           { price = 50; stock = 50; };
			class CUP_V_OI_TKI_Jacket5_01 			{ price = 50; stock = 4; };
			class CUP_V_RUS_Smersh_1        		{ price = 50; stock = 50; };
			class CUP_V_RUS_Smersh_2        		{ price = 50; stock = 50; };
			#endif
			class rvg_tacvest_2 					{ price = 50; stock = 3; };
			class V_BandollierB_blk					{ price = 50; stock = 50; };
			class V_BandollierB_cbr					{ price = 50; stock = 50; };
			class V_BandollierB_ghex_F        		{ price = 50; stock = 50; };
			class V_BandollierB_khk					{ price = 50; stock = 50; };
			class V_BandollierB_oli					{ price = 50; stock = 50; };
			class V_BandollierB_rgr					{ price = 50; stock = 50; };
			class V_Chestrig_blk 					{ price = 50; stock = 50; };
			class V_Chestrig_khk 					{ price = 50; stock = 50; };
			class V_Chestrig_oli 					{ price = 50; stock = 50; };
			class V_Chestrig_rgr 					{ price = 50; stock = 50; };
			class V_HarnessOGL_brn					{ price = 50; stock = 50; };
			class V_HarnessOGL_ghex_F         		{ price = 50; stock = 50; };
			class V_HarnessOGL_gry					{ price = 50; stock = 50; };
			class V_LegStrapBag_black_F				{ price = 50; stock = 50; };
			class V_LegStrapBag_coyote_F			{ price = 50; stock = 50; };
			class V_LegStrapBag_olive_F				{ price = 50; stock = 50; };
			class V_Plain_crystal_F					{ price = 50; stock = 50; };
			class V_Plain_medical_F					{ price = 50; stock = 50; };
			class V_Press_F							{ price = 50; stock = 50; };
			class V_Rangemaster_belt				{ price = 50; stock = 50; };
			class V_Safety_blue_F					{ price = 50; stock = 50; };
			class V_Safety_orange_F					{ price = 50; stock = 50; };
			class V_Safety_yellow_F					{ price = 50; stock = 50; };
			class V_TacChestrig_cbr_F         		{ price = 50; stock = 50; };
			class V_TacChestrig_grn_F         		{ price = 50; stock = 50; };
			class V_TacChestrig_oli_F         		{ price = 50; stock = 50; };
			class V_TacVest_gen_F             		{ price = 50; stock = 50; };

			// tier 2
			#ifdef DMD_USE_CUP
			class CUP_V_B_Eagle_SPC_AR								{ price = 100; stock = 40; };
			class CUP_V_B_Eagle_SPC_AT								{ price = 100; stock = 40; };
			class CUP_V_B_Eagle_SPC_Corpsman						{ price = 100; stock = 40; };
			class CUP_V_B_Eagle_SPC_Crew							{ price = 100; stock = 40; };
			class CUP_V_B_Eagle_SPC_DMR								{ price = 100; stock = 40; };
			class CUP_V_B_Eagle_SPC_Empty							{ price = 100; stock = 40; };
			class CUP_V_B_Eagle_SPC_GL								{ price = 100; stock = 40; };
			class CUP_V_B_Eagle_SPC_MG								{ price = 100; stock = 40; };
			class CUP_V_B_Eagle_SPC_Officer							{ price = 100; stock = 40; };
			class CUP_V_B_Eagle_SPC_Patrol							{ price = 100; stock = 40; };
			class CUP_V_B_Eagle_SPC_Rifleman						{ price = 100; stock = 40; };
			class CUP_V_B_Eagle_SPC_RTO								{ price = 100; stock = 40; };
			class CUP_V_B_Eagle_SPC_Scout							{ price = 100; stock = 40; };
			class CUP_V_B_Eagle_SPC_SL								{ price = 100; stock = 40; };
			class CUP_V_B_Eagle_SPC_TL								{ price = 100; stock = 40; };
			class CUP_V_B_GER_Carrier_Rig							{ price = 100; stock = 40; };
			class CUP_V_B_GER_Carrier_Rig_2         				{ price = 100; stock = 40; };
			class CUP_V_B_GER_Carrier_Rig_2_Brown					{ price = 100; stock = 40; };
			class CUP_V_B_GER_Carrier_Rig_3_Brown					{ price = 100; stock = 40; };
			class CUP_V_B_RRV_DA1									{ price = 100; stock = 40; };
			class CUP_V_B_RRV_DA2									{ price = 100; stock = 40; };
			class CUP_V_B_RRV_Light									{ price = 100; stock = 40; };
			class CUP_V_B_RRV_Medic									{ price = 100; stock = 40; };
			class CUP_V_B_RRV_MG									{ price = 100; stock = 40; };
			class CUP_V_B_RRV_Officer								{ price = 100; stock = 40; };
			class CUP_V_B_RRV_Scout									{ price = 100; stock = 40; };
			class CUP_V_B_RRV_Scout2								{ price = 100; stock = 40; };
			class CUP_V_B_RRV_Scout3								{ price = 100; stock = 40; };
			class CUP_V_B_RRV_TL									{ price = 100; stock = 40; };
			class CUP_V_I_RACS_Carrier_Rig_2						{ price = 100; stock = 40; };
			class CUP_V_I_RACS_Carrier_Rig_3						{ price = 100; stock = 40; };
			class CUP_V_I_RACS_Carrier_Rig_wdl_2					{ price = 100; stock = 40; };
			class CUP_V_I_RACS_Carrier_Rig_wdl_3					{ price = 100; stock = 40; };
			class CUP_V_O_SLA_Flak_Vest01							{ price = 100; stock = 40; };
			class CUP_V_O_SLA_Flak_Vest02							{ price = 100; stock = 40; };
			class CUP_V_O_SLA_Flak_Vest03							{ price = 100; stock = 40; };
			class CUP_V_OI_TKI_Jacket1_01           				{ price = 100; stock = 40; };
			class CUP_V_OI_TKI_Jacket1_02           				{ price = 100; stock = 40; };
			class CUP_V_OI_TKI_Jacket1_03           				{ price = 100; stock = 40; };
			class CUP_V_OI_TKI_Jacket1_04           				{ price = 100; stock = 40; };
			class CUP_V_OI_TKI_Jacket1_05           				{ price = 100; stock = 40; };
			class CUP_V_OI_TKI_Jacket1_06           				{ price = 100; stock = 40; };
			class CUP_V_OI_TKI_Jacket4_01           				{ price = 100; stock = 40; };
			class CUP_V_OI_TKI_Jacket4_02           				{ price = 100; stock = 40; };
			class CUP_V_OI_TKI_Jacket4_03           				{ price = 100; stock = 40; };
			class CUP_V_OI_TKI_Jacket4_04           				{ price = 100; stock = 40; };
			class CUP_V_OI_TKI_Jacket4_05           				{ price = 100; stock = 40; };
			class CUP_V_OI_TKI_Jacket4_06           				{ price = 100; stock = 40; };
			#endif

			#ifdef DMD_USE_RHS
			class rhs_6b23								    		{ price = 100; stock = 40; };
			class rhs_6b23_6sh92									{ price = 100; stock = 40; };
			class rhs_6b23_6sh92_headset							{ price = 100; stock = 40; };
			class rhs_6b23_6sh92_headset_mapcase					{ price = 100; stock = 40; };
			class rhs_6b23_6sh92_radio								{ price = 100; stock = 40; };
			class rhs_6b23_6sh92_vog								{ price = 100; stock = 40; };
			class rhs_6b23_6sh92_vog_headset						{ price = 100; stock = 40; };
			class rhs_6b23_crew							    		{ price = 100; stock = 40; };
			class rhs_6b23_crewofficer								{ price = 100; stock = 40; };
			class rhs_6b23_digi										{ price = 100; stock = 40; };
			class rhs_6b23_digi_6sh92								{ price = 100; stock = 40; };
			class rhs_6b23_digi_6sh92_headset						{ price = 100; stock = 40; };
			class rhs_6b23_digi_6sh92_headset_mapcase				{ price = 100; stock = 40; };
			class rhs_6b23_digi_6sh92_radio							{ price = 100; stock = 40; };
			class rhs_6b23_digi_6sh92_vog				    		{ price = 100; stock = 40; };
			class rhs_6b23_digi_6sh92_vog_headset					{ price = 100; stock = 40; };
			class rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz 			{ price = 100; stock = 40; };
			class rhs_6b23_digi_crew								{ price = 100; stock = 40; };
			class rhs_6b23_digi_crewofficer							{ price = 100; stock = 40; };
			class rhs_6b23_digi_engineer							{ price = 100; stock = 40; };
			class rhs_6b23_digi_medic					    		{ price = 100; stock = 40; };
			class rhs_6b23_digi_rifleman							{ price = 100; stock = 40; };
			class rhs_6b23_digi_sniper								{ price = 100; stock = 40; };
			class rhs_6b23_engineer					        		{ price = 100; stock = 40; };
			class rhs_6b23_medic									{ price = 100; stock = 40; };
			class rhs_6b23_ML							    		{ price = 100; stock = 40; };
			class rhs_6b23_ML_6sh92									{ price = 100; stock = 40; };
			class rhs_6b23_ML_6sh92_headset							{ price = 100; stock = 40; };
			class rhs_6b23_ML_6sh92_headset_mapcase					{ price = 100; stock = 40; };
			class rhs_6b23_ML_6sh92_radio							{ price = 100; stock = 40; };
			class rhs_6b23_ML_6sh92_vog								{ price = 100; stock = 40; };
			class rhs_6b23_ML_6sh92_vog_headset						{ price = 100; stock = 40; };
			class rhs_6b23_ML_crew									{ price = 100; stock = 40; };
			class rhs_6b23_ML_crewofficer							{ price = 100; stock = 40; };
			class rhs_6b23_ML_engineer								{ price = 100; stock = 40; };
			class rhs_6b23_ML_medic									{ price = 100; stock = 40; };
			class rhs_6b23_ML_rifleman					    		{ price = 100; stock = 40; };
			class rhs_6b23_ML_sniper								{ price = 100; stock = 40; };
			class rhs_6b23_rifleman									{ price = 100; stock = 40; };
			class rhs_6b23_sniper									{ price = 100; stock = 40; };
			class rhs_6sh46								    		{ price = 100; stock = 40; };
			class rhs_6sh92								    		{ price = 100; stock = 40; };
			class rhs_6sh92_digi									{ price = 100; stock = 40; };
			class rhs_6sh92_digi_headset							{ price = 100; stock = 40; };
			class rhs_6sh92_digi_radio					    		{ price = 100; stock = 40; };
			class rhs_6sh92_digi_vog								{ price = 100; stock = 40; };
			class rhs_6sh92_digi_vog_headset						{ price = 100; stock = 40; };
			class rhs_6sh92_headset									{ price = 100; stock = 40; };
			class rhs_6sh92_radio									{ price = 100; stock = 40; };
			class rhs_6sh92_vog										{ price = 100; stock = 40; };
			class rhs_6sh92_vog_headset								{ price = 100; stock = 40; };
			class rhs_vest_commander								{ price = 100; stock = 40; };
			class rhs_vydra_3m										{ price = 100; stock = 40; };
			class rhsgref_alice_webbing 							{ price = 100; stock = 40; };
			class rhssaf_vest_md98_digital							{ price = 100; stock = 40; };
			class rhssaf_vest_md98_md2camo							{ price = 100; stock = 40; };
			class rhssaf_vest_md98_officer							{ price = 100; stock = 40; };
			class rhssaf_vest_md98_rifleman							{ price = 100; stock = 40; };
			class rhssaf_vest_md98_woodland							{ price = 100; stock = 40; };
			class rhssaf_vest_md99_digital							{ price = 100; stock = 40; };
			class rhssaf_vest_md99_digital_rifleman					{ price = 100; stock = 40; };
			class rhssaf_vest_md99_md2camo							{ price = 100; stock = 40; };
			class rhssaf_vest_md99_md2camo_rifleman					{ price = 100; stock = 40; };
			class rhssaf_vest_md99_woodland							{ price = 100; stock = 40; };
			class rhssaf_vest_md99_woodland_radio		    		{ price = 100; stock = 40; };
			class rhssaf_vest_md99_woodland_rifleman				{ price = 100; stock = 40; };
			class rhssaf_vest_otv_md2camo							{ price = 100; stock = 40; };
			class rhsusf_spcs_ucp_crewman 							{ price = 100; stock = 40; };
			#endif

			class V_DeckCrew_blue_F         						{ price = 100; stock = 40; };
			class V_DeckCrew_brown_F								{ price = 100; stock = 40; };
			class V_DeckCrew_green_F								{ price = 100; stock = 40; };
			class V_DeckCrew_red_F									{ price = 100; stock = 40; };
			class V_DeckCrew_violet_F								{ price = 100; stock = 40; };
			class V_DeckCrew_white_F								{ price = 100; stock = 40; };
			class V_DeckCrew_yellow_F								{ price = 100; stock = 40; };
			class V_HarnessO_brn									{ price = 100; stock = 40; };
			class V_HarnessO_ghex_F           						{ price = 100; stock = 40; };
			class V_HarnessO_gry									{ price = 100; stock = 40; };
			class V_HarnessOSpec_brn								{ price = 100; stock = 40; };
			class V_HarnessOSpec_gry								{ price = 100; stock = 40; };
			class V_I_G_resistanceLeader_F							{ price = 100; stock = 40; };
			class V_Pocketed_black_F         						{ price = 100; stock = 40; };
			class V_Pocketed_coyote_F         						{ price = 100; stock = 40; };
			class V_Pocketed_olive_F         						{ price = 100; stock = 40; };
			class V_TacVest_blk										{ price = 100; stock = 40; };
			class V_TacVest_blk_POLICE								{ price = 100; stock = 40; };
			class V_TacVest_brn										{ price = 100; stock = 40; };
			class V_TacVest_camo									{ price = 100; stock = 40; };
			class V_TacVest_khk										{ price = 100; stock = 40; };
			class V_TacVest_oli										{ price = 100; stock = 40; };
			class V_TacVestCamo_khk									{ price = 100; stock = 40; };
			class V_TacVestIR_blk									{ price = 100; stock = 40; };

			// tier 3
			#ifdef DMD_USE_CUP
			class CUP_V_B_GER_Carrier_Vest        					{ price = 150; stock = 30; };
			class CUP_V_B_GER_Carrier_Vest_2        				{ price = 150; stock = 30; };
			class CUP_V_B_GER_Carrier_Vest_3        				{ price = 150; stock = 30; };
			class CUP_V_B_GER_Vest_1          						{ price = 150; stock = 30; };
			class CUP_V_B_GER_Vest_2          						{ price = 150; stock = 30; };
			class CUP_V_B_Interceptor_Rifleman						{ price = 150; stock = 30; };
			class CUP_V_B_IOTV_AT									{ price = 150; stock = 30; };
			class CUP_V_B_IOTV_gl									{ price = 150; stock = 30; };
			class CUP_V_B_IOTV_Medic								{ price = 150; stock = 30; };
			class CUP_V_B_IOTV_MG									{ price = 150; stock = 30; };
			class CUP_V_B_IOTV_Rifleman								{ price = 150; stock = 30; };
			class CUP_V_B_IOTV_saw									{ price = 150; stock = 30; };
			class CUP_V_B_IOTV_SL									{ price = 150; stock = 30; };
			class CUP_V_B_IOTV_tl									{ price = 150; stock = 30; };
			class CUP_V_B_PilotVest									{ price = 150; stock = 30; };
			class CUP_V_B_USArmy_PilotVest							{ price = 150; stock = 30; };
			class CUP_V_CDF_6B3_1_DST        						{ price = 150; stock = 30; };
			class CUP_V_CDF_6B3_1_FST        						{ price = 150; stock = 30; };
			class CUP_V_CDF_6B3_1_Green        						{ price = 150; stock = 30; };
			class CUP_V_CDF_6B3_1_MNT        						{ price = 150; stock = 30; };
			class CUP_V_CDF_6B3_2_DST        						{ price = 150; stock = 30; };
			class CUP_V_CDF_6B3_2_FST        						{ price = 150; stock = 30; };
			class CUP_V_CDF_6B3_2_Green        						{ price = 150; stock = 30; };
			class CUP_V_CDF_6B3_2_MNT        						{ price = 150; stock = 30; };
			class CUP_V_CDF_6B3_3_DST        						{ price = 150; stock = 30; };
			class CUP_V_CDF_6B3_3_FST        						{ price = 150; stock = 30; };
			class CUP_V_CDF_6B3_3_Green        						{ price = 150; stock = 30; };
			class CUP_V_CDF_6B3_3_MNT        						{ price = 150; stock = 30; };
			class CUP_V_CDF_6B3_4_DST        						{ price = 150; stock = 30; };
			class CUP_V_CDF_6B3_4_FST        						{ price = 150; stock = 30; };
			class CUP_V_CDF_6B3_4_Green        						{ price = 150; stock = 30; };
			class CUP_V_CDF_6B3_4_MNT        						{ price = 150; stock = 30; };
			class CUP_V_CDF_6B3_5_DST        						{ price = 150; stock = 30; };
			class CUP_V_CDF_6B3_5_FST        						{ price = 150; stock = 30; };
			class CUP_V_CDF_6B3_5_Green        						{ price = 150; stock = 30; };
			class CUP_V_CDF_6B3_5_MNT        						{ price = 150; stock = 30; };
			class CUP_V_I_Guerilla_Jacket							{ price = 150; stock = 30; };
			class CUP_V_I_RACS_Carrier_Vest							{ price = 150; stock = 30; };
			class CUP_V_I_RACS_Carrier_Vest_2						{ price = 150; stock = 30; };
			class CUP_V_I_RACS_Carrier_Vest_3						{ price = 150; stock = 30; };
			class CUP_V_I_RACS_Carrier_Vest_wdl						{ price = 150; stock = 30; };
			class CUP_V_I_RACS_Carrier_Vest_wdl_2					{ price = 150; stock = 30; };
			class CUP_V_I_RACS_Carrier_Vest_wdl_3					{ price = 150; stock = 30; };
			class CUP_V_PMC_CIRAS_Black_Empty       				{ price = 150; stock = 30; };
			class CUP_V_PMC_CIRAS_Black_Grenadier   				{ price = 150; stock = 30; };
			class CUP_V_PMC_CIRAS_Black_Patrol      				{ price = 150; stock = 30; };
			class CUP_V_PMC_CIRAS_Black_TL        					{ price = 150; stock = 30; };
			class CUP_V_PMC_CIRAS_Black_Veh        					{ price = 150; stock = 30; };
			class CUP_V_PMC_CIRAS_Coyote_Empty      				{ price = 150; stock = 30; };
			class CUP_V_PMC_CIRAS_Coyote_Grenadier  				{ price = 150; stock = 30; };
			class CUP_V_PMC_CIRAS_Coyote_Patrol     				{ price = 150; stock = 30; };
			class CUP_V_PMC_CIRAS_Coyote_TL        					{ price = 150; stock = 30; };
			class CUP_V_PMC_CIRAS_Coyote_Veh        				{ price = 150; stock = 30; };
			class CUP_V_PMC_CIRAS_Winter_Empty      				{ price = 150; stock = 30; };
			class CUP_V_PMC_CIRAS_Winter_Grenadier  				{ price = 150; stock = 30; };
			class CUP_V_PMC_CIRAS_Winter_Patrol						{ price = 150; stock = 30; };
			class CUP_V_PMC_CIRAS_Winter_TL        					{ price = 150; stock = 30; };
			class CUP_V_PMC_CIRAS_Winter_Veh						{ price = 150; stock = 30; };
			class CUP_V_PMC_IOTV_Black_AR        					{ price = 150; stock = 30; };
			class CUP_V_PMC_IOTV_Black_Empty        				{ price = 150; stock = 30; };
			class CUP_V_PMC_IOTV_Black_Gren        					{ price = 150; stock = 30; };
			class CUP_V_PMC_IOTV_Black_Patrol       				{ price = 150; stock = 30; };
			class CUP_V_PMC_IOTV_Black_TL        					{ price = 150; stock = 30; };
			class CUP_V_PMC_IOTV_Coyote_AR        					{ price = 150; stock = 30; };
			class CUP_V_PMC_IOTV_Coyote_Empty       				{ price = 150; stock = 30; };
			class CUP_V_PMC_IOTV_Coyote_Gren        				{ price = 150; stock = 30; };
			class CUP_V_PMC_IOTV_Coyote_Patrol      				{ price = 150; stock = 30; };
			class CUP_V_PMC_IOTV_Coyote_TL        					{ price = 150; stock = 30; };
			class CUP_V_RUS_6B3_1        							{ price = 150; stock = 30; };
			class CUP_V_RUS_6B3_2        							{ price = 150; stock = 30; };
			class CUP_V_RUS_6B3_3        							{ price = 150; stock = 30; };
			class CUP_V_RUS_6B3_4        							{ price = 150; stock = 30; };
			#endif

			#ifdef DMD_USE_RHS
			class rhsgref_6b23_khaki								{ price = 150; stock = 30; };
			class rhsgref_6b23_khaki_medic							{ price = 150; stock = 30; };
			class rhsgref_6b23_khaki_nco							{ price = 150; stock = 30; };
			class rhsgref_6b23_khaki_officer						{ price = 150; stock = 30; };
			class rhsgref_6b23_khaki_rifleman						{ price = 150; stock = 30; };
			class rhsgref_6b23_khaki_sniper							{ price = 150; stock = 30; };
			class rhsgref_6b23_ttsko_digi							{ price = 150; stock = 30; };
			class rhsgref_6b23_ttsko_digi_medic						{ price = 150; stock = 30; };
			class rhsgref_6b23_ttsko_digi_nco						{ price = 150; stock = 30; };
			class rhsgref_6b23_ttsko_digi_officer					{ price = 150; stock = 30; };
			class rhsgref_6b23_ttsko_digi_rifleman					{ price = 150; stock = 30; };
			class rhsgref_6b23_ttsko_digi_sniper					{ price = 150; stock = 30; };
			class rhsgref_6b23_ttsko_forest							{ price = 150; stock = 30; };
			class rhsgref_6b23_ttsko_forest_rifleman				{ price = 150; stock = 30; };
			class rhsgref_6b23_ttsko_mountain						{ price = 150; stock = 30; };
			class rhsgref_6b23_ttsko_mountain_medic					{ price = 150; stock = 30; };
			class rhsgref_6b23_ttsko_mountain_nco					{ price = 150; stock = 30; };
			class rhsgref_6b23_ttsko_mountain_officer				{ price = 150; stock = 30; };
			class rhsgref_6b23_ttsko_mountain_rifleman				{ price = 150; stock = 30; };
			class rhsgref_6b23_ttsko_mountain_sniper				{ price = 150; stock = 30; };
			class rhsgref_otv_digi									{ price = 150; stock = 30; };
			class rhsgref_otv_khaki									{ price = 150; stock = 30; };
			#endif

			class rvg_platecarrier_3								{ price = 150; stock = 30; };
			class V_EOD_blue_F       								{ price = 150; stock = 30; };
			class V_EOD_coyote_F       								{ price = 150; stock = 30; };
			class V_EOD_IDAP_blue_F       							{ price = 150; stock = 30; };
			class V_EOD_olive_F       								{ price = 150; stock = 30; };
			class V_PlateCarrier1_blk 								{ price = 150; stock = 30; };
			class V_PlateCarrier1_rgr 								{ price = 150; stock = 30; };
			class V_PlateCarrier1_rgr_noflag_F						{ price = 150; stock = 30; };
			class V_PlateCarrier1_tna_F       						{ price = 150; stock = 30; };
			class V_PlateCarrier2_rgr 								{ price = 150; stock = 30; };
			class V_PlateCarrier2_rgr_noflag_F						{ price = 150; stock = 30; };
			class V_PlateCarrier2_tna_F       						{ price = 150; stock = 30; };
			class V_PlateCarrier3_rgr 								{ price = 150; stock = 30; };
			class V_PlateCarrierH_CTRG 								{ price = 150; stock = 30; };
			class V_PlateCarrierIA1_dgtl 							{ price = 150; stock = 30; };
			class V_PlateCarrierIA2_dgtl 							{ price = 150; stock = 30; };
			class V_PlateCarrierL_CTRG								{ price = 150; stock = 30; };
			class V_PlateCarrierSpec_tna_F							{ price = 150; stock = 30; };
	
			// tier 4
			#ifdef DMD_USE_CUP
			class CUP_V_B_MTV       						{ price = 250; stock = 20; };
			class CUP_V_B_MTV_LegPouch        				{ price = 250; stock = 20; };
			class CUP_V_B_MTV_Marksman      				{ price = 250; stock = 20; };
			class CUP_V_B_MTV_MG      						{ price = 250; stock = 20; };
			class CUP_V_B_MTV_Mine       					{ price = 250; stock = 20; };
			class CUP_V_B_MTV_noCB         					{ price = 250; stock = 20; };
			class CUP_V_B_MTV_Patrol         				{ price = 250; stock = 20; };
			class CUP_V_B_MTV_PistolBlack          			{ price = 250; stock = 20; };
			class CUP_V_B_MTV_Pouches        				{ price = 250; stock = 20; };
			class CUP_V_B_MTV_TL           					{ price = 250; stock = 20; };
			class CUP_V_BAF_Osprey_Mk2_DDPM_Crewman			{ price = 250; stock = 20; };
			class CUP_V_BAF_Osprey_Mk2_DDPM_Empty			{ price = 250; stock = 20; };
			class CUP_V_BAF_Osprey_Mk2_DDPM_Grenadier		{ price = 250; stock = 20; };
			class CUP_V_BAF_Osprey_Mk2_DDPM_Medic			{ price = 250; stock = 20; };
			class CUP_V_BAF_Osprey_Mk2_DDPM_Officer			{ price = 250; stock = 20; };
			class CUP_V_BAF_Osprey_Mk2_DDPM_Pilot			{ price = 250; stock = 20; };
			class CUP_V_BAF_Osprey_Mk2_DDPM_Sapper			{ price = 250; stock = 20; };
			class CUP_V_BAF_Osprey_Mk2_DDPM_Scout			{ price = 250; stock = 20; };
			class CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1		{ price = 250; stock = 20; };
			class CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2		{ price = 250; stock = 20; };
			class CUP_V_BAF_Osprey_Mk2_DPM_Crewman			{ price = 250; stock = 20; };
			class CUP_V_BAF_Osprey_Mk2_DPM_Empty			{ price = 250; stock = 20; };
			class CUP_V_BAF_Osprey_Mk2_DPM_Grenadier		{ price = 250; stock = 20; };
			class CUP_V_BAF_Osprey_Mk2_DPM_Medic			{ price = 250; stock = 20; };
			class CUP_V_BAF_Osprey_Mk2_DPM_Officer			{ price = 250; stock = 20; };
			class CUP_V_BAF_Osprey_Mk2_DPM_Pilot			{ price = 250; stock = 20; };
			class CUP_V_BAF_Osprey_Mk2_DPM_Sapper			{ price = 250; stock = 20; };
			class CUP_V_BAF_Osprey_Mk2_DPM_Scout			{ price = 250; stock = 20; };
			class CUP_V_BAF_Osprey_Mk2_DPM_Soldier1			{ price = 250; stock = 20; };
			class CUP_V_BAF_Osprey_Mk2_DPM_Soldier2			{ price = 250; stock = 20; };
			#endif

			#ifdef DMD_USE_RHS
			class rhs_6b43									{ price = 250; stock = 20; };
			class rhsusf_iotv_ocp							{ price = 250; stock = 20; };
			class rhsusf_iotv_ocp_grenadier					{ price = 250; stock = 20; };
			class rhsusf_iotv_ocp_medic					    { price = 250; stock = 20; };
			class rhsusf_iotv_ocp_repair					{ price = 250; stock = 20; };
			class rhsusf_iotv_ocp_rifleman					{ price = 250; stock = 20; };
			class rhsusf_iotv_ocp_SAW						{ price = 250; stock = 20; };
			class rhsusf_iotv_ocp_squadleader				{ price = 250; stock = 20; };
			class rhsusf_iotv_ocp_teamleader				{ price = 250; stock = 20; };
			class rhsusf_iotv_ucp							{ price = 250; stock = 20; };
			class rhsusf_iotv_ucp_grenadier					{ price = 250; stock = 20; };
			class rhsusf_iotv_ucp_medic						{ price = 250; stock = 20; };
			class rhsusf_iotv_ucp_repair					{ price = 250; stock = 20; };
			class rhsusf_iotv_ucp_rifleman					{ price = 250; stock = 20; };
			class rhsusf_iotv_ucp_SAW						{ price = 250; stock = 20; };
			class rhsusf_iotv_ucp_squadleader				{ price = 250; stock = 20; };
			class rhsusf_iotv_ucp_teamleader				{ price = 250; stock = 20; };
			class rhsusf_spc					            { price = 250; stock = 20; };
			class rhsusf_spc_corpsman						{ price = 250; stock = 20; };
			class rhsusf_spc_iar							{ price = 250; stock = 20; };
			class rhsusf_spc_light							{ price = 250; stock = 20; };
			class rhsusf_spc_patchless						{ price = 250; stock = 20; };
			class rhsusf_spc_rifleman						{ price = 250; stock = 20; };
			class rhsusf_spc_squadleader					{ price = 250; stock = 20; };
			class rhsusf_spc_teamleader						{ price = 250; stock = 20; };
			class rhsusf_spcs_ocp							{ price = 250; stock = 20; };
			class rhsusf_spcs_ocp_rifleman					{ price = 250; stock = 20; };
			class rhsusf_spcs_ucp							{ price = 250; stock = 20; };
			class rhsusf_spcs_ucp_rifleman					{ price = 250; stock = 20; };
			#endif

			class V_PlateCarrierSpec_blk 					{ price = 250; stock = 20; };
			class V_PlateCarrierSpec_mtp 					{ price = 250; stock = 20; };
			class V_PlateCarrierSpec_rgr 					{ price = 250; stock = 20; };
			class V_RebreatherB								{ price = 250; stock = 20; };
			class V_RebreatherIA							{ price = 250; stock = 20; };
			class V_RebreatherIR							{ price = 250; stock = 20; };

			// tier 5
			#ifdef DMD_USE_CUP
			class CUP_V_BAF_Osprey_Mk4_MTP_Grenadier		{ price = 350; stock = 5; };
			class CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner	{ price = 350; stock = 5; };
			class CUP_V_BAF_Osprey_Mk4_MTP_Rifleman			{ price = 350; stock = 5; };
			class CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader		{ price = 350; stock = 5; };
			#endif

			class V_PlateCarrierGL_blk 						{ price = 350; stock = 5; };
			class V_PlateCarrierGL_mtp 						{ price = 350; stock = 5; };
			class V_PlateCarrierGL_rgr 						{ price = 350; stock = 5; };
			class V_PlateCarrierGL_tna_F					{ price = 350; stock = 5; };
			class V_PlateCarrierIAGL_dgtl 					{ price = 350; stock = 5; };
			class V_PlateCarrierIAGL_oli 					{ price = 350; stock = 5; };
		};

		class uniforms {
			displayName = "Uniforms";
			picture = "";

			#ifdef DMD_USE_CUP
			class CUP_I_B_PMC_Unit_20 						{ price = 50; stock = 10; };
			class CUP_I_B_PMC_Unit_23 						{ price = 50; stock = 10; };
			class CUP_I_B_PMC_Unit_24 						{ price = 50; stock = 10; };
			class CUP_I_B_PMC_Unit_29 						{ price = 50; stock = 10; };
			class CUP_I_B_PMC_Unit_7 						{ price = 50; stock = 10; };
			class CUP_U_B_BAF_DPM_GHILLIE 					{ price = 50; stock = 10; };
			class CUP_U_B_CZ_WDL_TShirt 					{ price = 50; stock = 10; };
			class CUP_U_B_US_BDU_OD 						{ price = 50; stock = 10; };
			class CUP_U_C_Suit_01 							{ price = 50; stock = 10; };
			class CUP_U_C_Woodlander_04 					{ price = 50; stock = 10; };
			class CUP_U_I_GUE_Anorak_01 					{ price = 50; stock = 10; };
			class CUP_U_I_GUE_Anorak_02 					{ price = 50; stock = 10; };
			class CUP_U_I_GUE_Anorak_03 					{ price = 50; stock = 10; };
			class CUP_U_I_GUE_Flecktarn2 					{ price = 50; stock = 10; };
			class CUP_U_O_CHDKZ_Lopotev 					{ price = 50; stock = 10; };
			class CUP_U_O_RUS_Gorka_Green 					{ price = 50; stock = 10; };
			#endif

			#ifdef DMD_USE_RHS
			class rhs_uniform_FROG01_wd 					{ price = 50; stock = 10; };
			class rhs_uniform_g3_aor2 						{ price = 50; stock = 10; };
			class rhs_uniform_g3_blk 						{ price = 50; stock = 10; };
			class rhs_uniform_g3_m81 						{ price = 50; stock = 10; };
			class rhs_uniform_g3_mc							{ price = 50; stock = 10; };
			class rhs_uniform_g3_rgr 						{ price = 50; stock = 10; };
			class rhs_uniform_gorka_r_g 					{ price = 50; stock = 10; };
			class rhs_uniform_gorka_r_y 					{ price = 50; stock = 10; };
			class rhsgref_uniform_gorka_1_f 				{ price = 50; stock = 10; };
			class rhsgref_uniform_olive 					{ price = 50; stock = 10; };
			#endif

			class rvg_bandit 								{ price = 50; stock = 10; };
			class rvg_bandit_1 								{ price = 50; stock = 10; };
			class rvg_camo_1 								{ price = 50; stock = 10; };
			class rvg_hoodie_bandit 						{ price = 50; stock = 10; };
			class rvg_hoodie_blue 							{ price = 50; stock = 10; };
			class rvg_hoodie_grey 							{ price = 50; stock = 10; };
			class rvg_hoodie_kabeiroi 						{ price = 50; stock = 10; };
			class rvg_hoodie_red 							{ price = 50; stock = 10; };
			class rvg_paramilitary_1 						{ price = 50; stock = 10; };
			class rvg_retro_bandit 							{ price = 50; stock = 10; };
			class rvg_retro_green 							{ price = 50; stock = 10; };
			class rvg_retro_grey 							{ price = 50; stock = 10; };
			class rvg_retro_kabeiroi 						{ price = 50; stock = 10; };
			class rvg_retro_red 							{ price = 50; stock = 10; };
			class rvg_shirt_bandit 							{ price = 50; stock = 10; };
			class rvg_shirt_check 							{ price = 50; stock = 10; };
			class rvg_shirt_kabeiroi 						{ price = 50; stock = 10; };
			class rvg_shirt_stripe 							{ price = 50; stock = 10; };
			class rvg_survivor 								{ price = 50; stock = 10; };
			class rvg_survivor_1 							{ price = 50; stock = 10; };
			class U_B_CombatUniform_mcam_tshirt				{ price = 50; stock = 10; };
			class U_B_CTRG_2 								{ price = 50; stock = 10; };
			class U_B_CTRG_3 								{ price = 50; stock = 10; };
			class U_B_Wetsuit_rvg 							{ price = 50; stock = 10; };
			class U_BG_Guerilla1_1 							{ price = 50; stock = 10; };
			class U_BG_Guerilla2_1 							{ price = 50; stock = 10; };
			class U_BG_Guerilla2_3 							{ price = 50; stock = 10; };
			class U_BG_Guerrilla_6_1 						{ price = 50; stock = 10; };

			class U_B_FullGhillie_ard 						{ price = 200; stock = 3; };
			class U_B_FullGhillie_lsh 						{ price = 250; stock = 1; };
			class U_B_FullGhillie_sard 						{ price = 200; stock = 1; };
			class U_B_GhillieSuit 							{ price = 150; stock = 2; };
		};

		class ammunition {
			displayName = "Ammunition";
			picture = "";

			// pistol
			class 16Rnd_9x21_green_Mag 						{ price = 10; stock = 10; };
			class 16Rnd_9x21_Mag 							{ price = 10; stock = 10; };
			class 16Rnd_9x21_red_Mag 						{ price = 10; stock = 10; };
			class 16Rnd_9x21_yellow_Mag 					{ price = 10; stock = 10; };
			class 9Rnd_45ACP_Mag 							{ price = 10; stock = 10; };
			class 10Rnd_9x21_Mag 							{ price = 10; stock = 10; };
			class 11Rnd_45ACP_Mag 							{ price = 10; stock = 10; };
			class 6Rnd_45ACP_Cylinder						{ price = 10; stock = 10; };		

			#ifdef DMD_USE_CUP
			class CUP_10Rnd_9x19_Compact 					{ price = 10; stock = 10; };
			class CUP_12Rnd_9x18_PMM_M 						{ price = 10; stock = 10; };
			class CUP_17Rnd_9x19_glock17 					{ price = 10; stock = 10; };
			class CUP_18Rnd_9x19_Phantom 					{ price = 10; stock = 10; };
			class CUP_30Rnd_9x19_UZI 						{ price = 10; stock = 10; };
			class CUP_6Rnd_45ACP_M 							{ price = 10; stock = 10; };
			class CUP_8Rnd_9x18_Makarov_M 					{ price = 10; stock = 10; };
			class CUP_8Rnd_9x18_MakarovSD_M 				{ price = 10; stock = 10; };
			#endif

			#ifdef DMD_USE_RHS
			class rhs_mag_6x8mm_mhp 						{ price = 10; stock = 10; };
			class rhs_mag_762x25_8 							{ price = 10; stock = 10; };
			class rhs_mag_9x18_8_57N181S 					{ price = 10; stock = 10; };
			class rhs_mag_9x19_17 							{ price = 10; stock = 10; };
			class rhs_mag_9x19mm_7n21_20 					{ price = 10; stock = 10; };
			class rhs_mag_9x19mm_7n21_44 					{ price = 10; stock = 10; };
			class rhs_mag_9x19mm_7n31_20 					{ price = 10; stock = 10; };
			class rhs_mag_9x19mm_7n31_44 					{ price = 10; stock = 10; };
			class rhsusf_mag_15Rnd_9x19_FMJ 				{ price = 10; stock = 10; };
			class rhsusf_mag_15Rnd_9x19_JHP 				{ price = 10; stock = 10; };
			class rhsusf_mag_7x45acp_MHP 					{ price = 10; stock = 10; };
			#endif
			
			// shottys
			#ifdef DMD_USE_CUP
			class CUP_20Rnd_B_AA12_Pellets 					{ price = 20; stock = 10; };
			class CUP_20Rnd_B_AA12_74Slug 					{ price = 20; stock = 10; };
			class CUP_20Rnd_B_AA12_HE 						{ price = 20; stock = 10; };
			class CUP_8Rnd_B_Beneli_74Slug 					{ price = 8; stock = 10; };
			class CUP_8Rnd_B_Beneli_74Pellets 				{ price = 8; stock = 10; };
			class CUP_8Rnd_B_Saiga12_74Slug_M 				{ price = 8; stock = 10; };
			class CUP_8Rnd_B_Saiga12_74Pellets_M 			{ price = 8; stock = 10; };
			#endif

			class 2Rnd_12Gauge_Pellets			 			{ price = 4; stock = 10; };
			class 2Rnd_12Gauge_Slug 						{ price = 4; stock = 10; };

			// RHS SHOTGUNS RELOAD BROKEN - REMOVE ITEMS UNTIL FIXED
			//  class rhsgref_1Rnd_00Buck 					{ price = 10; stock = 10; };
			//  class rhsgref_1Rnd_Slug 					{ price = 10; stock = 10; };
			//  class rhsusf_8Rnd_00Buck 					{ price = 10; stock = 10; };
			//  class rhsusf_8rnd_doomsday_buck 			{ price = 10; stock = 10; };
			//  class rhsusf_8Rnd_Slug 						{ price = 10; stock = 10; };
			//  class rhsusf_8Rnd_HE 						{ price = 10; stock = 10; };
			//  class rhsusf_8Rnd_FRAG 						{ price = 10; stock = 10; };
			//  class rhsusf_5Rnd_00Buck 					{ price = 10; stock = 10; };
			//  class rhsusf_5rnd_doomsday_buck 			{ price = 10; stock = 10; };
			//  class rhsusf_5Rnd_Slug 						{ price = 10; stock = 10; };
			//  class rhsusf_5Rnd_HE 						{ price = 10; stock = 10; };
			//  class rhsusf_5Rnd_FRAG 						{ price = 10; stock = 10; };
			
			// pdws
			class 30Rnd_9x21_Green_Mag 						{ price = 30; stock = 10; };
			class 30Rnd_9x21_Mag 							{ price = 30; stock = 10; };
			class 30Rnd_45ACP_Mag_SMG_01 					{ price = 30; stock = 10; };
			class 30Rnd_9x21_Mag_SMG_02 					{ price = 30; stock = 10; };
			class 30Rnd_9x21_Mag_SMG_02_Tracer_Green 		{ price = 30; stock = 10; };
			class 30Rnd_9x21_Mag_SMG_02_Tracer_Red 			{ price = 30; stock = 10; };
			class 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow 		{ price = 30; stock = 10; };
			class 30Rnd_9x21_Red_Mag 						{ price = 30; stock = 10; };
			class 30Rnd_9x21_Yellow_Mag 					{ price = 30; stock = 10; };
			class 50Rnd_570x28_SMG_03 						{ price = 50; stock = 10; };

			#ifdef DMD_USE_CUP
			class CUP_10Rnd_9x19_Saiga9 					{ price = 10; stock = 10; };
			class CUP_30Rnd_9x19_EVO 						{ price = 30; stock = 10; };
			class CUP_30Rnd_9x19_Vityaz 					{ price = 30; stock = 10; };
			class CUP_30Rnd_9x19AP_Vityaz 					{ price = 30; stock = 10; };
			class CUP_64Rnd_9x19_Bizon_M 					{ price = 50; stock = 10; };
			class CUP_64Rnd_Green_Tracer_9x19_Bizon_M 		{ price = 50; stock = 10; };
			class CUP_64Rnd_Red_Tracer_9x19_Bizon_M 		{ price = 50; stock = 10; };
			class CUP_64Rnd_White_Tracer_9x19_Bizon_M 		{ price = 50; stock = 10; };
			class CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M 		{ price = 50; stock = 10; };
			#endif

			#ifdef DMD_USE_RHS
			class rhs_10rnd_9x39mm_SP5 						{ price = 10; stock = 10; };
			class rhs_10rnd_9x39mm_SP6 						{ price = 10; stock = 10; };
			class rhs_20rnd_9x39mm_SP5 						{ price = 20; stock = 10; };
			class rhs_20rnd_9x39mm_SP6 						{ price = 20; stock = 10; };
			class rhsgref_10rnd_765x17_vz61 				{ price = 10; stock = 10; };
			class rhsgref_20rnd_765x17_vz61 				{ price = 20; stock = 10; };
			class rhsgref_30rnd_1143x23_M1911B_2mag_SMG 	{ price = 30; stock = 10; };
			class rhsgref_30rnd_1143x23_M1911B_SMG 			{ price = 30; stock = 10; };
			class rhsgref_30rnd_1143x23_M1T_2mag_SMG 		{ price = 30; stock = 10; };
			class rhsgref_30rnd_1143x23_M1T_SMG 			{ price = 30; stock = 10; };
			class rhsusf_mag_40Rnd_46x30_AP 				{ price = 40; stock = 10; };
			class rhsusf_mag_40Rnd_46x30_FMJ 				{ price = 40; stock = 10; };
			class rhsusf_mag_40Rnd_46x30_JHP 				{ price = 40; stock = 10; };
			#endif

			// assault rifles
			class 20Rnd_762x51_Mag 										{ price = 20; stock = 10; };
			class 30Rnd_556x45_Stanag 									{ price = 30; stock = 10; };
			class 30Rnd_556x45_Stanag_green 							{ price = 30; stock = 10; };
			class 30Rnd_556x45_Stanag_red 								{ price = 30; stock = 10; };
			class 30Rnd_556x45_Stanag_Tracer_Green 						{ price = 30; stock = 10; };
			class 30Rnd_556x45_Stanag_Tracer_Red 						{ price = 30; stock = 10; };
			class 30Rnd_556x45_Stanag_Tracer_Yellow 					{ price = 30; stock = 10; };
			class 30Rnd_65x39_caseless_black_mag 						{ price = 30; stock = 10; };
			class 30Rnd_65x39_caseless_green 							{ price = 30; stock = 10; };
			class 30Rnd_65x39_caseless_green_mag_Tracer 				{ price = 30; stock = 10; };
			class 30Rnd_65x39_caseless_mag                              { price = 30; stock = 10; };
            class 30Rnd_65x39_caseless_mag_Tracer                       { price = 30; stock = 10; };

            class 30Rnd_762x39_AK12_Mag_F                       		{ price = 30; stock = 10; };
            class 30Rnd_762x39_Mag_F                       				{ price = 30; stock = 10; };

			#ifdef DMD_USE_CUP
			class CUP_10Rnd_762x39_SaigaMk03_M 							{ price = 10; stock = 10; };
			class CUP_20Rnd_545x39_AKSU_M 								{ price = 20; stock = 10; };
			class CUP_20Rnd_556x45_Stanag 								{ price = 20; stock = 10; };
			class CUP_20Rnd_762x39_AMD63_M 								{ price = 20; stock = 10; };
			class CUP_20Rnd_762x51_B_SCAR 								{ price = 20; stock = 10; };
			class CUP_20Rnd_762x51_B_SCAR_bkl 							{ price = 20; stock = 10; };
			class CUP_20Rnd_762x51_B_SCAR_wdl 							{ price = 20; stock = 10; };
			class CUP_20Rnd_762x51_CZ805B 								{ price = 20; stock = 10; };
			class CUP_20Rnd_762x51_FNFAL_M 								{ price = 20; stock = 10; };
			class CUP_20Rnd_762x51_HK417 								{ price = 20; stock = 10; };
			class CUP_20Rnd_762x51_HK417_Camo_Desert 					{ price = 20; stock = 10; };
			class CUP_20Rnd_762x51_HK417_Camo_Wood 						{ price = 20; stock = 10; };
			class CUP_20Rnd_762x51_L129_M 								{ price = 20; stock = 10; };
			class CUP_20Rnd_Subsonic_545x39_AKSU_M 						{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B 				{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_Green_Tracer_762x51_HK417 				{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR 				{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR_bkl 			{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR_wdl 			{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B 				{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_Red_Tracer_762x51_HK417 				{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR 					{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_bkl 				{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_wdl 				{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B 				{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_White_Tracer_762x51_SCAR 				{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_White_Tracer_762x51_SCAR_bkl 			{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_White_Tracer_762x51_SCAR_wdl 			{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B 			{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_Yellow_Tracer_762x51_HK417 				{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR 				{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR_bkl 			{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR_wdl 			{ price = 20; stock = 10; };
			class CUP_30Rnd_545x39_AK_M 								{ price = 30; stock = 10; };
			class CUP_30Rnd_545x39_AK74_plum_M 							{ price = 30; stock = 10; };
			class CUP_30Rnd_545x39_AK74M_camo_M 						{ price = 30; stock = 10; };
			class CUP_30Rnd_545x39_AK74M_M 								{ price = 30; stock = 10; };
			class CUP_30Rnd_556x45_AK 									{ price = 30; stock = 10; };
			class CUP_30Rnd_556x45_Emag 								{ price = 30; stock = 10; };
			class CUP_30Rnd_556x45_G36 									{ price = 30; stock = 10; };
			class CUP_30Rnd_556x45_G36_camo 							{ price = 30; stock = 10; };
			class CUP_30Rnd_556x45_G36_hex 								{ price = 30; stock = 10; };
			class CUP_30Rnd_556x45_G36_wdl 								{ price = 30; stock = 10; };
			class CUP_30Rnd_556x45_Stanag 								{ price = 30; stock = 10; };
			class CUP_30Rnd_556x45_Stanag_L85 							{ price = 30; stock = 10; };
			class CUP_30Rnd_556x45_Stanag_Mk16 							{ price = 30; stock = 10; };
			class CUP_30Rnd_556x45_Stanag_Mk16_black 					{ price = 30; stock = 10; };
			class CUP_30Rnd_556x45_Stanag_Mk16_woodland 				{ price = 30; stock = 10; };
			class CUP_30Rnd_556x45_XM8 									{ price = 30; stock = 10; };
			class CUP_30Rnd_762x39_AK103_bakelite_M 					{ price = 30; stock = 10; };
			class CUP_30Rnd_762x39_AK47_bakelite_M 						{ price = 30; stock = 10; };
			class CUP_30Rnd_762x39_AK47_M 								{ price = 30; stock = 10; };
			class CUP_30Rnd_762x39_AK47_TK_M 							{ price = 30; stock = 10; };
			class CUP_30Rnd_762x51_1_B_SCAR 							{ price = 30; stock = 10; };
			class CUP_30Rnd_762x51_2_B_SCAR								{ price = 30; stock = 10; };
			class CUP_30Rnd_Subsonic_545x39_AK_M 						{ price = 30; stock = 10; };
			class CUP_30Rnd_Subsonic_545x39_AK74_plum_M 				{ price = 30; stock = 10; };
			class CUP_30Rnd_Subsonic_545x39_AK74M_M 					{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M 				{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M 		{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M 			{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Green_Tracer_556x45_AK 					{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Green_Tracer_556x45_G36 				{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Green_Tracer_556x45_G36_camo 			{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Green_Tracer_556x45_G36_hex 			{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Green_Tracer_556x45_G36_wdl 			{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Green_Tracer_556x45_XM8 				{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Green_Tracer_762x51_1_SCAR 				{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Green_Tracer_762x51_2_SCAR 				{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M 					{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Red_Tracer_545x39_AK74_plum_M 			{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M 				{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Red_Tracer_556x45_AK 					{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Red_Tracer_556x45_G36 					{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Red_Tracer_556x45_G36_camo 				{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Red_Tracer_556x45_G36_hex 				{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Red_Tracer_556x45_G36_wdl 				{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Red_Tracer_556x45_XM8 					{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Red_Tracer_762x51_1_SCAR 				{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Red_Tracer_762x51_2_SCAR 				{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_White_Tracer_545x39_AK_M 				{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_White_Tracer_545x39_AK74_plum_M 		{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_White_Tracer_545x39_AK74M_M 			{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_White_Tracer_762x51_1_SCAR 				{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_White_Tracer_762x51_2_SCAR 				{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M 				{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74_plum_M 		{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74M_M 			{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Yellow_Tracer_556x45_AK 				{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36 				{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_camo 			{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_hex 			{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_wdl 			{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Yellow_Tracer_556x45_XM8 				{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Yellow_Tracer_762x51_1_SCAR 			{ price = 30; stock = 10; };
			class CUP_30Rnd_TE1_Yellow_Tracer_762x51_2_SCAR 			{ price = 30; stock = 10; };
			class CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M 			{ price = 40; stock = 10; };
			class CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M 			{ price = 45; stock = 10; };
			class CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M 		{ price = 45; stock = 10; };
			class CUP_50Rnd_762x51_B_SCAR 								{ price = 50; stock = 10; };
			class CUP_50Rnd_TE1_Green_Tracer_762x51_SCAR 				{ price = 50; stock = 10; };
			class CUP_50Rnd_TE1_Red_Tracer_762x51_SCAR 					{ price = 50; stock = 10; };
			class CUP_50Rnd_TE1_White_Tracer_762x51_SCAR 				{ price = 50; stock = 10; };
			class CUP_50Rnd_TE1_Yellow_Tracer_762x51_SCAR 				{ price = 50; stock = 10; };
			class CUP_60Rnd_545x39_AK74M_M 								{ price = 60; stock = 10; };
			class CUP_60Rnd_556x45_SureFire 							{ price = 60; stock = 10; };
			class CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M 			{ price = 60; stock = 10; };
			class CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M 				{ price = 60; stock = 10; };
			class CUP_60Rnd_TE1_White_Tracer_545x39_AK74M_M 			{ price = 60; stock = 10; };
			class CUP_60Rnd_TE1_Yellow_Tracer_545x39_AK74M_M 			{ price = 60; stock = 10; };
			class CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M 			{ price = 75; stock = 10; };
			#endif

			#ifdef DMD_USE_RHS
			class rhs_10Rnd_762x39mm 									{ price = 10; stock = 10; };
			class rhs_10Rnd_762x39mm_89 								{ price = 10; stock = 10; };
			class rhs_10Rnd_762x39mm_tracer 							{ price = 10; stock = 10; };
			class rhs_10Rnd_762x39mm_U 									{ price = 10; stock = 10; };
			class rhs_30Rnd_545x39_7N10_2mag_AK 						{ price = 30; stock = 10; };
			class rhs_30Rnd_545x39_7N10_2mag_camo_AK 					{ price = 30; stock = 10; };
			class rhs_30Rnd_545x39_7N10_2mag_desert_AK 					{ price = 30; stock = 10; };
			class rhs_30Rnd_545x39_7N10_2mag_plum_AK 					{ price = 30; stock = 10; };
			class rhs_30Rnd_545x39_7N10_AK 								{ price = 30; stock = 10; };
			class rhs_30Rnd_545x39_7N10_camo_AK 						{ price = 30; stock = 10; };
			class rhs_30Rnd_545x39_7N10_desert_AK 						{ price = 30; stock = 10; };
			class rhs_30Rnd_545x39_7N10_plum_AK 						{ price = 30; stock = 10; };
			class rhs_30Rnd_545x39_7N22_AK 								{ price = 30; stock = 10; };
			class rhs_30Rnd_545x39_7N22_camo_AK 						{ price = 30; stock = 10; };
			class rhs_30Rnd_545x39_7N22_desert_AK 						{ price = 30; stock = 10; };
			class rhs_30Rnd_545x39_7N22_plum_AK 						{ price = 30; stock = 10; };
			class rhs_30Rnd_545x39_7N6_AK 								{ price = 30; stock = 10; };
			class rhs_30Rnd_545x39_7N6_green_AK 						{ price = 30; stock = 10; };
			class rhs_30Rnd_545x39_7N6M_AK 								{ price = 30; stock = 10; };
			class rhs_30Rnd_545x39_7N6M_green_AK 						{ price = 30; stock = 10; };
			class rhs_30Rnd_545x39_7N6M_plum_AK 						{ price = 30; stock = 10; };
			class rhs_30Rnd_545x39_7U1_AK 								{ price = 30; stock = 10; };
			class rhs_30Rnd_545x39_AK 									{ price = 30; stock = 10; };
			class rhs_30Rnd_545x39_AK_green 							{ price = 30; stock = 10; };
			class rhs_30Rnd_545x39_AK_no_tracers 						{ price = 30; stock = 10; };
			class rhs_30Rnd_545x39_AK_plum_green 						{ price = 30; stock = 10; };
			class rhs_30Rnd_762x39mm 									{ price = 30; stock = 10; };
			class rhs_30Rnd_762x39mm_89 								{ price = 30; stock = 10; };
			class rhs_30Rnd_762x39mm_bakelite 							{ price = 30; stock = 10; };
			class rhs_30Rnd_762x39mm_bakelite_89 						{ price = 30; stock = 10; };
			class rhs_30Rnd_762x39mm_bakelite_tracer 					{ price = 30; stock = 10; };
			class rhs_30Rnd_762x39mm_bakelite_U 						{ price = 30; stock = 10; };
			class rhs_30Rnd_762x39mm_polymer 							{ price = 30; stock = 10; };
			class rhs_30Rnd_762x39mm_polymer_89 						{ price = 30; stock = 10; };
			class rhs_30Rnd_762x39mm_polymer_tracer 					{ price = 30; stock = 10; };
			class rhs_30Rnd_762x39mm_polymer_U 							{ price = 30; stock = 10; };
			class rhs_30Rnd_762x39mm_tracer 							{ price = 30; stock = 10; };
			class rhs_30Rnd_762x39mm_U 									{ price = 30; stock = 10; };
			class rhs_45Rnd_545x39_7N10_AK 								{ price = 45; stock = 10; };
			class rhs_45Rnd_545x39_7N22_AK 								{ price = 45; stock = 10; };
			class rhs_45Rnd_545x39_7N6_AK 								{ price = 45; stock = 10; };
			class rhs_45Rnd_545x39_7U1_AK 								{ price = 45; stock = 10; };
			class rhs_45Rnd_545x39_AK 									{ price = 45; stock = 10; };
			class rhs_45Rnd_545x39_AK_green 							{ price = 45; stock = 10; };
			class rhs_75Rnd_762x39mm 									{ price = 75; stock = 10; };
			class rhs_75Rnd_762x39mm_89 								{ price = 75; stock = 10; };
			class rhs_75Rnd_762x39mm_tracer 							{ price = 75; stock = 10; };
			class rhs_mag_20Rnd_556x45_M193_2MAG_Stanag 				{ price = 20; stock = 10; };
			class rhs_mag_20Rnd_556x45_M193_Stanag 						{ price = 20; stock = 10; };
			class rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red 		{ price = 20; stock = 10; };
			class rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red 			{ price = 20; stock = 10; };
			class rhs_mag_20Rnd_556x45_M855_Stanag 						{ price = 20; stock = 10; };
			class rhs_mag_20Rnd_556x45_M855A1_Stanag 					{ price = 20; stock = 10; };
			class rhs_mag_20Rnd_556x45_Mk262_Stanag 					{ price = 20; stock = 10; };
			class rhs_mag_20Rnd_762x51_m80_fnfal 						{ price = 20; stock = 10; };
			class rhs_mag_20Rnd_SCAR_762x51_m118_special_bk 			{ price = 20; stock = 10; };
			class rhs_mag_20Rnd_SCAR_762x51_m61_ap_bk 					{ price = 20; stock = 10; };
			class rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk 				{ price = 20; stock = 10; };
			class rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk 				{ price = 20; stock = 10; };
			class rhs_mag_20Rnd_SCAR_762x51_m80a1_epr_bk 				{ price = 20; stock = 10; };
			class rhs_mag_30Rnd_556x45_M193_Stanag 						{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red 			{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855_PMAG 						{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855_PMAG_Tan 					{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855_PMAG_Tan_Tracer_Red 		{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red 			{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855_Stanag 						{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855_Stanag_Pull 				{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red 		{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855_Stanag_Ranger 				{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red 	{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green 		{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange 		{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red 			{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow 		{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855A1_EPM 						{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855A1_EPM_Pull 					{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red 		{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger 				{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red 	{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red 			{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855A1_PMAG 						{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan 					{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red 		{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red 			{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855A1_Stanag 					{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer 			{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull 				{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red 	{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger 			{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red 	{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green 		{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange 		{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red 		{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow 		{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_Mk262_PMAG 						{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_Mk262_PMAG_Tan 					{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_Mk262_Stanag 					{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull 				{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger 				{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_Mk318_PMAG 						{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan 					{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_Mk318_SCAR 						{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull 					{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger 				{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_Mk318_Stanag 					{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull 				{ price = 30; stock = 10; };
			class rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger 				{ price = 30; stock = 10; };
			class rhsgref_25Rnd_792x33_SmE_StG 							{ price = 25; stock = 10; };
			class rhsgref_30rnd_556x45_m21 								{ price = 30; stock = 10; };
			class rhsgref_30rnd_556x45_m21_t 							{ price = 30; stock = 10; };
			class rhsgref_30rnd_556x45_vhs2 							{ price = 30; stock = 10; };
			class rhsgref_30rnd_556x45_vhs2_t 							{ price = 30; stock = 10; };
			class rhsgref_30Rnd_792x33_SmE_StG 							{ price = 30; stock = 10; };
			class rhssaf_30rnd_556x45_EPR_G36 							{ price = 30; stock = 10; };
			class rhssaf_30rnd_556x45_MDIM_G36 							{ price = 30; stock = 10; };
			class rhssaf_30rnd_556x45_SOST_G36 							{ price = 30; stock = 10; };
			class rhssaf_30rnd_556x45_SPR_G36 							{ price = 30; stock = 10; };
			class rhssaf_30rnd_556x45_TDIM_G36 							{ price = 30; stock = 10; };
			class rhssaf_30rnd_556x45_Tracers_G36 						{ price = 30; stock = 10; };
			#endif

			// snipers
			class 5Rnd_127x108_Mag 										{ price = 10; stock = 10; };
			class 10Rnd_127x54_Mag 										{ price = 10; stock = 10; };
			class 10Rnd_338_Mag 										{ price = 10; stock = 10; };
			class 10Rnd_762x54_Mag 										{ price = 10; stock = 10; };
			class 10Rnd_93x64_DMR_05_Mag 								{ price = 10; stock = 10; };
			class 7Rnd_408_Mag 											{ price = 10; stock = 10; };

			#ifdef DMD_USE_CUP
			class CUP_10x_303_M 										{ price = 10; stock = 10; };
			class CUP_20Rnd_762x51_B_M110 								{ price = 20; stock = 10; };
			class CUP_20Rnd_762x51_DMR 									{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_Green_Tracer_762x51_DMR 				{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_Green_Tracer_762x51_M110 				{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_Red_Tracer_762x51_DMR 					{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_Red_Tracer_762x51_M110 					{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_White_Tracer_762x51_DMR 				{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_White_Tracer_762x51_M110 				{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR 				{ price = 20; stock = 10; };
			class CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110 				{ price = 20; stock = 10; };
			class CUP_5Rnd_127x108_KSVK_M 								{ price = 10; stock = 10; };
			class CUP_5Rnd_762x67_G22 									{ price = 10; stock = 10; };
			class CUP_5Rnd_86x70_L115A1 								{ price = 10; stock = 10; };
			class CUP_5x_22_LR_17_HMR_M 								{ price = 10; stock = 10; };
			#endif

			#ifdef DMD_USE_RHS
			class rhs_10Rnd_762x54mmR_7N1 								{ price = 10; stock = 10; };
			class rhs_10Rnd_762x54mmR_7N14 								{ price = 10; stock = 10; };
			class rhs_5Rnd_338lapua_t5000 								{ price = 10; stock = 10; };
			class rhsgref_5Rnd_762x54_m38 								{ price = 10; stock = 10; };
			class rhsgref_5Rnd_792x57_kar98k 							{ price = 10; stock = 10; };
			class rhsgref_8Rnd_762x63_M2B_M1rifle 						{ price = 10; stock = 10; };
			class rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle 				{ price = 10; stock = 10; };
			class rhsusf_10Rnd_762x51_m118_special_Mag 					{ price = 10; stock = 10; };
			class rhsusf_10Rnd_762x51_m62_Mag 							{ price = 10; stock = 10; };
			class rhsusf_10Rnd_762x51_m993_Mag 							{ price = 10; stock = 10; };
			class rhsusf_20Rnd_762x51_m118_special_Mag 					{ price = 20; stock = 10; };
			class rhsusf_20Rnd_762x51_m62_Mag 							{ price = 20; stock = 10; };
			class rhsusf_20Rnd_762x51_m993_Mag 							{ price = 20; stock = 10; };
			class rhsusf_20Rnd_762x51_SR25_m118_special_Mag 			{ price = 20; stock = 10; };
			class rhsusf_20Rnd_762x51_SR25_m62_Mag 						{ price = 20; stock = 10; };
			class rhsusf_20Rnd_762x51_SR25_m993_Mag 					{ price = 20; stock = 10; };
			class rhsusf_20Rnd_762x51_SR25_mk316_special_Mag 			{ price = 20; stock = 10; };
			class rhsusf_5Rnd_300winmag_xm2010 							{ price = 10; stock = 10; };
			class rhsusf_5Rnd_762x51_AICS_m118_special_Mag 				{ price = 10; stock = 10; };
			class rhsusf_5Rnd_762x51_AICS_m62_Mag 						{ price = 10; stock = 10; };
			class rhsusf_5Rnd_762x51_AICS_m993_Mag 						{ price = 10; stock = 10; };
			class rhsusf_5Rnd_762x51_m118_special_Mag 					{ price = 10; stock = 10; };
			class rhsusf_5Rnd_762x51_m62_Mag 							{ price = 10; stock = 10; };
			class rhsusf_5Rnd_762x51_m993_Mag 							{ price = 10; stock = 10; };
			class rhsusf_mag_10Rnd_STD_50BMG_M33 						{ price = 10; stock = 10; };
			class rhsusf_mag_10Rnd_STD_50BMG_mk211						{ price = 10; stock = 10; };
			#endif

			// lmgs
			class 100Rnd_580x42_ghex_Mag_F 								{ price = 100; stock = 10; };
			class 100Rnd_580x42_Mag_F	 								{ price = 100; stock = 10; };
			class 100Rnd_65x39_caseless_mag 							{ price = 100; stock = 10; };
			class 130Rnd_338_Mag 										{ price = 130; stock = 10; };
			class 150Rnd_556x45_Drum_Mag_F 								{ price = 150; stock = 10; };
			class 150Rnd_556x45_Drum_Mag_Tracer_F 						{ price = 150; stock = 10; };
			class 150Rnd_762x54_Box 									{ price = 150; stock = 10; };
			class 150Rnd_762x54_Box_Tracer 								{ price = 150; stock = 10; };
			class 150Rnd_93x64_Mag 										{ price = 150; stock = 10; };
			class 200Rnd_65x39_cased_Box 								{ price = 200; stock = 10; };
			class 200Rnd_65x39_cased_Box_Red 							{ price = 200; stock = 10; };
			class 200Rnd_65x39_cased_Box_Tracer 						{ price = 200; stock = 10; };
			class 200Rnd_65x39_cased_Box_Tracer_Red 					{ price = 200; stock = 10; };
			class 200Rnd_556x45_Box_F				 					{ price = 200; stock = 10; };

			#ifdef DMD_USE_CUP
			class CUP_100Rnd_556x45_BetaCMag 							{ price = 100; stock = 10; };
			class CUP_100Rnd_556x45_BetaCMag_ar15 						{ price = 100; stock = 10; };
			class CUP_100Rnd_556x45_BetaCMag_camo						{ price = 100; stock = 10; };
			class CUP_100Rnd_556x45_BetaCMag_hex 						{ price = 100; stock = 10; };
			class CUP_100Rnd_556x45_BetaCMag_wdl 						{ price = 100; stock = 10; };
			class CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag 			{ price = 100; stock = 10; };
			class CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_ar15 		{ price = 100; stock = 10; };
			class CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_camo 		{ price = 100; stock = 10; };
			class CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_hex 		{ price = 100; stock = 10; };
			class CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_wdl 		{ price = 100; stock = 10; };
			class CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag 			{ price = 100; stock = 10; };
			class CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_ar15 		{ price = 100; stock = 10; };
			class CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_camo 		{ price = 100; stock = 10; };
			class CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_hex 		{ price = 100; stock = 10; };
			class CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_wdl 		{ price = 100; stock = 10; };
			class CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag 			{ price = 100; stock = 10; };
			class CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_ar15 	{ price = 100; stock = 10; };
			class CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_camo 	{ price = 100; stock = 10; };
			class CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_hex 		{ price = 100; stock = 10; };
			class CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_wdl 		{ price = 100; stock = 10; };
			class CUP_100Rnd_TE4_Green_Tracer_556x45_M249 				{ price = 100; stock = 10; };
			class CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M 		{ price = 100; stock = 10; };
			class CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M 			{ price = 100; stock = 10; };
			class CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M 		{ price = 100; stock = 10; };
			class CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M 		{ price = 100; stock = 10; };
			class CUP_100Rnd_TE4_Red_Tracer_556x45_M249 				{ price = 100; stock = 10; };
			class CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249 				{ price = 100; stock = 10; };
			class CUP_200Rnd_TE1_Red_Tracer_556x45_M249 				{ price = 200; stock = 10; };
			class CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1 			{ price = 200; stock = 10; };
			class CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1 				{ price = 200; stock = 10; };
			class CUP_200Rnd_TE4_Red_Tracer_556x45_M249 				{ price = 200; stock = 10; };
			class CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1 			{ price = 200; stock = 10; };
			class CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249 				{ price = 200; stock = 10; };
			#endif

			#ifdef DMD_USE_RHS
			class rhs_100Rnd_762x54mmR 									{ price = 100; stock = 10; };
			class rhs_100Rnd_762x54mmR_7BZ3 							{ price = 100; stock = 10; };
			class rhs_100Rnd_762x54mmR_7N13 							{ price = 100; stock = 10; };
			class rhs_100Rnd_762x54mmR_7N26 							{ price = 100; stock = 10; };
			class rhs_100Rnd_762x54mmR_green 							{ price = 100; stock = 10; };
			class rhs_200rnd_556x45_B_SAW 								{ price = 200; stock = 10; };
			class rhs_200rnd_556x45_M_SAW 								{ price = 200; stock = 10; };
			class rhs_200rnd_556x45_T_SAW 								{ price = 200; stock = 10; };
			class rhs_mag_100Rnd_556x45_M855_cmag 						{ price = 100; stock = 10; };
			class rhs_mag_100Rnd_556x45_M855_cmag_mixed 				{ price = 100; stock = 10; };
			class rhs_mag_100Rnd_556x45_M855A1_cmag 					{ price = 100; stock = 10; };
			class rhs_mag_100Rnd_556x45_M855A1_cmag_mixed 				{ price = 100; stock = 10; };
			class rhs_mag_100Rnd_556x45_Mk262_cmag 						{ price = 100; stock = 10; };
			class rhs_mag_100Rnd_556x45_Mk318_cmag 						{ price = 100; stock = 10; };
			class rhsgref_296Rnd_792x57_SmE_belt 						{ price = 300; stock = 10; };
			class rhsgref_296Rnd_792x57_SmE_notracers_belt 				{ price = 300; stock = 10; };
			class rhsgref_296Rnd_792x57_SmK_alltracers_belt				{ price = 300; stock = 10; };
			class rhsgref_296Rnd_792x57_SmK_belt 						{ price = 300; stock = 10; };
			class rhsgref_50Rnd_792x57_SmE_drum 						{ price = 50; stock = 10; };
			class rhsgref_50Rnd_792x57_SmE_notracers_drum 				{ price = 50; stock = 10; };
			class rhsgref_50Rnd_792x57_SmK_alltracers_drum 				{ price = 50; stock = 10; };
			class rhsgref_50Rnd_792x57_SmK_drum 						{ price = 50; stock = 10; };
			class rhssaf_100rnd_556x45_EPR_G36 							{ price = 100; stock = 10; };
			class rhssaf_250Rnd_762x54R 								{ price = 250; stock = 10; };
			class rhsusf_100Rnd_556x45_M855_mixed_soft_pouch 			{ price = 100; stock = 10; };
			class rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_coyote 	{ price = 100; stock = 10; };
			class rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_ucp 		{ price = 100; stock = 10; };
			class rhsusf_100Rnd_556x45_M855_soft_pouch 					{ price = 100; stock = 10; };
			class rhsusf_100Rnd_556x45_M855_soft_pouch_coyote 			{ price = 100; stock = 10; };
			class rhsusf_100Rnd_556x45_M855_soft_pouch_ucp 				{ price = 100; stock = 10; };
			class rhsusf_100Rnd_556x45_mixed_soft_pouch 				{ price = 100; stock = 10; };
			class rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote 			{ price = 100; stock = 10; };
			class rhsusf_100Rnd_556x45_mixed_soft_pouch_ucp 			{ price = 100; stock = 10; };
			class rhsusf_100Rnd_556x45_soft_pouch 						{ price = 100; stock = 10; };
			class rhsusf_100Rnd_556x45_soft_pouch_coyote 				{ price = 100; stock = 10; };
			class rhsusf_100Rnd_556x45_soft_pouch_ucp 					{ price = 100; stock = 10; };
			class rhsusf_100Rnd_762x51 									{ price = 100; stock = 10; };
			class rhsusf_100Rnd_762x51_m61_ap 							{ price = 100; stock = 10; };
			class rhsusf_100Rnd_762x51_m62_tracer 						{ price = 100; stock = 10; };
			class rhsusf_100Rnd_762x51_m80a1epr 						{ price = 100; stock = 10; };
			class rhsusf_100Rnd_762x51_m993								{ price = 100; stock = 10; };
			class rhsusf_200Rnd_556x45_box 								{ price = 200; stock = 10; };
			class rhsusf_200rnd_556x45_M855_box 						{ price = 200; stock = 10; };
			class rhsusf_200rnd_556x45_M855_mixed_box 					{ price = 200; stock = 10; };
			class rhsusf_200Rnd_556x45_M855_mixed_soft_pouch 			{ price = 200; stock = 10; };
			class rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote 	{ price = 200; stock = 10; };
			class rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_ucp 		{ price = 200; stock = 10; };
			class rhsusf_200Rnd_556x45_M855_soft_pouch 					{ price = 200; stock = 10; };
			class rhsusf_200Rnd_556x45_M855_soft_pouch_coyote 			{ price = 200; stock = 10; };
			class rhsusf_200Rnd_556x45_M855_soft_pouch_ucp 				{ price = 200; stock = 10; };
			class rhsusf_200rnd_556x45_mixed_box 						{ price = 200; stock = 10; };
			class rhsusf_200Rnd_556x45_mixed_soft_pouch 				{ price = 200; stock = 10; };
			class rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote 			{ price = 200; stock = 10; };
			class rhsusf_200Rnd_556x45_mixed_soft_pouch_ucp 			{ price = 200; stock = 10; };
			class rhsusf_200Rnd_556x45_soft_pouch 						{ price = 200; stock = 10; };
			class rhsusf_200Rnd_556x45_soft_pouch_coyote 				{ price = 200; stock = 10; };
			class rhsusf_200Rnd_556x45_soft_pouch_ucp 					{ price = 200; stock = 10; };
			class rhsusf_50Rnd_762x51 									{ price = 50; stock = 10; };
			class rhsusf_50Rnd_762x51_m61_ap 							{ price = 50; stock = 10; };
			class rhsusf_50Rnd_762x51_m62_tracer 						{ price = 50; stock = 10; };
			class rhsusf_50Rnd_762x51_m80a1epr 							{ price = 50; stock = 10; };
			class rhsusf_50Rnd_762x51_m993 								{ price = 50; stock = 10; };
			#endif
		};

		class grenades_he {
			displayName = "Explosives";
			picture = "";
			
            class RPG7_F                                    { price = 1000; stock = 0; };
            class launch_RPG7_F                             { price = 1000; stock = 0; };
            class launch_RPG32_F                            { price = 1000; stock = 0; };
            class launch_NLAW_F                             { price = 1000; stock = 0; };
            class RPG32_F                                   { price = 200; stock = 0; };
            class RPG32_HE_F                                { price = 200; stock = 0; };
            class NLAW_F                                    { price = 200; stock = 0; };
            
            class APERSMine_Range_Mag                       { price = 100; stock = 15; };
            class APERSBoundingMine_Range_Mag               { price = 100; stock = 6; };
            class SLAMDirectionalMine_Wire_Mag              { price = 100; stock = 4; };
            class APERSTripMine_Wire_Mag                    { price = 100; stock = 10; };
            class ClaymoreDirectionalMine_Remote_Mag        { price = 100; stock = 0; };
            class SatchelCharge_Remote_Mag                  { price = 100; stock = 2; };
            class DemoCharge_Remote_Mag                     { price = 100; stock = 1; };
            class IEDUrbanBig_Remote_Mag                    { price = 100; stock = 1; };
            class IEDLandBig_Remote_Mag                     { price = 100; stock = 2; };
            class IEDUrbanSmall_Remote_Mag                  { price = 100; stock = 6; };
            class IEDLandSmall_Remote_Mag                   { price = 100; stock = 3; };
            
            class 1Rnd_HE_Grenade_shell                     { price = 20; stock = 6; };
            class 3Rnd_HE_Grenade_shell                     { price = 50; stock = 6; };
			
			class HandGrenade                               { price = 20; stock = 8; };
			class MiniGrenade                               { price = 20; stock = 8; };

			#ifdef DMD_USE_CUP
            class CUP_launch_RPG18                          { price = 1000; stock = 0; };
            class CUP_launch_RPG7V                          { price = 1000; stock = 0; };
            class CUP_RPG18_M                               { price = 200; stock = 0; };
            class CUP_OG7_M                                 { price = 200; stock = 0; };
			class CUP_1Rnd_HE_M203                          { price = 25; stock = 4; };
			class CUP_HandGrenade_RGD5                      { price = 20; stock = 8; };
			class CUP_HandGrenade_RGO                       { price = 20; stock = 8; };
			#endif

			#ifdef DMD_USE_RHS
            class rhs_weap_smaw                             { price = 1000; stock = 0; };
            class rhs_weap_rpg7                             { price = 1000; stock = 0; };
            class rhs_rpg7_PG7V_mag                         { price = 200; stock = 0; };
            class rhs_mag_smaw_HEAA                         { price = 200; stock = 0; };
            class rhs_mag_smaw_SR                         { price = 200; stock = 0; };
			class rhs_grenade_mki_mag                       { price = 20; stock = 8; };
			class rhs_grenade_mkii_mag                      { price = 20; stock = 8; };
			class rhs_grenade_sthgr43_heerfrag_mag          { price = 20; stock = 8; };
			class rhs_grenade_sthgr43_mag                   { price = 20; stock = 8; };
			class rhs_grenade_sthgr43_SSfrag_mag            { price = 20; stock = 8; };
			class rhs_mag_f1                                { price = 20; stock = 8; };
			class rhs_mag_M441_HE                           { price = 25; stock = 4; };
			class rhs_mag_m67                               { price = 20; stock = 8; };
			class rhs_mag_rgd5                              { price = 20; stock = 8; };
			class rhs_mag_rgn                               { price = 20; stock = 8; };
			class rhs_mag_rgo                               { price = 20; stock = 8; };
			class rhs_mag_zarya2                            { price = 20; stock = 8; };
			class rhs_VOG25                                 { price = 25; stock = 4; };
			class rhssaf_mag_br_m75                         { price = 20; stock = 8; };
			class rhssaf_mag_br_m84                         { price = 20; stock = 8; };
			#endif
		};

		class grenades_smk {
			displayName = "Smoke Grenades";
			picture = "";
			#ifdef DMD_USE_RHS
			class rhs_grenade_anm8_mag                      { price = 10; stock = 50; };
			class rhs_mag_an_m8hc                           { price = 10; stock = 50; };
			class rhs_mag_m18_green                         { price = 10; stock = 50; };
			class rhs_mag_m18_purple                        { price = 10; stock = 50; };
			class rhs_mag_m18_red                           { price = 10; stock = 50; };
			class rhs_mag_m18_yellow                        { price = 10; stock = 50; };
			class rhssaf_mag_brd_m83_blue                   { price = 10; stock = 50; };
			class rhssaf_mag_brd_m83_green                  { price = 10; stock = 50; };
			class rhssaf_mag_brd_m83_orange                 { price = 10; stock = 50; };
			class rhssaf_mag_brd_m83_red                    { price = 10; stock = 50; };
			class rhssaf_mag_brd_m83_white                  { price = 10; stock = 50; };
			class rhssaf_mag_brd_m83_yellow                 { price = 10; stock = 50; };
			#endif
			class SmokeShell                                { price = 10; stock = 50; };
			class SmokeShellBlue                            { price = 10; stock = 50; };
			class SmokeShellGreen                           { price = 10; stock = 50; };
			class SmokeShellOrange                          { price = 10; stock = 50; };
			class SmokeShellPurple                          { price = 10; stock = 50; };
			class SmokeShellRed                             { price = 10; stock = 50; };
			class SmokeShellYellow                          { price = 10; stock = 50; };
			
			class UGL_FlareWhite_F                          { price = 15; stock = 20; };
            class UGL_FlareGreen_F                          { price = 15; stock = 20; };
            class UGL_FlareRed_F                            { price = 15; stock = 20; };
            class UGL_FlareYellow_F                         { price = 15; stock = 20; };
            class UGL_FlareCIR_F                            { price = 15; stock = 20; };
            class 1Rnd_Smoke_Grenade_shell                  { price = 15; stock = 20; };
            class 1Rnd_SmokeRed_Grenade_shell               { price = 15; stock = 20; };
            class 1Rnd_SmokeGreen_Grenade_shell             { price = 15; stock = 20; };
            class 1Rnd_SmokeYellow_Grenade_shell            { price = 15; stock = 20; };
            class 1Rnd_SmokePurple_Grenade_shell            { price = 15; stock = 20; };
            class 1Rnd_SmokeBlue_Grenade_shell              { price = 15; stock = 20; };
            class 1Rnd_SmokeOrange_Grenade_shell            { price = 15; stock = 20; };
            
            class 3Rnd_UGL_FlareWhite_F                     { price = 30; stock = 20; };
            class 3Rnd_UGL_FlareGreen_F                     { price = 30; stock = 20; };
            class 3Rnd_UGL_FlareRed_F                       { price = 30; stock = 20; };
            class 3Rnd_UGL_FlareYellow_F                    { price = 30; stock = 20; };
            class 3Rnd_UGL_FlareCIR_F                       { price = 30; stock = 20; };
            class 3Rnd_Smoke_Grenade_shell                  { price = 30; stock = 20; };
            class 3Rnd_SmokeRed_Grenade_shell               { price = 30; stock = 20; };
            class 3Rnd_SmokeGreen_Grenade_shell             { price = 30; stock = 20; };
            class 3Rnd_SmokeYellow_Grenade_shell            { price = 30; stock = 20; };
            class 3Rnd_SmokePurple_Grenade_shell            { price = 30; stock = 20; };
            class 3Rnd_SmokeBlue_Grenade_shell              { price = 30; stock = 20; };
            class 3Rnd_SmokeOrange_Grenade_shell            { price = 30; stock = 20; };
		};

		class optics {
			displayName = "Optics";
			picture = "";
			// THESE _3d SIGHTS DONT HAVE A .PAA AND THROW ERRORS
			//	class rhsusf_acc_su230_3d					{ price = 250; stock = 5; };
			//	class rhsusf_acc_su230_mrds_3d				{ price = 250; stock = 5; };
			//	class rhsusf_acc_su230a_3d					{ price = 250; stock = 5; };
			//	class rhsusf_acc_su230a_mrds_3d				{ price = 250; stock = 5; };
			//	class rhsusf_acc_su230_c_3d					{ price = 250; stock = 5; };
			//	class rhsusf_acc_su230_mrds_c_3d			{ price = 250; stock = 5; };
			//	class rhsusf_acc_su230a_c_3d				{ price = 250; stock = 5; };
			//	class rhsusf_acc_su230a_mrds_c_3d			{ price = 250; stock = 5; };
			//	class rhsusf_acc_SpecterDR_3d				{ price = 250; stock = 5; };
			//	class rhsusf_acc_SpecterDR_A_3d				{ price = 250; stock = 5; };
			//	class rhsusf_acc_SpecterDR_CX_3D			{ price = 250; stock = 5; };
			//	class rhsusf_acc_SpecterDR_D_3D				{ price = 250; stock = 5; };
			//	class rhsusf_acc_SpecterDR_OD_3D			{ price = 250; stock = 5; };

			#ifdef DMD_USE_CUP
			class CUP_optic_ACOG								{ price = 250; stock = 5; };
			class CUP_optic_ACOG_Reflex_Desert					{ price = 250; stock = 5; };
			class CUP_optic_ACOG_Reflex_Wood					{ price = 250; stock = 5; };
			class CUP_optic_ACOG2								{ price = 250; stock = 5; };
			class CUP_optic_AN_PAS_13c1							{ price = 1750; stock = 0; };
			class CUP_optic_AN_PAS_13c2							{ price = 1800; stock = 0; };
			class CUP_optic_AN_PVS_10							{ price = 250; stock = 5; };
			class CUP_optic_AN_PVS_4							{ price = 250; stock = 5; };
			class CUP_optic_CompM2_Black						{ price = 250; stock = 5; };
			class CUP_optic_CompM2_Coyote						{ price = 250; stock = 5; };
			class CUP_optic_CompM2_Desert						{ price = 250; stock = 5; };
			class CUP_optic_CompM2_low							{ price = 250; stock = 5; };
			class CUP_optic_CompM2_low_coyote					{ price = 250; stock = 5; };
			class CUP_optic_CompM2_low_OD						{ price = 250; stock = 5; };
			class CUP_optic_CompM2_OD							{ price = 250; stock = 5; };
			class CUP_optic_CompM2_Woodland						{ price = 250; stock = 5; };
			class CUP_optic_CompM2_Woodland2					{ price = 250; stock = 5; };
			class CUP_optic_CompM4								{ price = 250; stock = 5; };
			class CUP_optic_CWS									{ price = 900; stock = 0; };
			class CUP_optic_ekp_8_02							{ price = 250; stock = 5; };
			class CUP_optic_ekp_8_02_01							{ price = 250; stock = 5; };
			class CUP_optic_ekp_8_02_02							{ price = 250; stock = 5; };
			class CUP_optic_ekp_8_02_03							{ price = 250; stock = 5; };
			class CUP_optic_Elcan								{ price = 250; stock = 5; };
			class CUP_optic_Elcan_Coyote						{ price = 250; stock = 5; };
			class CUP_optic_Elcan_OD							{ price = 250; stock = 5; };
			class CUP_optic_Elcan_reflex						{ price = 250; stock = 5; };
			class CUP_optic_Elcan_reflex_Coyote					{ price = 250; stock = 5; };
			class CUP_optic_Elcan_reflex_OD						{ price = 250; stock = 5; };
			class CUP_optic_ELCAN_SpecterDR						{ price = 250; stock = 5; };
			class CUP_optic_ElcanM145							{ price = 250; stock = 5; };
			class CUP_optic_Eotech533							{ price = 250; stock = 5; };
			class CUP_optic_Eotech533Grey						{ price = 250; stock = 5; };
			class CUP_optic_Eotech553_Black						{ price = 250; stock = 5; };
			class CUP_optic_Eotech553_Coyote					{ price = 250; stock = 5; };
			class CUP_optic_Eotech553_OD						{ price = 250; stock = 5; };
			class CUP_optic_GOSHAWK								{ price = 850; stock = 0; };
			class CUP_optic_GOSHAWK_RIS							{ price = 800; stock = 0; };
			class CUP_optic_HoloBlack							{ price = 250; stock = 5; };
			class CUP_optic_HoloDesert							{ price = 250; stock = 5; };
			class CUP_optic_HoloWdl								{ price = 250; stock = 5; };
			class CUP_optic_Kobra								{ price = 250; stock = 5; };
			class CUP_optic_Kobra_01							{ price = 250; stock = 5; };
			class CUP_optic_Kobra_02							{ price = 250; stock = 5; };
			class CUP_optic_Kobra_03							{ price = 250; stock = 5; };
			class CUP_optic_Leupold_VX3							{ price = 250; stock = 5; };
			class CUP_optic_LeupoldM3LR							{ price = 250; stock = 5; };
			class CUP_optic_LeupoldMk4							{ price = 250; stock = 5; };
			class CUP_optic_LeupoldMk4_10x40_LRT_Desert			{ price = 250; stock = 5; };
			class CUP_optic_LeupoldMk4_10x40_LRT_Woodland		{ price = 250; stock = 5; };
			class CUP_optic_LeupoldMk4_CQ_T						{ price = 250; stock = 5; };
			class CUP_optic_LeupoldMk4_MRT_tan					{ price = 250; stock = 5; };
			class CUP_optic_MicroT1								{ price = 250; stock = 5; };
			class CUP_optic_MicroT1_coyote						{ price = 250; stock = 5; };
			class CUP_optic_MicroT1_low							{ price = 250; stock = 5; };
			class CUP_optic_MicroT1_low_coyote					{ price = 250; stock = 5; };
			class CUP_optic_MicroT1_low_OD						{ price = 250; stock = 5; };
			class CUP_optic_MicroT1_OD							{ price = 250; stock = 5; };
			class CUP_optic_MRad								{ price = 250; stock = 5; };
			class CUP_optic_NSPU								{ price = 250; stock = 5; };
			class CUP_optic_PechenegScope						{ price = 250; stock = 5; };
			class CUP_optic_PSO_1								{ price = 250; stock = 5; };
			class CUP_optic_PSO_1_1								{ price = 250; stock = 5; };
			class CUP_optic_PSO_1_1_open						{ price = 250; stock = 5; };
			class CUP_optic_PSO_1_AK							{ price = 250; stock = 5; };
			class CUP_optic_PSO_1_AK_open						{ price = 250; stock = 5; };
			class CUP_optic_PSO_1_open							{ price = 250; stock = 5; };
			class CUP_optic_PSO_3								{ price = 250; stock = 5; };
			class CUP_optic_PSO_3_open							{ price = 250; stock = 5; };
			class CUP_optic_RCO									{ price = 250; stock = 5; };
			class CUP_optic_RCO_desert							{ price = 250; stock = 5; };
			class CUP_optic_SB_11_4x20_PM						{ price = 250; stock = 5; };
			class CUP_optic_SB_3_12x50_PMII						{ price = 250; stock = 5; };
			class CUP_optic_SUSAT								{ price = 250; stock = 5; };
			class CUP_optic_TrijiconRx01_black					{ price = 250; stock = 5; };
			class CUP_optic_TrijiconRx01_desert					{ price = 250; stock = 5; };
			class CUP_optic_ZDDot								{ price = 250; stock = 5; };
			class CUP_optic_ZeissZPoint							{ price = 250; stock = 5; };
			#endif

			class optic_aco									{ price = 250; stock = 5; };
			class optic_Aco_broken							{ price = 250; stock = 5; };
			class optic_ACO_grn								{ price = 250; stock = 5; };
			class optic_ACO_grn_smg							{ price = 250; stock = 5; };
			class optic_aco_smg								{ price = 250; stock = 5; };
			class optic_AMS									{ price = 250; stock = 5; };
			class optic_AMS_khk								{ price = 250; stock = 5; };
			class optic_AMS_snd								{ price = 250; stock = 5; };
			class optic_Arco								{ price = 250; stock = 5; };
			class optic_Arco_AK_arid_F						{ price = 250; stock = 5; };
			class optic_Arco_AK_blk_F						{ price = 250; stock = 5; };
			class optic_Arco_AK_lush_F						{ price = 250; stock = 5; };
			class optic_Arco_arid_F							{ price = 250; stock = 5; };
			class optic_Arco_blk_F							{ price = 250; stock = 5; };
			class optic_Arco_ghex_F							{ price = 250; stock = 5; };
			class optic_Arco_lush_F							{ price = 250; stock = 5; };
			class optic_DMS									{ price = 250; stock = 5; };
			class optic_DMS_ghex_F							{ price = 250; stock = 5; };
			class optic_DMS_weathered_F						{ price = 250; stock = 5; };
			class optic_DMS_weathered_Kir_F					{ price = 250; stock = 5; };
			class optic_ERCO_blk_F							{ price = 250; stock = 5; };
			class optic_ERCO_khk_F							{ price = 250; stock = 5; };
			class optic_ERCO_snd_F							{ price = 250; stock = 5; };
			class optic_hamr								{ price = 250; stock = 5; };
			class optic_Hamr_broken							{ price = 250; stock = 5; };
			class optic_Hamr_khk_F							{ price = 250; stock = 5; };
			class optic_Holosight							{ price = 250; stock = 5; };
			class optic_Holosight_arid_F					{ price = 250; stock = 5; };
			class optic_Holosight_blk_F						{ price = 250; stock = 5; };
			class optic_Holosight_khk_F						{ price = 250; stock = 5; };
			class optic_Holosight_lush_F					{ price = 250; stock = 5; };
			class optic_Holosight_smg						{ price = 250; stock = 5; };
			class optic_Holosight_smg_blk_F					{ price = 250; stock = 5; };
			class optic_Holosight_smg_khk_F					{ price = 250; stock = 5; };
			class optic_KHS_blk								{ price = 250; stock = 5; };
			class optic_KHS_hex								{ price = 250; stock = 5; };
			class optic_KHS_old								{ price = 250; stock = 5; };
			class optic_KHS_tan								{ price = 250; stock = 5; };
			class optic_LRPS								{ price = 250; stock = 5; };
			class optic_LRPS_ghex_F							{ price = 250; stock = 5; };
			class optic_LRPS_tna_F							{ price = 250; stock = 5; };
			class optic_MRCO								{ price = 250; stock = 5; };
			class optic_MRCO_broken							{ price = 250; stock = 5; };
			class optic_Nightstalker						{ price = 2500; stock = 0; };
			class optic_NVS									{ price = 250; stock = 5; };
			class optic_SOS									{ price = 250; stock = 5; };
			class optic_SOS_khk_F							{ price = 250; stock = 5; };
			class optic_tws									{ price = 1000; stock = 0; };
			class optic_tws_mg								{ price = 1200; stock = 0; };
			class optic_Yorris								{ price = 250; stock = 5; };

			#ifdef DMD_USE_RHS
			class rhs_acc_1p29								{ price = 250; stock = 5; };
			class rhs_acc_1p29_3d							{ price = 250; stock = 5; };
			class rhs_acc_1p29_asval						{ price = 250; stock = 5; };
			class rhs_acc_1p29_asval_3d						{ price = 250; stock = 5; };
			class rhs_acc_1p29_pkp							{ price = 250; stock = 5; };
			class rhs_acc_1p29_pkp_3d						{ price = 250; stock = 5; };
			class rhs_acc_1p63								{ price = 250; stock = 5; };
			class rhs_acc_1p78								{ price = 250; stock = 5; };
			class rhs_acc_1p78_3d							{ price = 250; stock = 5; };
			class rhs_acc_1p87								{ price = 250; stock = 5; };
			class rhs_acc_1pn34								{ price = 250; stock = 5; };
			class rhs_acc_1pn93_1							{ price = 250; stock = 5; };
			class rhs_acc_1pn93_2							{ price = 250; stock = 5; };
			class rhs_acc_dh520x56							{ price = 250; stock = 5; };
			class rhs_acc_ekp1								{ price = 250; stock = 5; };
			class rhs_acc_ekp1b								{ price = 250; stock = 5; };
			class rhs_acc_ekp1c								{ price = 250; stock = 5; };
			class rhs_acc_ekp1d								{ price = 250; stock = 5; };
			class rhs_acc_ekp8_02							{ price = 250; stock = 5; };
			class rhs_acc_ekp8_02b							{ price = 250; stock = 5; };
			class rhs_acc_ekp8_02c							{ price = 250; stock = 5; };
			class rhs_acc_ekp8_02d							{ price = 250; stock = 5; };
			class rhs_acc_ekp8_18							{ price = 250; stock = 5; };
			class rhs_acc_ekp8_18b							{ price = 250; stock = 5; };
			class rhs_acc_ekp8_18c							{ price = 250; stock = 5; };
			class rhs_acc_ekp8_18d							{ price = 250; stock = 5; };
			class rhs_acc_mtz								{ price = 250; stock = 5; };
			class rhs_acc_nita								{ price = 250; stock = 5; };
			class rhs_acc_nita_3d							{ price = 250; stock = 5; };
			class rhs_acc_npz								{ price = 250; stock = 5; };
			class rhs_acc_pgo7v								{ price = 250; stock = 5; };
			class rhs_acc_pgo7v_ak							{ price = 250; stock = 5; };
			class rhs_acc_pgo7v_asval						{ price = 250; stock = 5; };
			class rhs_acc_pgo7v_pkp							{ price = 250; stock = 5; };
			class rhs_acc_pgo7v2							{ price = 250; stock = 5; };
			class rhs_acc_pgo7v2_ak							{ price = 250; stock = 5; };
			class rhs_acc_pgo7v2_asval						{ price = 250; stock = 5; };
			class rhs_acc_pgo7v2_pkp						{ price = 250; stock = 5; };
			class rhs_acc_pgo7v3							{ price = 250; stock = 5; };
			class rhs_acc_pgo7v3_ak							{ price = 250; stock = 5; };
			class rhs_acc_pgo7v3_asval						{ price = 250; stock = 5; };
			class rhs_acc_pgo7v3_pkp						{ price = 250; stock = 5; };
			class rhs_acc_pkas								{ price = 250; stock = 5; };
			class rhs_acc_pkas_asval						{ price = 250; stock = 5; };
			class rhs_acc_pkas_pkp							{ price = 250; stock = 5; };
			class rhs_acc_pso1m2							{ price = 250; stock = 5; };
			class rhs_acc_pso1m2_ads						{ price = 250; stock = 5; };
			class rhs_acc_pso1m2_ads_night					{ price = 250; stock = 5; };
			class rhs_acc_pso1m2_ak							{ price = 250; stock = 5; };
			class rhs_acc_pso1m2_ak_ironsight				{ price = 250; stock = 5; };
			class rhs_acc_pso1m2_asval						{ price = 250; stock = 5; };
			class rhs_acc_pso1m2_asval_ironsight			{ price = 250; stock = 5; };
			class rhs_acc_pso1m2_ironsight					{ price = 250; stock = 5; };
			class rhs_acc_pso1m2_pkp						{ price = 250; stock = 5; };
			class rhs_acc_pso1m2_pkp_ironsight				{ price = 250; stock = 5; };
			class rhs_acc_pso1m21							{ price = 250; stock = 5; };
			class rhs_acc_pso1m21_ads						{ price = 250; stock = 5; };
			class rhs_acc_pso1m21_ads_night					{ price = 250; stock = 5; };
			class rhs_acc_pso1m21_ak						{ price = 250; stock = 5; };
			class rhs_acc_pso1m21_ak_ironsight				{ price = 250; stock = 5; };
			class rhs_acc_pso1m21_ironsight					{ price = 250; stock = 5; };
			class rhs_acc_pso1m21_pkp						{ price = 250; stock = 5; };
			class rhs_acc_pso1m21_pkp_ironsight				{ price = 250; stock = 5; };
			class rhs_acc_pso1m21_svd						{ price = 250; stock = 5; };
			class rhs_acc_pso1m21_svd_ironsight				{ price = 250; stock = 5; };
			class rhs_acc_rakursPM							{ price = 250; stock = 5; };
			class rhsgref_acc_l1a1_anpvs2					{ price = 250; stock = 5; };
			class rhsgref_acc_l1a1_l2a2						{ price = 250; stock = 5; };
			class rhsgref_acc_l1a1_l2a2_3d					{ price = 250; stock = 5; };
			class rhsgref_acc_RX01_camo						{ price = 250; stock = 5; };
			class rhsgref_acc_RX01_NoFilter_camo			{ price = 250; stock = 5; };
			class rhsgref_mg42_acc_AAsight					{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG							{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG_3d						{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG_anpvs27					{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG_d							{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG_d_3d						{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG_d_pip						{ price = 250; stock = 5; };
			//	class rhsusf_acc_ACOG_MDO						{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG_PIP						{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG_RMR						{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG_RMR_3d					{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG_RMR_PIP					{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG_sa						{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG_sa_3d						{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG_sa_pip					{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG_USMC						{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG_USMC_3d					{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG_USMC_pip					{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG_wd						{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG_wd_3d						{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG_wd_pip					{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG2							{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG2_3d						{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG2_pip						{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG2_USMC						{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG2_USMC_3d					{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG2_USMC_pip					{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG3							{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG3_3d						{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG3_pip						{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG3_USMC						{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG3_USMC_3d					{ price = 250; stock = 5; };
			class rhsusf_acc_ACOG3_USMC_pip					{ price = 250; stock = 5; };
			class rhsusf_acc_anpas13gv1						{ price = 1000; stock = 0; };
			class rhsusf_acc_anpvs27						{ price = 250; stock = 5; };
			class rhsusf_acc_compm4							{ price = 250; stock = 5; };
			class rhsusf_acc_ELCAN							{ price = 250; stock = 5; };
			class rhsusf_acc_ELCAN_3d						{ price = 250; stock = 5; };
			class rhsusf_acc_ELCAN_ard						{ price = 250; stock = 5; };
			class rhsusf_acc_ELCAN_ard_3d					{ price = 250; stock = 5; };
			class rhsusf_acc_ELCAN_ard_PIP					{ price = 250; stock = 5; };
			class rhsusf_acc_ELCAN_PIP						{ price = 250; stock = 5; };
			class rhsusf_acc_EOTECH							{ price = 250; stock = 5; };
			class rhsusf_acc_eotech_552						{ price = 250; stock = 5; };
			class rhsusf_acc_eotech_552_d					{ price = 250; stock = 5; };
			class rhsusf_acc_eotech_552_wd					{ price = 250; stock = 5; };
			class rhsusf_acc_eotech_xps3					{ price = 250; stock = 5; };
			class rhsusf_acc_g33_t1							{ price = 250; stock = 5; };
			class rhsusf_acc_g33_t1_flip					{ price = 250; stock = 5; };
			class rhsusf_acc_g33_xps3						{ price = 250; stock = 5; };
			class rhsusf_acc_g33_xps3_flip					{ price = 250; stock = 5; };
			class rhsusf_acc_g33_xps3_tan					{ price = 250; stock = 5; };
			class rhsusf_acc_g33_xps3_tan_flip				{ price = 250; stock = 5; };
			class rhsusf_acc_LEUPOLDMK4						{ price = 250; stock = 5; };
			class rhsusf_acc_LEUPOLDMK4_2					{ price = 250; stock = 5; };
			class rhsusf_acc_LEUPOLDMK4_2_d					{ price = 250; stock = 5; };
			class rhsusf_acc_LEUPOLDMK4_2_MRDS				{ price = 250; stock = 5; };
			class rhsusf_acc_LEUPOLDMK4_d					{ price = 250; stock = 5; };
			class rhsusf_acc_LEUPOLDMK4_wd					{ price = 250; stock = 5; };
			class rhsusf_acc_M2A1							{ price = 250; stock = 5; };
			class rhsusf_acc_M8541							{ price = 250; stock = 5; };
			class rhsusf_acc_M8541_low						{ price = 250; stock = 5; };
			class rhsusf_acc_M8541_low_d					{ price = 250; stock = 5; };
			class rhsusf_acc_M8541_low_wd					{ price = 250; stock = 5; };
			class rhsusf_acc_M8541_mrds						{ price = 250; stock = 5; };
			class rhsusf_acc_mrds							{ price = 250; stock = 5; };
			class rhsusf_acc_mrds_c							{ price = 250; stock = 5; };
			class rhsusf_acc_mrds_fwd						{ price = 250; stock = 5; };
			class rhsusf_acc_mrds_fwd_ak					{ price = 250; stock = 5; };
			class rhsusf_acc_mrds_fwd_c						{ price = 250; stock = 5; };
			class rhsusf_acc_mrds_fwd_c_ak					{ price = 250; stock = 5; };
			class rhsusf_acc_premier						{ price = 250; stock = 5; };
			class rhsusf_acc_premier_anpvs27				{ price = 250; stock = 5; };
			class rhsusf_acc_premier_low					{ price = 250; stock = 5; };
			class rhsusf_acc_premier_mrds					{ price = 250; stock = 5; };
			class rhsusf_acc_RM05							{ price = 250; stock = 5; };
			class rhsusf_acc_RM05_fwd						{ price = 250; stock = 5; };
			class rhsusf_acc_RM05_fwd_ak					{ price = 250; stock = 5; };
			class rhsusf_acc_RX01							{ price = 250; stock = 5; };
			class rhsusf_acc_RX01_NoFilter					{ price = 250; stock = 5; };
			class rhsusf_acc_RX01_NoFilter_tan				{ price = 250; stock = 5; };
			class rhsusf_acc_RX01_tan						{ price = 250; stock = 5; };
			class rhsusf_acc_SpecterDR						{ price = 250; stock = 5; };
			class rhsusf_acc_SpecterDR_A					{ price = 250; stock = 5; };
			class rhsusf_acc_SpecterDR_CX					{ price = 250; stock = 5; };
			class rhsusf_acc_SpecterDR_D					{ price = 250; stock = 5; };
			class rhsusf_acc_SpecterDR_OD					{ price = 250; stock = 5; };
			class rhsusf_acc_SpecterDR_pvs27				{ price = 250; stock = 5; };
			class rhsusf_acc_su230							{ price = 250; stock = 5; };
			class rhsusf_acc_su230_c						{ price = 250; stock = 5; };
			class rhsusf_acc_su230_mrds						{ price = 250; stock = 5; };
			class rhsusf_acc_su230_mrds_c					{ price = 250; stock = 5; };
			class rhsusf_acc_su230a							{ price = 250; stock = 5; };
			class rhsusf_acc_su230a_c						{ price = 250; stock = 5; };
			class rhsusf_acc_su230a_mrds					{ price = 250; stock = 5; };
			class rhsusf_acc_su230a_mrds_c					{ price = 250; stock = 5; };
			class rhsusf_acc_T1_high						{ price = 250; stock = 5; };
			class rhsusf_acc_T1_low							{ price = 250; stock = 5; };
			class rhsusf_acc_T1_low_fwd						{ price = 250; stock = 5; };
			class rhsusf_acc_T1_low_fwd_ak					{ price = 250; stock = 5; };
			#endif
		};

		class pointers {
			displayName = "Lasers and Flashlights";
			picture = "";
			// pistol stuff
			class acc_flashlight_pistol						{ price = 10; stock = 5; };

			#ifdef DMD_USE_CUP
			class CUP_acc_Glock17_Flashlight				{ price = 10; stock = 5; };
			class CUP_acc_CZ_M3X							{ price = 10; stock = 5; };
			class CUP_acc_CZ_M3X_L							{ price = 10; stock = 5; };
			class CUP_acc_MLPLS_Laser						{ price = 10; stock = 5; };
			#endif

			// primary weapons
			class acc_flashlight							{ price = 10; stock = 5; };
			class acc_flashlight_broken						{ price = 4; stock = 0; };
			class acc_pointer_IR							{ price = 10; stock = 5; };
			class acc_pointer_IR_broken						{ price = 4; stock = 0; };
			
			#ifdef DMD_USE_CUP
			class CUP_acc_ANPEQ_15							{ price = 10; stock = 5; };
			class CUP_acc_ANPEQ_15_Black					{ price = 10; stock = 5; };
			class CUP_acc_ANPEQ_15_Black_Top				{ price = 10; stock = 5; };
			class CUP_acc_ANPEQ_15_Flashlight_Black_F		{ price = 10; stock = 5; };
			class CUP_acc_ANPEQ_15_Flashlight_Black_L		{ price = 10; stock = 5; };
			class CUP_acc_ANPEQ_15_Flashlight_OD_F			{ price = 10; stock = 5; };
			class CUP_acc_ANPEQ_15_Flashlight_OD_L			{ price = 10; stock = 5; };
			class CUP_acc_ANPEQ_15_Flashlight_Tan_F			{ price = 10; stock = 5; };
			class CUP_acc_ANPEQ_15_Flashlight_Tan_L			{ price = 10; stock = 5; };
			class CUP_acc_ANPEQ_15_OD						{ price = 10; stock = 5; };
			class CUP_acc_ANPEQ_15_OD_Top					{ price = 10; stock = 5; };
			class CUP_acc_ANPEQ_15_Tan_Top					{ price = 10; stock = 5; };
			class CUP_acc_ANPEQ_15_Top_Flashlight_Black_F	{ price = 10; stock = 5; };
			class CUP_acc_ANPEQ_15_Top_Flashlight_Black_L	{ price = 10; stock = 5; };
			class CUP_acc_ANPEQ_15_Top_Flashlight_OD_F		{ price = 10; stock = 5; };
			class CUP_acc_ANPEQ_15_Top_Flashlight_OD_L		{ price = 10; stock = 5; };
			class CUP_acc_ANPEQ_15_Top_Flashlight_Tan_F		{ price = 10; stock = 5; };
			class CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L		{ price = 10; stock = 5; };
			class CUP_acc_ANPEQ_2							{ price = 10; stock = 5; };
			class CUP_acc_ANPEQ_2_camo						{ price = 10; stock = 5; };
			class CUP_acc_ANPEQ_2_desert					{ price = 10; stock = 5; };
			class CUP_acc_ANPEQ_2_grey						{ price = 10; stock = 5; };
			class CUP_acc_Flashlight						{ price = 10; stock = 5; };
			class CUP_acc_Flashlight_desert					{ price = 10; stock = 5; };
			class CUP_acc_Flashlight_wdl					{ price = 10; stock = 5; };
			class CUP_acc_LLM								{ price = 10; stock = 5; };
			class CUP_acc_LLM_Flashlight					{ price = 10; stock = 5; };
			class CUP_acc_XM8_light_module					{ price = 10; stock = 5; };
			#endif

			#ifdef DMD_USE_RHS
			class rhs_acc_2dpZenit						{ price = 10; stock = 5; };
			class rhs_acc_2dpZenit_ris					{ price = 10; stock = 5; };
			class rhs_acc_perst1ik						{ price = 10; stock = 5; };
			class rhs_acc_perst1ik_ris					{ price = 10; stock = 5; };
			class rhs_acc_perst3						{ price = 10; stock = 5; };
			class rhs_acc_perst3_2dp					{ price = 10; stock = 5; };
			class rhs_acc_perst3_2dp_h					{ price = 10; stock = 5; };
			class rhs_acc_perst3_2dp_light				{ price = 10; stock = 5; };
			class rhs_acc_perst3_2dp_light_h			{ price = 10; stock = 5; };
			class rhs_acc_perst3_top					{ price = 10; stock = 5; };
			class rhs_acc_perst3_top_h					{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15					{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15_bk					{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15_bk_h				{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15_bk_light			{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15_bk_light_h			{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15_bk_light_sc		{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15_bk_sc				{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15_bk_top				{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15_bk_top_h			{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15_bk_top_sc			{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15_h					{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15_light				{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15_light_h			{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15_light_sc			{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15_sc					{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15_top				{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15_top_h				{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15_top_sc				{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15_wmx				{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15_wmx_h				{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15_wmx_light			{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15_wmx_light_h		{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15_wmx_light_sc		{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15_wmx_sc				{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15A					{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15side				{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq15side_bk				{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq16a					{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq16a_light				{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq16a_light_top			{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq16a_light_top_h		{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq16a_light_top_sc		{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq16a_top				{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq16a_top_h				{ price = 10; stock = 5; };
			class rhsusf_acc_anpeq16a_top_sc			{ price = 10; stock = 5; };
			class rhsusf_acc_M952V						{ price = 10; stock = 5; };
			class rhsusf_acc_wmx						{ price = 10; stock = 5; };
			class rhsusf_acc_wmx_bk						{ price = 10; stock = 5; };
			#endif
		};

		class bipods {
			displayName = "Bipods";
			picture = "";

			class bipod_01_F_blk				{ price = 75; stock = 4; };
			class bipod_01_F_khk				{ price = 75; stock = 4; };
			class bipod_01_F_mtp				{ price = 75; stock = 4; };
			class bipod_01_F_snd				{ price = 75; stock = 4; };
			class bipod_02_F_arid				{ price = 75; stock = 4; };
			class bipod_02_F_blk				{ price = 75; stock = 4; };
			class bipod_02_F_hex				{ price = 75; stock = 4; };
			class bipod_02_F_lush				{ price = 75; stock = 4; };
			class bipod_02_F_tan				{ price = 75; stock = 4; };
			class bipod_03_F_blk				{ price = 75; stock = 4; };
			class bipod_03_F_oli				{ price = 75; stock = 4; };

			#ifdef DMD_USE_CUP
			class CUP_bipod_Harris_1A2_L		{ price = 75; stock = 4; };
			class CUP_bipod_VLTOR_Modpod		{ price = 75; stock = 4; };
			#endif

			#ifdef DMD_USE_RHS
			class rhs_acc_grip_ffg2				{ price = 75; stock = 4; };
			class rhs_acc_grip_rk2				{ price = 75; stock = 4; };
			class rhs_acc_grip_rk6				{ price = 75; stock = 4; };
			class rhs_acc_harris_swivel			{ price = 75; stock = 4; };
			class rhsusf_acc_grip1				{ price = 75; stock = 4; };
			class rhsusf_acc_grip2				{ price = 75; stock = 4; };
			class rhsusf_acc_grip2_tan			{ price = 75; stock = 4; };
			class rhsusf_acc_grip2_wd			{ price = 75; stock = 4; };
			class rhsusf_acc_grip3				{ price = 75; stock = 4; };
			class rhsusf_acc_grip3_tan			{ price = 75; stock = 4; };
			class rhsusf_acc_grip4				{ price = 75; stock = 4; };
			class rhsusf_acc_grip4_bipod		{ price = 75; stock = 4; };
			class rhsusf_acc_harris_bipod		{ price = 75; stock = 4; };
			class rhsusf_acc_harris_swivel		{ price = 75; stock = 4; };
			class rhsusf_acc_kac_grip			{ price = 75; stock = 4; };
			class rhsusf_acc_kac_grip_saw_bipod	{ price = 75; stock = 4; };
			class rhsusf_acc_rvg_blk			{ price = 75; stock = 4; };
			class rhsusf_acc_rvg_de				{ price = 75; stock = 4; };
			class rhsusf_acc_saw_bipod			{ price = 75; stock = 4; };
			class rhsusf_acc_saw_lw_bipod		{ price = 75; stock = 4; };
			class rhsusf_acc_tacsac_blk			{ price = 75; stock = 4; };
			class rhsusf_acc_tacsac_blue		{ price = 75; stock = 4; };
			class rhsusf_acc_tacsac_tan			{ price = 75; stock = 4; };
			class rhsusf_acc_tdstubby_blk		{ price = 75; stock = 4; };
			class rhsusf_acc_tdstubby_tan		{ price = 75; stock = 4; };
			#endif
		};

		class muzzles {
			displayName = "Muzzles and Suppressors";
			picture = "";
			// pistol silencers
			#ifdef DMD_USE_CUP
			class CUP_muzzle_PB6P9 							{ price = 70; stock = 8; };
			class CUP_muzzle_snds_M9 						{ price = 70; stock = 8; };
			class CUP_muzzle_snds_MicroUzi					{ price = 70; stock = 8; };
			#endif

			#ifdef DMD_USE_RHS
			class rhsusf_acc_omega9k 						{ price = 70; stock = 8; };
			#endif

			// primary silencers
			#ifdef DMD_USE_CUP
			class CUP_acc_bfa								{ price = 125; stock = 5; };
			class CUP_acc_sffh								{ price = 125; stock = 5; };
			class CUP_muzzle_Bizon							{ price = 125; stock = 5; };
			class CUP_muzzle_mfsup_Flashhider_545x39_Black	{ price = 125; stock = 5; };
			class CUP_muzzle_mfsup_Flashhider_545x39_OD		{ price = 125; stock = 5; };
			class CUP_muzzle_mfsup_Flashhider_545x39_Tan	{ price = 125; stock = 5; };
			class CUP_muzzle_mfsup_Flashhider_556x45_Black	{ price = 125; stock = 5; };
			class CUP_muzzle_mfsup_Flashhider_556x45_OD		{ price = 125; stock = 5; };
			class CUP_muzzle_mfsup_Flashhider_556x45_Tan	{ price = 125; stock = 5; };
			class CUP_muzzle_mfsup_Flashhider_762x39_Black	{ price = 125; stock = 5; };
			class CUP_muzzle_mfsup_Flashhider_762x39_OD		{ price = 125; stock = 5; };
			class CUP_muzzle_mfsup_Flashhider_762x39_Tan	{ price = 125; stock = 5; };
			class CUP_muzzle_mfsup_Flashhider_762x51_Black	{ price = 125; stock = 5; };
			class CUP_muzzle_mfsup_Flashhider_762x51_OD		{ price = 125; stock = 5; };
			class CUP_muzzle_mfsup_Flashhider_762x51_Tan	{ price = 125; stock = 5; };
			class CUP_muzzle_mfsup_SCAR_H					{ price = 125; stock = 5; };
			class CUP_muzzle_mfsup_SCAR_L					{ price = 125; stock = 5; };
			class CUP_muzzle_PBS4							{ price = 125; stock = 5; };
			class CUP_muzzle_snds_AWM						{ price = 125; stock = 5; };
			class CUP_muzzle_snds_G36_black					{ price = 125; stock = 5; };
			class CUP_muzzle_snds_G36_desert				{ price = 125; stock = 5; };
			class CUP_muzzle_snds_G36_wood					{ price = 125; stock = 5; };
			class CUP_muzzle_snds_KZRZP_AK545				{ price = 125; stock = 5; };
			class CUP_muzzle_snds_KZRZP_AK762				{ price = 125; stock = 5; };
			class CUP_muzzle_snds_L85						{ price = 125; stock = 5; };
			class CUP_muzzle_snds_M110						{ price = 125; stock = 5; };
			class CUP_muzzle_snds_M16						{ price = 125; stock = 5; };
			class CUP_muzzle_snds_M16_camo					{ price = 125; stock = 5; };
			class CUP_muzzle_snds_M16_desert				{ price = 125; stock = 5; };
			class CUP_muzzle_snds_SCAR_H					{ price = 125; stock = 5; };
			class CUP_muzzle_snds_SCAR_L					{ price = 125; stock = 5; };
			class CUP_muzzle_snds_XM8						{ price = 125; stock = 5; };
			class CUP_muzzle_TGPA							{ price = 125; stock = 5; };
			#endif

			class muzzle_snds_338_black				{ price = 125; stock = 5; };
			class muzzle_snds_338_green				{ price = 125; stock = 5; };
			class muzzle_snds_338_sand				{ price = 125; stock = 5; };
			class muzzle_snds_570					{ price = 125; stock = 5; };
			class muzzle_snds_65_TI_blk_F			{ price = 125; stock = 5; };
			class muzzle_snds_65_TI_ghex_F			{ price = 125; stock = 5; };
			class muzzle_snds_65_TI_hex_F			{ price = 125; stock = 5; };
			class muzzle_snds_93mmg					{ price = 125; stock = 5; };
			class muzzle_snds_93mmg_tan				{ price = 125; stock = 5; };
			class muzzle_snds_B						{ price = 125; stock = 5; };
			class muzzle_snds_B_arid_F				{ price = 125; stock = 5; };
			class muzzle_snds_B_khk_F				{ price = 125; stock = 5; };
			class muzzle_snds_B_lush_F				{ price = 125; stock = 5; };
			class muzzle_snds_B_snd_F				{ price = 125; stock = 5; };
			class muzzle_snds_h						{ price = 125; stock = 5; };
			class muzzle_snds_h_khk_F				{ price = 125; stock = 5; };
			class muzzle_snds_H_MG					{ price = 125; stock = 5; };
			class muzzle_snds_H_MG_blk_F			{ price = 125; stock = 5; };
			class muzzle_snds_H_MG_khk_F			{ price = 125; stock = 5; };
			class muzzle_snds_h_snd_F				{ price = 125; stock = 5; };
			class muzzle_snds_H_SW					{ price = 125; stock = 5; };
			class muzzle_snds_l						{ price = 125; stock = 5; };
			class muzzle_snds_M						{ price = 125; stock = 5; };
			class muzzle_snds_m_khk_F				{ price = 125; stock = 5; };
			class muzzle_snds_m_snd_F				{ price = 125; stock = 5; };

			#ifdef DMD_USE_RHS
			class rhs_acc_ak5						{ price = 125; stock = 5; };
			class rhs_acc_dtk						{ price = 125; stock = 5; };
			class rhs_acc_dtk1						{ price = 125; stock = 5; };
			class rhs_acc_dtk1983					{ price = 125; stock = 5; };
			class rhs_acc_dtk1l						{ price = 125; stock = 5; };
			class rhs_acc_dtk2						{ price = 125; stock = 5; };
			class rhs_acc_dtk3						{ price = 125; stock = 5; };
			class rhs_acc_dtk4long					{ price = 125; stock = 5; };
			class rhs_acc_dtk4screws				{ price = 125; stock = 5; };
			class rhs_acc_dtk4short					{ price = 125; stock = 5; };
			class rhs_acc_dtkakm					{ price = 125; stock = 5; };
			class rhs_acc_pbs1						{ price = 125; stock = 5; };
			class rhs_acc_pbs4						{ price = 125; stock = 5; };
			class rhs_acc_pgs64						{ price = 125; stock = 5; };
			class rhs_acc_pgs64_74u					{ price = 125; stock = 5; };
			class rhs_acc_pgs64_74un				{ price = 125; stock = 5; };
			class rhs_acc_tgpa						{ price = 125; stock = 5; };
			class rhs_acc_tgpv						{ price = 125; stock = 5; };
			class rhs_acc_tgpv2						{ price = 125; stock = 5; };
			class rhs_acc_uuk						{ price = 125; stock = 5; };
			class rhsgref_acc_falMuzzle_l1a1		{ price = 125; stock = 5; };
			class rhsgref_sdn6_suppressor			{ price = 125; stock = 5; };
			class rhsusf_acc_aac_762sd_silencer		{ price = 125; stock = 5; };
			class rhsusf_acc_aac_762sdn6_silencer	{ price = 125; stock = 5; };
			class rhsusf_acc_aac_scarh_silencer		{ price = 125; stock = 5; };
			class rhsusf_acc_ARDEC_M240				{ price = 125; stock = 5; };
			class rhsusf_acc_M2010S					{ price = 125; stock = 5; };
			class rhsusf_acc_M2010S_d				{ price = 125; stock = 5; };
			class rhsusf_acc_M2010S_sa				{ price = 125; stock = 5; };
			class rhsusf_acc_M2010S_wd				{ price = 125; stock = 5; };
			class rhsusf_acc_m24_muzzlehider_black	{ price = 125; stock = 5; };
			class rhsusf_acc_m24_muzzlehider_d		{ price = 125; stock = 5; };
			class rhsusf_acc_m24_muzzlehider_wd		{ price = 125; stock = 5; };
			class rhsusf_acc_m24_silencer_black		{ price = 125; stock = 5; };
			class rhsusf_acc_m24_silencer_d			{ price = 125; stock = 5; };
			class rhsusf_acc_m24_silencer_wd		{ price = 125; stock = 5; };
			class rhsusf_acc_nt4_black				{ price = 125; stock = 5; };
			class rhsusf_acc_nt4_tan				{ price = 125; stock = 5; };
			class rhsusf_acc_rotex_mp7				{ price = 125; stock = 5; };
			class rhsusf_acc_rotex_mp7_aor1			{ price = 125; stock = 5; };
			class rhsusf_acc_rotex_mp7_desert		{ price = 125; stock = 5; };
			class rhsusf_acc_rotex_mp7_winter		{ price = 125; stock = 5; };
			class rhsusf_acc_rotex5_grey			{ price = 125; stock = 5; };
			class rhsusf_acc_rotex5_tan				{ price = 125; stock = 5; };
			class rhsusf_acc_SF3P556				{ price = 125; stock = 5; };
			class rhsusf_acc_SFMB556				{ price = 125; stock = 5; };
			#endif
		};
		
		class shotguns {
			displayName = "Shotguns";
		    picture = "";
			#ifdef DMD_USE_CUP
			class CUP_sgun_AA12 					{ price = 670; stock = 5; };
			class CUP_sgun_M1014 					{ price = 470; stock = 5; };
			class CUP_sgun_Saiga12K 				{ price = 470; stock = 5; };
			#endif

			class sgun_HunterShotgun_01_sawedoff_F	{ price = 470; stock = 5; };
			
			// RHS SHOTGUNS CURRENTLY BROKEN WHEN RELOADING
			//  class rhs_weap_Izh18				{ price = 170; stock = 5; };
			//  class rhs_weap_M590_8RD				{ price = 570; stock = 5; };
			//  class rhs_weap_M590_5RD				{ price = 370; stock = 5; };
		};

		class pdw {
			displayName = "PDWs and SMGs";
		    picture = "";

			#ifdef DMD_USE_CUP
			class CUP_smg_MP5A5_flashlight				{ price = 290; stock = 4; };
			class CUP_smg_MP5SD6						{ price = 290; stock = 4; };
			class CUP_smg_vityaz_vfg_front_rail			{ price = 290; stock = 4; };
			class CUP_smg_bizon							{ price = 290; stock = 4; };
			class CUP_smg_EVO							{ price = 290; stock = 4; };
			class CUP_smg_saiga9						{ price = 290; stock = 4; };
			#endif

			#ifdef DMD_USE_RHS
			class rhs_weap_m3a1							{ price = 290; stock = 4; };
			class rhs_weap_m3a1_specops					{ price = 290; stock = 4; };
			class rhs_weap_scorpion						{ price = 290; stock = 4; };
			class rhsusf_weap_MP7A2_desert				{ price = 290; stock = 4; };
			class rhsusf_weap_MP7A2_winter				{ price = 290; stock = 4; };		
			#endif

			class SMG_01_F								{ price = 290; stock = 4; };
			class SMG_05_F								{ price = 290; stock = 4; };
			class hgun_PDW2000_F						{ price = 290; stock = 4; };
			class SMG_02_F								{ price = 290; stock = 4; };
			class SMG_03_camo							{ price = 290; stock = 4; };
			class SMG_03_TR_black						{ price = 290; stock = 4; };
			class SMG_03_TR_khaki						{ price = 290; stock = 4; };
			class SMG_03C_black							{ price = 290; stock = 4; };
			class SMG_03C_camo							{ price = 290; stock = 4; };
			class SMG_03C_hex							{ price = 290; stock = 4; };
		};

		class rifles {
			displayName = "Assault Rifles";
			picture = "";

			class arifle_Katiba_C_F                     { price = 350; stock = 6; };
			class arifle_Katiba_F                       { price = 350; stock = 6; };
			class arifle_Mk20C_plain_F                  { price = 350; stock = 6; };
			class arifle_MX_Black_F                     { price = 350; stock = 6; };
			class arifle_MX_SW_F                        { price = 350; stock = 6; };
			class arifle_TRG21_F                        { price = 350; stock = 6; };
			class arifle_MXM_Black_F			        { price = 500; stock = 5; };
			class arifle_MXM_F 					        { price = 500; stock = 5; };
			class arifle_MX_GL_Black_F					{ price = 500; stock = 5; };
			class arifle_AK12_GL_F						{ price = 500; stock = 5; };
			class arifle_AKM_F 					        { price = 500; stock = 5; };
			class arifle_CTARS_blk_F					{ price = 500; stock = 5; };
			class arifle_CTARS_ghex_F					{ price = 500; stock = 5; };
			class arifle_Mk20C_F 					    { price = 500; stock = 5; };
			class arifle_SPAR_03_blk_F					{ price = 500; stock = 5; };
			class arifle_TRG21_GL_F						{ price = 500; stock = 5; };

			#ifdef DMD_USE_CUP
			class CUP_arifle_AK107_GL_railed			{ price = 500; stock = 5; };
			class CUP_arifle_AK109						{ price = 350; stock = 5; };
			class CUP_arifle_G36K						{ price = 350; stock = 5; };
			class CUP_arifle_L85A2_NG					{ price = 350; stock = 5; };
			class CUP_arifle_RPK74						{ price = 350; stock = 5; };
			class CUP_arifle_RPK74_top_rail				{ price = 350; stock = 5; };
			class CUP_arifle_AK101                      { price = 350; stock = 6; };
			class CUP_arifle_AK102                      { price = 350; stock = 6; };
			class CUP_arifle_AK107                      { price = 350; stock = 6; };
			class CUP_arifle_AK108                      { price = 350; stock = 6; };
			class CUP_arifle_AK109_railed               { price = 350; stock = 6; };
			class CUP_arifle_AK47_Early                 { price = 350; stock = 6; };
			class CUP_arifle_AKS_Gold                   { price = 900; stock = 6; };
			class CUP_arifle_Colt727_M203               { price = 350; stock = 6; };
			class CUP_arifle_CZ805_A1                   { price = 350; stock = 6; };
			class CUP_arifle_CZ805_B                    { price = 350; stock = 6; };
			class CUP_arifle_FNFAL                      { price = 350; stock = 6; };
			class CUP_arifle_FNFAL_railed               { price = 350; stock = 6; };
			class CUP_arifle_FNFAL5061                  { price = 350; stock = 6; };
			class CUP_arifle_HK417_12_Wood              { price = 350; stock = 6; };
			class CUP_arifle_HK417_20                   { price = 350; stock = 2; };
			class CUP_arifle_L85A2_G                    { price = 350; stock = 6; };
			class CUP_arifle_L85A2_GL                   { price = 350; stock = 6; };
			class CUP_arifle_L86A2                      { price = 350; stock = 6; };
			class CUP_arifle_M16A1                      { price = 350; stock = 6; };
			class CUP_arifle_M16A2                      { price = 350; stock = 6; };
			class CUP_arifle_M4A1_BUIS_camo_GL          { price = 350; stock = 6; };
			class CUP_arifle_Mk16_CQC_FG                { price = 350; stock = 6; };
			class CUP_arifle_Mk16_STD_EGLM_woodland     { price = 450; stock = 6; };
			class CUP_arifle_Mk16_STD_SFG               { price = 350; stock = 6; };
			class CUP_arifle_Mk20                       { price = 350; stock = 6; };
			class CUP_arifle_SBR_black                  { price = 350; stock = 6; };
			class CUP_arifle_XM8_Carbine                { price = 350; stock = 6; };
			class CUP_arifle_XM8_Compact                { price = 350; stock = 6; };
			#endif

			#ifdef DMD_USE_RHS
			class rhs_weap_ak103_2_npz					{ price = 350; stock = 6; };
			class rhs_weap_ak103_zenitco01_b33			{ price = 350; stock = 6; };
			class rhs_weap_ak104_npz					{ price = 350; stock = 6; };
			class rhs_weap_ak105						{ price = 350; stock = 6; };
			class rhs_weap_ak105_zenitco01_b33			{ price = 350; stock = 6; };
			class rhs_weap_ak74							{ price = 350; stock = 6; };
			class rhs_weap_ak74_2						{ price = 350; stock = 6; };
			class rhs_weap_ak74_3						{ price = 350; stock = 6; };
			class rhs_weap_ak74m						{ price = 350; stock = 6; };
			class rhs_weap_ak74m_desert_npz				{ price = 350; stock = 6; };
			class rhs_weap_ak74mr						{ price = 350; stock = 6; };
			class rhs_weap_ak74n_npz					{ price = 350; stock = 6; };
			class rhs_weap_akm							{ price = 350; stock = 6; };
			class rhs_weap_akm_gp25						{ price = 350; stock = 6; };
			class rhs_weap_akmn_gp25					{ price = 350; stock = 6; };
			class rhs_weap_akms							{ price = 350; stock = 6; };
			class rhs_weap_aks74_2						{ price = 350; stock = 6; };
			class rhs_weap_aks74u						{ price = 350; stock = 6; };
			class rhs_weap_g36c							{ price = 350; stock = 6; };
			class rhs_weap_g36kv						{ price = 350; stock = 6; };
			class rhs_weap_g36kv_ag36					{ price = 350; stock = 6; };
			class rhs_weap_hk416d10						{ price = 350; stock = 6; };
			class rhs_weap_hk416d10_LMT_wd				{ price = 350; stock = 6; };
			class rhs_weap_hk416d10_m320				{ price = 350; stock = 6; };
			class rhs_weap_hk416d145_d_2				{ price = 350; stock = 6; };
			class rhs_weap_hk416d145_m320				{ price = 550; stock = 6; };
			class rhs_weap_l1a1_wood					{ price = 350; stock = 6; };
			class rhs_weap_m16a4_carryhandle			{ price = 350; stock = 6; };
			class rhs_weap_m16a4_imod					{ price = 350; stock = 6; };
			class rhs_weap_m21a							{ price = 350; stock = 6; };
			class rhs_weap_m21s_pr						{ price = 350; stock = 6; };
			class rhs_weap_m27iar						{ price = 350; stock = 6; };
			class rhs_weap_m4_carryhandle_mstock		{ price = 350; stock = 6; };
			class rhs_weap_m4a1_blockII					{ price = 350; stock = 6; };
			class rhs_weap_m4a1_carryhandle				{ price = 350; stock = 6; };
			class rhs_weap_mk18							{ price = 350; stock = 6; };			
			class rhs_weap_MP44							{ price = 350; stock = 6; };
			class rhs_weap_SCARH_FDE_LB					{ price = 350; stock = 6; };
			class rhs_weap_vhsd2_bg_ct15x				{ price = 350; stock = 6; };
			class rhs_weap_vhsd2_ct15x					{ price = 350; stock = 6; };
			class rhs_weap_vhsk2						{ price = 350; stock = 6; };
			#endif
		};

		class marksman {
			displayName = "Long Rifles and DMRs";
			picture = "";

			#ifdef DMD_USE_CUP
			class CUP_srifle_AS50				{ price = 1500; stock = 2; };
			class CUP_srifle_AWM_des			{ price = 1200; stock = 2; };
			class CUP_srifle_AWM_wdl			{ price = 1200; stock = 2; };
			class CUP_srifle_CZ550				{ price = 600; stock = 15; };
			class CUP_srifle_CZ550_rail			{ price = 600; stock = 15; };
			class CUP_srifle_CZ750				{ price = 900; stock = 5; };
			class CUP_srifle_DMR				{ price = 900; stock = 5; };
			class CUP_srifle_G22_des			{ price = 900; stock = 5; };
			class CUP_srifle_G22_wdl 			{ price = 900; stock = 5; };
			class CUP_srifle_ksvk				{ price = 1500; stock = 2; };
			class CUP_srifle_L129A1				{ price = 900; stock = 5; };
			class CUP_srifle_L129A1_HG			{ price = 900; stock = 5; };
			class CUP_srifle_LeeEnfield			{ price = 220; stock = 25; };
			class CUP_srifle_LeeEnfield_rail	{ price = 600; stock = 15; };
			class CUP_srifle_M107_Base			{ price = 1500; stock = 2; };
			class CUP_srifle_M110				{ price = 900; stock = 5; };
			class CUP_srifle_M14				{ price = 900; stock = 5; };
			class CUP_srifle_M14_DMR			{ price = 900; stock = 5; };
			class CUP_srifle_M24_des			{ price = 900; stock = 5; };
			class CUP_srifle_M24_wdl			{ price = 900; stock = 5; };
			class CUP_srifle_M40A3				{ price = 900; stock = 5; };
			class CUP_srifle_Mk12SPR 			{ price = 600; stock = 15; };
			class CUP_srifle_SVD 				{ price = 900; stock = 5; };
			class CUP_srifle_SVD_des 			{ price = 900; stock = 5; };
			class CUP_srifle_VSSVintorez		{ price = 900; stock = 5; };
			#endif

			#ifdef DMD_USE_RHS
			class rhs_weap_asval_grip 			{ price = 600; stock = 15; };
			class rhs_weap_asval_grip_npz 		{ price = 600; stock = 15; };
			class rhs_weap_kar98k				{ price = 600; stock = 15; };
			class rhs_weap_M107					{ price = 1500; stock = 2; };
			class rhs_weap_M107_d				{ price = 1500; stock = 2; };
			class rhs_weap_M107_w				{ price = 1500; stock = 2; };
			class rhs_weap_m14ebrri 			{ price = 900; stock = 5; };
			class rhs_weap_m1garand_sa43 		{ price = 600; stock = 15; };
			class rhs_weap_m24sws 				{ price = 900; stock = 5; };
			class rhs_weap_m24sws_blk 			{ price = 900; stock = 5; };
			class rhs_weap_m24sws_ghillie 		{ price = 900; stock = 5; };
			class rhs_weap_m38					{ price = 220; stock = 25; };
			class rhs_weap_m38_rail				{ price = 600; stock = 15; };
			class rhs_weap_m40a5 				{ price = 900; stock = 5; };
			class rhs_weap_m40a5_wd 			{ price = 900; stock = 5; };
			class rhs_weap_m76	 				{ price = 900; stock = 5; };
			class rhs_weap_m82a1				{ price = 1500; stock = 2; };
			class rhs_weap_mosin_sbr			{ price = 600; stock = 15; };
			class rhs_weap_sr25 				{ price = 900; stock = 5; };
			class rhs_weap_sr25_d 				{ price = 900; stock = 5; };
			class rhs_weap_sr25_ec_wd 			{ price = 900; stock = 5; };
			class rhs_weap_svdp_npz 			{ price = 900; stock = 5; };
			class rhs_weap_svdp_wd 				{ price = 900; stock = 5; };
			class rhs_weap_svdp_wd_npz 			{ price = 900; stock = 5; };
			class rhs_weap_svds 				{ price = 900; stock = 5; };
			class rhs_weap_svds_npz				{ price = 900; stock = 5; };
			class rhs_weap_t5000				{ price = 1500; stock = 2; };
			class rhs_weap_vss	 				{ price = 900; stock = 5; };
			class rhs_weap_vss_grip_npz	 		{ price = 900; stock = 5; };
			class rhs_weap_XM2010				{ price = 1200; stock = 2; };
			class rhs_weap_XM2010_wd			{ price = 1200; stock = 2; };
			#endif

			class Rusty_DMR_05_base_F 			{ price = 900; stock = 5; };
			class Rusty_srifle_DMR_02_F 		{ price = 900; stock = 5; };
			class Rusty_srifle_DMR_03_F 		{ price = 900; stock = 5; };
			class Rusty_srifle_DMR_04_F 		{ price = 900; stock = 5; };

			class srifle_DMR_01_F 				{ price = 900; stock = 5; };
			class srifle_DMR_02_camo_F 			{ price = 1200; stock = 2; };
			class srifle_DMR_02_F 				{ price = 1200; stock = 2; };
			class srifle_DMR_02_sniper_F 		{ price = 1200; stock = 2; };
			class srifle_DMR_03_F 				{ price = 900; stock = 5; };
			class srifle_DMR_03_khaki_F 		{ price = 900; stock = 5; };
			class srifle_DMR_03_multicam_F 		{ price = 900; stock = 5; };
			class srifle_DMR_03_tan_F 			{ price = 900; stock = 5; };
			class srifle_DMR_03_woodland_F 		{ price = 900; stock = 5; };
			class srifle_DMR_04_F 				{ price = 1200; stock = 2; };
			class srifle_DMR_04_Tan_F 			{ price = 1200; stock = 2; };
			class srifle_DMR_05_blk_F 			{ price = 1200; stock = 2; };
			class srifle_DMR_05_hex_F 			{ price = 1200; stock = 2; };
			class srifle_DMR_05_tan_f 			{ price = 1200; stock = 2; };
			class srifle_DMR_06_camo_F 			{ price = 900; stock = 5; };
			class srifle_DMR_06_olive_F 		{ price = 900; stock = 5; };
			class srifle_DMR_07_blk_F			{ price = 900; stock = 5; };
			class srifle_DMR_07_ghex_F			{ price = 900; stock = 5; };
			class srifle_DMR_07_hex_F			{ price = 900; stock = 5; };
			class srifle_EBR_F 					{ price = 900; stock = 5; };
			class srifle_GM6_camo_F				{ price = 1500; stock = 2; };
			class srifle_GM6_F					{ price = 1500; stock = 2; };
			class srifle_GM6_ghex_F				{ price = 1500; stock = 2; };
			class srifle_LRR_camo_F				{ price = 1200; stock = 2; };
			class srifle_LRR_F					{ price = 1200; stock = 2; };
			class srifle_LRR_tna_F				{ price = 1200; stock = 2; };
		};

		class lmg {
			displayName = "Support Weapons / LMGs";
			picture = "";

			#ifdef DMD_USE_CUP
			class CUP_lmg_m249_para  	         	{ price = 800; stock = 1; };
			class CUP_lmg_Pecheneg		           	{ price = 800; stock = 1; };
			class CUP_arifle_MG36_hex           	{ price = 600; stock = 1; };
			class CUP_arifle_MG36_wdl           	{ price = 600; stock = 1; };
			class CUP_arifle_xm8_SAW            	{ price = 500; stock = 6; };
			class CUP_lmg_L110A1                	{ price = 800; stock = 1; };
			class CUP_lmg_L7A2                  	{ price = 800; stock = 1; };
			class CUP_lmg_Mk48_wdl              	{ price = 850; stock = 1; };
			#endif

			#ifdef DMD_USE_RHS	
			class rhs_weap_m240B                	{ price = 800; stock = 1; };
			class rhs_weap_m249                 	{ price = 800; stock = 1; };
			class rhs_weap_m249_pip_S_para      	{ price = 800; stock = 2; };
			class rhs_weap_m249_light_L		      	{ price = 800; stock = 2; };
			class rhs_weap_m84                  	{ price = 800; stock = 1; };
			class rhs_weap_mg42                 	{ price = 700; stock = 1; };
			class rhs_weap_minimi_para_railed   	{ price = 800; stock = 1; };
			class rhs_weap_pkm                  	{ price = 700; stock = 3; };
			class rhs_weap_pkp                  	{ price = 900; stock = 2; };
			#endif

			class LMG_Mk200_F                   	{ price = 900; stock = 1; };
			class Rusty_LMG_Zafir_F             	{ price = 750; stock = 1; };
			class Rusty_MMG_01_tan_F            	{ price = 650; stock = 0; };
			class Rusty_MMG_02_black_F          	{ price = 750; stock = 0; };
			class LMG_03_F   			          	{ price = 750; stock = 1; };
		};

		class handguns {
			displayName = "Sidearms";
			picture = "";

			class hgun_Rook40_F						{ price = 60; stock = 10; };
			class hgun_ACPC2_F                     	{ price = 60; stock = 10; };
			class hgun_Pistol_01_F                  { price = 60; stock = 10; };
			class hgun_Pistol_heavy_01_green_F      { price = 60; stock = 10; };
			class hgun_Pistol_heavy_01_F            { price = 60; stock = 10; };
			class hgun_Pistol_heavy_02_F            { price = 60; stock = 10; };

			#ifdef DMD_USE_CUP
			class CUP_hgun_Compact                  { price = 60; stock = 10; };
			class CUP_hgun_Duty                     { price = 60; stock = 10; };
			class CUP_hgun_Glock17                  { price = 60; stock = 10; };
			class CUP_hgun_MicroUzi                 { price = 80; stock = 2; };
			class CUP_hgun_PB6P9                    { price = 60; stock = 10; };
			class CUP_hgun_Phantom                  { price = 60; stock = 10; };
			class CUP_hgun_PMM                      { price = 60; stock = 10; };
			class CUP_hgun_TaurusTracker455         { price = 60; stock = 10; };
			class CUP_hgun_TaurusTracker455_gold    { price = 250; stock = 0; };
			#endif

			#ifdef DMD_USE_RHS
			class rhs_weap_makarov_pm           	{ price = 60; stock = 10; };
			class rhs_weap_pp2000_folded        	{ price = 70; stock = 5; };
			class rhs_weap_pya                  	{ price = 60; stock = 10; };
			class rhs_weap_savz61_folded        	{ price = 70; stock = 5; };
			class rhs_weap_tt33                 	{ price = 60; stock = 10; };
			class rhs_weap_type94_new           	{ price = 60; stock = 10; };
			class rhsusf_weap_m1911a1           	{ price = 60; stock = 10; };
			class rhsusf_weap_m9                	{ price = 60; stock = 10; };
			#endif
		};

		class fooddrink {
		    displayName = "Food and Drink";
		    picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		    // low tier
		    class rvg_plasticBottle             { price = 4; stock = 90; };
		    class rvg_rustyCan                  { price = 4; stock = 90; };
		    // mid tier
		    class rvg_plasticBottlePurified     { price = 8; stock = 60; };
		    class rvg_beans                     { price = 8; stock = 60; };
		    class rvg_milk                      { price = 8; stock = 60; };
		    class rvg_rice                      { price = 8; stock = 60; };
		    // top tier
		    class rvg_spirit                    { price = 12; stock = 30; };
		    class rvg_franta                    { price = 12; stock = 30; };
		    class rvg_bacon                     { price = 12; stock = 30; };
		};

		class supplies {
		    displayName = "Supplies";
		    picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		    // low tier
		    class rvg_docFolder                 { price = 4; stock = 90; };
		    class rvg_hose                      { price = 4; stock = 90; };
		    class rvg_flare                     { price = 4; stock = 90; };
		    class rvg_matches                   { price = 4; stock = 90; };
		    class rvg_notepad                   { price = 4; stock = 90; };
		    class Chemlight_yellow              { price = 4; stock = 90; };
		    class Chemlight_red                 { price = 4; stock = 90; };
		    class Chemlight_green               { price = 4; stock = 90; };
		    class Chemlight_blue                { price = 4; stock = 90; };
		    // mid tier
		    class rvg_canOpener                 { price = 10; stock = 60; };
		    class rvg_purificationTablets       { price = 10; stock = 60; };
    	    class rvg_canisterFuel_Empty        { price = 10; stock = 60; };
    	    class rvg_ItemMap                   { price = 10; stock = 60; };
    	    class ItemCompass                   { price = 10; stock = 60; };
    	    class ItemWatch                     { price = 10; stock = 60; };
		    // top tier
		    class rvg_guttingKnife              { price = 30; stock = 30; };
		    class rvg_tire                      { price = 80; stock = 50; };
		    class rvg_canisterFuel              { price = 80; stock = 5; };

			class FirstAidKit                   { price = 40; stock = 250; };
			class ToolKit                       { price = 60; stock = 10; };
			class rvg_toolkit                   { price = 60; stock = 25; };
			class MineDetector                  { price = 80; stock = 2; };
			class Medikit                       { price = 60; stock = 3; };
			class Binocular                     { price = 40; stock = 20; };
			class NVGoggles_INDEP               { price = 300; stock = 5; };
			class ItemGPS                       { price = 150; stock = 5; };
			
			#ifdef DMD_USE_CUP
			class CUP_NVG_PVS7                  { price = 300; stock = 5; };
			class CUP_NVG_GPNVG_black           { price = 300; stock = 5; };
			#endif

			#ifdef DMD_USE_RHS
			class rhsusf_bino_m24_ARD           { price = 40; stock = 20; };
			class rhsusf_bino_lerca_1200_black  { price = 80; stock = 5; };
			class rhsusf_bino_lrf_Vector21      { price = 80; stock = 5; };
			class rhs_1PN138                    { price = 300; stock = 5; };
			class rhsusf_ANPVS_15               { price = 300; stock = 5; };
			#endif

		    // keep the radiation stuff separate. not used
		    class rvg_antiRad                   { price = 20; stock = 0; };
		    class rvg_Geiger                    { price = 120; stock = 0; };
		    class rvg_sleepingBag_Blue          { price = 10; stock = 0; };
		    class rvg_foldedTent                { price = 20; stock = 0; };
		};
    	
    	class junk {
    	    displayName = "Junk";
    	    picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
    	    
    	    class rvg_plasticBottleEmpty { price = 2; stock = 0; };
    	    class rvg_canteenEmpty :    rvg_plasticBottleEmpty {};
    	    class rvg_rustyCanEmpty :   rvg_plasticBottleEmpty {};
    	    class rvg_beansEmpty :      rvg_plasticBottleEmpty {};
    	    class rvg_baconEmpty :      rvg_plasticBottleEmpty {};
    	    class rvg_spiritEmpty :     rvg_plasticBottleEmpty {};
    	    class rvg_frantaEmpty :     rvg_plasticBottleEmpty {};
    	};
	};
	
	class stores {
	    class supplies {
	        displayName = "Supplies";
	        categories[] = { "backpacks", "headgear", "vests", "uniforms", "fooddrink", "supplies", "junk"};
	    };

		class weapon {
			displayName = "Weapons Store";
			categories[] = { "ammunition", "shotguns", "pdw", "rifles", "marksman", "lmg", "handguns", "grenades_he", "grenades_smk"};
		};

		class accessories {
			displayName = "Weapon Accessories";
			categories[] = { "optics", "bipods", "muzzles", "pointers"};
		};
	};
};