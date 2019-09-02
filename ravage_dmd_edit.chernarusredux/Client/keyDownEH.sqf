/* -----------------------------------
    File: keyDownEH.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
// https://community.bistudio.com/wiki/DIK_KeyCodes	
#include "\a3\ui_f\hpp\definedikcodes.inc"
waituntil {!isnull (finddisplay 46)};

KEYBOARDEVENTS = (findDisplay 46) displayAddEventHandler ["KeyDown", {
	params ["_disp", "_key", "_shift", "_ctrl", "_alt"];
	if (_key == DIK_ESCAPE) then { if ((vehicle player) == player) then { [] call dmd_fnc_persistClientGetPlayerData; }; };		// ESC to Force Save (dont save in veh)
	if (_key in (actionKeys "GetOver")) then { [] call dmd_fnc_jumpScript; };													// Vault Key to Get Over
	if (_key == DIK_5) then { [] call dmd_fnc_earplugs; };																		// 5 for Earplugs

}];