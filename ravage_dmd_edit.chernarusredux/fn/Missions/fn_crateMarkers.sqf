/* -----------------------------------
    File: fn_crateMarkers.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
    ["_crate",objNull],
    ["_position",[]]
];
if (isNull _crate) exitWith { diag_log __FILE__ + "ERROR: NO CRATE"; };
if (_position isEqualTo []) then { _position = getPosATL _crate; };
([[ "ServerSettings" ],[ "smokeShellColours" ]] call dmd_fnc_getMissionCfg ) params [
    ["_ssCol", ["SmokeShellPurple"]]
];

if ( sunOrMoon <= 0.95 ) then {
	private _lightColor = selectRandom [[[0, 230, 0],[204/255, 1, 204/255]], [[1, 0, 170],[1, 204/255, 238/255]], [[1, 102/255, 0],[1, 224/255, 204/255]], [[0, 204/255, 1],[204/255, 245/255, 1]], [[179/255, 0, 179/255],[1, 230, 1]], [[1, 51/255, 0],[1, 235/255, 230]], [[1, 1, 0],[1, 1, 204/255]], [[26/255, 83/255, 1],[179/255, 1, 1]] ];
	private _boxLights = [_crate, _position, (_lightColor select 0), (_lightColor select 1)];
	{ dmd_crate_marker_lights = _boxLights; ( owner _x ) publicVariableClient "dmd_crate_marker_lights"; } forEach allPlayers;
} else {
	( createVehicle [ (selectRandom _ssCol), getPos _crate, [], 0, "CAN_COLLIDE" ] ) attachTo [ _crate, [ 0, 0, 0 ] ];
};