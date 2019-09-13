/* -----------------------------------
    File: fn_aiSkills.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [ ["_unit", objNull] ];
if (isNull _unit) exitWith { diag_log __FILE__ + "ERROR: NO UNIT"; };

private _numberVal = "aiskillsettings" call BIS_fnc_getParamValue;
private _setting = call {
	if (_numberVal isEqualTo 0) exitWith { "aiSkillVeryEasy" };
	if (_numberVal isEqualTo 1) exitWith { "aiSkillEasy" };
	if (_numberVal isEqualTo 2) exitWith { "aiSkillMedium" };
	if (_numberVal isEqualTo 3) exitWith { "aiSkillHard" };
	"aiSkillMedium"
};
( [
	[ "AI_Missions", "AISettings", _setting ],
	[ "accuracy", "aimingShake", "aimingSpeed", "endurance", "spotDistance", "spotTime", "courage", "reloadSpeed", "commanding", "general" ]
] call dmd_fnc_getMissionCfg ) params [
	"_acc", "_shk", "_spd", "_end", "_sDst", "_sTim", "_crg", "_rSpd", "_cmd", "_gen"
];

_unit setSkill [ "aimingAccuracy" , _acc ];
_unit setSkill [ "aimingShake", _shk ];
_unit setSkill [ "aimingSpeed", _spd ];
_unit setSkill [ "endurance", _end ];
_unit setSkill [ "spotDistance", _sDst ];
_unit setSkill [ "spotTime", _sTim ];
_unit setSkill [ "courage", _crg ];
_unit setSkill [ "reloadSpeed", _rSpd ];
_unit setSkill [ "commanding", _cmd ];
_unit setSkill [ "general", _gen ];