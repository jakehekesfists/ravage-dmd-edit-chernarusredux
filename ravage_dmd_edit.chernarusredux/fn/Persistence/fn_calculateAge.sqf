/* -----------------------------------
    File: fn_calculateAge.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_currTime", "_lastModified"];
private _isOk = true; 
([[ "ServerSettings" ],[ "cleanupDays" ]] call dmd_fnc_getMissionCfg ) params ["_days"];
_currTime resize 5;
_lastModified resize 5;
private _float00 = dateToNumber _currTime; 
private _float01 = dateToNumber _lastModified; 
private _oneDay = (1 / 365);
private _xDays = (_days * _oneDay);
private _difference = (_float00 - _float01);
if (_difference >= _xDays) then { _isOk = false; };

_isOk