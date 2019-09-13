/* -----------------------------------
    File: fn_persistQuery.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
if (!isNil "dmd_db_check") then { dmd_db_check = nil; };
sleep 0.5;
if (isNil "dmd_db_check") then {
	dmd_db_check = [clientOwner, profileName, (getPlayerUID player)];
	publicVariableServer "dmd_db_check";
};