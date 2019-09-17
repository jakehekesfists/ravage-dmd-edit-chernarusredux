/* -----------------------------------
    File: fn_persistVehDelete.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_veh", "_vehid"];

private _vehfilename = "Vehicle_DB";
if !((toLower worldName) isEqualTo "chernarusredux") then { _vehfilename = format["%1_%2","Vehicle_DB",worldName]; };

private _inidbi = ["new", _vehfilename] call OO_INIDBI;
private _found = ["read", ["Vehicles", _vehID, []]] call _inidbi;
if !(_found isEqualTo []) then { ["deleteKey", ["Vehicles", _vehID]] call _inidbi; };

{ _veh removeAllMPEventHandlers _x; } forEach [ "MPKilled" ];
{ _veh removeAllEventHandlers _x; } forEach [ "ContainerClosed", "Deleted", "Dammaged", "GetOut" ];

if (!isNull _veh) then { [_veh] spawn { params ["_veh"]; sleep 300; deleteVehicle _veh; }; };