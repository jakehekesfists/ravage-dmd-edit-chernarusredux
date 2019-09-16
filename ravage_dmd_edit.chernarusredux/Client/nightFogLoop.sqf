/* -----------------------------------
    File: nightFogLoop.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
waitUntil {sleep 1; !isNil "DMD_FOG_DAYS"};											// server sets array of days to use in serverScripts.sqf
_switch = "spookyNightFog" call BIS_fnc_getParamValue;	
if (_switch isEqualTo 0) exitWith {};												// fog turned off by server
if ((_switch isEqualTo 2) && ((count DMD_FOG_DAYS) isEqualTo 0)) exitWith {};		// fog set to some days, but days array is empty. exit, dont run a useless loop. 

private _fogHours = [0,1,2,3,23];		// fog from 11pm - 4am 
private _wait = time + 120;				// 120s delay. dont change

// fog loop
for "_i" from 0 to 1 step 0 do {
	if (((date select 2) in DMD_FOG_DAYS) || (_switch isEqualTo 1)) then {
		if ((date select 3) in _fogHours) then {
			if (player getVariable ["DMDPlayerFog", -1] < time) then {
				player setVariable ["DMDPlayerFog", floor time + 5];
				player spawn dmd_fnc_spookyFog;
			};
		};
	};
	waitUntil {sleep 1; time > _wait};
};