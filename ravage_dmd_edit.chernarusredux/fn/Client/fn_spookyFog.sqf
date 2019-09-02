/* -----------------------------------
    File: fn_spookyFog.sqf
    Author:  JakeHekesFists[DMD] 2019

	Inspired by a Fog Script for Exile Mod.
	Credit can not be given because the forums are gone.
-------------------------------------- */
private _obj = player; 
if !(isNull objectParent player) then { _obj = (vehicle player); };
private _pos = position _obj;
private _fogs = [];

for "_i" from 1 to 3 do {
	private _fog = "#particlesource" createVehicleLocal _pos;
	_fog setParticleParams [
		["\A3\Data_F\ParticleEffects\Universal\universal.p3d" ,16,12,13,0],"","Billboard",1,10,
		[0,0,-6],[0,0,0],1,1.275,1,0,
		[7,6],[[1,1,1,0],[1,1,1,0.04],[1,1,1,0]],[1000],1,0,"","",_obj
	];
	_fog setParticleRandom [3,[55,55,0.2],[0,0,-0.1],2,0.45,[0,0,0,0.1],0,0];
	_fog setParticleCircle [0.001,[0,0,-0.12]];
	_fog setDropInterval 0.01;
	sleep 0.1;
	_fogs pushBack _fog;
};
_this setVariable ["DMDPlayerFog", floor time + 5];

[_fogs] spawn {
	params ["_fogs"];
	private _wait = time + 120;
	waitUntil {sleep 0.5; time > _wait};
	{ deleteVehicle _x; } forEach _fogs;
};