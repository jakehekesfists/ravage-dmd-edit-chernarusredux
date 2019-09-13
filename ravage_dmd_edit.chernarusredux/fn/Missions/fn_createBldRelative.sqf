/* -----------------------------------
    File: fn_createBldRelativeNew.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
    ["_center",[]],
    ["_objects", []]
];
if (_center isEqualTo []) exitWith { diag_log __FILE__ + "ERROR: NO POSITION SUPPLIED"; };
if (_objects isEqualTo []) exitWith { diag_log __FILE__ + "ERROR: NO OBJECTS IN ARRAY"; };
private _ret = [];
{
	_x params ["_type", "_relPos", "_dir", "_fuel", "_dam", "_orient", "_varname", "_init", "_sim", "_ASL"];
	private _obj = _type createVehicle _center;
	_obj setDir _dir;
	_obj setPosATL (_center vectorAdd _relPos);
	if ((count _orient) > 0) then {
		([_obj] + _orient) call BIS_fnc_setPitchBank;
	} else {
		private _objpos = getPosATL _obj;
		_objPos params ["_oX", "_oY", "_oZ"];
		_obj setVectorUP (surfaceNormal [_oX,_oY]);
	};
	_obj enableDynamicSimulation true;
	_ret pushBack _obj;
} forEach _objects;
_ret