([[ "ServerSettings" ],[ "maxVehiclesTowed", "RespawnClasses","terrainGrid","viewDist","objectDist","shadowDist" ]] call dmd_fnc_getMissionCfg ) params [ "_mvt","_rsp","_tgr","_vwd","_obd","_shd" ];

setTerrainGrid _tgr;
setViewDistance _vwd;
setObjectViewDistance [_obd,_shd];

enableSaving [false, false];			// disable arma 3 saving system on player hosted. we use inidbi2 round here yknow

SA_MAX_TOWED_CARGO = _mvt;
enableDynamicSimulationSystem true;
player linkItem "rvg_itemMap";
{ [west, _x] call BIS_fnc_addRespawnInventory; } forEach _rsp;
[] execVM "R3F_LOG\init.sqf";

// attempt to make server only stuff load on either player host or dedi. 
if ((isDedicated) || (hasInterface && isServer)) then { [] execVM "serverScripts.sqf"; };