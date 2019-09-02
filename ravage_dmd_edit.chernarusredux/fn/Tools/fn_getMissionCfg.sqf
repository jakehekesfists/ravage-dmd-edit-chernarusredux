/* -----------------------------------
    File: fn_getMissionCfg.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
private ["_v","_cfg"];
private _r = [];

private _chck = {
	if (isNumber _cfg) then {_v = getNumber _cfg};
	if (isText _cfg) then {_v = toLower (getText _cfg)};
	if (isArray _cfg) then {_v = getArray _cfg};
};

if ( _this isEqualType "" ) then {
	_cfg = missionConfigFile >> "dmd_cfg_settings" >> _this;
	call _chck;
	if (!isNil "_v") then {_r = _v};
};

if (_this isEqualType []) then {
	if ( _this isEqualTypeArray [[],[]]) then {
		private _p = _this select 0;
		private _b = {{ _cfg = _cfg >> _x;} forEach _p;};
		{
			_cfg = missionConfigFile >> "dmd_cfg_settings";
			call _b;
			_cfg = _cfg >> _x;
			call _chck;
			if (!isNil "_v") then {_r pushBack _v};
		} forEach (_this select 1);
	};
	
	if (_this isEqualTypeArray [[]]) then {
		{
			_cfg = missionConfigFile >> "dmd_cfg_settings" >> _x;
			call _chck;
			if (!isNil "_v") then {_r pushBack _v};
		} forEach (_this select 0);
	};
};

if (!isNil "_r") then {_r};