class B_LIB_US_Backpack;
class B_LIB_US_Backpack_RocketBag;
class B_LIB_US_RocketBag;
class B_LIB_US_Radio_ACRE2;
class B_LIB_US_M36_Rope;

class BG21_US_B_CO: B_LIB_US_Radio_ACRE2 {
	scope = 1;
	class TransportItems
	{
		class _xx_ACRE_PRC77
		{
			count = 1;
			name = "ACRE_PRC77";
		};
	};	
	class TransportMagazines {
		class _xx_LIB_US_M18 {
			magazine = "LIB_US_M18";
			count = 1;
		};
		class _xx_LIB_US_M18_Red {
			magazine = "LIB_US_M18_Red";
			count = 1;
		};
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
			class _xx_LIB_FLARE_PISTOL {
			weapon = "LIB_FLARE_PISTOL";
			count = 1;
		};
	};
};
class BG21_US_B_RADIO: B_LIB_US_Radio_ACRE2 {
	scope = 1;
	class TransportItems
	{
		class _xx_ACRE_PRC77
		{
			count = 1;
			name = "ACRE_PRC77";
		};
	};
};
class BG21_US_B_SL: B_LIB_US_Backpack {
	scope = 1;
	class TransportMagazines {
		class _xx_LIB_US_M18 {
			magazine = "LIB_US_M18";
			count = 1;
		};
		class _xx_LIB_US_M18_Red {
			magazine = "LIB_US_M18_Red";
			count = 1;
		};		
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
			class _xx_LIB_FLARE_PISTOL {
			weapon = "LIB_FLARE_PISTOL";
			count = 1;
		};
	};
};
class BG21_US_B_MEDIC: B_LIB_US_Backpack {
	scope = 1;
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
class BG21_US_B_AT: B_LIB_US_Backpack_RocketBag {
	scope = 1;
	class TransportMagazines {
		class _xx_LIB_1Rnd_60mm_M6	{
			magazine = "LIB_1Rnd_60mm_M6";
			count = 2;
		};
	};
};
class BG21_US_B_AT_AS: B_LIB_US_Backpack_RocketBag {
	scope = 1;
	class TransportMagazines {
		class _xx_LIB_1Rnd_60mm_M6	{
			magazine = "LIB_1Rnd_60mm_M6";
			count = 3;
		};
	};
};
class BG21_US_B_BAR: B_LIB_US_Backpack {
	scope = 1;
	class TransportMagazines {
		class _xx_LIB_20Rnd_762x63 {
			magazine = "LIB_20Rnd_762x63";
			count = 3;
		};
	};
};
class BG21_US_B_MG: B_LIB_US_Backpack {
	scope = 1;
	class TransportMagazines {
		class _xx_LIB_50Rnd_762x63 {
			magazine = "LIB_50Rnd_762x63";
			count = 1;
		};
	};
};
class BG21_US_B_MG_AS: B_LIB_US_Backpack {
	scope = 1;
	class TransportMagazines {
		class _xx_LIB_50Rnd_762x63 {
			magazine = "LIB_50Rnd_762x63";
			count = 4;
		};
	};
};
class BG21_US_B_EXPLOS: B_LIB_US_Backpack {
	scope = 1;
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
	scope = 1;
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
class BG21_US_B_MORTAR: B_LIB_US_Backpack {
	scope = 1;
	class TransportItems {
		class _xx_ACE_RangeTable_82mm {
			count = 1;
			name = "ACE_RangeTable_82mm";
		};
	};
	class TransportMagazines {
		class _xx_LIB_1Rnd_60mm_Mo_HE {
			magazine = "LIB_1Rnd_60mm_Mo_HE";
			count = 3;
		};
	};
};
class BG21_US_B_GRENADIER: B_LIB_US_Backpack {
	scope = 1;
	class TransportMagazines {
		class _xx_LIB_1Rnd_G_Mk2 {
			magazine = "LIB_1Rnd_G_Mk2";
			count = 3;
		};
		class _xx_LIB_1Rnd_G_M9A1 {
			magazine = "LIB_1Rnd_G_M9A1";
			count = 1;
		};
	};
	// class TransportWeapons {
		// class _xx_LIB_ACC_GL_M7 {
			// weapon = "LIB_ACC_GL_M7";
			// count = 1;
		// };
	// };
};

//Airborne backpacks
class B_LIB_US_Backpack_M36: B_LIB_US_M36_Rope {};
class BG21_US_B_CO_M36: BG21_US_B_CO {
	// model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_backpack_dday.p3d";
	// hiddenSelections[] = {"camo","camo2"};
	// hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_bagpack_co.paa","ww2\assets_t\characters\americans_t\us_army\us_m7_gas_mask_bag_co.paa"};
};
class BG21_US_B_SL_M36: BG21_US_B_SL {
	displayName = "$STR_B_LIB_US_M36";
	picture = "\WW2\Assets_t\Characters\Pictures_t\Backpacks\B_US_M36_ca.paa";
	model = "\WW2\Assets_m\Characters\Americans_m\US_Airborne\WW2_US_Airborne_M36.p3d";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\ww2\assets_t\characters\americans_t\ww2_us_airborne\m36_co.paa"};
};
class BG21_US_B_MEDIC_M36: BG21_US_B_MEDIC {
	displayName = "$STR_B_LIB_US_M36";
	picture = "\WW2\Assets_t\Characters\Pictures_t\Backpacks\B_US_M36_ca.paa";
	model = "\WW2\Assets_m\Characters\Americans_m\US_Airborne\WW2_US_Airborne_M36.p3d";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\ww2\assets_t\characters\americans_t\ww2_us_airborne\m36_co.paa"};
};
class BG21_US_B_AT_M36: BG21_US_B_AT {
	displayName = "$STR_CTH_B_LIB_US_M36_Rocketbag";
	model = "\WW2\Assets_m\Characters\Americans_m\US_Airborne\WW2_US_Airborne_M36_Rocketbag.p3d";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\characters\americans_t\ww2_us_airborne\m36_co.paa","\WW2\Assets_t\Characters\Americans_t\WW2_US_Army\us_rocketbag_co.paa"};
};
class BG21_US_B_AT_AS_M36: BG21_US_B_AT_AS {
	displayName = "$STR_CTH_B_LIB_US_M36_Rocketbag";
	picture = "\WW2\Assets_t\Characters\Pictures_t\Backpacks\B_US_M36_ca.paa";
	model = "\WW2\Assets_m\Characters\Americans_m\US_Airborne\WW2_US_Airborne_M36_Rocketbag.p3d";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\characters\americans_t\ww2_us_airborne\m36_co.paa","\WW2\Assets_t\Characters\Americans_t\WW2_US_Army\us_rocketbag_co.paa"};
};
class BG21_US_B_BAR_M36: BG21_US_B_BAR {
	displayName = "$STR_B_LIB_US_M36";
	picture = "\WW2\Assets_t\Characters\Pictures_t\Backpacks\B_US_M36_ca.paa";
	model = "\WW2\Assets_m\Characters\Americans_m\US_Airborne\WW2_US_Airborne_M36.p3d";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\ww2\assets_t\characters\americans_t\ww2_us_airborne\m36_co.paa"};
};
class BG21_US_B_MG_M36: BG21_US_B_MG {
	displayName = "$STR_B_LIB_US_M36_Rope";
	picture = "\WW2\Assets_t\Characters\Pictures_t\Backpacks\B_US_M36_Rope_ca.paa";
	model = "\WW2\Assets_m\Characters\Americans_m\US_Airborne\WW2_US_Airborne_m36_Rope.p3d";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\ww2\assets_t\characters\americans_t\ww2_us_airborne\m36_co.paa"};

};
class BG21_US_B_MG_AS_M36: BG21_US_B_MG_AS {
	displayName = "$STR_B_LIB_US_M36";
	picture = "\WW2\Assets_t\Characters\Pictures_t\Backpacks\B_US_M36_ca.paa";
	model = "\WW2\Assets_m\Characters\Americans_m\US_Airborne\WW2_US_Airborne_M36.p3d";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\ww2\assets_t\characters\americans_t\ww2_us_airborne\m36_co.paa"};
};
class BG21_US_B_EXPLOS_M36: BG21_US_B_EXPLOS {
	displayName = "$STR_B_LIB_US_M36_Rope";
	picture = "\WW2\Assets_t\Characters\Pictures_t\Backpacks\B_US_M36_Rope_ca.paa";
	model = "\WW2\Assets_m\Characters\Americans_m\US_Airborne\WW2_US_Airborne_m36_Rope.p3d";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\ww2\assets_t\characters\americans_t\ww2_us_airborne\m36_co.paa"};
};
class BG21_US_B_MINES_M36: BG21_US_B_MINES {
	displayName = "$STR_B_LIB_US_M36_Rope";
	picture = "\WW2\Assets_t\Characters\Pictures_t\Backpacks\B_US_M36_Rope_ca.paa";
	model = "\WW2\Assets_m\Characters\Americans_m\US_Airborne\WW2_US_Airborne_m36_Rope.p3d";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\ww2\assets_t\characters\americans_t\ww2_us_airborne\m36_co.paa"};
};
class BG21_US_B_MORTAR_M36: BG21_US_B_MORTAR {
	displayName = "$STR_B_LIB_US_M36";
	picture = "\WW2\Assets_t\Characters\Pictures_t\Backpacks\B_US_M36_ca.paa";
	model = "\WW2\Assets_m\Characters\Americans_m\US_Airborne\WW2_US_Airborne_M36.p3d";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\ww2\assets_t\characters\americans_t\ww2_us_airborne\m36_co.paa"};
};
class BG21_US_B_GRENADIER_M36: BG21_US_B_GRENADIER {
	displayName = "$STR_B_LIB_US_M36_Rope";
	picture = "\WW2\Assets_t\Characters\Pictures_t\Backpacks\B_US_M36_Rope_ca.paa";
	model = "\WW2\Assets_m\Characters\Americans_m\US_Airborne\WW2_US_Airborne_m36_Rope.p3d";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\ww2\assets_t\characters\americans_t\ww2_us_airborne\m36_co.paa"};
};

//D-Day Backpacks
class BG21_US_B_CO_DDAY: BG21_US_B_CO {
	// model = "\WW2\Assets_m\Characters\Americans_m\US_Army\WW2_lodu_us_backpack_dday.p3d";
	// hiddenSelections[] = {"camo","camo2"};
	// hiddenSelectionsTextures[] = {"ww2\assets_t\characters\americans_t\us_army\lodu_bagpack_co.paa","ww2\assets_t\characters\americans_t\us_army\us_m7_gas_mask_bag_co.paa"};
};
class BG21_US_B_SL_DDAY: BG21_US_B_SL {};
class BG21_US_B_MEDIC_DDAY: BG21_US_B_MEDIC {};
class BG21_US_B_AT_DDAY: BG21_US_B_AT {};
class BG21_US_B_AT_AS_DDAY: BG21_US_B_AT_AS {};
class BG21_US_B_BAR_DDAY: BG21_US_B_BAR {};
class BG21_US_B_MG_DDAY: BG21_US_B_MG {};
class BG21_US_B_MG_AS_DDAY: BG21_US_B_MG_AS {};
class BG21_US_B_EXPLOS_DDAY: BG21_US_B_EXPLOS {};
class BG21_US_B_MINES_DDAY: BG21_US_B_MINES {};
class BG21_US_B_MORTAR_DDAY: BG21_US_B_MORTAR {};
class BG21_US_B_GRENADIER_DDAY: BG21_US_B_GRENADIER {};

//USMC Backpacks
class BG21_USMC_Backpack: B_LIB_US_Backpack {
	scope = 1;
	// model = "\fow\fow_characters\usmc\lodu_usmc_backpack01";
	// displayName = "[USMC] Haversack M-1928";
	// picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
	// hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
};
class BG21_USMC_B_CO: BG21_US_B_CO {
	// model = "\fow\fow_characters\usmc\lodu_usmc_backpack01";
	// displayName = "[USMC] Haversack M-1928";
	// picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
	// hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
};
class BG21_USMC_B_SL: BG21_US_B_SL {
	// model = "\fow\fow_characters\usmc\lodu_usmc_backpack01";
	// displayName = "[USMC] Haversack M-1928";
	// picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
	// hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
};
class BG21_USMC_B_MEDIC: BG21_US_B_MEDIC {
	// model = "\fow\fow_characters\usmc\lodu_usmc_backpack01";
	// displayName = "[USMC] Haversack M-1928";
	// picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
	// hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
};
class BG21_USMC_B_AT: BG21_US_B_AT {
	// model = "\fow\fow_characters\usmc\lodu_usmc_backpack01";
	// displayName = "[USMC] Haversack M-1928";
	// picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
	// hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
};
class BG21_USMC_B_AT_AS: BG21_US_B_AT_AS {
	// model = "\fow\fow_characters\usmc\lodu_usmc_backpack01";
	// displayName = "[USMC] Haversack M-1928";
	// picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
	// hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
};
class BG21_USMC_B_BAR: BG21_US_B_BAR {
	// model = "\fow\fow_characters\usmc\lodu_usmc_backpack01";
	// displayName = "[USMC] Haversack M-1928";
	// picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
	// hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
};
class BG21_USMC_B_MG: BG21_US_B_MG {
	// model = "\fow\fow_characters\usmc\lodu_usmc_backpack01";
	// displayName = "[USMC] Haversack M-1928";
	// picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
	// hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
};
class BG21_USMC_B_MG_AS: BG21_US_B_MG_AS {
	// model = "\fow\fow_characters\usmc\lodu_usmc_backpack01";
	// displayName = "[USMC] Haversack M-1928";
	// picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
	// hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
};
class BG21_USMC_B_EXPLOS: BG21_US_B_EXPLOS {
	// model = "\fow\fow_characters\usmc\lodu_usmc_backpack01";
	// displayName = "[USMC] Haversack M-1928";
	// picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
	// hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
};
class BG21_USMC_B_MINES: BG21_US_B_MINES {
	// model = "\fow\fow_characters\usmc\lodu_usmc_backpack01";
	// displayName = "[USMC] Haversack M-1928";
	// picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
	// hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
};
class BG21_USMC_B_MORTAR: BG21_US_B_MORTAR {
	// model = "\fow\fow_characters\usmc\lodu_usmc_backpack01";
	// displayName = "[USMC] Haversack M-1928";
	// picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
	// hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
};
class BG21_USMC_B_GRENADIER: BG21_US_B_GRENADIER {
	// model = "\fow\fow_characters\usmc\lodu_usmc_backpack01";
	// displayName = "[USMC] Haversack M-1928";
	// picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
	// hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
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
