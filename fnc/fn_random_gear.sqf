private "_unit";

_unit = _this select 0;

switch (_this select 1) do {
	case "WH" : {
		
		private ["_headgears","_uniforms","_headgear","_uniform","_items","_blacklist_uniform"];
	
		_headgears = [
			"H_LIB_GER_Helmet","H_LIB_GER_Helmet_net","H_LIB_GER_Helmet_ns","H_LIB_GER_Helmet_os","H_LIB_GER_Helmet_painted","H_LIB_GER_Helmet_net_painted","H_LIB_GER_Helmet_ns_painted","H_LIB_GER_Helmet_os_painted","H_LIB_GER_Helmet_Glasses","H_LIB_GER_HelmetUtility","H_LIB_GER_HelmetUtility_Grass","H_LIB_GER_HelmetUtility_Oak","H_LIB_GER_HelmetCamo","H_LIB_GER_HelmetCamo2","H_LIB_GER_HelmetCamo3","H_LIB_GER_HelmetCamo4","H_LIB_GER_Cap"
		];
		_uniforms = [
			"U_LIB_GER_Schutze","U_LIB_GER_Soldier3","U_LIB_GER_Soldier2","U_LIB_GER_Soldier_camo2","U_LIB_GER_Scharfschutze","U_LIB_GER_Soldier_camo","U_LIB_GER_Soldier_camo4","U_LIB_GER_Soldier_camo3","U_LIB_GER_Soldier_camo5","U_LIB_GER_Schutze_HBT","U_LIB_GER_MG_schutze_HBT","U_LIB_GER_MG_schutze","U_LIB_GER_Gefreiter","U_LIB_GER_Oberschutze"
		];
		
		_uniform = selectRandom _uniforms;
		
		_headgear = selectRandom _headgears;
		
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
		_headgears = ["H_LIB_GER_Helmet","H_LIB_GER_Helmet_net","H_LIB_GER_Helmet_ns","H_LIB_GER_Helmet_os","H_LIB_GER_HelmetUtility","H_LIB_GER_HelmetUtility_Grass","H_LIB_GER_Helmet_w","H_LIB_GER_Helmet_net_w","H_LIB_GER_Helmet_ns_w","H_LIB_GER_HelmetCamo_w","H_LIB_GER_HelmetCamob_w","H_LIB_GER_HelmetCamo2_w","H_LIB_GER_HelmetCamo2b_w","H_LIB_GER_HelmetCamo4_w","H_LIB_GER_Helmet_Glasses_w","H_LIB_GER_Ushanka","H_LIB_GER_Fieldcap"];
		_uniforms = ["U_LIB_GER_Soldier3_w","U_LIB_GER_Soldier_camo_w","U_LIB_GER_Scharfschutze_w"];
		_uniform = selectRandom _uniforms;
		_headgear = selectRandom _headgears;
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
			"H_LIB_GER_FSJ_M44_Helmet","H_LIB_GER_FSJ_M44_Helmet_os","H_LIB_GER_FSJ_M44_HelmetCamo1","H_LIB_GER_FSJ_M44_HelmetCamo2","H_LIB_GER_FSJ_M38_Helmet_Cover","H_LIB_GER_FSJ_M44_HelmetUtility"
		];
		_uniforms = [
			"U_LIB_FSJ_Soldier","U_LIB_FSJ_Soldier_camo"
		];
		
		_uniform = selectRandom _uniforms;
		
		_headgear = selectRandom _headgears;
		
		_blacklist_uniform = [""];
		
		if (_uniform in _blacklist_uniform) then {_headgear = ""};
		_items = uniformItems _unit;
		
		removeUniform _unit;
		_unit addUniform _uniform;
		
		_unit addHeadGear _headgear;
		
		{_unit addItemToUniform _x} foreach _items;
	};
	case "FJS_DAK" : {
		
		private ["_headgears","_uniforms","_headgear","_uniform","_items","_blacklist_uniform"];
	
		_headgears = [
			"H_LIB_GER_FSJ_M38_Helmet_DAK","H_LIB_GER_FSJ_M38_Helmet_grey","H_LIB_GER_FSJ_M38_Helmet_grey_os"
		];
		_uniforms = [
			"U_LIB_FSJ_Soldier_dak","U_LIB_FSJ_Soldier_dak_camo"
		];
		
		_uniform = selectRandom _uniforms;
		
		_headgear = selectRandom _headgears;
		
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
			"H_LIB_DAK_Helmet","H_LIB_DAK_Helmet_2","H_LIB_DAK_Helmet_net","H_LIB_DAK_Helmet_net_2","H_LIB_DAK_Helmet_ns","H_LIB_DAK_Helmet_ns_2","H_LIB_DAK_Helmet_Glasses","H_LIB_DAK_Cap"
		];
		_uniforms = [
			"U_LIB_DAK_Soldier","U_LIB_DAK_Soldier_2","U_LIB_DAK_Soldier_3","U_LIB_DAK_Shorts","U_LIB_DAK_Shorts_2","U_LIB_DAK_Shorts_3"
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
	case "SS" : {
		
		private ["_headgears","_uniforms","_headgear","_uniform","_items","_blacklist_uniform"];
	
		_headgears = [
			"H_LIB_GER_Helmet","H_LIB_GER_Helmet_net","H_LIB_GER_Helmet_ns","H_LIB_GER_Helmet_os","H_LIB_GER_Helmet_painted","H_LIB_GER_Helmet_net_painted","H_LIB_GER_Helmet_ns_painted","H_LIB_GER_Helmet_os_painted","H_LIB_GER_Helmet_Glasses","H_LIB_GER_HelmetUtility","H_LIB_GER_HelmetUtility_Grass","H_LIB_GER_HelmetUtility_Oak","H_LIB_GER_HelmetCamo3","H_LIB_GER_Fieldcap2","H_LIB_ST_Helmet2"
		];
		_uniforms = [
			"U_LIB_ST_Soldier_Camo2","U_LIB_ST_Soldier_E44","U_LIB_ST_Soldier_E44_Camo2","U_LIB_ST_MGunner_E44","U_LIB_ST_Unterofficier_E44","U_LIB_ST_Sniper2"
		];
		
		_uniform = selectRandom _uniforms;
		
		_headgear = selectRandom _headgears;
		
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
		_uniform = selectRandom _uniforms;
		_headgear = selectRandom _headgears;
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
		_uniform = selectRandom _uniforms;
		_headgear = selectRandom _headgears;
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
		
		_uniform = selectRandom _uniforms;
		
		_headgear = selectRandom _headgears;
		
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
		
		_uniform = selectRandom _uniforms;
		
		_headgear = selectRandom _headgears;
		
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
		_uniform = selectRandom _uniforms;
		_headgear = selectRandom _headgears;
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
		_uniform = selectRandom _uniforms;
		_headgear = selectRandom _headgears;
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
		_uniform = selectRandom _uniforms;
		_headgear = selectRandom _headgears;
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
		_uniform = selectRandom _uniforms;
		_headgear = selectRandom _headgears;
		_items = uniformItems _unit;
		removeUniform _unit;
		_unit addUniform _uniform;
		_unit addHeadGear _headgear;
		{_unit addItemToUniform _x} foreach _items;
	};	
	case "USMC" : {
		private ["_headgears","_uniforms","_headgear","_uniform","_items"];
		_headgears = ["fow_h_usmc_m1","fow_h_usmc_m1_camo_01","fow_h_usmc_m1_camo_02"];
		_uniforms = ["fow_u_us_hbt_01_private","fow_u_us_hbt_02_private","fow_u_usmc_p41_01_private","fow_u_usmc_p42_01_camo01_1_private","fow_u_usmc_p42_01_camo01_2_private","fow_u_usmc_p42_01_camo01_3_private","fow_u_usmc_p42_01_camo02_1_private","fow_u_usmc_p42_01_camo02_2_private","fow_u_usmc_p42_01_camo02_3_private"];
		_uniform = selectRandom _uniforms;
		_headgear = selectRandom _headgears;
		_items = uniformItems _unit;
		removeUniform _unit;
		_unit addUniform _uniform;
		_unit addHeadGear _headgear;
		{_unit addItemToUniform _x} foreach _items;
	};
	case "USAB_101" : {
		private ["_headgears","_uniforms","_headgear","_uniform","_items"];
		_headgears = ["H_LIB_US_AB_Helmet","H_LIB_US_AB_Helmet_2","H_LIB_US_AB_Helmet_3","H_LIB_US_AB_Helmet_4","H_LIB_US_AB_Helmet_5","H_LIB_US_AB_Helmet_Plain_1","H_LIB_US_AB_Helmet_Plain_2","H_LIB_US_AB_Helmet_Plain_3"];
		_uniforms = ["U_LIB_US_AB_Uniform_M42","U_LIB_US_AB_Uniform_M42_506"];
		_uniform = selectRandom _uniforms;
		_headgear = selectRandom _headgears;
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
		_uniform = selectRandom _uniforms;
		_headgear = selectRandom _headgears;
		_items = uniformItems _unit;
		removeUniform _unit;
		_unit addUniform _uniform;
		_unit addHeadGear _headgear;
		{_unit addItemToUniform _x} foreach _items;
	};	
	case "USAAF" : {
		private ["_headgears","_uniforms","_headgear","_uniform","_items"];
		_headgears = ["H_LIB_US_Helmet_Pilot_Respirator","H_LIB_US_Helmet_Pilot_Respirator_Glasses_Up","H_LIB_US_Helmet_Pilot_Respirator_Glasses_Down","H_LIB_US_Helmet_Pilot_Glasses_Up","H_LIB_US_Helmet_Pilot_Glasses_Down","H_LIB_US_Helmet_Pilot"];
		_uniforms = ["U_LIB_US_Bomber_Crew","U_LIB_US_Bomber_Pilot","U_LIB_US_Pilot_2","U_LIB_US_Pilot"];
		_uniform = selectRandom _uniforms;
		_headgear = selectRandom _headgears;
		_items = uniformItems _unit;
		removeUniform _unit;
		_unit addUniform _uniform;
		_unit addHeadGear _headgear;
		{_unit addItemToUniform _x} foreach _items;
	};	
	
	case "UK" : {
		private ["_headgears","_uniforms","_headgear","_uniform","_items"];
		_headgears = ["H_LIB_UK_Helmet_Mk2","H_LIB_UK_Helmet_Mk2_Net","H_LIB_UK_Helmet_Mk2_Camo","H_LIB_UK_Helmet_Mk2_FAK","H_LIB_UK_Helmet_Mk2_FAK_Camo","H_LIB_UK_Helmet_Mk2_Bowed","H_LIB_UK_Helmet_Mk3","H_LIB_UK_Helmet_Mk3_Net","H_LIB_UK_Helmet_Mk3_Camo"];
		_uniforms = ["U_LIB_UK_P37"];
		_uniform = selectRandom _uniforms;
		_headgear = selectRandom _headgears;
		_items = uniformItems _unit;
		removeUniform _unit;
		_unit addUniform _uniform;
		_unit addHeadGear _headgear;
		{_unit addItemToUniform _x} foreach _items;
	};	
	case "UK_AB" : {
		private ["_headgears","_uniforms","_headgear","_uniform","_items"];
		_headgears = ["H_LIB_UK_Para_Helmet_Mk2","H_LIB_UK_Para_Helmet_Mk2_Net","H_LIB_UK_Para_Helmet_Mk2_Camo"];
		_uniforms = ["U_LIB_UK_DenisonSmock"];
		_uniform = selectRandom _uniforms;
		_headgear = selectRandom _headgears;
		_items = uniformItems _unit;
		removeUniform _unit;
		_unit addUniform _uniform;
		_unit addHeadGear _headgear;
		{_unit addItemToUniform _x} foreach _items;
	};	
	case "UK_CDO" : {
		private ["_headgears","_uniforms","_headgear","_uniform","_items"];
		_headgears = ["H_LIB_UK_Helmet_Mk2","H_LIB_UK_Helmet_Mk2_Net","H_LIB_UK_Helmet_Mk2_Camo","H_LIB_UK_Helmet_Mk2_FAK","H_LIB_UK_Helmet_Mk2_FAK_Camo","H_LIB_UK_Helmet_Mk2_Bowed","H_LIB_UK_Helmet_Mk3","H_LIB_UK_Helmet_Mk3_Net","H_LIB_UK_Helmet_Mk3_Camo"];
		_uniforms = ["U_LIB_UK_P37"];
		_uniform = selectRandom _uniforms;
		_headgear = selectRandom _headgears;
		_items = uniformItems _unit;
		removeUniform _unit;
		_unit addUniform _uniform;
		_unit addHeadGear _headgear;
		{_unit addItemToUniform _x} foreach _items;
	};
	case "UK_DR" : {
		private ["_headgears","_uniforms","_headgear","_uniform","_items"];
		_headgears = ["H_LIB_UK_Helmet_Mk2_Desert","H_LIB_UK_Helmet_Mk2_Desert_Bowed","H_LIB_UK_Helmet_Mk2_Cover"];
		_uniforms = ["U_LIB_UK_KhakiDrills"];
		_uniform = selectRandom _uniforms;
		_headgear = selectRandom _headgears;
		_items = uniformItems _unit;
		removeUniform _unit;
		_unit addUniform _uniform;
		_unit addHeadGear _headgear;
		{_unit addItemToUniform _x} foreach _items;
	};

	case default {};
};
