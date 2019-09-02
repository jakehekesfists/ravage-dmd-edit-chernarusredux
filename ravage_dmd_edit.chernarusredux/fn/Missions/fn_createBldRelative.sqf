/* -----------------------------------
    File: fn_createBldRelative.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_center", "_objects"];
private _ret = [];
{
	private _obj = (_x select 0) createVehicle _center;
	_obj setDir (_x select 2);
	_obj setPosATL (_center vectorAdd (_x select 1));
	private _objpos = getPosATL _obj;
	_objPos params ["_oX", "_oY", "_oZ"];
	_obj setVectorUP (surfaceNormal [_oX,_oY]);
	_obj enableDynamicSimulation true; 
	_ret pushBack _obj;
} forEach _objects;
_ret