/* -----------------------------------
    File: fn_sell.sqf
    Author:  JakeHekesFists[DMD] 2019

	based on fn_purchase.sqf by HallyG
-------------------------------------- */
if !(isServer) exitWith {};

params [
	["_unit", objNull, [objNull]],
	["_classname", "", [""]],
	["_price", 0, [0]],
	["_amount", 0, [0]]
];

if (isNull _unit) exitWith {};
if (!alive _unit) exitWith {};
if (isNull (_unit getVariable ["HALs_store_trader_current", objNull])) exitWith {};
if (isNull (_classname call HALs_fnc_getConfigClass)) exitWith {};
if (_amount <= 0) exitWith {};

try {
   
	private _message = "";
	private _displayName = [(_classname call HALs_fnc_getConfigClass) >> "displayName", ""] call HALs_fnc_getConfigValue;

	// CHECK IF VEST/BACKPACK/UNIFORM EMPTY BEFORE ALLOWING SALE
	private _isEquipmentEmpty = [_unit, _classname] call dmd_fnc_isEquipmentEmpty; 
	// Error Handling
	if !(_isEquipmentEmpty) then {
		_message = format [(localize "STR_HALS_STORE_ITEM_SELL_NOTEMPTY"), _itemType, _displayName];
		throw [_message, "FD_CP_NOT_CLEAR_F"];
	};
    
	_trader = _unit getVariable ["HALs_store_trader_current", objNull];
	_categories = (_trader getVariable ["HALs_store_trader_categories", []]) select {isClass (missionConfigFile >> "cfgHALsAddons" >> "cfgHALsStore" >> "categories" >> _x >> _classname)};
	_sale = (1 - (_trader getVariable ["HALs_store_trader_sale", 0])) min 1 max 0;

	// dont need to equip sold items. remove should be enough.
	[_unit, _classname, _amount] call HALs_store_fnc_removeItemCargo;
	
	//--- Add funds and add stock
	[_trader, _classname, +_amount] call HALs_store_fnc_setTraderStock;
	[_unit, + (_price * _amount * _sale)] call HALs_money_fnc_addFunds;
	[_unit, _trader, _categories] remoteExecCall ["HALs_store_fnc_update", 0];
		
	//--- User feedback
	_message = format [(localize "STR_HALS_STORE_ITEM_SELL_SOLD"), _amount, _displayName, (_price * _amount * _sale)];

	//--- Log purchase
	if (HALs_store_debug) then {
		diag_log format ["%2(%1)/HALs_fnc_log: [HALs_store_fnc_purchase] PURCHASE: %3 (%4)", getPlayerUID _unit, name _unit, _message, _trader];
	};
	
	throw [_message,"FD_CP_CLEAR_F"];
} catch {
	_exception params [
		"_message",
		["_sound", "FD_CP_NOT_CLEAR_F", [""]]
	];
	[_message, _sound] remoteExecCall ["HALs_store_fnc_systemChat", _unit];
};