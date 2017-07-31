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
		_headgears = ["H_LIB_GER_HelmetCamo_w","H_LIB_GER_Helmet_w","H_LIB_GER_Ushanka","H_LIB_GER_Fieldcap"];
		_uniforms = ["U_LIB_GER_Soldier3_w","U_LIB_GER_Soldier_camo_w","U_LIB_GER_Scharfschutze_w"];
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
	case "FJS" : {
		
		private ["_headgears","_uniforms","_headgear","_uniform","_items","_blacklist_uniform"];
	
		_headgears = [
			"fow_h_ger_m40_fall_01_camo","fow_h_ger_m40_fall_01"
		];
		_uniforms = [
			"fow_u_ger_fall_03_private","fow_u_ger_fall_01_private"
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
	case "DAK" : {
		
		private ["_headgears","_uniforms","_headgear","_uniform","_items","_blacklist_uniform"];
	
		_headgears = [
			"H_LIB_DAK_Helmet","H_LIB_DAK_Helmet_2","H_LIB_DAK_Helmet_net","H_LIB_DAK_Helmet_net_2","H_LIB_DAK_Helmet_ns","H_LIB_DAK_Helmet_ns_2","H_LIB_DAK_Cap"
		];
		_uniforms = [
			"U_LIB_DAK_Soldier","U_LIB_DAK_Soldier_2","U_LIB_DAK_Soldier_3"
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
	case "IJA" : {
		private ["_headgears","_uniforms","_headgear","_uniform","_items"];
		_headgears = ["fow_h_ija_fieldcap","fow_h_ija_fieldcap_neck","fow_h_ija_hakimachi","fow_h_ija_type90","fow_h_ija_type90_net","fow_h_ija_type90_net_neck"];
		_uniforms = ["fow_u_ija_type98","fow_u_ija_type98_short","fow_u_ija_type98_khakibrown"];
		_uniform = _uniforms call BIS_fnc_selectRandom;
		_headgear = _headgears call BIS_fnc_selectRandom;
		_items = uniformItems _unit;
		removeUniform _unit;
		_unit addUniform _uniform;
		_unit addHeadGear _headgear;
		{_unit addItemToUniform _x} foreach _items;
	};
	case "IJA_SNLF" : {
		private ["_headgears","_uniforms","_headgear","_uniform","_items"];
		_headgears = ["fow_h_ija_fieldcap_marine_neck","fow_h_ija_type90_snlf","fow_h_ija_fieldcap_marine","fow_h_ija_type90"];
		_uniforms = ["fow_u_ija_type98_snlf"];
		_uniform = _uniforms call BIS_fnc_selectRandom;
		_headgear = _headgears call BIS_fnc_selectRandom;
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

	case "USARMY" : {
		private ["_headgears","_uniforms","_headgear","_uniform","_items"];
		_headgears = ["H_LIB_US_Helmet","H_LIB_US_Helmet_ns","H_LIB_US_Helmet_os","H_LIB_US_Helmet_Net","H_LIB_US_Helmet_Net_ns","H_LIB_US_Helmet_Net_os"];
		_uniforms = ["U_LIB_US_Private"];
		_uniform = _uniforms call BIS_fnc_selectRandom;
		_headgear = _headgears call BIS_fnc_selectRandom;
		_items = uniformItems _unit;
		removeUniform _unit;
		_unit addUniform _uniform;
		_unit addHeadGear _headgear;
		{_unit addItemToUniform _x} foreach _items;
	};
	case "USARMY_W" : {
		private ["_headgears","_uniforms","_headgear","_uniform","_items"];
		_headgears = ["H_LIB_US_Helmet_w","H_LIB_US_Helmet_Net_w","H_LIB_US_Helmet_Cover_w"];
		_uniforms = ["U_LIB_US_Private_w"];
		_uniform = _uniforms call BIS_fnc_selectRandom;
		_headgear = _headgears call BIS_fnc_selectRandom;
		_items = uniformItems _unit;
		removeUniform _unit;
		_unit addUniform _uniform;
		_unit addHeadGear _headgear;
		{_unit addItemToUniform _x} foreach _items;
	};
	case "USRANGERS" : {
		private ["_headgears","_uniforms","_headgear","_uniform","_items"];
		_headgears = ["H_LIB_US_Rangers_Helmet","H_LIB_US_Rangers_Helmet_ns","H_LIB_US_Rangers_Helmet_os","H_LIB_US_Helmet_Net","H_LIB_US_Helmet_Net_ns","H_LIB_US_Helmet_Net_os"];
		_uniforms = ["U_LIB_US_Rangers_Uniform"];
		_uniform = _uniforms call BIS_fnc_selectRandom;
		_headgear = _headgears call BIS_fnc_selectRandom;
		_items = uniformItems _unit;
		removeUniform _unit;
		_unit addUniform _uniform;
		_unit addHeadGear _headgear;
		{_unit addItemToUniform _x} foreach _items;
	};	
	case "USNAC" : {
		private ["_headgears","_uniforms","_headgear","_uniform","_items"];
		_headgears = ["H_LIB_US_Helmet","H_LIB_US_Helmet_ns","H_LIB_US_Helmet_os","H_LIB_US_Helmet_Net","H_LIB_US_Helmet_Net_ns","H_LIB_US_Helmet_Net_os"];
		_uniforms = ["U_LIB_US_NAC_Uniform"];
		_uniform = _uniforms call BIS_fnc_selectRandom;
		_headgear = _headgears call BIS_fnc_selectRandom;
		_items = uniformItems _unit;
		removeUniform _unit;
		_unit addUniform _uniform;
		_unit addHeadGear _headgear;
		{_unit addItemToUniform _x} foreach _items;
	};	
	case "USMC" : {
		private ["_headgears","_uniforms","_headgear","_uniform","_items"];
		_headgears = ["fow_h_usmc_m1","fow_h_usmc_m1"];
		_uniforms = ["fow_u_usmc_p41_01_private"];
		_uniform = _uniforms call BIS_fnc_selectRandom;
		_headgear = _headgears call BIS_fnc_selectRandom;
		_items = uniformItems _unit;
		removeUniform _unit;
		_unit addUniform _uniform;
		_unit addHeadGear _headgear;
		{_unit addItemToUniform _x} foreach _items;
	};
	case "USAB_101" : {
		private ["_headgears","_uniforms","_headgear","_uniform","_items"];
		_headgears = ["H_LIB_US_AB_Helmet","H_LIB_US_AB_Helmet_2","H_LIB_US_AB_Helmet_3","H_LIB_US_AB_Helmet_4","H_LIB_US_AB_Helmet_5","H_LIB_US_AB_Helmet_Plain_1","H_LIB_US_AB_Helmet_Plain_2","H_LIB_US_AB_Helmet_Plain_3"];
		_uniforms = ["U_LIB_US_AB_Uniform_M42"];
		_uniform = _uniforms call BIS_fnc_selectRandom;
		_headgear = _headgears call BIS_fnc_selectRandom;
		_items = uniformItems _unit;
		removeUniform _unit;
		_unit addUniform _uniform;
		_unit addHeadGear _headgear;
		{_unit addItemToUniform _x} foreach _items;
	};
	case "USAB_82" : {
		private ["_headgears","_uniforms","_headgear","_uniform","_items"];
		_headgears = ["H_LIB_US_AB_Helmet_Clear_1","H_LIB_US_AB_Helmet_Clear_2","H_LIB_US_AB_Helmet_Clear_3"];
		_uniforms = ["U_LIB_US_AB_Uniform_M43","U_LIB_US_AB_Uniform_M43_Flag"];
		_uniform = _uniforms call BIS_fnc_selectRandom;
		_headgear = _headgears call BIS_fnc_selectRandom;
		_items = uniformItems _unit;
		removeUniform _unit;
		_unit addUniform _uniform;
		_unit addHeadGear _headgear;
		{_unit addItemToUniform _x} foreach _items;
	};	
	
	case "UK" : {
		private ["_headgears","_uniforms","_headgear","_uniform","_items"];
		_headgears = ["fow_h_uk_mk2","fow_h_uk_mk2_net","fow_h_uk_mk2_net_camo","fow_h_uk_mk3","fow_h_uk_mk3_net_camo"];
		_uniforms = ["fow_u_uk_bd40_01_private"];
		_uniform = _uniforms call BIS_fnc_selectRandom;
		_headgear = _headgears call BIS_fnc_selectRandom;
		_items = uniformItems _unit;
		removeUniform _unit;
		_unit addUniform _uniform;
		_unit addHeadGear _headgear;
		{_unit addItemToUniform _x} foreach _items;
	};	
	case "UK_AB" : {
		private ["_headgears","_uniforms","_headgear","_uniform","_items"];
		_headgears = ["fow_h_uk_mk2_para_foliage","fow_h_uk_mk2_para"];
		_uniforms = ["fow_u_uk_parasmock"];
		_uniform = _uniforms call BIS_fnc_selectRandom;
		_headgear = _headgears call BIS_fnc_selectRandom;
		_items = uniformItems _unit;
		removeUniform _unit;
		_unit addUniform _uniform;
		_unit addHeadGear _headgear;
		{_unit addItemToUniform _x} foreach _items;
	};	
	case "UK_CDO" : {
		private ["_headgears","_uniforms","_headgear","_uniform","_items"];
		_headgears = ["fow_h_uk_mk2","fow_h_uk_mk2_net","fow_h_uk_mk3","fow_h_uk_mk3_net"];
		_uniforms = ["fow_u_uk_bd40_kieffer_01","fow_u_uk_bd40_kieffer_02"];
		_uniform = _uniforms call BIS_fnc_selectRandom;
		_headgear = _headgears call BIS_fnc_selectRandom;
		_items = uniformItems _unit;
		removeUniform _unit;
		_unit addUniform _uniform;
		_unit addHeadGear _headgear;
		{_unit addItemToUniform _x} foreach _items;
	};

	case default {};
};
