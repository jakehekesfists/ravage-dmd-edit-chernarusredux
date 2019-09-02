/* -----------------------------------
    File: timeCycle.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
( [	[ "ServerSettings", "timeCycle" ], [ "dayMultiplier", "nightMultiplier" ] ] call dmd_fnc_getMissionCfg ) params [ "_day", "_night" ];

// chernarus redux daylight settings - from editor
fn_getDaylightHours = {
	_ret = call {
		private _month = (date select 1);
		if (_month in [2,3,10,11]) exitWith { [7,17] };
		if (_month in [4,5,8,9]) exitWith { [6,18] };
		if (_month in [6,7]) exitWith { [5,19] };
		if (_month in [1,12]) exitWith { [8,16] };
	};
	_ret	
};

private _startingMonth = (date select 1);
private _seasonal = (call fn_getDaylightHours);

for "_i" from 0 to 1 step 0 do {
	// if the month changes while server running. update the daylight hours.
	if !(_startingMonth isEqualTo (date select 1)) then { _seasonal = call fn_getDaylightHours; _startingMonth = (date select 1); };
	// set the timeMultiplier
	if ((dayTime > (_seasonal select 1)) || (dayTime < (_seasonal select 0))) then { setTimeMultiplier _night; } else { setTimeMultiplier _day; };
	sleep 5;
};