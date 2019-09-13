/* -----------------------------------
    File: fn_earplugs.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
private _value = (player getVariable ["DMD_Earplugs", 0]);		// A3 returns default val if not set
private _earplugs = call {
	if (_value isEqualTo 0) exitWith { [1, 0.25, "STR_CLI_EAR_SEV"] };
	if (_value isEqualTo 1) exitWith { [2, 0.10, "STR_CLI_EAR_NIN"] };
	if (_value isEqualTo 2) exitWith { [0, 1, "STR_CLI_EAR_REM"] };
};
_earplugs params ["_nxtVal", "_fadesound", "_string"];

1 fadeSound _fadesound;
titleText [(localize _string), "PLAIN DOWN"];
player setVariable ["DMD_Earplugs", _nxtVal, true];