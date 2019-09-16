/* -----------------------------------
    File: timeCycle.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
// config moved to params so regular players can change it for themselves in lobby - if running on dedi. just change the default value in dmd_config.hpp
_day = "daytimeMultiplier" call BIS_fnc_getParamValue;
_night = "nighttimeMultiplier" call BIS_fnc_getParamValue;

// chernarus redux daylight settings - from editor
fn_getDaylightHours = {
	_ret = call {
		private _month = (date select 1);
		if (_month in [2,3,10,11]) exitWith { [7,17] };
		if (_month in [4,5,8,9]) exitWith { [6,18] };
		if (_month in [6,7]) exitWith { [5,19] };
		if (_month in [1,12]) exitWith { [8,16] };
		[8,20]
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