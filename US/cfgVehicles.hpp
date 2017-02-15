class B_LIB_US_Backpack;
class B_LIB_US_Backpack_dday;
class B_LIB_US_RocketBag;
class B_LIB_US_Radio;
class B_LIB_US_Bandoleer;
class B_LIB_US_MGbag;
	
class BG21_US_B_CO: B_LIB_US_Backpack {
class BG21_US_B_SL: B_LIB_US_Backpack {
	scopeArsenal = 1;
	class TransportMagazines {
		class _xx_LIB_1Rnd_flare_red {
			magazine = "LIB_1Rnd_flare_red";
			count = 2;
		};
		class _xx_LIB_1Rnd_flare_green {
			magazine = "LIB_1Rnd_flare_green";
			count = 2;
		};
		class _xx_LIB_1Rnd_flare_yellow {
			magazine = "LIB_1Rnd_flare_yellow";
			count = 2;
		};
	};
	class TransportWeapons {
			class _xx_LIB_LIB_FLARE_PISTOL {
			weapon = "LIB_FLARE_PISTOL";
			count = 1;
		};
	};
};
class BG21_US_B_MEDIC: B_LIB_US_Backpack {
	scopeArsenal = 1;
	class TransportItems {
		class _xx_ACE_fieldDressing {
			count = 30;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine {
			count = 15;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine {
			count = 15;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_salineIV_250 {
			count = 5;
			name = "ACE_salineIV_250";
		};
	};
};
class BG21_US_B_AT: B_LIB_US_Backpack {
	scopeArsenal = 1;
	class TransportMagazines {
		class _xx_LIB_1Rnd_60mm_M6	{
			magazine = "LIB_1Rnd_60mm_M6";
			count = 2;
		};
	};
};
class BG21_US_B_AT_AS: B_LIB_US_Backpack {
	scopeArsenal = 1;
	class TransportMagazines {
		class _xx_LIB_1Rnd_60mm_M6	{
			magazine = "LIB_1Rnd_60mm_M6";
			count = 3;
		};
	};
};
class BG21_US_B_MG: B_LIB_US_Backpack {
	scopeArsenal = 1;
	class TransportMagazines {
		class _xx_LIB_20Rnd_762x63 {
			magazine = "LIB_20Rnd_762x63";
			count = 3;
		};
	};
};
class BG21_US_B_MG_AS: B_LIB_US_Backpack {
	scopeArsenal = 1;
	class TransportMagazines {
		class _xx_LIB_20Rnd_762x63 {
			magazine = "LIB_20Rnd_762x63";
			count = 9;
		};
	};
};
class BG21_US_B_EXPLOS: B_LIB_US_Backpack {
	scopeArsenal = 1;
	class TransportItems {
		class _xx_LIB_US_TNT_4pound_mag {
			count = 3;
			name = "LIB_US_TNT_4pound_mag";
		};
		class _xx_ACE_LIB_LadungPM {
			count = 1;
			name = "ACE_LIB_LadungPM";
		};
		class _xx_ACE_LIB_FireCord {
			count = 1;
			name = "ACE_LIB_FireCord";
		};
	};
};
class BG21_US_B_MINES: B_LIB_US_Backpack {
	scopeArsenal = 1;
	class TransportItems {
		class _xx_LIB_US_M1A1_ATMINE_mag {
			count = 3;
			name = "LIB_US_M1A1_ATMINE_mag";
		};
		class _xx_ACE_DefusalKit {
			count = 1;
			name = "ACE_DefusalKit";
		};
	};
};

//D-Day Backpacks
class BG21_US_B_CO_DDAY: BG21_US_B_CO {
class BG21_US_B_SL_DDAY: BG21_US_B_SL {
	model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_backpack_dday.p3d";
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_bagpack_co.paa","ww2\assets_t\characters\americans_t\us_army\us_m7_gas_mask_bag_co.paa"};
};
class BG21_US_B_MEDIC_DDAY: BG21_US_B_MEDIC {
	model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_backpack_dday.p3d";
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_bagpack_co.paa","ww2\assets_t\characters\americans_t\us_army\us_m7_gas_mask_bag_co.paa"};
};
class BG21_US_B_AT_DDAY: BG21_US_B_AT {
	model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_backpack_dday.p3d";
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_bagpack_co.paa","ww2\assets_t\characters\americans_t\us_army\us_m7_gas_mask_bag_co.paa"};
};
class BG21_US_B_AT_AS_DDAY: BG21_US_B_AT_AS {
	model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_backpack_dday.p3d";
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_bagpack_co.paa","ww2\assets_t\characters\americans_t\us_army\us_m7_gas_mask_bag_co.paa"};
};
class BG21_US_B_MG_DDAY: BG21_US_B_MG {
	model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_backpack_dday.p3d";
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_bagpack_co.paa","ww2\assets_t\characters\americans_t\us_army\us_m7_gas_mask_bag_co.paa"};
};
class BG21_US_B_MG_AS_DDAY: BG21_US_B_MG_AS {
	model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_backpack_dday.p3d";
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_bagpack_co.paa","ww2\assets_t\characters\americans_t\us_army\us_m7_gas_mask_bag_co.paa"};
};
class BG21_US_B_EXPLOS_DDAY: BG21_US_B_EXPLOS {
	model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_backpack_dday.p3d";
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_bagpack_co.paa","ww2\assets_t\characters\americans_t\us_army\us_m7_gas_mask_bag_co.paa"};
};
class BG21_US_B_MINES_DDAY: BG21_US_B_MINES {
	model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_backpack_dday.p3d";
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_bagpack_co.paa","ww2\assets_t\characters\americans_t\us_army\us_m7_gas_mask_bag_co.paa"};
};

//USMC Backpacks
class BG21_USMC_Backpack: B_LIB_US_Backpack {
	model = "\fow\fow_characters\usmc\lodu_usmc_backpack01";
	displayName = "[USMC] Haversack M-1928";
	picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
	hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
};
class BG21_USMC_B_CO: BG21_US_B_CO {
class BG21_USMC_B_SL: BG21_US_B_SL {
	model = "\fow\fow_characters\usmc\lodu_usmc_backpack01";
	displayName = "[USMC] Haversack M-1928";
	picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
	hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
};
class BG21_USMC_B_MEDIC: BG21_US_B_MEDIC {
	model = "\fow\fow_characters\usmc\lodu_usmc_backpack01";
	displayName = "[USMC] Haversack M-1928";
	picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
	hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
};
class BG21_USMC_B_AT: BG21_US_B_AT {
	model = "\fow\fow_characters\usmc\lodu_usmc_backpack01";
	displayName = "[USMC] Haversack M-1928";
	picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
	hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
};
class BG21_USMC_B_AT_AS: BG21_US_B_AT_AS {
	model = "\fow\fow_characters\usmc\lodu_usmc_backpack01";
	displayName = "[USMC] Haversack M-1928";
	picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
	hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
};
class BG21_USMC_B_MG: BG21_US_B_MG {
	model = "\fow\fow_characters\usmc\lodu_usmc_backpack01";
	displayName = "[USMC] Haversack M-1928";
	picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
	hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
};
class BG21_USMC_B_MG_AS: BG21_US_B_MG_AS {
	model = "\fow\fow_characters\usmc\lodu_usmc_backpack01";
	displayName = "[USMC] Haversack M-1928";
	picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
	hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
};
class BG21_USMC_B_EXPLOS: BG21_US_B_EXPLOS {
	model = "\fow\fow_characters\usmc\lodu_usmc_backpack01";
	displayName = "[USMC] Haversack M-1928";
	picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
	hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
};
class BG21_USMC_B_MINES: BG21_US_B_MINES {
	model = "\fow\fow_characters\usmc\lodu_usmc_backpack01";
	displayName = "[USMC] Haversack M-1928";
	picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
	hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
};

class LIB_US_Soldier_base;
class BG21_US_base: LIB_US_Soldier_base
{
	class EventHandlers;
};
class BG21_US_Soldier_base: BG21_US_base
{
	scope = 0;
	author = "El Tyranos";
	faction = "BG21_US";
	vehicleClass = "BG21_Men";
	uniformClass = "U_LIB_US_Private";
	attendant = 0;
	canDeactivateMines = 0;
	engineer = 0;
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USARMY'] call BG21_IFA3_fnc_random_gear;};";
	};
	Items[] = {ITEMS_BASE};
	RespawnItems[] = {ITEMS_BASE};
	weapons[] = {"LIB_M1_Garand","Throw","Put"};
	respawnWeapons[] = {"LIB_M1_Garand","Throw","Put"};
	magazines[] = {US_13x_LIB_8Rnd_762x63,US_GRENADES};
	respawnmagazines[] = {US_13x_LIB_8Rnd_762x63,US_GRENADES};
	linkedItems[] = {"V_LIB_US_Vest_Garand",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Garand",LINKED_ITEMS_BASE};
	backpack = "B_LIB_US_Backpack";
};

#include "Men_US.hpp"
#include "Vhl_US.hpp"
