/* -----------------------------------
    File: refillJerry.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_target", "_caller", "_actionId", "_arguments"];

if !("rvg_hose" in magazines _caller) exitWith { titleText [(localize "STR_CLI_RJ_NOHOSE"), "PLAIN DOWN"]; };
if !("rvg_canisterFuel_Empty" in magazines _caller) exitWith { titleText [(localize "STR_CLI_RJ_NOJERRY"), "PLAIN DOWN"]; };

_caller playActionNow "medicStartRightSide";
sleep 1;
_sound = "fill_" + str(round(random 1));
[_caller, _sound] call rvg_fnc_say3dGlobal;
sleep 3;
if (random 10 > 5) then { 0 = [_caller, 10] call rvg_fnc_alertNearby; };
sleep 3;

_caller removeMagazine "rvg_canisterFuel_Empty";
_caller addMagazine ["rvg_canisterFuel",20];