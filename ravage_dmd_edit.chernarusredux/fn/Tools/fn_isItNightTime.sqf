/* -----------------------------------
    File: fn_isItNightTime.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
private _return = false; 
(date call BIS_fnc_sunriseSunsetTime) params ["_sunrise", "_sunset"];
// if current time is after sunset OR before sunrise OR in polar winter. its night time. 
if ((dayTime > _sunset) || (dayTime < _sunrise) || (_sunrise isEqualTo -1)) then { _return = true; };
_return