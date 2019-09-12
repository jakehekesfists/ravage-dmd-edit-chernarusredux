params ["_oldUnit","_killer","_respawn","_respawnDelay"];
missionNamespace setVariable ["DMD_Respawned", true];
_oldUnit removeAllEventHandlers "InventoryOpened";