private["_SafeMissionArea"];

waitUntil {!(isNull player)};

if (isNil ("LIB_MissionArea")) exitWith {};
if (isNil ("LIB_SafeMissionArea")) 
	then {
		_SafeMissionArea = LIB_MissionArea;
	}
	else {
		_SafeMissionArea = LIB_SafeMissionArea;
	};

LIB_OutOfMissionArea = false;
LIB_TimeOutsideMissionArea = 0;

4711 cutText ["","BLACK IN",0.01];

while {true} do
{
	if ((!(player inArea _SafeMissionArea)) && (!(player inArea LIB_MissionArea)) && (alive player) && (!(vehicle player isKindOf "Air"))) then
	{
		// hint format ["%1 OutOfMissionArea",(time - (LIB_TimeOutsideMissionArea) < LIB_MissionParameter_PunishTimeOutOfArea)];

		if (isnull (uiNamespace getVariable ["rr_restrictedArea", displayNull])) then
		{
			30 cutRsc ["rr_restrictedArea", "PLAIN"];
		};
		_display = uiNamespace getVariable ["rr_restrictedArea", displayNull];

		_outOfBoundsTimeout = LIB_MissionParameter_PunishTimeOutOfArea;
		if (time - (LIB_TimeOutsideMissionArea) < LIB_MissionParameter_PunishTimeOutOfArea) then
		{
			(_display displayCtrl 1101) ctrlSetStructuredText parseText format ["<t size='5' color='#FFFFFF' shadow='2' align='center' t font='PuristaBold'>%1s</t>", ([(LIB_MissionParameter_PunishTimeOutOfArea + (LIB_TimeOutsideMissionArea)) - time, "MM:SS", true] call bis_fnc_secondsToString) select 1];
		};
		if (!LIB_OutOfMissionArea) then
		{
			LIB_TimeOutsideMissionArea = time;
		};
		LIB_OutOfMissionArea = true;

		if (time > (LIB_TimeOutsideMissionArea + LIB_MissionParameter_PunishTimeOutOfArea)) then
		{
			// hint "Punishment";
			if (surfaceIsWater position player) then {
				_this setDamage 1
			} else 
			{
				if (vehicle player == player) then {
						_pos = position player; _pos set [2, 0];
						_mine = createMine ["APERSMine", _pos, [], 0];
						_mine setDamage 1;
					}
				else { 
					_pos = position player; _pos set [2, 0];
					_mine = createMine ["ATMine", _pos, [], 0];
					_mine setDamage 1;
				};
			};
		
			sleep 5;
		};
	}
	else
	{
		_display = uiNamespace getVariable ["rr_restrictedArea", displayNull];
		if !(isnull _display) then
		{
			30 cuttext ["", "PLAIN"];
		};
		LIB_OutOfMissionArea = false;
	};

	sleep 0.1;
};
