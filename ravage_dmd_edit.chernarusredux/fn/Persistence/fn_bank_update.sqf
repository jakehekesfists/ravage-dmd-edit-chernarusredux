/* -----------------------------------
    File: fn_bank_update.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_uid", "_amount"];
_inidbiBank = ["new", "DMD_BANK_ACCOUNTS"] call OO_INIDBI;
["write", [_uid, "Balance", _amount]] call _inidbiBank; 