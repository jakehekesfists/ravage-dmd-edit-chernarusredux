/*
	Function: HALs_money_fnc_addFunds
	Author: HallyG

	Arguments(s):
	0: Unit <OBJECT>
	1: Funds <NUMBER>

	Return Value:
	None

	Example:
	[player, 100] call HALs_money_fnc_addFunds;
__________________________________________________________________*/
params [
	["_unit", objNull, [objNull]],
	["_funds", 0, [0]]
];

if (!local _unit) exitWith {
	[_unit, _funds] remoteExec ["HALs_money_fnc_addFunds", _unit, false]
};

if (_funds isEqualTo 0) exitWith {};		// no change. do nothing. 

_curBal = (_unit getVariable ["DMD_CashMoney", 0]);
_newBal = _curBal + _funds;

_unit setVariable ["DMD_CashMoney", (_newBal) max 0, true];

dmd_save_bank = [(getPlayerUID _unit), _newBal];
publicVariableServer "dmd_save_bank";