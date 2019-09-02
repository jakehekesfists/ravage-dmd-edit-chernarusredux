/* -----------------------------------
    File: fn_persistObjLoadAll.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */

// LOAD BASE OBJECTS
_inidbiObjDB = ["new", "Object_DB"] call OO_INIDBI;
_allObjectIDs = ["getKeys", "Objects"] call _inidbiObjDB;
_sysTime = "getTimeStamp" call _inidbiObjDB;

if (count _allObjectIDs > 0) then {
    {
        private _objPacket = ["read", ["Objects", _x, []]] call _inidbiObjDB;
        if !(_objPacket isEqualTo []) then {
            [_objPacket, _sysTime] call dmd_fnc_persistObjCreate;
        };
    } forEach _allObjectIDs;
};

// LOAD VEHICLES
_inidbiVehDB = ["new", "Vehicle_DB"] call OO_INIDBI;
_allVehicleIDs = ["getKeys", "Vehicles"] call _inidbiVehDB;

if (count _allVehicleIDs > 0) then {
    {
        private _vehPacket = ["read", ["Vehicles", _x, []]] call _inidbiVehDB;
        if !(_vehPacket isEqualTo []) then {
            [_vehPacket, _sysTime] call dmd_fnc_persistVehCreate;
        };
    } forEach _allVehicleIDs;
};