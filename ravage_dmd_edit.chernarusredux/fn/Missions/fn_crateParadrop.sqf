/*
	File: fn_crateParadrop.sqf
	Author: JakeHekesFists[DMD]

	based on Killzone Kids Epic Armor Drop script.
*/
params [
    ["_crate", objNull]
];

if (isNull _crate) exitWith { diag_log __FILE__ + "ERROR: NO CRATE"; };
private _cratePos = getPos _crate;

private _para = createVehicle ["B_parachute_02_F", _cratePos, [], 0, "FLY"];
_para setDir (getDir _crate);
_para setPos _cratePos;
_crate attachTo [_para, [0,0,-2]];

0 = [_crate, _para] spawn {
	params ["_crate", "_para"];
	waitUntil {getPos _crate select 2 < 4};
	private _vel = velocity _crate;
	detach _crate;
	_crate setVelocity _vel;
	missionNamespace setVariable ["#FX", [_crate, _vel select 2]];
	publicVariable "#FX";
	playSound3D [ "a3\sounds_f\weapons\Flare_Gun\flaregun_1_shoot.wss", _crate ];
	detach _para;
	_para disableCollisionWith _crate;
	private _time = time + 5;
	waitUntil {time > _time};
	if (!isNull _para) then { deleteVehicle _para; };
};