/* -----------------------------------
    File: locationSpam.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
waitUntil {
	sleep 0.1;
	if (!(isNull (findDisplay 46)) && (missionNamespace getVariable "DMD_Respawned")) exitWith { true };
	false
};

sleep 5;

private _ln1 = [(getPosATL player)] call dmd_fnc_findLocName;
[_ln1] spawn dmd_fnc_locationSpam;

for "_i" from 0 to 1 step 0 do {
	uiSleep 120;
	private _posOrig = (getPosATL player);
	waitUntil { sleep 5;
		_ln2 = [(getPosATL player)] call dmd_fnc_findLocName;
		if ((_ln1 != _ln2) && ((player distance _posOrig) >= 650)) exitWith { _ln1 = _ln2; true };
		false
	};
	[_ln1] spawn dmd_fnc_locationSpam;
};