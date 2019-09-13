/* -----------------------------------
    File: fn_hedgehogs.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
	["_pos",[]],
	["_rad", 150]
];
if (_pos isEqualTo []) exitWith { diag_log __FILE__ + "ERROR: NO POS"; };
private _objects = [];
{
    private _radius = _x;
    for '_y' from 0 to 360 step (270 / _radius)*2 do {
    	private _location = [(_pos select 0) + ((cos _y) * _radius), (_pos select 1) + ((sin _y) * _radius),0.1];
    	private _dir = ((_pos select 0) - (_location select 0)) atan2 ((_pos select 1) - (_location select 1));
    	private _object = createVehicle ['Land_ConcreteHedgehog_01_F', _location, [], 0, 'CAN_COLLIDE'];
    	_object setDir _dir;
    	_objects pushback _object;
    };
} forEach [_rad, (_rad + 10), (_rad - 10)];
_objects