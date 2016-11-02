
private "_unit";

_unit = _this select 0;

switch (_this select 1) do {
	case "WH" : {
		
		private ["_headgears","_uniforms","_headgear","_uniform","_items","_blacklist_uniform"];
	
		_headgears = [
			"H_LIB_GER_Helmet","H_LIB_GER_Helmet_net","H_LIB_GER_Helmet_ns","H_LIB_GER_Helmet_painted","H_LIB_GER_Helmet_net_painted","H_LIB_GER_Helmet_ns_painted"
		];
		_uniforms = [
			"U_LIB_GER_Schutze","U_LIB_GER_Recruit","U_LIB_GER_Gefreiter","U_LIB_GER_Pionier",
			"U_LIB_GER_MG_schutze","U_LIB_GER_Soldier2","U_LIB_GER_Soldier3"
		];
		
		_uniform = _uniforms call BIS_fnc_selectRandom;
		
		_headgear = _headgears call BIS_fnc_selectRandom;
		
		_blacklist_uniform = [""];
		
		if (_uniform in _blacklist_uniform) then {_headgear = ""};
		_items = uniformItems _unit;
		
		removeUniform _unit;
		_unit addUniform _uniform;
		
		_unit addHeadGear _headgear;
		
		{_unit addItemToUniform _x} foreach _items;
	};
	case "WH_W" : {
		
		private ["_headgears","_uniforms","_headgear","_uniform","_items","_blacklist_uniform"];
	
		_headgears = [
			"H_LIB_GER_HelmetCamo_w","H_LIB_GER_Helmet_w","H_LIB_GER_Ushanka","H_LIB_GER_Fieldcap"
		];
		_uniforms = [
			"U_LIB_GER_Schutze_w"
		];
		
		_uniform = _uniforms call BIS_fnc_selectRandom;
		
		_headgear = _headgears call BIS_fnc_selectRandom;
		
		_blacklist_uniform = [""];
		
		if (_uniform in _blacklist_uniform) then {_headgear = ""};
		_items = uniformItems _unit;
		
		removeUniform _unit;
		_unit addUniform _uniform;
		
		_unit addHeadGear _headgear;
		
		{_unit addItemToUniform _x} foreach _items;
	};
	case "RA" : {
		
		private ["_headgears","_uniforms","_headgear","_uniform","_items","_blacklist_uniform"];
	
		_headgears = [
			"H_LIB_SOV_RA_PrivateCap","H_LIB_SOV_RA_Helmet"
		];
		_uniforms = [
			"U_LIB_SOV_Strelok"
		];
		
		_uniform = _uniforms call BIS_fnc_selectRandom;
		
		_headgear = _headgears call BIS_fnc_selectRandom;
		
		_blacklist_uniform = [""];
		
		if (_uniform in _blacklist_uniform) then {_headgear = ""};
		_items = uniformItems _unit;
		
		removeUniform _unit;
		_unit addUniform _uniform;
		
		_unit addHeadGear _headgear;
		
		{_unit addItemToUniform _x} foreach _items;
	};
	case "RA_W" : {
		
		private ["_headgears","_uniforms","_headgear","_uniform","_items","_blacklist_uniform"];
	
		_headgears = [
			"H_LIB_SOV_RA_Helmet_w","H_LIB_SOV_Ushanka","H_LIB_SOV_Ushanka2"
		];
		_uniforms = [
			"U_LIB_SOV_Strelok_w"
		];
		
		_uniform = _uniforms call BIS_fnc_selectRandom;
		
		_headgear = _headgears call BIS_fnc_selectRandom;
		
		_blacklist_uniform = [""];
		
		if (_uniform in _blacklist_uniform) then {_headgear = ""};
		_items = uniformItems _unit;
		
		removeUniform _unit;
		_unit addUniform _uniform;
		
		_unit addHeadGear _headgear;
		
		{_unit addItemToUniform _x} foreach _items;
	};	
	case default {};
};