/* -----------------------------------
    File: fn_missionCleanup.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_pos", "_markers", "_allUnits", "_buildings"];
[_markers] spawn dmd_fnc_delMissionMarker;
private _time = diag_tickTime;
private _endTime = _time + 300;
/*
	This script waits 300 seconds, and checks that there are no nearby players before cleanup
	This is to prevent people dying from falling off mission cleanup items
*/
waitUntil {
	sleep 5;
	private _nearby = [_pos, 300] call dmd_fnc_playerNear;
	if ((diag_tickTime >= _endTime) && !(_nearby)) exitWith { true };
	false 
};
{ deleteVehicle _x } forEach _buildings;
if !(_allUnits isEqualTo []) then {{_x setDamage 1;} forEach _allUnits;};		// kill any leftover AI that may have wandered off