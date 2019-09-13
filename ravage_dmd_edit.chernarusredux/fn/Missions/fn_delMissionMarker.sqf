/* -----------------------------------
    File: fn_delMissionMarker.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
    ["_markerArray", []],
    ["_delay", 300]
];
if (_markerArray isEqualTo []) exitWith {};
{ _x setMarkerColor "ColorBlack"; _x setMarkerAlpha 0.35; } forEach _markerArray;
sleep _delay;
{ deleteMarker _x; } forEach _markerArray;