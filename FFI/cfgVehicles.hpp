class BG21_B_Invisble: B_LIB_SOV_RA_Rucksack2
{
	model = "a3\weapons_f\empty.p3d";
	scope = 1;
	scopeArsenal = 0;
};

class BG21_FFI_B_CO: B_LIB_SOV_RA_Radio_ACRE2 {
	class TransportItems
	{
		class _xx_ACRE_PRC77
		{
			count = 1;
			name = "ACRE_PRC77";
		};
	};	
	class TransportMagazines {
		class _xx_LIB_RDG {
			magazine = "LIB_RDG";
			count = 2;
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
class BG21_FFI_B_RADIO: B_LIB_SOV_RA_Radio_ACRE2 {
	class TransportItems
	{
		class _xx_ACRE_PRC77
		{
			count = 1;
			name = "ACRE_PRC77";
		};
	};
};
class BG21_FFI_B_SL: BG21_B_Invisble {
	class TransportMagazines {
		class _xx_LIB_RDG {
			magazine = "LIB_RDG";
			count = 2;
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
class BG21_FFI_B_MEDIC: B_LIB_SOV_RA_MedicalBag_Empty {
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
class BG21_FFI_B_AT: BG21_B_Invisble {
	class TransportMagazines {
		class _xx_LIB_1Rnd_145x114	{
			magazine = "LIB_1Rnd_145x114";
			count = 5;
		};
	};
};
class BG21_FFI_B_AT_AS: BG21_B_Invisble {
	class TransportMagazines {
		class _xx_LIB_1Rnd_145x114	{
			magazine = "LIB_1Rnd_145x114";
			count = 5;
		};
	};
};
class BG21_FFI_B_MG: B_LIB_SOV_RA_MGAmmoBag_Empty {
	class TransportMagazines {
		class _xx_LIB_47Rnd_762x54 {
			magazine = "LIB_47Rnd_762x54";
			count = 2;
		};
	};
};
class BG21_FFI_B_MG_AS: B_LIB_SOV_RA_MGAmmoBag_Empty {
	class TransportMagazines {
		class _xx_LIB_LIB_47Rnd_762x54 {
			magazine = "LIB_47Rnd_762x54";
			count = 4;
		};
	};
};
class BG21_FFI_B_EXPLOS: BG21_B_Invisble {
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
class BG21_FFI_B_MINES: BG21_B_Invisble {
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
class BG21_FFI_B_MORTAR: BG21_B_Invisble {
	class TransportItems {
		class _xx_ACE_RangeTable_82mm {
			count = 1;
			name = "ACE_RangeTable_82mm";
		};
	};
	class TransportMagazines {
		class _xx_LIB_1Rnd_82mm_Mo_HE {
			magazine = "LIB_1Rnd_82mm_Mo_HE";
			count = 2;
		};
	};		
};
class BG21_FFI_B_GRENADIER: BG21_B_Invisble {
	class TransportMagazines {
		class _xx_LIB_1Rnd_G_DYAKONOV {
			magazine = "LIB_1Rnd_G_DYAKONOV";
			count = 4;
		};
	};
	class TransportWeapons {
		class _xx_LIB_ACC_GL_DYAKONOV_Empty {
			weapon = "LIB_ACC_GL_DYAKONOV_Empty";
			count = 1;
		};
	};
};

class BG21_Resistance_Soldier_base: LIB_sov_Soldier_base
{
	class EventHandlers;
};
class BG21_FFI_Soldier_base: BG21_Resistance_Soldier_base
{
	scope = 0;
	author = "El Tyranos";
	faction = "BG21_FFI";
	vehicleClass = "BG21_Men";
	uniformClass = "U_LIB_CIV_Citizen_1";
	attendant = 0;
	canDeactivateMines = 0;
	engineer = 0;
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FFI'] call BG21_IFA3_fnc_random_gear;};";
	};
	Items[] = {ITEMS_BASE};
	RespawnItems[] = {ITEMS_BASE};
	weapons[] = {"LIB_M9130","Throw","Put"};
	respawnWeapons[] = {"LIB_M9130","Throw","Put"};
	magazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	respawnmagazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	linkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
};

#include "Men_FFI.hpp"
#include "Vhl_FFI.hpp"
