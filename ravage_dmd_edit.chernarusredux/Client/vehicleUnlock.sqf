/* -----------------------------------
    File: vehicleUnlock.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_target", "_caller", "_actionId", "_arguments"];

_target setVehicleLock "UNLOCKED";
_target setVariable ["DMD_IsLocked", false, true];
_target setVariable ["R3F_LOG_disabled", false, true];