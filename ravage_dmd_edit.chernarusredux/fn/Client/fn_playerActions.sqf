/* -----------------------------------
    File: fn_playerActions.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */

// define icon types
private _icoDestCrate = "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_forceRespawn_ca.paa";	// Destroy Crate 
private _icoRefill = 	"\A3\ui_f\data\igui\cfg\simpleTasks\types\refuel_ca.paa";				// Refill Jerry Can
private _icoTakeFood = 	"images\icon_eat.paa";													// Take Food
private _icoTakeDrink = "images\icon_drink.paa";												// Take Drink
private _icoATM = 		"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_hack_ca.paa";			// Deposit Funds
private _icoClaimVeh = 	"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_hack_ca.paa";			// Claim Vehicle
private _icoLock = 		"images\icon_lock.paa";													// Lock Vehicle
private _icoUnlock = 	"images\icon_unlock.paa";												// Unlock Vehicle
private _icoHotwire = 	"images\icon_pliers.paa";												// Hotwire Vehicle


// Define the kinds of Objects to use for adding actions
// ATMs
private _atmClasses = ['Land_ATM_01_malden_F'];

// Water Sources 
private _wsClasses = ['Land_BarrelWater_F','Land_Barrel_water','Land_WaterTank_F','Land_stand_waterl_EP1','Land_WaterBarrel_F','Land_BarrelWater_grey_F','Land_StallWater_F'];

// Food Sources
private _fdClasses = ['Land_Sacks_goods_F','Land_FoodContainer_01_F','Land_FoodContainer_01_White_F','Land_FoodSacks_01_large_white_idap_F','Land_FoodSacks_01_cargo_brown_idap_F','Land_FoodSacks_01_cargo_white_idap_F','Land_FoodSacks_01_large_brown_F'];

// Fuel Sources (for Refilling Jerry Cans)
private _fsClasses = ['Land_fs_feed_F','Land_FuelStation_Feed_F','Land_Ind_TankSmall2','Land_Ind_TankSmall2_EP1','Land_A_FuelStation_Feed','Land_fuelstation','Land_Ind_FuelStation_Feed_EP1','Land_Fuel_tank_stairs'];


// add these actions to the player - only needs doing once.
///////////////////////////// REPAIR ACTIONS /////////////////////////////
fn_nearFuelPumps = {
	params ["_obj"];
	private _near = false;
	// Fuel Pumps (for vehicle repairs)
	private _rfClasses = ['Land_fs_feed_F','Land_FuelStation_Feed_F','Land_A_FuelStation_Feed','Land_Ind_FuelStation_Feed_EP1'];
	
	_fuelPumps = (nearestObjects [_obj, _rfClasses, 15]);
	if (count _fuelPumps > 0) then { _near = true; } else { _near = false; };
	_near
};
	
[player,[
	format ["<t color='#f7aa02'>%1</t>",(localize "STR_ACT_REPAIRVEHICLE")],
	{
		[(vehicle (_this select 1))] call dmd_fnc_vehicleService;
	},
	[],	5,	true, true,	"",
	"(!(isNull objectParent _originalTarget) && ([(vehicle _originalTarget)] call fn_nearFuelPumps) && ((driver (vehicle _originalTarget)) isEqualTo _originalTarget))",
	15
]] remoteExec ["addAction"];

// action loop
for "_i" from 0 to 1 step 0 do {
	sleep 2.5;

	// addactions when on foot. 
	if (isNull objectParent player) then {

		///////////////////////////// REFUEL ACTIONS /////////////////////////////
		_building = (nearestObjects [player, _fsClasses, 5]) select 0;
		if (!isNil "_building" && {isNil {_building getVariable "fuel_action"}}) then {
			[
				_building,
				format ["<t color='#15a9bf'>%1</t>",(localize "STR_ACT_REFILLJERRYCAN")],
				_icoRefill,
				_icoRefill,
				"_this distance _target < 3","_caller distance _target < 3",{},{},
				{ [_this, "Client\refillJerry.sqf"] remoteExec ["execVM", (owner (_this select 1))]; },
				{},[],2,0,false,false
			] remoteExec ["BIS_fnc_holdActionAdd", 0, _building];
			_building setVariable ["fuel_action", true, true];
		};

		///////////////////////////// CRATE ACTIONS /////////////////////////////
		_crate = (nearestObjects [player, ["ReammoBox_f"], 5]) select 0;
		if (!isNil "_crate" && {isNil {_crate getVariable "demo_action"}}) then {
			[
				_crate,
				format ["<t color='#900000'>%1</t>",(localize "STR_ACT_DESTROYCRATE")],
				_icoDestCrate,
				_icoDestCrate,
				"_this distance _target < 3","_caller distance _target < 3",{},{},
				{ [_this, "Client\destroyCrate.sqf"] remoteExec ["execVM", (owner (_this select 1))]; },
				{},[],3,0,false,false
			] remoteExec ["BIS_fnc_holdActionAdd", 0, _crate];

			_crate setVariable ["demo_action", true, true];
		};

		///////////////////////////// FOOD ACTIONS /////////////////////////////
		_foodBarrel = (nearestObjects [player, _fdClasses, 5]) select 0;
		if (!isNil "_foodBarrel" && {isNil {_foodBarrel getVariable "food_action"}}) then {
			[
				_foodBarrel,
				format ["<t color='#de1d9e'>%1</t>",(localize "STR_ACT_GETFOOD")],
				_icoTakeFood,
				_icoTakeFood,
				"_this distance _target < 3","_caller distance _target < 3",{},{},
				{ [_this, "Client\getFood.sqf"] remoteExec ["execVM", (owner (_this select 1))]; },
				{},[],2,0,false,false
			] remoteExec ["BIS_fnc_holdActionAdd", 0, _foodBarrel];

			_var = 8;
			if (_foodBarrel isKindOf "Land_FoodSacks_01_large_white_idap_F") then { _var = 20; };
			_foodBarrel setVariable ["food_action", _var, true];
		};

		///////////////////////////// DRINK ACTIONS /////////////////////////////
		_waterBarrel = (nearestObjects [player, _wsClasses, 5]) select 0;
		if (!isNil "_waterBarrel" && {isNil {_waterBarrel getVariable "drink_action"}}) then {
			[
				_waterBarrel,
				format ["<t color='#de1d9e'>%1</t>",(localize "STR_ACT_GETDRINK")],
				_icoTakeDrink,
				_icoTakeDrink,
				"_this distance _target < 3","_caller distance _target < 3",{},{},
				{ [_this, "Client\getDrink.sqf"] remoteExec ["execVM", (owner (_this select 1))]; },
				{},[],2,0,false,false
			] remoteExec ["BIS_fnc_holdActionAdd", 0, _waterBarrel];

			_waterBarrel setVariable ["drink_action", 20, true];
		};

		///////////////////////////// ATM ACTIONS /////////////////////////////
		_atm = (nearestObjects [player, _atmClasses, 5]) select 0;
		if (!isNil "_atm" && {isNil {_atm getVariable "atm_action"}}) then {
			[
				_atm,
				format ["<t color='#7ccf08'>%1</t>",(localize "STR_ACT_DEPOSIT")],
				_icoATM,
				_icoATM,
				"((({_x isEqualTo 'rvg_money'} count magazines _this) > 0) && (_this distance _target < 3))",
				"_caller distance _target < 3",
				{},{},
				{ [_this, "Client\depositFunds.sqf"] remoteExec ["execVM", (owner (_this select 1))]; },
				{},[],2,0,false,false
			] remoteExec ["BIS_fnc_holdActionAdd", 0, _atm];

			_atm setVariable ["atm_action", true, true];
		};

		///////////////////////////// VEHICLE ACTIONS /////////////////////////////
		_vehicle = (nearestObjects [player, ["LandVehicle", "Air", "Ship"], 5]) select 0;
		if (!isNil "_vehicle") then {
			private _nilVar = _vehicle getVariable "unique_id";
			private _nilClaim = _vehicle getVariable "vehicle_claim_added";
			private _nilAct = _vehicle getVariable "vehicle_actions_added";

			// Claiming Vehicles Actions
			if ((isNil "_nilClaim") && (_vehicle getVariable "R3F_LOG_disabled") && (isNil "_nilVar")) then {
				_vehicle setVariable ["R3F_LOG_disabled", false, true];

				[
					_vehicle,
					format ["<t color='#15a9bf'>%1</t>",(localize "STR_ACT_CLAIMVEH")],
					_icoClaimVeh,
					_icoClaimVeh,
					"((_this distance _target < 3) && ((vehicle _this) isEqualTo _this) && {isNil {_target getVariable ""unique_id""}})",
					"_caller distance _target < 3",{},{},
					{
						(format ["Saving vehicle %1 for %2!",(typeOf _target),(name _caller)]) remoteExec ["hint", (owner _caller)];
						_puid = getPlayerUID _caller;
						dmd_save_my_car_pls = [_target, _puid];
						publicVariableServer "dmd_save_my_car_pls";
						[_this, "Client\vehicleLock.sqf"] remoteExec ["execVM"];
						_target setVariable ["vehicle_actions_added", nil, true];
						_target setVariable ["vehicle_claim_added", nil, true];
					},
					{},[],3,5,false,false
				] remoteExec ["BIS_fnc_holdActionAdd", 0, _vehicle];

				_vehicle addEventHandler ["GetIn", {
					params ["_vehicle", "_role", "_unit", "_turret"];
					if (_role isEqualTo "driver") then {
						(localize "STR_ACT_EH_DESPAWNWARN") remoteExec ["hint", (owner _unit)];
						_vehicle setVariable ["rvg_owned", true, true];
					};
				}];

				_vehicle setVariable ["vehicle_claim_added", true, true];
			};

			// Locking/Unlocking/Hotwiring Actions
			if ((isNil "_nilAct") && (!isNil "_nilVar")) then {

				// Lock Vehicle
				[
					_vehicle,
					format ["<t color='#11c3f5'>%1</t>",(localize "STR_ACT_LOCKVEH")],
					_icoLock,
					_icoLock,
					"((vehicle _this == _this) && ((_target getVariable ""owner_id"") isEqualTo getPlayerUID _this) && ((_target getVariable ""unique_id"") > 0) && (locked _target == 0))",
					"_caller distance _target < 5",{},{},
					{ [_this, "Client\vehicleLock.sqf"] remoteExec ["execVM"]; },
					{},[],1.5,5,false,false
				] remoteExec ["BIS_fnc_holdActionAdd", 0, _vehicle];

				// Unlock Vehicle
				[
					_vehicle,
					format ["<t color='#11c3f5'>%1</t>",(localize "STR_ACT_UNLOCKVEH")],
					_icoUnlock,
					_icoUnlock,
					"((vehicle _this == _this) && ((_target getVariable ""owner_id"") isEqualTo getPlayerUID _this) && ((_target getVariable ""unique_id"") > 0) && (locked _target > 0))",
					"_caller distance _target < 5",{},{},
					{ [_this, "Client\vehicleUnlock.sqf"] remoteExec ["execVM"]; },
					{},[],1.5,5,false,false
				] remoteExec ["BIS_fnc_holdActionAdd", 0, _vehicle];
				
				// Locked Vehicle - Nothing happens. so no need for circle action
				[_vehicle,
					[
						format ["<t color='#f51142'>%1</t>",(localize "STR_ACT_VEHLOCKED")],
						{ ["play", (_this select 0)] call BIS_fnc_carAlarm; },
						[],	5,	true, true,	"",	"((vehicle player == player) && !((_target getVariable ""owner_id"") isEqualTo getPlayerUID player) && ((_target getVariable ""unique_id"") > 0) && (locked _target > 0))", 10
					]
				] remoteExec ["addAction"];

				// Hotwire Vehicle
				[
					_vehicle,
					format ["<t color='#edaf05'>%1</t>",(localize "STR_ACT_HOTWIREVEH")],
					_icoHotwire,
					_icoHotwire,
					"((vehicle _this == _this) && !((_target getVariable ""owner_id"") isEqualTo getPlayerUID _this) && ((_target getVariable ""unique_id"") > 0) && (locked _target > 0))",
					"_caller distance _target < 5",{},{},
					{ [_this, "Client\vehicleHotwire.sqf"] remoteExec ["execVM"]; },
					{},[],2,5,false,false
				] remoteExec ["BIS_fnc_holdActionAdd", 0, _vehicle];

				_vehicle setVariable ["vehicle_actions_added", true, true];
			};
		};
	};
};