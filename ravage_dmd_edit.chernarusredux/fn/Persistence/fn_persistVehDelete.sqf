/* -----------------------------------
    File: fn_persistVehDelete.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_veh", "_vehid"];

// DEFINE THE FILENAMES
([] call dmd_fnc_getDBNames) params ["_playerDB", "_objectDB", "_vehicleDB", "_settingsDB"];

private _inidbi = ["new", _vehicleDB] call OO_INIDBI;
private _found = ["read", ["Vehicles", _vehID, []]] call _inidbi;
if !(_found isEqualTo []) then { ["deleteKey", ["Vehicles", _vehID]] call _inidbi; };

{ _veh removeAllMPEventHandlers _x; } forEach [ "MPKilled" ];
{ _veh removeAllEventHandlers _x; } forEach [ "ContainerClosed", "Deleted", "Dammaged", "GetOut" ];

if (!isNull _veh) then { [_veh] spawn { params ["_veh"]; sleep 300; deleteVehicle _veh; }; };