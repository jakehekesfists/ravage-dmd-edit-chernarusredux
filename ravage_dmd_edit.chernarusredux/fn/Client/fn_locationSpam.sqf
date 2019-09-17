/* -----------------------------------
    File: fn_locationSpam.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_locationName"]; 
date params ["_year", "_month", "_date"];

private _mthList = [
	"MTHS",
	(localize "STR_CLI_LS_JAN"),
	(localize "STR_CLI_LS_FEB"),
	(localize "STR_CLI_LS_MAR"),
	(localize "STR_CLI_LS_APR"),
	(localize "STR_CLI_LS_MAY"),
	(localize "STR_CLI_LS_JUN"),
	(localize "STR_CLI_LS_JUL"),
	(localize "STR_CLI_LS_AUG"),
	(localize "STR_CLI_LS_SEP"),
	(localize "STR_CLI_LS_OCT"),
	(localize "STR_CLI_LS_NOV"),
	(localize "STR_CLI_LS_DEC")
];
private _month = (_mthList select _month);

private _formatDate = format ["%2 %1 %3", _month, _date, _year];
private _formatTime = [daytime,"HH:MM"] call BIS_fnc_timeToString;

private _worldName = (getText(missionConfigFile >> "dmd_cfg_settings" >> "ServerSettings" >> "worldSettings" >> worldName >> "friendlyName"));

if !(_locationName isEqualTo "") then {
	[parseText format [
		"<t align='right' size='1.1'><t font='PuristaBold' size='1.4'>%1</t><br/>%4<br/>%2, %3</t>",
	(toUpper _locationName), _formatTime, _formatDate, (toUpper _worldName) ], true, nil, 10, 0.7, 0] spawn BIS_fnc_textTiles;
};