/* -----------------------------------
    File: fn_safeZone.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
( [	[ "ServerSettings", "worldSettings", worldName ], [ "safeZones" ] ] call dmd_fnc_getMissionCfg ) params [ "_sz" ];

fn_enter = {
	params ["_trigger"];
	private _trigVars = _trigger getVariable "params";
	_trigVars params ["_pos","_rad"];
	insafezone = true;

	titleText [(localize "STR_CLI_SZ_ENTER"), "PLAIN DOWN"];
	canspawnzeds = false;
	// loop while player in safezone
	for "_i" from 0 to 1 step 0 do {
		// check for nearby zombies and delete them.
		private _za = _pos nearEntities ["zombie", _rad];
		if !(_za isEqualTo []) then { { deleteVehicle _x; } count _za; };
		// give player god mode
		(vehicle player) allowDamage false;
		// if fn_exit gets called, insafezone sets to false and we exit the loop
		if !(insafezone) exitWith { _i = 2; };
		sleep 2;
	};
};

fn_exit = {
	titleText [(localize "STR_CLI_SZ_LEAVE"), "PLAIN DOWN"];
	canspawnzeds = true;
	insafezone = false;
	(vehicle player) allowDamage true;
};

// just create triggers at each safezone pos instead of running a loop.
{
	_x params ["_pos", "_rad"];
	private _sztrg = createTrigger ["EmptyDetector", _pos];
	// save the size/radius of trigger to variable. it will be used in fn_enter
	_sztrg setVariable ["params",_x];
	// trigger conditions
	_sztrg setTriggerArea [_rad, _rad, 0, false];
	_sztrg setTriggerActivation ["ANYPLAYER", "PRESENT", true];
	_sztrg setTriggerStatements ["(vehicle player) in thisList","[thisTrigger] spawn fn_enter","[] call fn_exit"];
} forEach _sz;