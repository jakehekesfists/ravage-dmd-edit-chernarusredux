/* -----------------------------------
    File: fn_delMissionMarker.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_markerArray"];
sleep 20;
{ _x setMarkerColor "ColorBlack"; _x setMarkerAlpha 0.35; } forEach _markerArray;
sleep 300;
{ deleteMarker _x; } forEach _markerArray;