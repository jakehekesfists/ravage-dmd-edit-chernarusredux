/* -----------------------------------
    File: PVEH.sqf (Server)
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */

// PLAYER CONNECTS/RESPAWNS. SERVER CHECKS/CREATES DATABASE AND SENDS TO CLIENT
"dmd_db_check" addPublicVariableEventHandler {
	private _packet = _this select 1;
	_packet params ["_dataplayrowner", "_dataplayrname", "_dataplayruid"];

	// SETUP BANK ACCOUNTS (share across all maps)
	_inidbiBank = ["new", "DMD_BANK_ACCOUNTS"] call OO_INIDBI;
	_readCash = ["read", [_dataplayruid, "Balance", 0]] call _inidbiBank;
	dmd_db_bank = [_readCash];
	_dataplayrowner publicVariableClient "dmd_db_bank";

	// DEAL WITH CHARACTER DATA (ONLY APPEND WORLDNAME TO NON REDUX MAPS SO PLAYERS DONT LOSE THEIR CHARS/BASES)
    ([_dataplayruid] call dmd_fnc_getDBNames) params ["_playerDB", "_objectDB", "_vehicleDB", "_settingsDB"];


	_inidbiReq = ["new", _playerDB] call OO_INIDBI;
	_databasefind = "exists" call _inidbiReq;

	private "_handler";
	private _dataArray = [];

	// set up a new account if doesn't exist
	if (!_databasefind) then {
		["write", ["Account", "Name", _dataplayrname]] call _inidbiReq;
		["write", ["Account", "UID", _dataplayruid]] call _inidbiReq;
		_handler = "newplayer";
	};

	if (_databasefind) then {
		_dataArray = [
			(["read", ["Account", "Position", []]] call _inidbiReq),
			(["read", ["Account", "Direction", ""]] call _inidbiReq),
			(["read", ["Account", "Anim", ""]] call _inidbiReq),
			(["read", ["Account", "Health", ""]] call _inidbiReq),
			(["read", ["Account", "Loadout", []]] call _inidbiReq),
			(["read", ["Account", "Hunger", ""]] call _inidbiReq),
			(["read", ["Account", "Thirst", ""]] call _inidbiReq)
		];
		_handler = "load";
	};

	dmd_db_load = [_handler,_dataArray];
	_dataplayrowner publicVariableClient "dmd_db_load";

	dmd_db_check = nil;
};

// SAVES THE PLAYER WHEN THEY PRESS ESCAPE
"dmd_db_esc_save" addPublicVariableEventHandler {
	private _packet = _this select 1;
	_packet params ["_myUID", "_myPos","_myDir","_myAni","_myDmg","_myGear","_hunger","_thirst"];
	private _data = [_myPos,_myDir,_myAni,_myDmg,_myGear,_hunger,_thirst];
	[_myUID, _data] call dmd_fnc_persistServerSaveData;
	dmd_db_esc_save = nil;
};

// SAVES BASE OBJECTS (WHEN THEY GET MOVED)
"dmd_save_this_object" addPublicVariableEventHandler {
	_pack = _this select 1;
	_pack params ["_obj", "_objID"];
	[_obj, _objID] call dmd_fnc_persistObjSave;
	[_obj, _objID] call dmd_fnc_persistObjSetupEH;
};

// DELETES OBJECTS FROM DB IF THEY GET DESTROYED
"dmd_delete_this_object" addPublicVariableEventHandler {
    _pack = _this select 1;
    _pack params ["_obj", "_objID"];
    [_obj,_objID] call dmd_fnc_persistObjDelete;
};

// SAVES AND SETS EVENTHANDLERS WHEN PLAYERS MANUALLY CLAIM VEHICLES
"dmd_save_my_car_pls" addPublicVariableEventHandler {
	_pack = _this select 1;
	_pack params ["_vehicle", "_puid"];

	dmd_vehID = dmd_vehID + 0.001;

	_vehicle removeAllEventHandlers "GetIn";

	_vehicle setVariable ["unique_id", dmd_vehID, true];
	_vehicle setVariable ["rvg_owned", true, true];
	_vehicle setVariable ["owner_id", _puid, true];

	[_vehicle, dmd_vehID, _puid] call dmd_fnc_persistVehSave;
	[_vehicle] call dmd_fnc_persistVehSetupEH;
	["set", dmd_vehID, "vehicle"] call dmd_fnc_persistIDCount;
};

// EVERY TIME A PLAYER UPDATES THEIR CURRENCY - SAVE IT TO DB
"dmd_save_bank" addPublicVariableEventHandler {
	_pack = _this select 1;
	_pack params ["_uid", "_amt"];
	[_uid, _amt] call dmd_fnc_bank_update;
};

// HOTWIRING REQUEST - CHANGE OWNERSHIP OF VEHICLE AND UPDATE DB
"dmd_hotwire_vehicle" addPublicVariableEventHandler {
	_pack = _this select 1;
	_pack params ["_vehicle", "_vehicleID", "_playerUID"];
	{ _vehicle removeAllEventHandlers _x; } forEach ["Deleted", "ContainerClosed", "Dammaged", "GetOut"];
	_vehicle removeAllMPEventHandlers "MPKilled";
	[_vehicle, _vehicleID, _playerUID] call dmd_fnc_persistVehSave;
	_vehicle setVariable ["owner_id", _playerUID, true];
	[_vehicle] call dmd_fnc_persistVehSetupEH;
	dmd_hotwire_vehicle = nil;
};