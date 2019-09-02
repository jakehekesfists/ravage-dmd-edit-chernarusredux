class DMDStatusBar {
    idd = -1;
    duration = 999999999;
    onLoad = "uiNamespace setVariable ['DMDStatusBar', _this select 0];";
    fadein = 0;
    fadeout = 0;
    movingEnable = 0;
    objects[] = {};

    class controls {
        class statusBarText {
            idc = 881488;
            x = 0.925 * safezoneW + safezoneX;
            y = 0.522 * safezoneH + safezoneY;
            w = 0.075 * safezoneW;
            h = 0.253 * safezoneH;
            colorBackground[] = {0,0,0,0};
            shadow = 1;
            font = "EtelkaMonospaceProBold";
            size = 0.035;
            type = 13;
            style = 2;
            text = "";
            
            class Attributes {
                align="right";
                valign = "middle";
                shadow = 2;
                shadowColor = "#000000";
                color = "#ffffff";
                font = "RobotoCondensed";
                size = 1.1;
            };
        };
    };
};