/*
	Function: HALs_store_fnc_blur
	Author: HallyG
	Toggles screen blur.
	
	Argument(s):
	0: Toggle <BOOL>
	
	Return Value:
	None
	
	Example:
	true call HALs_store_fnc_blur;
__________________________________________________________________*/
if (isNil "HALs_store_gui_blur") then {
	HALs_store_gui_blur = ppEffectCreate ["DynamicBlur", 999];
	HALs_store_gui_blur ppEffectEnable true;
};

if _this then {
	HALs_store_gui_blur ppEffectAdjust [8];
	HALs_store_gui_blur ppEffectCommit 0.2;
} else {
    HALs_store_gui_blur ppEffectAdjust [0];
	HALs_store_gui_blur ppEffectCommit 0.3;
};
