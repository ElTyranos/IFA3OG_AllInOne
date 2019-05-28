if (!ace_hearing_enableCombatDeafness) exitWith {};

if ("ACE_EarPlugs" in items player) then {

	[player] call ace_hearing_fnc_putInEarPlugs;
	
};
