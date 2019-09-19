params ["_newUnit","_oldUnit","_respawn","_respawnDelay"];
([
    [ "ClientSettings", "initPlayerLocal" ],
    [ "aimCoef","recoilCoef","enableStamina", "enableTraits", "traitValues" ]
] call dmd_fnc_getMissionCfg ) params [
    "_aimCoef","_recCoef","_enStam","_enTraits","_trVals"
];

cutText ["","BLACK OUT",0.1];
_newUnit allowDamage false;

// PLAYER SETTINGS (fatigue, stamina, recoil/sway etc) 
_newUnit setCustomAimCoef _aimCoef;
_newUnit setUnitRecoilCoefficient _recCoef;
if (_enStam isEqualTo 0) then { _newUnit enableStamina false; _newUnit enableFatigue false; };

// unit traits are defined in dmd_config.hpp 
{ _newUnit setUnitTrait [_x, true]; } forEach _enTraits;
{ _newUnit setUnitTrait [(_x select 0), (_x select 1)]; } forEach _trVals;

_newUnit linkItem "rvg_itemMap";				// add a map so player can see the spawn select screen! 
_newUnit triggerDynamicSimulation true;			// this mission relies on dynamic simulation - turning this off will cause problems

// persistence checks. done this way so players dont get stuck in a respawn loop 
private _query = missionNamespace getVariable ["DMD_Respawned", false];
if (!_query) then { [] call dmd_fnc_persistQuery; };

[] spawn dmd_fnc_playerActions;				// actions like using ATMs, repairing vehicles, etc etc. 
[] call dmd_fnc_safezone;					// safezone godmode thread.

// spawn a thread so player will be able to respawn correctly when they next die. 
[_newUnit] spawn {
    params ["_newUnit"];
    cutText ["","BLACK IN",3];
    _newUnit allowDamage true;
    waitUntil { sleep 5; if ((lifeState _newUnit) == "HEALTHY") exitWith { true }; false };
    missionNamespace setVariable ["DMD_Respawned", false];
};


// INVENTORY EVENT HANDLER
_newUnit addEventHandler ["InventoryOpened", {
    params ["_unit","_container"];
	private _cancel = false;
	try {

		// STOPS PLAYERS ACCESSING GEAR IN LOCKED VEHICLES 
		if (_container getVariable "DMD_IsLocked") then {
			hint (localize "STR_CLI_PVEH_LOCKVEHGEAR");
			throw true;
		};
		// STOPS PLAYERS ACCESSING GEAR IN LOCKED VEHICLES 
		if ((locked _container) isEqualTo 2) then {
			hint (localize "STR_CLI_PVEH_LOCKVEHGEAR");
			throw true;
		};

		// STOPS PLAYER FROM ACCESSING OTHER PEOPLE/AI BACKPACKS IN THE TRADER ZONES
		if (inSafeZone) then {
			private _allUnitBpks = allUnits select {alive _x} apply {backpackContainer _x};
			if (_container in _allUnitBpks OR !(crew _container select {alive _x} isEqualTo [])) then {
				hint (localize "STR_CLI_SZ_ACCDENY");
				throw true;
			};
		};
	} catch {
		_cancel = _exception;
	};
_cancel
}];