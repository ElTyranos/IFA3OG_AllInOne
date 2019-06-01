/*

WW2 Open Games - Spectator handler
Author: El Tyranos
Function : BG21_fnc_onPlayerKilled

Requirements :
---------------
ACE3 Spectator (Vanilla Display ID = 20492 ; ACE Display ID = 60000)
WMT
* 61 = F3 (Statistics)
* 60 = F2 (Main menu)
* 60 = F4 (ACRE Mute)
*/

_textDeath = format ["<t size='0.5' color='#ffffff'>%1
You are dead.<br/>
You are being transfered to spectator..."];

[_textDeath, -1, -1, 8, 1] spawn BIS_fnc_dynamicText;

sleep 10; // let's enjoy the death scream and give time to relax

_this call ace_spectator_fnc_respawnTemplate;

switch (playerSide) do {
	case WEST: { [[west], [east,resistance,civilian]] call ace_spectator_fnc_updateSides; };
	case EAST: { [[east], [west,resistance,civilian]] call ace_spectator_fnc_updateSides; };		
	case RESISTANCE: { [[resistance], [east,west,civilian]] call ace_spectator_fnc_updateSides; };
};

_textHint = format ["<t size='0.5' color='#ffffff'>%1
Show spectator help by presing <t color='#FFA500'>F1</t>.<br/>
Show you kills by pressing <t color='#FFA500'>F2</t>.<br/>
Mute other spectators by pressing <t color='#FFA500'>CTRL+SHIFT+DOWN</t> or <t color='#FFA500'>F4</t>.<br/>
Open map by pressing <t color='#FFA500'>M</t> and click anywhere to move camera to that postion.<br/>
Spectator controls can be customized in game <t color='#FFA500'>options>controls>Camera</t> tab.</t>"];

[_textHint, 0.55, 0.8, 45, 1] spawn BIS_fnc_dynamicText;

[] spawn
{
	waitUntil { !isNull findDisplay 60000 };
	findDisplay 60000 displayAddEventHandler ["KeyDown",
		{
			if (((_this select 1) == 61) && (!dialog)) then
			{
				createDialog 'RscWMTMainMenu';
			};
			false
		}
	];
};

[] spawn
{
	waitUntil { !isNull findDisplay 60000 };
	findDisplay 60000 displayAddEventHandler ["KeyDown",
		{
			if (((_this select 1) == 60) && (!dialog)) then
			{
				call WMT_fnc_ShowStatistic;
			};
			false
		}
	];
};

// Unecessary because ACE spectator fixed this, but kept for backward compabtibily of players brains
[] spawn
{
	waitUntil { !isNull findDisplay 60000 };
	findDisplay 60000 displayAddEventHandler ["KeyDown",
		{
			if (((_this select 1) == 62) && (!dialog)) then
			{
			   [] call acre_sys_core_fnc_toggleHeadset;
			};
			false
		}
	];
};

// Displays timer to end of mission
[] spawn
{
	private["_ctrl", "_leftTime", "_s1"];
	waitUntil { !isNull findDisplay 60000 && !isNil "WMT_Global_LeftTime"};
	
	disableSerialization;
	uisleep 1.;

	_ctrl = findDisplay 60000 ctrlCreate ["RscText", -1];
	_ctrl ctrlSetPosition [0.5, safezoneY, 0.15, 0.05];
	_ctrl ctrlSetText "00:00";
	_ctrl ctrlSetTextColor [0.75, 0.75, 0.75, 1];
	_ctrl ctrlCommit 0;

	while {time > 0.1} do {
		private _leftTime = (WMT_Global_LeftTime select 0);
		_leftTime = _leftTime - (diag_tickTime - (WMT_Local_LeftTime select 0));
		_leftTime = 0 max _leftTime;
		_s1 = [_leftTime , "MM:SS"] call BIS_fnc_secondsToString;
		_ctrl ctrlSetText _s1;
		_ctrl ctrlCommit 0;
		uisleep 0.1;
	};

	ctrlDelete _ctrl;
};
