/* -----------------------------------
    File: fn_bank_update.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
    ["_uid","error"],
    "_amount"
];
if (_uid isEqualTo "error") exitWith { diag_log __FILE__ + "ERROR: NO UID SUPPLIED"; };
_inidbiBank = ["new", "DMD_BANK_ACCOUNTS"] call OO_INIDBI;
["write", [_uid, "Balance", _amount]] call _inidbiBank;