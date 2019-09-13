/*
    Author: Killzone_Kid
    http://killzonekid.com/arma-scripting-tutorials-how-to-find-a-string-within-a-string/
	params rewritten by JakeHekesFists[DMD]
*/
params [
	["_needles", [], ["",[]]],
	["_haystack", "", [""]],
	["_caseSensitive", false, [false]]
];
if (typeName _needles != "ARRAY") then { _needles = [_needles]; };
private _found = false;

if (_caseSensitive) then {
	{
		if (_x != "" && _x isEqualTo (_haystack select [0, count _x])) exitWith { _found = true; };
	} forEach _needles;
} else {
	{
		if (_x != "" && _x == (_haystack select [0, count _x])) exitWith { _found = true; };
	} forEach _needles;
};
_found