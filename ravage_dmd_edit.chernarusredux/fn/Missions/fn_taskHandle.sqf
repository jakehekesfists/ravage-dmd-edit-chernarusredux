/* -----------------------------------
    File: fn_taskHandle.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
	"_taskPosition",
	"_taskTitle",
	"_taskDescription",
	"_taskState",
	["_taskIcon", "attack"]
];
_taskID = format["Task_%1",_taskTitle];
if ([_taskID] call BIS_fnc_taskExists) then { 
	[_taskID,[_taskDescription, _taskTitle, ""]] call BIS_fnc_taskSetDescription;
} else {
	[ west, [_taskID], [_taskDescription, _taskTitle, ""], _taskPosition, 1, 1, false, _taskIcon, false ] call BIS_fnc_taskCreate;
};
[_taskID, _taskState, false] spawn BIS_fnc_taskSetState;
true