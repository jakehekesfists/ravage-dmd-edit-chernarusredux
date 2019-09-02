/* -----------------------------------
    File: fn_missionVehicleSetup.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_pos", "_class", "_paradrop"];

private _veh = _class createVehicle [0,0,0];
_veh allowDamage false;
_veh enableDynamicSimulation true; 
[_veh] call dmd_fnc_cleanLootCrate; 	// empty the gear
_veh setFuel 0.75;
_veh setVariable ["rvg_owned", true, true];			// prevent ravage deleting the vehicle
_veh setVariable ["R3F_LOG_disabled", true, true];	// disable logistics. will be enabled once a player looks at the vehicle. 

if (_paradrop) then {
	_pos set [2,150];
	_veh setPosATL _pos;
	_veh call dmd_fnc_KK_vehicleParadrop;
} else {
	_pos = [_pos, 1, 100, 1, 0, 999, 0, _class ] call dmd_fnc_findSafePos;
	_veh setPosATL _pos; 
};

[_veh] spawn {
	params ["_veh"];
	waitUntil { sleep 1; if (isTouchingGround _veh) exitWith { true }; false };
	_veh allowDamage true; 
};