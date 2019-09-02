/* -----------------------------------
    File: fn_cleanLootCrate.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_box"];
clearMagazineCargoGlobal _box;
clearWeaponCargoGlobal _box;
clearItemCargoGlobal _box;
clearBackPackCargoGlobal _box;