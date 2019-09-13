/* -----------------------------------
    File: fn_delayDelete.sqf
    Author:  JakeHekesFists[DMD] 2019
    
    [300, [array of objects to delete], true] spawn dmd_fnc_delayDelete;
    will wait 5 mins and make sure no player within 300 meters before deleting every object in the array.
-------------------------------------- */
params [
    ["_sleep", 60, [0]],
    ["_deleteMe", [], [[],objNull]],
    ["_doNearPlayerCheck", false, [false]]
];

if ((typeName _deleteMe) isEqualTo "OBJECT") then { _deleteMe = [_deleteMe]; };
if ((count _deleteMe) isEqualTo 0) exitWith {};     // nothing to delete. exit
private _endTime = diag_tickTime + _sleep;
private _nearby = false;

waitUntil {
    sleep 0.5;
    if (_doNearPlayerCheck) then { _nearby = [(getPos (_deleteMe select 0)), 300] call dmd_fnc_playerNear; };
	if ((diag_tickTime >= _endTime) && !(_nearby)) exitWith { true };
    false
};

{ deleteVehicle _x; } count _deleteMe;