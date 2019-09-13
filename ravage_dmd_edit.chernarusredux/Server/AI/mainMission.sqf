/* -----------------------------------
    File: mainMission.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
( [[ "AI_Missions","mainMission" ],["enable","randDelay","minPlayers","missionList"]] call dmd_fnc_getMissionCfg ) params ["_enable","_rd","_minP","_misList"];
if (_enable != 1) exitWith {};
private _counter = 0;

_misList = _misList call dmd_fnc_arrayShuffle;

for "_i" from 0 to (count _misList)-1 do {
	_counter = _counter + 1;
	private _cntFmt = _counter;
	if (_counter < 10) then { _cntFmt = format ["0%1",_counter]; };
	private _selected = (_misList select _i);

	( [
		[ "AI_Missions","mainMission", _selected ],
		[
			"missionName","aiTypes","unts","grps","killPercentage","objComposition","mountedGuns",
			"radius","rifleMinMax","handgunMinMax","itemMinMax","txtName","txtStart","txtEnd",
			"vehicle","vehicleTypes","paradropVehicle","hedgehogs","hmgs"
		]
	] call dmd_fnc_getMissionCfg ) params [
		"_missionName","_aiTypes","_untMinMax","_grpMinMax","_kp","_objectsArray","_staticWeps",
		"_radius","_rflMinMax","_hgnMinMax","_itmMinMax","_str_name","_str_start","_str_end",
		"_vehicle","_vehTypes","_vehDrop","_hedgehogs","_useHMG"
	];

	private _time = diag_tickTime;
	private _rDly = floor(random (_rd select 1)) max (_rd select 0);
	private _startTime = _time + _rDly;
	private _center = (worldSize)/2;
	private _centerPos = [_center,_center,0];
	private _lp = [_centerPos, 500, ((worldSize/2)*0.75), 5, 0, 60*(pi/180), 0] call dmd_fnc_findSafeMissionPos;
	private _outerRadius = floor(random (_radius select 1)) max (_radius select 0);
	private _gridPos = format ["(GRID: %1)",(mapGridPosition _lp)];

	// MAKE SURE PLAYERS ONLINE BEFORE STARTING MISSION
	waitUntil {
		sleep 10;
		_justPlayers = allPlayers - entities "HeadlessClient_F";
		if ((diag_tickTime >= _startTime) && (count _justPlayers >= _minP)) exitWith { true };
		false
	};

	([[ "AI_Missions","AISettings",(selectRandom _aiTypes)],[ "displayName","defaultColour","loadouts" ]] call dmd_fnc_getMissionCfg ) params ["_aiDispName","_defColour","_loadouts"];

	// MISSION TEXT - DEFINED IN STRINGTABLE.XML
	_missionName = localize _missionName;
	_aiDispName = localize _aiDispName;
	_str_name = localize _str_name;
	_str_start = format[(localize _str_start), _aiDispName, _gridPos];
	_str_end = format[(localize _str_end), _aiDispName, _gridPos];
	private _taskTitle = format ["%1 (%2) %3",_missionName, _cntFmt, _str_name];

	// BROADCAST FIRST
	[_str_name, _str_start, (localize "STR_AI_MAINMISSION_NAME"), "\A3\ui_f\data\igui\cfg\simpleTasks\types\attack_ca.paa"] spawn dmd_fnc_missionBroadcast;
	private _markers = [_lp, _defColour, _str_name, _outerRadius, "mil_dot"] call dmd_fnc_createMissionMarker;
	[ _lp, _taskTitle, _str_start, "CREATED","attack" ] call dmd_fnc_taskHandle;

	// SPAWN MISSION COMPOSITION
	private _allMissionObjects = [_lp, _objectsArray] call dmd_fnc_createBldRelative;
	if (_hedgehogs > 0) then {
	    private _allHedgehogs = [_lp, (_outerRadius)*0.45] call dmd_fnc_hedgehogs;
	    _allMissionObjects = _allMissionObjects + _allHedgehogs;
	};

	// WAIT FOR PLAYER TO GO NEAR MISSION BEFORE SPAWNING AI
	waitUntil {
		sleep 10;
		private _nearby = [_lp, 1600] call dmd_fnc_playerNear;
		if (_nearby) exitWith { true };
		false
	};
	
	// UNIT SPAWNING
	_untMinMax params ["_mnU","_mxU"];
	_grpMinMax params ["_mnG","_mxG"];
	private _untCnt = floor(random _mxU) max _mnU;
	private _grpCnt = floor(random _mxG) max _mnG;
	private _uPrGrp = round(_untCnt / _grpCnt);

	private _allSpawned = [_lp, _grpCnt, _uPrGrp, (_outerRadius) * 0.7, _loadouts ] call dmd_fnc_spawnGroup;
	_allSpawned params ["_allGrps","_allUnits"];

	// HMGS
	if (_useHMG > 0) then {
		_allHMGs = [_lp, _staticWeps, _loadouts] call dmd_fnc_staticWeapons;
		_allHMGs params ["_hmgUnits", "_hmgGroups", "_hmgVehicles"];		// we wont add the HMGs to the cleanup so players can take/save them
		_allUnits = _allUnits + _hmgUnits;
	};

	// WAIT FOR MISSION COMPLETE STATUS
	_kMon = [_allUnits, _kp] spawn dmd_fnc_killedMonitor;
	waitUntil { sleep 10; if (scriptDone _kMon) exitWith {true}; false };

	// BROADCAST END MESSAGE
	[_str_name, _str_end, (localize "STR_AI_MAINMISSION_HINTFINISH"), "\A3\ui_f\data\igui\cfg\simpleTasks\types\radio_ca.paa"] spawn dmd_fnc_missionBroadcast;
	[ _lp, _taskTitle, _str_end, "SUCCEEDED" ] call dmd_fnc_taskHandle;

	// SPAWN REWARDS
	_box = [_lp, _rflMinMax, _hgnMinMax, _itmMinMax] call dmd_fnc_lootCrate;

	if (_vehicle isEqualTo 1) then {
		private _class = selectRandom _vehTypes;
		if (_vehDrop isEqualTo 1) then { _vehDrop = true; } else { _vehDrop = false; };
		[_lp, _class, _vehDrop] call dmd_fnc_missionVehicleSetup;
	};

	// CLEANUP
	[_markers, _allUnits, _allMissionObjects, 300] spawn dmd_fnc_missionCleanup;
	
	// RESET THE LOOP
	if (_i isEqualTo (count _misList)-1) then { _i = 0; };
};