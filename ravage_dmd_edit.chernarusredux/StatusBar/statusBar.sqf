/* -----------------------------------
    File: statusBar.sqf
    Author:  JakeHekesFists[DMD] 2019

	Based on GF Ravage Status Bar script
-------------------------------------- */

waitUntil {!(isNull (findDisplay 46))};
disableSerialization;

fn_returnColour = {
	params ["_val"];
	private _return = call {
		if (_val >= 95) exitWith { (parseText "#FBFCFE") };
		if (_val >= 90) exitWith { (parseText "#F5E6EC") };
		if (_val >= 80) exitWith { (parseText "#F0D1DB") };
		if (_val >= 70) exitWith { (parseText "#EBBBC9") };
		if (_val >= 60) exitWith { (parseText "#E6A6B8") };
		if (_val >= 50) exitWith { (parseText "#E191A7") };
		if (_val >= 40) exitWith { (parseText "#DB7B95") };
		if (_val >= 30) exitWith { (parseText "#D66684") };
		if (_val >= 20) exitWith { (parseText "#D15072") };
		if (_val >= 10) exitWith { (parseText "#CC3B61") };
		if (_val >= 1) exitWith { (parseText "#C72650") };
		if (_val < 1) exitWith { (parseText "#000000") };
	};
	_return
};

[] spawn {
	private _colDefault = parseText "#FBFCFE";
	for "_i" from 0 to 1 step 0 do {
		sleep 0.05;

		_rscLayer = "DMDStatusBar" call BIS_fnc_rscLayer;
		_rscLayer cutRsc ["DMDStatusBar","PLAIN",1,false];

		if(isNull ((uiNamespace getVariable "DMDStatusBar")displayCtrl 881488)) then {
			disableSerialization;
			_rscLayer = "DMDStatusBar" call BIS_fnc_rscLayer;
			_rscLayer cutRsc ["DMDStatusBar","PLAIN",1,false];
		};
		
		// Calculate the players vital statistics
		private _health = round ((1 - (damage player)) * 100);
		private _thirst = player getVariable ["thirst", 100];
		private _hunger = player getVariable ["hunger", 100];
		private _wallet = {_x isEqualTo "rvg_money"} count magazines player;
		private _money = [player] call HALs_money_fnc_getFunds;
		_money = [_money, 1, 0, true] call CBA_fnc_formatNumber; 

		// Changing Colour based on Vital Statistics
		private _colHealth = [_health] call fn_returnColour;
		private _colThirst = [_thirst] call fn_returnColour;
		private _colHunger = [_hunger] call fn_returnColour;

		// Structure the HUD
		((uiNamespace getVariable "DMDStatusBar")displayCtrl 881488) ctrlSetStructuredText parseText format [
			"
				<t color='%7'>%2 <img size='1.1' image='StatusBar\images\player.paa' /></t><br/><br/>
				<t color='%8'>%3 %1 <img size='1.1' image='StatusBar\images\heal.paa' /></t><br/><br/>
				<t color='%9'>%4 %1 <img size='1.1' image='StatusBar\images\drink.paa' /></t><br/><br/>
				<t color='%10'>%5 %1 <img size='1.1' image='StatusBar\images\food.paa' /></t><br/><br/>	
				<t color='%7'>$ %6 <img size='1' image='StatusBar\images\bank.paa' /><br/><br/></t>
				<t color='%7'>$ %11 <img size='1' image='StatusBar\images\wallet.paa' /><br/></t>
			",
				"%",					//1
				count playableUnits,	//2
				_health,				//3
				_thirst,				//4
				_hunger,				//5
				_money,					//6	
				_colDefault,			//7
				_colHealth,				//8
				_colThirst,				//9
				_colHunger,				//10
				_wallet					//11
		];
	};
};