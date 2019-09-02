/* -----------------------------------
    File: destroyCrate.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_target", "_caller", "_actionId", "_arguments"];

[_caller, "ApanPercMstpSnonWnonDnon_G02"] remoteExec ["switchMove", 0];
titleText [(localize "STR_CLI_DESTROYCRATE"), "PLAIN DOWN"];
sleep 2;
[_caller, ""] remoteExec ["switchMove", 0];

waitUntil {
	sleep 1;
	private _inflame = false;
	if ((_caller distance2D _target) > 3) then { _inflame = true; };
	if (_inflame) exitWith { true };
	false
};

private _fire = [(getPos _target), "largeFire", 15] spawn dmd_fnc_createFire;
sleep 15;
_target setDamage 1;
deleteVehicle _target;