params ["_oldUnit","_killer","_respawn","_respawnDelay"];
missionNamespace setVariable ["DMD_Respawned", true];			// allow player to respawn again
_oldUnit removeAllEventHandlers "InventoryOpened";				// remove the inventory event handlers so they can be readded on next spawn