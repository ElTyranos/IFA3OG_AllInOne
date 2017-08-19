private ["_killedUnit","_soundSet","_sound","_position","_dummy"];
_killedUnit = _this select 0;

if !(local _killedUnit) exitWith {};

if ((random 100) < 50) exitWith {};

_soundSet = getArray (configFile/"CfgDeathScreams"/faction (_killedUnit));

// Nothing found
if (isNil ("_soundSet")) exitWith {};
if (_soundSet isEqualTo []) exitWith {};

_sound = _soundSet call BIS_fnc_selectRandom;

// Defines the position of the dying unit
_position = position _killedUnit;

BG21_DeathScreamEvent = [_killedUnit,_position,_sound];
publicVariable  "BG21_DeathScreamEvent";

//Publicvars don't fire on those who set the var
if ((player distance _killedUnit) > 140) exitWith {};
// Create a dummy that will play the sound
_dummy = "Land_HelipadEmpty_F" createVehicleLocal _position;
_dummy attachTo [_killedUnit, [0,0,0],"head"];
_dummy say3d _sound;

sleep 60;

deleteVehicle _dummy;
