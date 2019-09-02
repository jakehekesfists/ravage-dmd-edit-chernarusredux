/* -----------------------------------
    File: invasion.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_cities"];
( [
	[ "AI_Missions", "Invasion" ],
	[
	    "enable","randDelay","minPlayers","cityRadius","killPercentage",
	    "lootRifles","lootHGuns","lootItems","aiTypes","units","groups",
	    "txtName","txtStart","txtEnd"
	]
] call dmd_fnc_getMissionCfg ) params [
	"_enable","_rd","_minP","_cRad","_kp",
	"_rflMinMax","_hgnMinMax","_itmMinMax","_aiTypes","_units","_groups",
	"_txtName", "_txtStart", "_txtEnd"
];

if (_enable != 1) exitWith {};

for "_i" from 0 to (count _cities)-1 do {
	private _time = diag_tickTime;
	private _rDly = floor(random (_rd select 1)) max (_rd select 0);

	private _startTime = _time + _rDly;
	private _selected = _cities select _i;
	_selected params ["_name", "_pos"];

	private _aiSelected = selectRandom _aiTypes;

	waitUntil {
		sleep 10;
		private _justPlayers = allPlayers - entities "HeadlessClient_F";
		if ((diag_tickTime >= _startTime) && (count _justPlayers >= _minP)) exitWith { true };
		false
	};

	([[ "AI_Missions", "AISettings", _aiSelected ],[ "displayName", "defaultColour", "loadouts" ]] call dmd_fnc_getMissionCfg ) params ["_dispName", "_defColour", "_loadouts"];
	
	// MISSION TEXT - DEFINED IN STRINGTABLE.XML
	private _dispName = localize _dispName;
	private _gridPos = format["(GRID: %1)", mapGridPosition _pos];
	private _missionText = format[(localize _txtName), _name];
	private _formatMessage = format[(localize _txtStart), _name, _gridPos, _dispName];
	private _formatEndMessage = format[(localize _txtEnd), _name, _gridPos, _dispName];
	
	private _outerRadius = floor(random (_cRad select 1)) max (_cRad select 0);
	private _markers = [_pos, _defColour, _missionText, _outerRadius, "mil_dot"] call dmd_fnc_createMissionMarker;
	[ _pos, _missionText, _formatMessage, "CREATED", "danger" ] call dmd_fnc_taskHandle;

	[_missionText, _formatMessage, (localize "STR_AI_INV_HINTSTART"), "\A3\ui_f\data\igui\cfg\simpleTasks\types\danger_ca.paa"] spawn dmd_fnc_missionBroadcast;

	waitUntil {
		sleep 10;
		private _nearby = [_pos, (_outerRadius)*3] call dmd_fnc_playerNear;
		if (_nearby) exitWith { true };
		false
	};
    
    _units params ["_mnU", "_mxU"];
    _groups params ["_mnG", "_mxG"];
	private _untCnt = floor(random _mxU) max _mnU;
	private _grpCnt = floor(random _mxG) max _mnG;
	private _uPrGrp = round(_untCnt / _grpCnt);

	private _allSpawned = [_pos, _grpCnt, _uPrGrp, (_outerRadius) * 0.7, _loadouts ] call dmd_fnc_spawnGroup;
	_allSpawned params ["_allGrps", "_allUnits"];

	_kMon = [_allUnits, _kp] spawn dmd_fnc_killedMonitor;

	waitUntil {
		sleep 10;
		if (scriptDone _kMon) exitWith {true};
		false
	};

	[_missionText, _formatEndMessage, (localize "STR_AI_INV_HINTFINISH"), "\A3\ui_f\data\igui\cfg\simpleTasks\types\radio_ca.paa"] spawn dmd_fnc_missionBroadcast;
	private _box = [_pos, _rflMinMax, _hgnMinMax, _itmMinMax, true] call dmd_fnc_lootCrate;

	[_markers] spawn dmd_fnc_delMissionMarker;
	[ _pos, _missionText, _formatEndMessage, "SUCCEEDED" ] call dmd_fnc_taskHandle;
};