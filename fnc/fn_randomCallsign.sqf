/*

WW2 Open Games - Glider insertion
Author: El Tyranos, kerc, Drofseh
Function : BG21_fnc_randomCallsign

*/

[
    ["Able-1","Baker-1","Charlie-1","Dog-1","Easy-1","Fox-1","Able-2","Baker-2","Charlie-2","Dog-2","Easy-2","Fox-2","Able-3","Baker-3","Charlie-3","Dog-3","Easy-3","Fox-3","Able-4","Baker-4","Charlie-4","Dog-4","Easy-4","Fox-4"],
    ["Anton-1","Bertha-1","Casar-1","Dora-1","Emil-1","Friedrich-1","Anton-2","Bertha-2","Casar-2","Dora-2","Emil-2","Friedrich-2","Anton-3","Bertha-3","Casar-3","Dora-3","Emil-3","Friedrich-3","Anton-4","Bertha-4","Casar-4","Dora-4","Emil-4","Friedrich-4"],
    ["Alexey","Boris","Maxim","Dmitry","Filipp","Ivan","Joseph","Roman","Vadim","Artyom","Igor","Yegor","Mikhail","Nikita","Cyka","Pyotr","Sergei","Stanilas","Vitali","Anton","Yuri","Vladimir","Konstantin","Leonid"]
] params ["_usNames","_gerNames","_sovNames","_side","_currentName"];

{
    _side = side _x;

    if  (_side == resistance && {count _usNames > 0}) then {
            _currentName = selectRandom _usNames;
            _usNames deleteAt (_usNames find _currentName);
            _x setGroupIdGlobal [ _currentName ];
    } else {

        if  (_side == west && {count _gerNames > 0}) then {
                _currentName = selectRandom _gerNames;
                _gerNames deleteAt (_gerNames find _currentName);
                _x setGroupIdGlobal [ _currentName ];
        } else {

            if  (_side == east && {count _sovNames > 0}) then {
                    _currentName = selectRandom _sovNames;
                    _sovNames deleteAt (_sovNames find _currentName);
                    _x setGroupIdGlobal [ _currentName ];
            };
        };
    };
} forEach allGroups;
