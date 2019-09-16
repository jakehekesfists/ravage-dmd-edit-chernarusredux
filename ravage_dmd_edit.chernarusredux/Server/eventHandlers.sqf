/* -----------------------------------
    File: eventHandlers.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */

addMissionEventHandler ["EntityKilled", {
		params ["_killed", "_killer", "_instigator"];
		if (isNull _instigator) then {_instigator = UAVControl vehicle _killer select 0};
		if (isNull _instigator) then {_instigator = _killer};

		// monetary reward for zombie kills
		if (_killed isKindOf "zombie") then {
			if (isPlayer _killer) then { _killer addItem "rvg_money"; };
		};

		// server to handle player death 
		if (isPlayer _killed) then {
			_uid = getPlayerUID _killed;
			[_uid] call dmd_fnc_persistServerDeleteData;
		};
	}
];

// save player on disconnect. uses a non-player object. wont save hunger/thirst but should already have that from player pressing escape last time. 
addMissionEventHandler ["HandleDisconnect", {
	params ["_unit", "_id", "_uid", "_name"];
	_getData = [_unit] call dmd_fnc_persistServerGetPlayerData;
	[_uid, _getData] spawn dmd_fnc_persistServerSaveData;
	sleep 5;
	deleteVehicle _unit;
}];