/* -----------------------------------
    File: fn_safeZone.sqf 
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
( [	[ "ServerSettings", "safeZones" ], [ "positions" ] ] call dmd_fnc_getMissionCfg ) params [ "_sz" ];

fn_enter = {
	params ["_pos"];
	hint (localize "STR_CLI_SZ_ENTER");
	protThread = true;
	canspawnzeds = false;
	waitUntil {
		(vehicle player) allowDamage false;
		sleep 2;
		if (!inSafeZone) exitWith {true};
		false
	};
	[] call fn_exit; 
};

fn_exit = {
	hint (localize "STR_CLI_SZ_LEAVE");
	protThread = false;
	canspawnzeds = true;
	inSafeZone = false;
	(vehicle player) allowDamage true;
};

[_sz] spawn {
	params ["_sz"];
	inSafeZone = false; 
	protThread = false;

	for "_i" from 0 to 1 step 0 do {
		{
			_x params ["_pos", "_rad"];
			_dist = player distance2D _pos;
			if (_dist <= _rad) then {
				inSafeZone = true;
				_za = _pos nearEntities ["zombie", _rad];
				{ deleteVehicle _x; } count _za;
			} else { inSafeZone = false; };
		} forEach _sz; 
		if (inSafeZone) then { if (!protThread) then { [] spawn fn_enter; }; };
		sleep 2;
	};
};