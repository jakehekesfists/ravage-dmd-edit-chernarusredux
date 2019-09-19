/* -----------------------------------
    File: redZone.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
    ["_cities",[]]
];

if (_cities isEqualTo []) exitWith { diag_log __FILE__ + "ERROR: NO CITIES"; };

// pull all the settings from dmd_ai_missions.hpp
([[ "AI_Missions","RedZone" ],[ "enable","shellArray","randDelay","bombRadius","bombQty", "minPlayers" ]] call dmd_fnc_getMissionCfg ) params ["_enable","_shellArray","_rdl","_bRad","_bQty","_minP" ];

// EXIT IF DISABLED IN CONFIG
if (_enable != 1) exitWith {};

// START THE MISSION LOOP
for "_i" from 0 to (count _cities)-1 do {
	private _selected = _cities select _i;
	_selected params ["_name","_pos"];
	
	// random sleep time before mission start
	private _rdy = floor(random (_rdl select 1)) max (_rdl select 0);
    private _startTime = diag_tickTime + _rdy;
    
	// wait until ready + make sure enough players online.
    waitUntil {
		sleep 30;
		_justPlayers = allPlayers - entities "HeadlessClient_F";
		if ((diag_tickTime >= _startTime) && (count _justPlayers >= _minP)) exitWith { true };
		false
	};

	_pos set [2,0];		// might not be necessary. set z pos to 0.

	private _rad = floor(random (_bRad select 1)) max (_bRad select 0);			// random radius size
	private _bqt = floor(random (_bQty select 1)) max (_bQty select 0);			// random number of bombs
	private _mrkRad = (_rad)+25;												// add +25m to map marker radius for players benefit.

	// CREATE MAP MARKERS AND NOTIFY PLAYERS
	private _markers = [_pos, "colorOPFOR",(localize "STR_RZ_NAME"), _mrkRad, "mil_dot"] call dmd_fnc_createMissionMarker;
	private _msgText = format [(localize "STR_RZ_STARTTEXT"), _name, mapGridPosition _pos];
	[(localize "STR_RZ_HINTSTART"), _msgText, (localize "STR_RZ_NAME"), "\A3\ui_f\data\igui\cfg\simpleTasks\types\destroy_ca.paa"] spawn dmd_fnc_missionBroadcast;
	sleep 90;			// DELAY THE BOMBING BY 90 SECONDS TO LET PLAYERS GET OUT OF THE AREA.

	[_pos, _rad, _bqt, _shellArray] call dmd_fnc_bombPlopper;			// FUNCTION TO DROP THE BOMBS
	[_markers, 120] spawn dmd_fnc_delMissionMarker;						// CLEANUP THE MAP MARKERS AFTER 2 MINS

	// NOTIFY PLAYERS BOMBING OVER
	private _msgEndText = format [(localize "STR_RZ_ENDTEXT"), _name, mapGridPosition _pos];
	[(localize "STR_RZ_HINTFINISH"), _msgEndText, (localize "STR_RZ_NAME"), "\A3\ui_f\data\igui\cfg\simpleTasks\types\radio_ca.paa"] spawn dmd_fnc_missionBroadcast;
};