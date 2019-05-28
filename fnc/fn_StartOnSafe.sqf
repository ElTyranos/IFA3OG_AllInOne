private["_weapon","_muzzle","_safedWeapons"];
_weapon = currentWeapon player;
_muzzle = currentMuzzle player;

if (!isNil "WMT_Global_LeftTime") exitWith {};

if (_weapon != "") then {
	[player, _weapon, _muzzle] call ace_safemode_fnc_lockSafety;
};

waitUntil {!isNil "WMT_Global_LeftTime"};

_safedWeapons = player getVariable ["ace_safemode_safedWeapons",[]];  
if (_weapon in _safedWeapons) then {
	[player, _weapon, _muzzle] call ace_safemode_fnc_unlockSafety;
};
