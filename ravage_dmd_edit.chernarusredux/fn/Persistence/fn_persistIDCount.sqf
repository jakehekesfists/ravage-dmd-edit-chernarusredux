/* -----------------------------------
    File: fn_persistIDCount.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_getSet", "_value", "_type"];

// DEFINE THE FILENAMES
([] call dmd_fnc_getDBNames) params ["_playerDB", "_objectDB", "_vehicleDB", "_settingsDB"];

switch (_type) do {

	case "object": {
		private _inidbObjectDB = ["new", _objectDB] call OO_INIDBI;

		if (_getSet isEqualTo "get") then {
			private _databasefind = "exists" call _inidbObjectDB;
			if (!_databasefind) then { ["write", ["ObjectID", "Count", 0.001]] call _inidbObjectDB; };
			private _currObjID = ["read", ["ObjectID", "Count", 0]] call _inidbObjectDB;
			if ((_currObjID) >= 999900) then { _currObjID = 0.001; };		// reset the count if it gets too high because scientific notation may cause errors
			dmd_objID = _currObjID;
			publicVariable "dmd_objID";
		};

		if (_getSet isEqualTo "set") then {
			["write", ["ObjectID", "Count", _value]] call _inidbObjectDB;
			dmd_objID = _value;
			publicVariable "dmd_objID";
		};
	};

	case "vehicle": {
		private _inidbVehDB = ["new", _vehicleDB] call OO_INIDBI;

		if (_getSet isEqualTo "get") then {
			private _vdbFind = "exists" call _inidbVehDB;
			if (!_vdbFind) then { ["write", ["VehicleID", "Count", 0.001]] call _inidbVehDB; };
			private _currVehID = ["read", ["VehicleID", "Count", 0]] call _inidbVehDB;
			if ((_currVehID) >= 999900) then { _currVehID = 0.001; };		// reset the count if it gets too high because scientific notation may cause errors
			dmd_vehID = _currVehID;
			publicVariable "dmd_vehID";
		};

		if (_getSet isEqualTo "set") then {
			["write", ["VehicleID", "Count", _value]] call _inidbVehDB;
			dmd_vehID = _value;
			publicVariable "dmd_vehID";
		};
	};
};