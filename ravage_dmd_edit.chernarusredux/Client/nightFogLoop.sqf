/* -----------------------------------
    File: nightFogLoop.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
( [	[ "ServerSettings" ], [ "enableFog", "fogHours", "fogDays" ] ] call dmd_fnc_getMissionCfg ) params [ "_enable", "_fogHours","_fogDays" ];
if (_enable isEqualTo 0) exitWith {};

private _wait = time + 120;
// fog loop
for "_i" from 0 to 1 step 0 do {
	if ((date select 2) in _fogDays) then {
		if ((date select 3) in _fogHours) then {
			if (player getVariable ["DMDPlayerFog", -1] < time) then {
				player setVariable ["DMDPlayerFog", floor time + 5];
				player spawn dmd_fnc_spookyFog;
			};
		};
	};
	waitUntil {sleep 1; time > _wait};
};