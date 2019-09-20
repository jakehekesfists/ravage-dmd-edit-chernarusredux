// default ravage breathfog script by Haleks. 
// edited to only work at night time by JakeHekesFists[DMD]
if !(hasInterface) exitWith {};
for "_i" from 0 to 1 step 0 do {
	private _nightTime = [] call dmd_fnc_isItNightTime;
	if (_nightTime) then {
		private _nearUnits = (positionCameraToWorld[0,0,0]) nearEntities ["CAManBase", 75];
		if (count _nearUnits > 0) then {
			{
				if (isNil {_x getVariable "rvg_breathfog"} && {!(_x isKindOf "zombie") && !isObjectHidden _x}) then {
					_x spawn {
						_bfEH = _this addEventHandler ["SoundPlayed", {
							if ((_this # 1) in [1,2,4,6,7,10] && {(_this # 0) distance (positionCameraToWorld[0,0,0]) < 75}) then {
								[(_this # 0)] spawn RVG_fnc_breathfog
							};
						}];
						_this setVariable ["rvg_breathfog", _bfEH];
						while {alive _this && {_this distance (positionCameraToWorld[0,0,0]) < 50}} do {
							sleep ((2 + random 1)*2);
							[_this] spawn RVG_fnc_breathfog;
						};
						_this removeEventHandler ["SoundPlayed", _bfEH];
						_this setVariable ["rvg_breathfog", nil];
					};
				};
			} forEach _nearUnits;
		};
	};
	sleep 5;
};