class B_LIB_SOV_RA_Shinel;
class B_LIB_SOV_RA_GasBag;
class B_LIB_SOV_RA_Radio;
class B_LIB_SOV_RA_Rucksack;
class B_LIB_SOV_RA_Rucksack_Green;
class B_LIB_SOV_RA_Rucksack2;
class B_LIB_SOV_RA_Rucksack2_Green;
class B_LIB_SOV_RA_MedicalBag_Empty;
class B_LIB_SOV_RA_MGAmmoBag_Empty;
class B_LIB_SOV_RA_Paradrop;

class BG21_SOV_B_CO: B_LIB_SOV_RA_Rucksack2 {
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
class BG21_SOV_B_MEDIC: B_LIB_SOV_RA_MedicalBag_Empty {
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
class BG21_SOV_B_AT: B_LIB_SOV_RA_Rucksack2 {
	class TransportMagazines {
		class _xx_Lib_B32	{
			magazine = "Lib_B32";
			count = 2;
		};
	};
};
class BG21_SOV_B_AT_AS: B_LIB_SOV_RA_Rucksack2 {
	class TransportMagazines {
		class _xx_Lib_B32	{
			magazine = "Lib_B32";
			count = 5;
		};
	};
};
class BG21_SOV_B_MG: B_LIB_SOV_RA_MGAmmoBag_Empty {
	class TransportMagazines {
		class _xx_LIB_47Rnd_762x54 {
			magazine = "LIB_47Rnd_762x54";
			count = 2;
		};
	};
};
class BG21_SOV_B_MG_AS: B_LIB_SOV_RA_MGAmmoBag_Empty {
	class TransportMagazines {
		class _xx_LIB_LIB_47Rnd_762x54 {
			magazine = "LIB_47Rnd_762x54";
			count = 4;
		};
	};
};
class BG21_SOV_B_EXPLOS: B_LIB_SOV_RA_Rucksack2 {
	class TransportItems {
		class _xx_DemoCharge_Remote_Mag {
			count = 2;
			name = "DemoCharge_Remote_Mag";
		};
		class _xx_SatchelCharge_Remote_Mag {
			count = 1;
			name = "SatchelCharge_Remote_Mag";
		};
		class _xx_ACE_M26_Clacker {
			count = 1;
			name = "ACE_M26_Clacker";
		};
		class _xx_ACE_DefusalKit {
			count = 1;
			name = "ACE_DefusalKit";
		};
	};
};
class BG21_SOV_B_MINES: B_LIB_SOV_RA_Rucksack2 {
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

class LIB_sov_Soldier_base;
class BG21_SOV_Soldier_base: LIB_sov_Soldier_base
{
	class EventHandlers;
};
class BG21_SOV_RA_Soldier_base: BG21_SOV_Soldier_base
{
	scope = 0;
	author = "El Tyranos";
	faction = "BG21_SOV_RA";
	vehicleClass = "BG21_Men";
	uniformClass = "U_LIB_SOV_Strelok";
	attendant = 0;
	canDeactivateMines = 0;
	engineer = 0;
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'RA'] call BG21_IFA3_fnc_random_gear;};";
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

#include "Men_SOV.hpp"
#include "Vhl_SOV.hpp"
