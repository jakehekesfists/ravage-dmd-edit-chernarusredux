/* -----------------------------------
    File: fn_jumpScript.sqf
    Author:  JakeHekesFists[DMD] 2019
	http://killzonekid.com/arma-3-animation-viewer-jumping-animation/
-------------------------------------- */
private _maxHeight = 4.3;
_isNil = (player getVariable "DMD_canJump");
if (isNil "_isNil") then { player setVariable ["DMD_canJump", true]; };

if (((vehicle player) isEqualTo player) && (isTouchingGround player)) then {
	private _height = 6-((load player)*10);

	if ((speed player > 8) && (player getVariable "DMD_canJump")) then {
		_vel = velocity player;
		_vel params ["_vX", "_vY", "_vZ"];
		_dir = direction player;

		_spd = 0.4;
		If (_height > _maxHeight) then {_height = _maxHeight};
		player setVelocity [_vX+(sin _dir*_spd),_vY+(cos _dir*_spd),_vZ+_height];
		_me = player; 
		[_me, "AovrPercMrunSrasWrflDf"] remoteExec ["switchMove", 0];		// play ani on all clients

		[] spawn {
			player setVariable ["DMD_canJump", false];
			sleep 2.5;
			player setVariable ["DMD_canJump", true];
		};
	};
};
true