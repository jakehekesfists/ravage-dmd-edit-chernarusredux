/* -----------------------------------
    File: fn_findLocName.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_pos"];
private _nLc = nearestLocations [_pos, ["NameCityCapital","NameCity","NameVillage","Strategic","StrongpointArea","NameLocal","Hill"],1000];
private _ret = "Wilderness";
if (count _nLc > 0) then {_ret = text (_nLc select 0)};
_ret