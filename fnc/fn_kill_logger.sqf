/*
ORIGINAL CODE BY OFCRA
http://www.ofcrav2.org/
*/

if (isServer) then {
	["[BG21] INFO: enabling kill logs ...", "INFO", true] call BG21_fnc_Log;
	
	_index = 1;
	{
		_name = "bot_" + (str _index);
		_x setName _name;
		_x addMPEventHandler ["MPkilled", {diag_log text format ["[BG21] KILL: '%1' killed by '%2'",name (_this select 0),name (_this select 1)];}];
		_x addMPEventHandler ["MPhit", {diag_log text format ["[BG21] HIT: '%1' hit from +'%4' to '%3' by '%2'",name (_this select 0),name (_this select 1),damage (_this select 0),(_this select 2)];}];
		_index = _index + 1;
	} forEach allUnits;

	["[BG21] INFO: kill logs done ...", "INFO", true] call BG21_fnc_Log;
};
