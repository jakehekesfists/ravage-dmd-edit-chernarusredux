/* -----------------------------------
    File: timeCycle.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */

// config moved to params so regular players can change it for themselves in lobby - if running on dedi. just change the default value in dmd_config.hpp
private _ngtVal = "nighttimeMultiplier" call BIS_fnc_getParamValue;
private _dayVal = "daytimeMultiplier" call BIS_fnc_getParamValue;

// INFINITE LOOP TO CONTINUOUSLY CHECK DAYLIGHT CONDITIONS AND SET TIME ACCEL ACCORDINGLY
for "_i" from 0 to 1 step 0 do {

    private _nightTime = call dmd_fnc_isItNightTime;
    private _val = _dayVal; 
    if (_nightTime) then { _val = _ngtVal; };
    setTimeMultiplier _val;

    sleep 30;
};