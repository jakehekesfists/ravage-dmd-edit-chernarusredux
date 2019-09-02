/* -----------------------------------
    File: vehicleLock.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_target", "_caller", "_actionId", "_arguments"];

_target setVehicleLock "LOCKED";
_target setVariable ["DMD_IsLocked", true, true];
_target setVariable ["R3F_LOG_disabled", true, true];