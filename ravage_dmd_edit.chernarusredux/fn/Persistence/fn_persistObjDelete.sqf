/* -----------------------------------
    File: fn_persistObjDelete.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_obj", "_objid"];
private _inidbi = ["new", "Object_DB"] call OO_INIDBI;
private _found = ["read", ["Objects", _objID, []]] call _inidbi;

if !(_found isEqualTo []) then { ["deleteKey", ["Objects", _objID]] call _inidbi; };

{ _obj removeAllMPEventHandlers _x; } forEach [ "MPKilled" ];
{ _obj removeAllEventHandlers _x; } forEach [ "ContainerClosed", "Deleted", "Dammaged" ];
if (!isNull _obj) then { deleteVehicle _obj; };