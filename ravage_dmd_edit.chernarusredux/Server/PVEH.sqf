/* -----------------------------------
    File: PVEH.sqf (Server)
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
 
"dmd_db_check" addPublicVariableEventHandler {
	private _packet = _this select 1;
	_packet params ["_dataplayrowner", "_dataplayrname", "_dataplayruid"];
	_inidbiReq = ["new", _dataplayruid] call OO_INIDBI;
	_databasefind = "exists" call _inidbiReq;

	if (!_databasefind) then {
		["write", ["Account", "Name", _dataplayrname]] call _inidbiReq;
		["write", ["Account", "UID", _dataplayruid]] call _inidbiReq;
	};
	
	if (_databasefind) then {
		_readpos = ["read", ["Account", "Position", []]] call _inidbiReq;
		_readdir = ["read", ["Account", "Direction", ""]] call _inidbiReq;
		_readAni = ["read", ["Account", "Anim", ""]] call _inidbiReq;
		_readdamage = ["read", ["Account", "Health", ""]] call _inidbiReq;
		_readloadout = ["read", ["Account", "Loadout", []]] call _inidbiReq;
		_readHunger = ["read", ["Account", "Hunger", ""]] call _inidbiReq;
		_readThirst = ["read", ["Account", "Thirst", ""]] call _inidbiReq;
		
		dmd_db_load = [_readpos, _readdir, _readAni, _readdamage, _readloadout, _readHunger, _readThirst];
		_dataplayrowner publicVariableClient "dmd_db_load";
	};

	_inidbiBank = ["new", "DMD_BANK_ACCOUNTS"] call OO_INIDBI;
	_readCash = ["read", [_dataplayruid, "Balance", 0]] call _inidbiBank;
	dmd_db_bank = [_readCash];
	_dataplayrowner publicVariableClient "dmd_db_bank";

	dmd_db_check = nil;
};

"dmd_db_esc_save" addPublicVariableEventHandler {
	private _packet = _this select 1;
	_packet params ["_myUID", "_myPos","_myDir","_myAni","_myDmg","_myGear","_hunger","_thirst"];
	private _data = [_myPos,_myDir,_myAni,_myDmg,_myGear,_hunger,_thirst];
	[_myUID, _data] call dmd_fnc_persistServerSaveData;
	dmd_db_esc_save = nil;
};

"dmd_save_this_object" addPublicVariableEventHandler {
	_pack = _this select 1;
	_pack params ["_obj", "_objID"];
	[_obj, _objID] call dmd_fnc_persistObjSave;
	[_obj, _objID] call dmd_fnc_persistObjSetupEH;
};

"dmd_delete_this_object" addPublicVariableEventHandler {
    _pack = _this select 1;
    _pack params ["_obj", "_objID"];
    [_obj,_objID] call dmd_fnc_persistObjDelete;
};

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

"dmd_save_bank" addPublicVariableEventHandler {
	_pack = _this select 1;
	_pack params ["_uid", "_amt"];
	[_uid, _amt] call dmd_fnc_bank_update;
};

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