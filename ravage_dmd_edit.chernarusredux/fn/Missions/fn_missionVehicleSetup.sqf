/* -----------------------------------
    File: fn_missionVehicleSetup.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
	["_pos",[]],
	["_class",""],
	["_paradrop", false]
];

if (_pos isEqualTo []) exitWith { diag_log __FILE__ + "ERROR: NO POS"; };
if (_class isEqualTo "") exitWith { diag_log __FILE__ + "ERROR: NO CLASS SUPPLIED"; };

private _veh = _class createVehicle [(_pos select 0), (_pos select 1), 2000];
_veh allowDamage false;
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

_veh allowDamage true;
_veh enableSimulationGlobal true;