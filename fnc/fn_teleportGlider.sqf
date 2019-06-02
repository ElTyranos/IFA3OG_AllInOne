/*

WW2 Open Games - Glider insertion
Author: El Tyranos
Function : BG21_fnc_TeleportGlider

Requirements :
---------------
"insert_point" as an object Variable Name (unit, trigger)
Use a glider with the proper user action

OR  add "plane" as variable name of your plane + this to its init : plane addAction ["<t color='#ff0000'> Run insertion", BG21_fnc_TeleportGlider, [], 0, false, true, "", "((driver this == (call ww2_fnc_findPlayer)) && ((speed plane) < 1))"];

*/

if (isNil ("insert_point")) exitWith { hint "missing insert_point trigger"};

_textMissionStart = format ["<t size='0.5' color='#ffffff'>%1
You must wait for mission to start..."];

if (isNil "WMT_Global_LeftTime") exitWith { [_textMissionStart, -1, -1, 8, 1] spawn BIS_fnc_dynamicText; };

if (isNil {vehicle player getVariable "BG21_GliderHasInserted"}) then {vehicle player setVariable ["BG21_GliderHasInserted", false, true];};

if (!(player inArea LIB_MissionArea)) then {vehicle player setVariable ["BG21_GliderHasInserted", false, true];};

_textInserted = format ["<t size='0.5' color='#ffffff'>%1
You are crash landed..."];

if ((vehicle player getVariable ["BG21_GliderHasInserted",true])) exitWith { [_textInserted, -1, -1, 8, 1] spawn BIS_fnc_dynamicText; };

[] spawn
{
	private["_vehicle","_vel","_dir","_x","_y","_z","_speed","_altitude"];
	_vehicle = vehicle player;
	_vel = velocity _vehicle; 
	_dir = direction _vehicle;
	_x = getPos insert_point select 0;
	_y = getPos insert_point select 1;
	_z = getPos insert_point select 2;
	_speed = 45;
	_altitude = 390 + random 20;

	_textTransfer = format ["<t size='0.5' color='#ffffff'>%1
	Get ready.<br/>
	You will be inserted in a few seconds..."];

	[_textTransfer, -1, -1, 8, 1] spawn BIS_fnc_dynamicText;

	sleep 8 + random 4;

	_vehicle setPos [(_x) + random 50, (_y) + random 50, (_z) + _altitude];
	_vehicle setVelocity [
	 (_vel select 0) + (sin _dir * _speed),  
	 (_vel select 1) + (cos _dir * _speed),  
	 (_vel select 2) 
	 ];
	_vehicle setVariable ["BG21_GliderHasInserted", true, true];
};
