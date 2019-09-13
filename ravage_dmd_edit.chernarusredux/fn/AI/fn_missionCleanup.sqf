/* -----------------------------------
    File: fn_missionCleanup.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
    ["_markers",[]],
    ["_allUnits",[]],
    ["_buildings",[]],
    ["_delay",300]
];
_buildings append _allUnits;
if !(_markers isEqualTo []) then { [_markers, _delay] spawn dmd_fnc_delMissionMarker; };
if !(_buildings isEqualTo []) then { [_delay, _buildings, true] spawn dmd_fnc_delayDelete; };