/* -----------------------------------
    File: fn_createFire.sqf
    Author:  JakeHekesFists[DMD] 2019

	Adapted from: https://forums.bohemia.net/forums/topic/140261-spawning-fire/?do=findComment&comment=2497630
-------------------------------------- */
params ["_pos", "_fireType", "_fireLife"];

_pos params ["_pX", "_pY", "_pZ"];
private _color = [1,0.85,0.6];
private _ambient = [1,0.3,0];
if (isNil "_fireLife") then { _fireLife = 30; } else { _fireLife };

private _fireParams = call {
	if (_fireType isEqualTo "largeFire") exitWith { ["BigDestructionFire", "BigDestructionSmoke", 1.0, 1600, [0,0,0,1.6]] };
	if (_fireType isEqualTo "medFire") exitWith { ["MediumDestructionFire", "MediumDestructionSmoke", 1.0, 1600, [0,0,0,2.0]] };
	if (_fireType isEqualTo "smlFire") exitWith { ["SmallDestructionFire", "SmallDestructionSmoke", 1.0, 200, [0,0,0,2.4]] };
};
_fireParams params ["_fire", "_smoke", "_brightness", "_intensity", "_attenuation"];

private _eFire = "#particlesource" createVehicle _pos;
_eFire setParticleClass _fire;
_eFire setPosATL _pos;

private _eSmoke = "#particlesource" createVehicle _pos;
_eSmoke setParticleClass _smoke;
_eSmoke setPosATL _pos;

//create lightsource
_pos set [2, (_pZ)+1];
private _light = "#lightpoint" createVehicle _pos;
_light setPosATL _pos;

_light setLightBrightness _brightness;
_light setLightColor _color;
_light setLightAmbient _ambient;
_light setLightIntensity _intensity;
_light setLightAttenuation _attenuation;
_light setLightDayLight false;

sleep _fireLife;
{ deleteVehicle _x; } forEach [_eFire,_eSmoke,_light];