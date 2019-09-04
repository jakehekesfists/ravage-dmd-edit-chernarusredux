DMD_LootCleanUp = [];

for "_i" from 0 to 1 step 0 do {
	if ((count DMD_LootCleanUp) > 0) then {
		{
			_x params ["_obj", "_all", "_end"];
			if (diag_tickTime > _end) then {
				private _nearby = [(getPos _obj), 100] call dmd_fnc_playerNear;
				if (!_nearby) then {
					{ deleteVehicle _x } forEach _all;
					_obj setVariable ["lootSpawn",0,true];
				};
			};
		} forEach DMD_LootCleanup;
	};
	sleep 10;
};