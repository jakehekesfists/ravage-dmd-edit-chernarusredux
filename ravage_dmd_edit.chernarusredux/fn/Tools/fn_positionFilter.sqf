/* -----------------------------------
    File: fn_positionFilter.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_testPos"];
([[ "ServerSettings", "worldSettings", worldName],[ "exclusionZones", "exclusionPos", "exclusionDist", "playerDist", "safeZones" ]] call dmd_fnc_getMissionCfg ) params ["_excl", "_exPos","_exDst", "_plyDist", "_sfZon"];

private _foundBad = false;
try {
    // Make sure its not near a player
    private _plBad = false;
    {
        private _pdst = _x distance2d _testPos;
        if (_pdst < _plyDist) then { _plBad = true; };
    } forEach playableUnits;
    if (_plBad) then { throw true; };
    
    // Check Locations
    private _lcBad = false;
    private _nrLocs = nearestLocations [_testPos, ["NameCity", "NameCityCapital", "NameVillage"], _exDst];
    if ((count _nrLocs) > 0) then { { if ((text _x) in _excl) then { _lcBad = true; }; } forEach _nrLocs; };
    if (_lcBad) then { throw true; };
    
    // Check Postions
    private _psBad = false;
    { _exPos pushBack [(_x select 0), _exDst]; } forEach _sfZon;
    if ((count _exPos) > 0) then {
        {
            private _dst = (_x select 0) distance2d _testPos;
            if (_dst < (_x select 1)) then { _psBad = true; };
        } forEach _exPos;
    };
    if (_psBad) then { throw true; };
    
    throw false;
} catch {
    _foundBad = _exception;
};

_foundBad