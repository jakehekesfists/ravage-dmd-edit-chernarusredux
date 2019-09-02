/* -----------------------------------
    File: fn_cleanUnit.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_unit"];
_unit setUnitLoadout (configFile >> "EmptyLoadout");		// Strip unit of everything (after Arma 3 v1.93)
true