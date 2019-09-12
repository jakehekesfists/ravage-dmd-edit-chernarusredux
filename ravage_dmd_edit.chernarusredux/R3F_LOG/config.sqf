/**
 * DISABLE LOGISTICS ON OBJECTS BY DEFAULT
 * 
 * (EN)
 * Define if objects and vehicles have logistics features by default,
 * or if it must be allowed explicitely on specific objects/vehicles.
 * 
 * If false : all objects are enabled according to the class names listed in this configuration file
 *            You can disable some objects with : object setVariable ["R3F_LOG_disabled", true];
 * If true :  all objects are disabled by default
 *            You can enable some objects with : object setVariable ["R3F_LOG_disabled", false];
 */
R3F_LOG_CFG_disabled_by_default = true;

/**
 * LOCK THE LOGISTICS FEATURES TO SIDE, FACTION OR PLAYER
 * 
 * (EN)
 * Define the lock mode of the logistics features for an object.
 * An object can be locked to the a side, faction, a player (respawn) or a unit (life).
 * If the object is locked, the player can unlock it according to the
 * value of the config variable R3F_LOG_CFG_unlock_objects_timer.
 * 
 * If "none" : no lock features, everyone can used the logistics features.
 * If "side" : the object is locked to the last side which interacts with it.
 * If "faction" : the object is locked to the last faction which interacts with it.
 * If "player" : the object is locked to the last player which interacts with it. The lock is transmitted after respawn.
 * If "unit" : the object is locked to the last player which interacts with it. The lock is lost when the unit dies.
 * 
 * Note : for military objects (not civilian), the lock is initialized to the object's side.
 * 
 * See also the config variable R3F_LOG_CFG_unlock_objects_timer.
 */
R3F_LOG_CFG_lock_objects_mode = "player";

/**
 * COUNTDOWN TO UNLOCK AN OBJECT
 * 
 * Define the countdown duration (in seconds) to unlock a locked object.
 * Set to -1 to deny the unlock of objects.
 * See also the config variable R3F_LOG_CFG_lock_objects_mode.
 */
R3F_LOG_CFG_unlock_objects_timer = 90;

/**
 * ALLOW NO GRAVITY OVER GROUND
 * 
 * Define if movable objects with no gravity simulation can be set in height over the ground (no ground contact).
 * The no gravity objects corresponds to most of decoration and constructions items.
 */
R3F_LOG_CFG_no_gravity_objects_can_be_set_in_height_over_ground = true;

/**
 * LANGUAGE
 * 
 * Automatic language selection according to the game language.
 * New languages can be easily added (read below).
 */
R3F_LOG_CFG_language = "en";

R3F_LOG_CFG_string_condition_allow_logistics_on_this_client = "true";
R3F_LOG_CFG_string_condition_allow_creation_factory_on_this_client = "getPlayerUID player in ['76561198035522330']";

/*
 ********************************************************************************************
 * BELOW IS THE CLASS NAMES CONFIGURATION / CI-DESSOUS LA CONFIGURATION DES NOMS DE CLASSES *
 ********************************************************************************************
 * 
 * (EN)
 * There are two ways to manage new objects with the logistics system. The first one is to add these objects in the
 * following appropriate lists. The second one is to create a new external file in the /addons_config/ directory,
 * based on /addons_config/TEMPLATE.sqf, and to add a #include below to.
 * The first method is better to add/fix only some various class names.
 * The second method is better to take into account an additional addon.
 * 
 * These variables are based on the inheritance principle according to the CfgVehicles tree.
 * It means that a features accorded to a class name, is also accorded to all child classes.
 * Inheritance tree view : http://madbull.arma.free.fr/A3_1.32_CfgVehicles_tree.html
 */

/****** LIST OF ADDONS CONFIG TO INCLUDE / LISTE DES CONFIG D'ADDONS A INCLURE ******/
#include "addons_config\A3_vanilla.sqf"
#include "addons_config\All_in_Arma.sqf"
#include "addons_config\R3F_addons.sqf"
//#include "addons_config\YOUR_ADDITIONAL_ADDON.sqf"

/****** TOW WITH VEHICLE / REMORQUER AVEC VEHICULE ******/		
// using advanced towing. dont need these
R3F_LOG_CFG_can_tow = [];
R3F_LOG_CFG_can_be_towed = [];
R3F_LOG_CFG_can_lift = [];
R3F_LOG_CFG_can_be_lifted = [];

/****** LOAD IN VEHICLE / CHARGER DANS LE VEHICULE ******/

/*
* (EN)
 * This section uses a numeric quantification of capacity and cost of the objets.
 * For example, in a vehicle has a capacity of 100, we will be able to load in 5 objects costing 20 capacity units.
 * The capacity doesn't represent a real volume or weight, but a choice made for gameplay.
 */

/**
 * List of class names of vehicles or cargo objects which can transport objects.
 * The second element of the nested arrays is the load capacity (in relation with the capacity cost of the objects).
 */
R3F_LOG_CFG_can_transport_cargo = R3F_LOG_CFG_can_transport_cargo + ([] call dmd_fnc_vehicleCargoCapacity);

/**
 * List of class names of objects which can be loaded in transport vehicle/cargo.
 * The second element of the nested arrays is the cost capacity (in relation with the capacity of the vehicles).
 */
R3F_LOG_CFG_can_be_transported_cargo = R3F_LOG_CFG_can_be_transported_cargo +
[
	// e.g. : ["MyTransportableObjectClassName1", itsCost], ["MyTransportableObjectClassName2", itsCost]
	// Mounted Guns 
	["CUP_O_KORD_high_RU", 4],
	["rhsgref_ins_DSHKM", 4],
	["rhsgref_ins_NSV_TriPod", 4],
	["O_HMG_01_high_F", 4],
	["O_HMG_01_A_F", 4],
	["CUP_B_L111A1_BAF_DDPM", 4],
	["CUP_B_M2StaticMG_GER_Fleck", 4],
	["CUP_B_M2StaticMG_MiniTripod_GER_Fleck", 4],
	// Base Objects 
	["Land_PortableLight_double_F", 1],
	["Land_PortableLight_single_F", 1],
	["Land_PortableLight_02_double_olive_F", 1],
	["Land_PortableLight_02_quad_black_F", 1],
	["Land_CzechHedgehog_01_new_F", 1],
	["Land_DragonsTeeth_01_1x1_new_redwhite_F", 1],
	["Land_BagFence_End_F", 1],
	["Land_BagFence_Corner_F", 1],

	["Land_Stone_pillar_F",2],
	["Land_BrickWall_04_l_pole_old_F",2],
	["Land_Shoot_House_Corner_Crouch_F",2],
	["Land_Shoot_House_Wall_Crouch_F",2],
	["Land_CncBarrier_F",2],
	["Land_CncBarrierMedium_F",2],
	["Land_CncBarrier_stripes_F",2],
	["Land_HBarrier_1_F",2],
	["Land_WallCity_01_pillar_grey_F",2],
	["Land_FoodSacks_01_cargo_brown_idap_F",2],
	["Land_FoodSacks_01_cargo_white_idap_F",2],
	["Land_FoodSacks_01_large_white_idap_F",2],
	["Land_FoodSacks_01_large_brown_F",2],
	["Land_Sacks_goods_F",2],
	["Land_BarrelWater_F",2],
	["Land_BarrelWater_grey_F",2],
	["Land_WaterBarrel_F",2],
	["Box_NATO_AmmoVeh_F",2],
	["C_IDAP_supplyCrate_F",2],
	["Box_NATO_WpsSpecial_F",2],
	["Box_EAF_Equip_F",2],
	["Land_Bricks_V1_F",2],
	["Land_StallWater_F",2],
	["Land_ConcreteHedgehog_01_F",2],
	["Land_BagFence_Long_F",2],
	["Land_BagFence_Round_F",2],
	["Land_BagFence_Short_F",2],

	["Land_Shoot_House_Corner_F",4],
	["Land_Shoot_House_Tunnel_F",4],
	["Land_Shoot_House_Wall_F",4],
	["Land_CncWall1_F",4],
	["Land_Concrete_SmallWall_4m_F",4],
	["Land_BarGate_F",4],
	["Land_HBarrier_3_F",4],
	["Land_Mil_WallBig_Corner_F",4],
	["Land_Wall_IndCnc_2deco_F",4],
	["Land_Wall_Tin_4",4],
	["Land_Ancient_Wall_4m_F",4],
	["Land_ConcreteWall_03_m_2m_F",4],
	["Land_WallCity_01_4m_plain_blue_F",4],
	["Land_Barricade_01_4m_F",4],
	["Land_Bunker_01_blocks_1_F",4],
	["Land_SandbagBarricade_01_half_F",4],
	["Land_SandbagBarricade_01_F",4],
	["Land_SandbagBarricade_01_hole_F",4],
	["Land_ConcretePipe_F",4],
	["Land_BagBunker_Small_F",4],
	["Land_DragonsTeeth_01_4x2_old_redwhite_F",4],
	["Land_CncShelter_F",4],
	["Land_GH_Stairs_F",4],

	["Land_WoodenWall_05_m_4m_v1_F",8],
	["Land_Stone_Gate_F",8],
	["Land_BrickWall_04_l_5m_old_F",8],
	["Land_BrickWall_01_l_5m_F",8],
	["Land_Shoot_House_Wall_Long_F",8],
	["Land_Shoot_House_Wall_Long_Stand_F",8],
	["Land_CncWall4_F",8],
	["Land_Concrete_SmallWall_8m_F",8],
	["Land_CamoConcreteWall_01_l_4m_v1_F",8],
	["Land_CamoConcreteWall_01_l_4m_d_v2_F",8],
	["Land_HBarrier_5_F",8],
	["Land_Mil_WallBig_4m_F",8],
	["Land_WallCity_01_gate_grey_F",8],
	["Land_WallCity_01_4m_grey_F",8],
	["Land_ConcreteWall_03_m_6m_F",8],
	["Land_SilageWall_01_l_5m_F",8],
	["Land_Scaffolding_F",8],
	["Land_Scaffolding_New_F",8],
	["Land_Cargo10_yellow_F",8],
	["Land_Barricade_01_10m_F",8],
	["Land_Bunker_01_blocks_3_F",8],
	["Land_DeerStand_02_F",8],
	["Land_Caravan_01_green_F",8],
	["Land_cargo_house_slum_F",8],
	["Land_Slum_House01_F",8],
	["CamoNet_wdl_F",8],

	["Land_Stone_8m_F",12],
	["Land_CncBarrierMedium4_F",12],
	["Land_HBarrier_Big_F",12],
	["Land_HBarrierWall_corridor_F",12],
	["Land_HBarrierWall_corner_F",12],
	["Land_WallCity_01_8m_grey_F",12],
	["Land_WallCity_01_8m_plain_blue_F",12],
	["Land_Cargo20_EMP_F",12],
	["Land_Cargo20_red_F",12],
	["B_Slingload_01_Cargo_F",12],
	["Land_MedicalTent_01_wdl_generic_inner_F",12],
	["Land_BagBunker_Tower_F",12],
	["Land_Cargo_House_V1_F",12],
	["Land_Cargo_Patrol_V1_F",12],
	["BlockConcrete_F",12],
	["Land_RampConcrete_F",12],
	["Land_RampConcreteHigh_F",12],

	["Land_HBarrierTower_F",20],
	["Land_Canal_Wall_10m_F",20],
	["Land_Canal_Wall_Stairs_F",20],
	["Land_Cargo40_blue_F",20],
	["Land_Cargo40_military_green_F",20],
	["Land_Bunker_01_small_F",20],
	["Land_Bunker_02_left_F",20],
	["Land_Bunker_02_double_F",20],
	["Land_BagBunker_Large_F",20],
	["CargoPlaftorm_01_jungle_F",20],

	["Land_Bunker_01_big_F",40],
	["Land_Bunker_01_tall_F",40],
	["Land_Cargo_Tower_V1_F",40]
];

/****** MOVABLE-BY-PLAYER OBJECTS / OBJETS DEPLACABLES PAR LE JOUEUR ******/
R3F_LOG_CFG_force_walk = false;			// force players to walk when moving objects

/* List of class names of objects which can be carried and moved by a player. */
R3F_LOG_CFG_can_be_moved_by_player = R3F_LOG_CFG_can_be_moved_by_player +
[
	// Mounted Guns
	"CUP_O_KORD_high_RU",
	"rhsgref_ins_DSHKM",
	"rhsgref_ins_NSV_TriPod",
	"O_HMG_01_high_F",
	"O_HMG_01_A_F",
	"CUP_B_L111A1_BAF_DDPM",
	"CUP_B_M2StaticMG_GER_Fleck",
	"CUP_B_M2StaticMG_MiniTripod_GER_Fleck",

	// Base Objects
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
];