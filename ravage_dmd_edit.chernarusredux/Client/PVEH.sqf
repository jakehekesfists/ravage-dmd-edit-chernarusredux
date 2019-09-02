/* -----------------------------------
    File: PVEH.sqf (Client)
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */

// player eventhandlers
player addEventHandler ["InventoryOpened", {
    params ["_unit","_container"];
	private _cancel = false;
	try {

		if (_container getVariable "DMD_IsLocked") then {
			hint (localize "STR_CLI_PVEH_LOCKVEHGEAR");
			throw true;
		};

		if ((locked _container) isEqualTo 2) then {
			hint (localize "STR_CLI_PVEH_LOCKVEHGEAR");
			throw true;
		};

		if (inSafeZone) then {
			private _allUnitBpks = allUnits select {alive _x} apply {backpackContainer _x};
			if (_container in _allUnitBpks OR !(crew _container select {alive _x} isEqualTo [])) then {
				hint (localize "STR_CLI_SZ_ACCDENY");
				throw true;
			};
		};
	} catch {
		_cancel = _exception;
	};
_cancel
}];

"dmd_db_load" addPublicVariableEventHandler {
	private _data = _this select 1;
	_data params ["_readpos", "_readdir", "_readdamage", "_readloadout", "_readHunger", "_readThirst"];
	_null = _data call dmd_fnc_persistLoadData;
};

"dmd_db_bank" addPublicVariableEventHandler {
	private _pack = _this select 1;
	_pack params ["_amount"];
	player setVariable ["DMD_CashMoney", (_amount) max 0, true];
};

"#FX" addPublicVariableEventHandler {_this select 1 spawn dmd_fnc_KK_fx};

"dmd_crate_marker_lights" addPublicVariableEventHandler {
	private _data = _this select 1;
	_data params ["_box", "_pos", "_amb", "_col"];
	_light = "#lightpoint" createVehicleLocal _pos;
	_lightbrightness = 0.38;
	_light setLightBrightness _lightbrightness; 
	_light setLightAmbient _amb; 
	_light setLightColor _col;
	_light lightAttachObject [_box, [0, 0, 0.25]];
	_light setLightDayLight false;
	
	[_light, _lightbrightness] spawn {
		params ["_light", "_lightbrightness"];
		for "_i" from 0 to 1 step 0 do {
			_light setLightBrightness _lightbrightness;
			_lightbrightness = (_lightbrightness - 0.001);
			if (_lightbrightness isEqualTo 0) then { deleteVehicle _light; _i = 2; };
			sleep 0.5;
		};
	};
};