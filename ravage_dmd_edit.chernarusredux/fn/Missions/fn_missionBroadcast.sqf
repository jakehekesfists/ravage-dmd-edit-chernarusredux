/* -----------------------------------
    File: fn_missionBroadcast.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params [
    ["_header","HEADER NOT SUPPLIED"],
    ["_msg","FILL IN YOUR MESSAGE TEXT DUMBASS"],
    ["_missionType","WHOOPS"],
    ["_image","\A3\ui_f\data\igui\cfg\simpleTasks\types\attack_ca.paa"]
];

private _headerColor = (selectRandom ['#e30e63','#f23005','#ff9500','#faee05','#4afa05','#80cc06','#10cc7e','#11bcf0','#1a63d9','#970be3']);
private _separator = "----------------------------------";
private _structuredText = parseText format[
    "
        <img image='%1'></img><br/>
        <t size='1' align='center' color='#ffffff' shadow='2'>%2</t><br/>
        <t size='1.4' align='center' color='#ffffff' shadow='2'>%3</t><br/>
        <t size='1.6' font='PuristaBold' color='%6' align='left'>%4</t><br/><br/>
        <t size='1.1' font='PuristaMedium' align='left' color='#ffffff' shadow='2'>%5</t>
    ",
    _image,
    _missionType,
    _separator,
    _header,
    _msg,
    _headerColor
];

[_structuredText] remoteExec ["hint", 0];
systemChat format [(localize "STR_MIS_MB_PRIBROAD"), _header, _msg];