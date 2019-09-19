/* -----------------------------------
    File: fn_cleanLootCrate.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [["_box",objNull]];
if (isNull _box) exitWith { diag_log __FILE__ + "ERROR: NULL OBJECT"; };
clearMagazineCargoGlobal _box;
clearWeaponCargoGlobal _box;
clearItemCargoGlobal _box;
clearBackPackCargoGlobal _box;