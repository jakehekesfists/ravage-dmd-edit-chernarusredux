/*
	Function: HALs_store_fnc_getTraderStock
	Author: HallyG
	Gets a trader's stock.
	
	Argument(s):
	0: Trader <OBJECT>
	1: Item Classname <STRING>
	
	Return Value:
	<NUMBER>
	
	Example:
	[_trader, _item] call HALs_store_fnc_getTraderStock;
__________________________________________________________________*/
params [
	["_trader", objNull, [objNull]],
	["_classname", "", [""]]
];

private _classes = _trader getVariable ["HALs_store_trader_classes", []];
private _selection = _classes find toLower _classname;

if (_selection isEqualTo -1) exitWith {-1};
private _stocks = _trader getVariable ["HALs_store_trader_stocks", []];
_stocks select _selection 