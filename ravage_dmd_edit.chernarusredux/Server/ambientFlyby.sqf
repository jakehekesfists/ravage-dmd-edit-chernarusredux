/* -----------------------------------
    File: ambientFlyby.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
([[ "AI_Missions", "ambientFlyby" ],[ "enable", "randDelay", "minPlayers", "vehTypes" ]] call dmd_fnc_getMissionCfg ) params ["_enable", "_rdl", "_minP", "_vehTypes"];

// exit if disabled in config.
if (_enable != 1) exitWith {};

// infinite loop
for "_i" from 0 to 1 step 0 do {
    
    // randomised delay
    private _rdy = floor(random (_rdl select 1)) max (_rdl select 0);
    private _startTime = diag_tickTime + _rdy;
    
    // wait, and also make sure there are players online
    waitUntil {
		sleep 30;
		_justPlayers = allPlayers - entities "HeadlessClient_F";
		if ((diag_tickTime >= _startTime) && (count _justPlayers >= _minP)) exitWith { true };
		false
	};
    
    // pick a random player to fly over.
    private _plPos = [];
    { _plPos pushBack (getPosATL _x); } forEach playableUnits;
    private _slPos = (selectRandom _plPos);
    
    /*
        Select a random start point and end point.
        plane spawns either 5-10km from selected player and the flight path will take them close to the players position
        flying in the opposite direction of their starting point.
    */
    private _vectorAdd = (selectRandom [
        [[5000,-5000,0], [-5000,5000,0]],
        [[-5000,5000,0], [5000,-5000,0]],
        [[-5000,-5000,0], [5000,5000,0]],
        [[5000,5000,0],[-5000,-5000,0]],
        [[0,-5000,0], [0,5000,0]],
        [[0,5000,0], [0,-5000,0]],
        [[5000,0,0], [-5000,0,0]],
        [[-5000,0,0], [5000,0,0]],
        [[10000,-10000,0], [-10000,10000,0]],
        [[-10000,10000,0], [10000,-10000,0]],
        [[-10000,-10000,0], [10000,10000,0]],
        [[10000,10000,0],[-10000,-10000,0]],
        [[0,-10000,0], [0,10000,0]],
        [[0,10000,0], [0,-10000,0]],
        [[10000,0,0], [-10000,0,0]],
        [[-10000,0,0], [10000,0,0]]
    ]);
    
    // calculate the correct positions to start/end the flight path.
    private _stPos = _slPos vectorAdd (_vectorAdd select 0);
    private _edPos = _slPos vectorAdd (_vectorAdd select 1);
    
    // do the fly by
    private _flyby = [_stPos, _edPos, (floor(random 150)+100), "FULL", (selectRandom _vehTypes), WEST] call BIS_fnc_ambientFlyBy;
};