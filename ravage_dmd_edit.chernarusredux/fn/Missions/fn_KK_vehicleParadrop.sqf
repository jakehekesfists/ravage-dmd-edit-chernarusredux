/*
	File: fn_KK_vehicleParadrop.sqf
	Adapted from KillzoneKids epic armour drop script.
	http://killzonekid.com/arma-scripting-tutorials-epic-armour-drop/
*/
private _class = "B_parachute_02_F";
private _para = createVehicle [_class, [0,0,0], [], 0, "FLY"];
_para setDir getDir _this;
_para setPos getPos _this;
private _paras =  [_para];
_this attachTo [_para, [0,2,0]];
{
	private _p = createVehicle [_class, [0,0,0], [], 0, "FLY"];
	_paras set [count _paras, _p];
	_p attachTo [_para, [0,0,0]];
	_p setVectorUp _x;
} count [
	[0.5,0.4,0.6],[-0.5,0.4,0.6],[0.5,-0.4,0.6],[-0.5,-0.4,0.6]
];
0 = [_this, _paras] spawn {
	params ["_veh", "_array"];
	waitUntil {getPos _veh select 2 < 4};
	private _vel = velocity _veh;
	detach _veh;
	_veh setVelocity _vel;
	missionNamespace setVariable ["#FX", [_veh, _vel select 2]];
	publicVariable "#FX";
	playSound3D [ "a3\sounds_f\weapons\Flare_Gun\flaregun_1_shoot.wss", _veh ];
	{ detach _x; _x disableCollisionWith _veh; } count _array;
	private _time = time + 5;
	waitUntil {time > _time};
	{ if (!isNull _x) then {deleteVehicle _x}; } count _array;
	_veh enableSimulationGlobal true;
	_veh allowDamage true; 
};