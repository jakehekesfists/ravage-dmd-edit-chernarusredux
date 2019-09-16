/* -----------------------------------
    File: depositFunds.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_target", "_caller", "_actionId", "_arguments"];

try {
	// make sure player has money 
	private _wallet = ({_x isEqualTo "rvg_money"} count magazines _caller);
	private _message = ""; 
	if (_wallet <= 0) then { throw [(localize "STR_CLI_ATM_NOFUNDS"),"FD_CP_NOT_CLEAR_F"]; };		// no money. throw to exit 
	
	// remove money from inventory
	for "_i" from 0 to (_wallet)-1 do { [_caller, "rvg_money", 1] call HALs_store_fnc_removeItemCargo; };		// just use hals fnc to remove all item cargo
	[_caller, + _wallet] call HALs_money_fnc_addFunds;															// add money to bank account
	throw [format [(localize "STR_CLI_ATM_DEPOSIT"), _wallet],"FD_CP_CLEAR_F"];									// throw success message 
} catch {
	_exception params [
		"_message",
		["_sound", "FD_CP_NOT_CLEAR_F", [""]]
	];
	hint _message;
	playSound _sound;
};