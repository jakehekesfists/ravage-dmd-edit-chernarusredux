/* -----------------------------------
    File: PVEH.sqf (Client)
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */

"dmd_db_load" addPublicVariableEventHandler { _null = (_this select 1) call dmd_fnc_persistLoadData; };

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