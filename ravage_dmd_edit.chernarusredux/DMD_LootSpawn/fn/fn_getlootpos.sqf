/* -----------------------------------
    File: fn_getlootpos.sqf
    Author:  JakeHekesFists[DMD] 2019
-------------------------------------- */
params ["_building"];

// Pull the loot settings from dmd_lootTables.hpp
([
    ["LootSettings"],
    ["exclusionTypes","buildingChance","lootPosChance","rareLootMil","rareLootCiv"]
] call dmd_fnc_getMissionCfg ) params ["_exc","_bch","_lch","_rch","_rlc"];

// check if the building has been selected previously to spawn loot. 
if ((_building getVariable ["lootSpawn",0]) isEqualTo 0) then {
    // 300 second timer before building can be cleaned/spawn loot once again
    private _endTime = diag_tickTime + 300;          
    _building setVariable ["lootSpawn",_endTime,true];

    // get all of the positions inside the building. BIS fnc for finding garisson positions for AI units. 
    private _positions = [_building] call BIS_fnc_buildingPositions;
    private _allGWHolders = [];
    private _posCount = (count _positions);
    private _classname = (typeOf _building);
    private _compLoot = [];
    
    if ((_posCount > 0) && !(_classname in _exc)) then {
        if (random 100 < _bch) then {
            
            // check the building type. pulls from the editor subcategory, easy way to identify if military, industrial, etc.
            // this way we dont have to individually specify which class of building spawns which kind of loot. 
            // may add an override for this in future versions. 
            private _cat = (getText(configFile >> "CfgVehicles" >> _classname >> "editorSubcategory"));
            _cat = _cat splitString "_";
            
            // determine loot type to use.  - now with a 0.5% chance of adding rare loot to the civilian tables.
            private _editorSubcat = call {
                if ((_cat select 1) isEqualTo "Industrial") exitWith { ["ind", false] };
                if ((_cat select 1) isEqualTo "Military") exitWith { ["mil",(random 100 <= _rch)] };
                ["civ", (random 200 <= _rlc)]
            };
            _editorSubcat params ["_cfgStr", "_addRare"];

            // select the building category and add the loot arrays 
            ([
                ["LootSettings","LootTypes", _cfgStr],
                [
                    "backpacks","headgear","ammo","smokenades","weapons","vests","attachments","junk","food","items","uniforms","explosives",
                    "qtyBP","qtyHG","qtyAM","qtySM","qtyWP","qtyVS","qtyAT","qtyJK","qtyFD","qtyIT","qtyUN","qtyEX"
                ]
            ] call dmd_fnc_getMissionCfg) params [
                "_bp","_hg","_am","_smk","_wp","_vs","_at","_jk","_fd","_it","_uf","_xp",
                "_qtybp","_qtyhg","_qtyam","_qtysmk","_qtywp","_qtyvs","_qtyat","_qtyjk","_qtyfd","_qtyit","_qtyuf","_qtyxp"
            ];
            
            // if passes check. add rare loot to the loot arrays
            if (_addRare) then {
                ([
                    ["LootSettings","LootTypes", "rare"],
                    ["backpacks","headgear","weapons","vests","attachments","items","uniforms","explosives"]
                ] call dmd_fnc_getMissionCfg) params ["_Rbp","_Rhg","_Rwp","_Rvs","_Rat","_Rit","_Ruf","_Rex"];
                
                { (_x select 0) append (_x select 1); } forEach [
                    [_bp,_Rbp],
                    [_hg,_Rhg],
                    [_wp,_Rwp],
                    [_vs,_Rvs],
                    [_at,_Rat],
                    [_it,_Rit],
                    [_uf,_Ruf],
                    [_xp,_Rex]
                ];
            };
            
            // compile the loot arrays.
            {
                _x params ["_clArr", "_clQty"];
                if (_clQty > 0) then { for "_i" from 1 to _clQty do { _compLoot pushBack (selectRandom _clArr); }; };
            } forEach [
                [_bp, _qtybp],
                [_hg, _qtyhg],
                [_am, _qtyam],
                [_smk, _qtysmk],
                [_wp, _qtywp],
                [_vs, _qtyvs],
                [_at, _qtyat],
                [_jk, _qtyjk],
                [_fd, _qtyfd],
                [_it, _qtyit],
                [_uf, _qtyuf],
                [_xp, _qtyxp]
            ];            
            
            // shuffle the array and trim it
            if (count _compLoot > 100) then {
                _compLoot = _compLoot call dmd_fnc_arrayShuffle;
                _compLoot resize 100;
            };
            
            // spawn loot in these positions
            for "_i" from 0 to (count _positions)-1 do {

                if (random 100 < _lch) then {
                    private _selPos = (_positions select _i);
                    _selPos = [(_selPos select 0), (_selPos select 1), (_selPos select 2)+0.05];
                    private _loot = createVehicle ["GroundWeaponHolder", _selPos, [], 0, "CAN_COLLIDE"];
                    _allGWHolders pushBack _loot;
                    
                    for "_ltitms" from 0 to (floor(random 3)) do {
                        private _item = (selectRandom _compLoot);
                        // isnil check because of some random undef variable errors in rpt
                        if !(isNil "_item") then {
                            private _itemType = [_item] call BIS_fnc_itemType;
                            if ((_itemType select 1) isEqualTo "Backpack") then {
                                _loot addBackpackCargoGlobal [_item, 1];
                            } else {
                                _loot addItemCargoGlobal [_item, 1];
                                if ((_itemType select 0) isEqualTo "Weapon") then {
                                    private _magQty = (floor(random 3)+1);
                                    private _mag = (selectRandom ([_item] call dmd_fnc_sanitiseMags));
                                    _loot addItemCargoGlobal [_mag, _magQty];
                                };
                            };
                        };
                    };
                };
            };
            // push the building, loot holders and cleanup time to the servers cleanup function
            DMD_LootCleanUp pushBack [_building, _allGWHolders, _endTime];
        };
    };
};