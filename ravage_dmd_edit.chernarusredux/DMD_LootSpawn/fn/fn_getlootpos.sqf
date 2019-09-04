/* -----------------------------------
    File: fn_getlootpos.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */

params ["_building"];

([
    [ "LootSettings" ],
    [ "exclusionTypes","buildingChance","lootPosChance" ]
] call dmd_fnc_getMissionCfg ) params ["_exc","_bch","_lch"];


if ((_building getVariable ["lootSpawn",0]) isEqualTo 0) then {
    private _endTime = diag_tickTime + 300;
    _building setVariable ["lootSpawn",_endTime,true];
    private _positions = [_building] call BIS_fnc_buildingPositions;
    private _allGWHolders = [];
    private _posCount = (count _positions);
    private _classname = (typeOf _building);

    private _compLoot = [];

    if ((_posCount > 0) && !(_classname in _exc)) then {
        if (random 100 < _bch) then {            

            private _cat = (getText(configFile >> "CfgVehicles" >> _classname >> "editorSubcategory"));
            _cat = _cat splitString "_";
            
            // determine loot type to use. 
            private _cfgStr = call {
                if ((_cat select 1) isEqualTo "Industrial") exitWith { "ind" };
                if ((_cat select 1) isEqualTo "Military") exitWith { "mil" };
                "civ"
            };

            ([
                ["LootSettings","LootTypes", _cfgStr],
                ["backpacks","headgear","ammo","smokenades","weapons","vests","attachments","junk","food","items","uniforms","explosives"]
            ] call dmd_fnc_getMissionCfg) params ["_bp","_hg","_am","_smk","_wp","_vs","_at","_jk","_fd","_it","_uf","_xp"];

            private _lootQtys = [];
            switch (_cfgStr) do {
                case "mil": {
                    // 15% chance of adding the rare loot tables in to the military spawns
                    if (random 100 < 15) then {
                        ([
                            ["LootSettings","LootTypes", "rare"],
                            ["backpacks","headgear","weapons","vests","attachments","items","uniforms"]
                        ] call dmd_fnc_getMissionCfg) params ["_Rbp","_Rhg","_Rwp","_Rvs","_Rat","_Rit","_Ruf"];
                        _bp append _Rbp; 
                        _hg append _Rhg;
                        _wp append _Rwp;
                        _vs append _Rvs;
                        _at append _Rat;
                        _it append _Rit;
                        _uf append _Ruf;
                    };
                    _lootQtys = [[5, _bp],[20, _hg],[25, _am],[5, _smk],[30, _wp],[15, _vs],[15, _at],[40, _jk],[10, _fd],[15, _it],[8, _uf],[10, _xp]];
                    
                };

                case "ind": {
                    _lootQtys = [[2, _hg],[10, _smk],[5, _wp],[40, _jk],[10, _fd],[25, _it]];
                };

                default {
                    _lootQtys = [[8, _bp],[4, _hg],[12, _am],[10, _smk],[6, _wp],[3, _vs],[2, _at],[60, _jk],[40, _fd],[20, _it],[10, _uf]];
                };
            };

            { for "_i" from 1 to (_x select 0) do { _compLoot pushBack (selectRandom (_x select 1)); }; } forEach _lootQtys;
            
            if (count _compLoot > 100) then {
                _compLoot = _compLoot call dmd_fnc_arrayShuffle;
                _compLoot resize 100;
            };
            
            // spawn loot in these positions 
            for "_i" from 0 to (count _positions)-1 do {

                if (random 100 < _lch) then {
                    private _selPos = (_positions select _i);
                    _selPos = [(_selPos select 0), (_selPos select 1), (_selPos select 2)+0.1];
                    private _loot = createVehicle ["GroundWeaponHolder", _selPos, [], 0, "CAN_COLLIDE"];
                    _allGWHolders pushBack _loot;
                    
                    for "_ltitms" from 0 to (floor(random 3)) do {
                        private _item = (selectRandom _compLoot);            
                        private _itemType = [_item] call BIS_fnc_itemType;

                        switch (_itemType select 0) do {
                            case "Weapon": {
                                _loot addWeaponCargoGlobal [_item,1];
                                private _mag = (selectRandom ([_item] call dmd_fnc_sanitiseMags));
                                _loot addMagazineCargoGlobal [_mag, floor (random 2)+1];
                            };
                            case "Mine";              
                            case "Magazine";
                            case "Item": {
                                _loot addItemCargoGlobal [_item, 1];
                            };
                            case "Equipment": {
                                if ((_itemType select 1) == "Backpack") then {
                                    _loot addBackpackCargoGlobal [_item, 1];
                                } else {
                                    _loot addItemCargoGlobal [_item, 1];
                                };
                            };                
                            default {_loot addItemCargoGlobal [_item, 1];};
                        };
                    };
                };
            };

            DMD_LootCleanUp pushBack [_building, _allGWHolders, _endTime];
        };     
    };
};