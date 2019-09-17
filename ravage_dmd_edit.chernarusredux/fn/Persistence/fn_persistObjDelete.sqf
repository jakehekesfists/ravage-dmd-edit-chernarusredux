/* -----------------------------------
    File: fn_persistObjDelete.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_obj", "_objid"];
private _objfilename = "Object_DB";
if !((toLower worldName) isEqualTo "chernarusredux") then { _objfilename = format["%1_%2","Object_DB",worldName]; };

private _inidbi = ["new", _objfilename] call OO_INIDBI;
private _found = ["read", ["Objects", _objID, []]] call _inidbi;

if !(_found isEqualTo []) then { ["deleteKey", ["Objects", _objID]] call _inidbi; };

{ _obj removeAllMPEventHandlers _x; } forEach [ "MPKilled" ];
{ _obj removeAllEventHandlers _x; } forEach [ "ContainerClosed", "Deleted", "Dammaged" ];
if (!isNull _obj) then { deleteVehicle _obj; };