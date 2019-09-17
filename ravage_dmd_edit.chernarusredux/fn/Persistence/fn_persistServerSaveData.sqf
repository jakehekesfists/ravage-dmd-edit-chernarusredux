/* -----------------------------------
    File: fn_persistServerSaveData.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_uid","_data"];
_data params ["_pos", "_dir", "_ani", "_dmg", "_ger", "_hun", "_thi"];

private _filename = _uid;
if !((toLower worldName) isEqualTo "chernarusredux") then { _filename = format["%1_%2",_uid,worldName]; };

_inidbSave = ["new", _filename] call OO_INIDBI;
["write", ["Account", "Position", _pos]] call _inidbSave;
["write", ["Account", "Direction", _dir]] call _inidbSave;
["write", ["Account", "Anim", _ani]] call _inidbSave;
["write", ["Account", "Health", _dmg]] call _inidbSave;
["write", ["Account", "Loadout", _ger]] call _inidbSave;
if (!isNil "_hun") then { ["write", ["Account", "Hunger", _hun]] call _inidbSave; };
if (!isNil "_thi") then { ["write", ["Account", "Thirst", _thi]] call _inidbSave; };