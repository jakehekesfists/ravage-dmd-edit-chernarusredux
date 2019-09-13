/* -----------------------------------
    File: fn_vehicleService.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
    ["_vehicle", objNull]
];

( [[ "ServerSettings","vehRepairs" ],["costPerPart","maxCost","timeToRepair"]] call dmd_fnc_getMissionCfg ) params ["_cost","_maxcost","_delay"];
try {
	// make sure player is in a vehicle, and that the vehicle exists
	if ((isNull objectParent player) || (isNull _vehicle)) then { throw ["STR_CLI_VS_NOVEH", false, _vehicle, [0,0]]; };

	// check if vehicle is damaged
	private _allHitPoints = (getAllHitPointsDamage _vehicle);
	_allHitPoints params ["_allHits", "_dmgHits", "_dmgVals"];
	private _needRepairs = false;
	private _pointsToRepair = 0;
	{ if (_x > 0) then { _pointsToRepair = _pointsToRepair + 1; _needRepairs = true; }; } forEach _dmgVals;
	if (!_needRepairs) then { throw ["STR_CLI_VS_NOREPAIRS", false, _vehicle, [0,0]]; };

	// make sure player has enough money for the service
	private _totalcost = (_cost * _pointsToRepair) min _maxcost;
	private _increment = floor(_totalcost / _pointsToRepair);
	private _money = [player] call HALs_money_fnc_getFunds;
	if (_money < _totalcost) then { throw ["STR_CLI_VS_NOMONEY", false, _vehicle, [_totalcost, _increment]]; };

	// all checks passed. throw ok condition
	throw ["STR_CLI_VS_REPAIRSOK", true, _vehicle, [_totalcost, _increment]];

} catch {
	_exception params [
	    ["_str","ERROR"],
	    ["_ok",false],
	    "_vehicle",
	    "_costArray"
    ];

	if (!_ok) exitWith {
		titleText [(localize _str), "PLAIN DOWN"];
		playSound "FD_CP_NOT_CLEAR_F";
	};

	if (_ok) then {
		playSound "FD_CP_CLEAR_F";
    	_costArray params ["_totalcost","_increment"];
		titleText [format[(localize _str),_totalcost], "PLAIN DOWN"];
		// Cut Engine and Wait
		private _allRepaired = true;
		_vehicle engineOn false;
		sleep 2.5;
		private _runningCost = 0;

		private _allHitPoints = (getAllHitPointsDamage _vehicle);
		_allHitPoints params ["_allHits", "_dmgHits", "_dmgVals"];

		// begin repair loop
		{
			if (isEngineOn _vehicle) exitWith {
				_allRepaired = false;
				titleText [(localize "STR_CLI_VS_REPAIRCANCEL"), "PLAIN DOWN"];
			};

			if ((_dmgVals select _forEachIndex) > 0) then {
				titleText [format[(localize "STR_CLI_VS_REPAIRINGHIT"),_x], "PLAIN DOWN"];
				_vehicle setHit [_x, 0];
				_runningCost = _runningCost + _increment;
				[player, - _increment] call HALs_money_fnc_addFunds;
				uiSleep _delay;
			};
		} forEach _dmgHits;

		if (_allRepaired) then {
			titleText [(localize "STR_CLI_VS_REPAIRCOMPLETE"), "PLAIN DOWN"];
			
			// make up for possible rounding errors
			if (_runningCost < _totalcost) then {
				_remainder = _totalcost - _runningCost;
				[player, - _remainder] call HALs_money_fnc_addFunds;
			};
			playSound "FD_CP_CLEAR_F";
		};
	};
};