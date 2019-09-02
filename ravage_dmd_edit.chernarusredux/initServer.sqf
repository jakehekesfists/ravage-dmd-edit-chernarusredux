{ ["get", nil, _x] call dmd_fnc_persistIDCount; } forEach ["object", "vehicle"];
_cityPosArray = call dmd_fnc_getCityPos;
_cityPosArray = _cityPosArray call dmd_fnc_arrayShuffle;

_redZneCities = [];
_invadeCities = [];

for "_i" from 0 to 4 do { _redZneCities pushBack (_cityPosArray select _i); };
for "_ii" from 5 to (count _cityPosArray)-1 do { _invadeCities pushBack (_cityPosArray select _ii); };

[] execVM "Server\PVEH.sqf";
[] execVM "Server\eventHandlers.sqf";

[] call dmd_fnc_persistObjLoadAll;

[] execVM "Server\Scripts\timeCycle.sqf";
[] execVM "Server\Scripts\persistent_date.sqf";

[_cityPosArray] execVM "Server\createBaseObjects.sqf";
[_redZneCities] execVM "Server\redZone.sqf";
[_invadeCities] execVM "Server\AI\invasion.sqf";
[] execVM "Server\ambientFlyby.sqf";
[] execVM "Server\AI\mainMission.sqf";

[] spawn dmd_fnc_safezoneMarkers;
[] spawn dmd_fnc_heliSpawn;
[] execVM "Server\advancedTowing.sqf";

["Initialize"] call BIS_fnc_dynamicGroups;