/* -----------------------------------
    File: fn_safeZoneMarkers.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
( [	[ "ServerSettings", "worldSettings", worldName ], [ "safeZones" ] ] call dmd_fnc_getMissionCfg ) params [ "_sz" ];

if (isServer) then {
	_texture =  "#(rgb,8,8,3)color(0,1,0.25,1)";
	{
		_x params ["_center", "_radius"];
		for '_y' from 0 to 360 step (270 / _radius)*2 do {
			_location = [(_center select 0) + ((cos _y) * _radius), (_center select 1) + ((sin _y) * _radius),0.1];
			_dir = ((_center select 0) - (_location select 0)) atan2 ((_center select 1) - (_location select 1));
			_object = createVehicle ['Sign_Sphere25cm_Geometry_F', _location, [], 0, 'CAN_COLLIDE'];
			_object setObjectTextureGlobal [0, _texture];
			_object setDir _dir;
		};
	} forEach _sz;
};