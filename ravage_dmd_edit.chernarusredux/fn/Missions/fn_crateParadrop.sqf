/*
	File: fn_crateParadrop.sqf
	Author: JakeHekesFists[DMD]

	based on Killzone Kids Epic Armor Drop script.
*/
params ["_crate"];
([[ "ServerSettings" ],[ "smokeShellColours" ]] call dmd_fnc_getMissionCfg ) params ["_ssCol"];
private _cratePos = getPos _crate; 

private _para = createVehicle ["B_parachute_02_F", _cratePos, [], 0, "FLY"];
_para setDir (getDir _crate);
_para setPos _cratePos;
private _allObjs = [_para];
_crate attachTo [_para, [0,0,-2]];
{
	private _smCol = (selectRandom _ssCol);
	_smk = _smCol createVehicle _cratePos;
	_allObjs set [count _allObjs, _smk];
	_smk attachTo [_crate, _x];
} count [
	[0,0,0],[-1,0,0],[1,0,0]
];

0 = [_crate, _allObjs] spawn {
	params ["_crate", "_allObjs"];
	waitUntil {getPos _crate select 2 < 4};
	private _vel = velocity _crate;
	detach _crate;
	_crate setVelocity _vel;
	missionNamespace setVariable ["#FX", [_crate, _vel select 2]];
	publicVariable "#FX";
	playSound3D [ "a3\sounds_f\weapons\Flare_Gun\flaregun_1_shoot.wss", _crate ];
	{ detach _x; _x disableCollisionWith _crate; } count _allObjs;
	private _time = time + 5;
	waitUntil {time > _time};
	{ if (!isNull _x) then {deleteVehicle _x}; } count _allObjs;
};