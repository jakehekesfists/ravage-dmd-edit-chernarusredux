/* -----------------------------------
    File: fn_persistQuery.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
if (!isNil "dmd_db_check") then { dmd_db_check = nil; };
sleep 0.5;
if (isNil "dmd_db_check") then {
	_owner = clientOwner;
	_pName = profileName;
	_plUID = getPlayerUID player;	
	dmd_db_check = [_owner,_pName,_plUID];
	publicVariableServer "dmd_db_check";
};