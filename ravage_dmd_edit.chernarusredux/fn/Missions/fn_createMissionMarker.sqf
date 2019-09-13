/* -----------------------------------
    File: fn_createMissionMarker.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
    ["_position",[]],
    ["_color","ColorOPFOR"],
    ["_missionName","Mission"],
    ["_outerSize",250],
    ["_iconType", "mil_dot"]
];

if (_position isEqualTo []) exitWith { diag_log __FILE__ + "ERROR: NO POSITION"; };

private _mrkrC = createMarker [ format [ "DMDc_%1_%2", _missionName, random 9001 ], _position ];
_mrkrC setMarkerShape "ELLIPSE";
_mrkrC setMarkerSize [ _outerSize, _outerSize ];
_mrkrC setMarkerColor _color;
_mrkrC setMarkerBrush "SolidBorder";
_mrkrC setMarkerAlpha 0.5;

private _mrkr = createMarker [ format [ "DMDi_%1_%2", _missionName, random 9001 ], _position ];
_mrkr setMarkerShape "ICON";
_mrkr setMarkerType _iconType;
_mrkr setMarkerSize [ 0.85, 0.85 ];
_mrkr setMarkerColor "ColorWhite";
_mrkr setMarkerText format ["%1", _missionName];

[_mrkr, _mrkrC]