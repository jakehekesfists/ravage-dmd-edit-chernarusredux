/* -----------------------------------
    File: fn_persistServerSaveData.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_uid","_data"];
_data params ["_pos", "_dir", "_ani", "_dmg", "_ger", "_hun", "_thi"];

// DEFINE THE FILENAMES
([_uid] call dmd_fnc_getDBNames) params ["_playerDB", "_objectDB", "_vehicleDB", "_settingsDB"];

_inidbSave = ["new", _playerDB] call OO_INIDBI;
["write", ["Account", "Position", _pos]] call _inidbSave;
["write", ["Account", "Direction", _dir]] call _inidbSave;
["write", ["Account", "Anim", _ani]] call _inidbSave;
["write", ["Account", "Health", _dmg]] call _inidbSave;
["write", ["Account", "Loadout", _ger]] call _inidbSave;
if (!isNil "_hun") then { ["write", ["Account", "Hunger", _hun]] call _inidbSave; };
if (!isNil "_thi") then { ["write", ["Account", "Thirst", _thi]] call _inidbSave; };