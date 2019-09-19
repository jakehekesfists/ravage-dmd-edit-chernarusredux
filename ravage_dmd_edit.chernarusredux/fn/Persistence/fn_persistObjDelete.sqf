/* -----------------------------------
    File: fn_persistObjDelete.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_obj", "_objid"];

// DEFINE THE FILENAMES
([] call dmd_fnc_getDBNames) params ["_playerDB", "_objectDB", "_vehicleDB", "_settingsDB"];

private _inidbi = ["new", _objectDB] call OO_INIDBI;
private _found = ["read", ["Objects", _objID, []]] call _inidbi;

if !(_found isEqualTo []) then { ["deleteKey", ["Objects", _objID]] call _inidbi; };

{ _obj removeAllMPEventHandlers _x; } forEach [ "MPKilled" ];
{ _obj removeAllEventHandlers _x; } forEach [ "ContainerClosed", "Deleted", "Dammaged" ];
if (!isNull _obj) then { deleteVehicle _obj; };