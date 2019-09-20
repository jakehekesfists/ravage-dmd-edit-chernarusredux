/* -----------------------------------
    File: eventHandlers.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */

addMissionEventHandler ["EntityKilled", {
	params ["_killed", "_killer", "_instigator"];
	if (isNull _instigator) then {_instigator = UAVControl vehicle _killer select 0};
	if (isNull _instigator) then {_instigator = _killer};

	// monetary reward for zombie kills
	if (_killed isKindOf "zombie") then {
		if (isPlayer _killer) then { _killer addItem "rvg_money"; };
	};

	// server to handle player death 
	if (isPlayer _killed) then {
		_uid = getPlayerUID _killed;
		[_uid] call dmd_fnc_persistServerDeleteData;
	};

	// victim to drop their money
	if (_killed isKindOf "Man") then {
		private _money = {_x isEqualTo "rvg_money"} count magazines _killed;
		if (_money > 0) then {
			// remove the cash from gear
			for "_i" from 0 to (_money)-1 do { _killed removeItem "rvg_money"; };
			private _pos = getPos _killed;
			_pos set [2,0];
			// create the wallet item
			private _wallet = "Land_Money_F" createVehicle _pos;
			private _grassCutter = "Land_ClutterCutter_medium_F" createVehicle _pos;
			_wallet setVariable ["ravageMoney",_money,true];		// set variable so people can take the money.
			
			[
				_wallet,
				"<t color='#15a9bf'>TAKE MONEY</t>",
				"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa",
				"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa",
				"_this distance _target < 3","_caller distance _target < 3",{},{},
				{
					params ["_target", "_caller", "_actionId", "_arguments"];
					private _amount = (_target getVariable["ravageMoney",0]);
					if (_amount > 0) then {
						private _storedAmount = _amount;
						for "_i" from 0 to (_amount)-1 do {
							if (_caller canAdd "rvg_money") then {									
								_caller addItem "rvg_money";
								_storedAmount = _storedAmount - 1;
								_target setVariable ["ravageMoney",_storedAmount,true];
							};
						};
						if ((_target getVariable["ravageMoney",0]) <= 0) then {
							deleteVehicle _target;
							_target removeAction _actionID;
						};
					};
				},
				{},[],1.5,0,false,false
			] remoteExec ["BIS_fnc_holdActionAdd", 0, _wallet];
		};
	};
	
}];

// save player on disconnect. uses a non-player object. wont save hunger/thirst but should already have that from player pressing escape last time. 
addMissionEventHandler ["HandleDisconnect", {
	params ["_unit", "_id", "_uid", "_name"];
	_getData = [_unit] call dmd_fnc_persistServerGetPlayerData;
	[_uid, _getData] spawn dmd_fnc_persistServerSaveData;
	sleep 5;
	deleteVehicle _unit;
}];