/* -----------------------------------
    File: persistent_date.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
private _filename = "Server_Settings";
if !((toLower worldName) isEqualTo "chernarusredux") then { _filename = format["%1_%2","Server_Settings",worldName]; };	
private _inidbcall = ["new", _filename] call OO_INIDBI;
// load settings to start. 
private _databasefind = "exists" call _inidbcall;
if (!_databasefind) then { ["write", ["Persistent Date", "CurrentDate", date]] call _inidbcall; };
private _loadDate = ["read", ["Persistent Date", "CurrentDate", []]] call _inidbcall;
[_loadDate] remoteExec ["setDate"];
// loop to save the date every 5 mins. 
for "_i" from 0 to 1 step 0 do { sleep 300; ["write", ["Persistent Date", "CurrentDate", date]] call _inidbcall; };