class B_LIB_GER_A_frame;
class B_LIB_GER_A_frame_kit;
class B_LIB_GER_A_frame_zeltbahn;
class B_LIB_GER_Radio_ACRE2;
class B_LIB_GER_Backpack;
class B_LIB_GER_SapperBackpack_empty;
class B_LIB_GER_MedicBackpack_Empty;
class B_LIB_GER_Tonister34_cowhide;
class B_LIB_GER_LW_Paradrop;	
class B_LIB_GER_Panzer_Empty;

class BG21_GER_B_CO: B_LIB_GER_Radio_ACRE2 {
	class TransportItems
	{
		class _xx_ACRE_PRC77
		{
			count = 1;
			name = "ACRE_PRC77";
		};
	};
	class TransportMagazines {
		class _xx_LIB_nb39 {
			magazine = "LIB_nb39";
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
class BG21_GER_B_RADIO: B_LIB_GER_Radio_ACRE2 {
	class TransportItems
	{
		class _xx_ACRE_PRC77
		{
			count = 1;
			name = "ACRE_PRC77";
		};
	};
};
class BG21_GER_B_SL: B_LIB_GER_Backpack {
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		class _xx_LIB_nb39 {
			magazine = "LIB_nb39";
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
class BG21_GER_B_MEDIC: B_LIB_GER_MedicBackpack_Empty {
	scope = 1;
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
class BG21_GER_B_AT: B_LIB_GER_Panzer_Empty {
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		class _xx_LIB_1Rnd_RPzB	{
			magazine = "LIB_1Rnd_RPzB";
			count = 2;
		};
	};
};
class BG21_GER_B_AT_AS: B_LIB_GER_Panzer_Empty {
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		class _xx_LIB_1Rnd_RPzB	{
			magazine = "LIB_1Rnd_RPzB";
			count = 3;
		};
	};
};
class BG21_GER_B_MG: B_LIB_GER_A_frame {
	scope = 1;
	scopeArsenal = 1;
	model = "\fow\fow_characters\ger\lodu_heer_ammo_belt";
	picture = "\fow\fow_characters\ger\data\ui\fow_b_heer_ammo_belt_ca.paa";	
	class TransportMagazines {
		class _xx_LIB_50Rnd_792x57 {
			magazine = "LIB_50Rnd_792x57";
			count = 1;
		};
	};
};
class BG21_GER_B_MG_AS: B_LIB_GER_Backpack {
	model = "\fow\fow_characters\ger\lodu_heer_ammo_belt";
	picture = "\fow\fow_characters\ger\data\ui\fow_b_heer_ammo_belt_ca.paa";
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		class _xx_LIB_50Rnd_792x57 {
			magazine = "LIB_50Rnd_792x57";
			count = 4;
		};
	};
};
class BG21_GER_B_EXPLOS: B_LIB_GER_SapperBackpack_empty {
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		class _xx_LIB_Ladung_Small_MINE_mag {
			count = 2;
			name = "LIB_Ladung_Small_MINE_mag";
		};
		class _xx_LIB_Ladung_Big_MINE_mag {
			count = 1;
			name = "LIB_Ladung_Big_MINE_mag";
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
	class TransportMagazines {
		class _xx_LIB_shg24 {
			magazine = "LIB_shg24";
			count = 2;
		};
	};
};
class BG21_GER_B_MINES: B_LIB_GER_SapperBackpack_empty {
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		class _xx_LIB_TMI_42_MINE_mag {
			count = 3;
			name = "LIB_TMI_42_MINE_mag";
		};
		class _xx_ACE_DefusalKit {
			count = 1;
			name = "ACE_DefusalKit";
		};
	};
	class TransportMagazines {
		class _xx_LIB_shg24 {
			magazine = "LIB_shg24";
			count = 2;
		};
	};
};
class BG21_GER_B_MORTAR: B_LIB_GER_Backpack {
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		class _xx_ACE_RangeTable_82mm {
			count = 1;
			name = "ACE_RangeTable_82mm";
		};
	};
	class TransportMagazines {
		class _xx_LIB_1Rnd_81mm_Mo_HE {
			magazine = "LIB_1Rnd_81mm_Mo_HE";
			count = 2;
		};
	};	
};
class B_LIB_GER_GRENADIER: B_LIB_GER_Backpack {
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		class _xx_LIB_1Rnd_G_SPRGR_30 {
			magazine = "LIB_1Rnd_G_SPRGR_30";
			count = 3;
		};
		class _xx_LIB_1Rnd_G_PZGR_40 {
			magazine = "LIB_1Rnd_G_PZGR_40";
			count = 1;
		};
	};
	// class TransportWeapons {
		// class _xx_LIB_ACC_GW_SB_Empty {
			// weapon = "LIB_ACC_GW_SB_Empty";
			// count = 1;
		// };
	// };
};

class LIB_GER_Soldier_base;
class BG21_GER_Soldier_base: LIB_GER_Soldier_base
{
	class EventHandlers;
};
class BG21_GER_WH_Soldier_base: BG21_GER_Soldier_base
{
	scope = 0;
	author = "El Tyranos";
	faction = "BG21_GER_WH";
	vehicleClass = "BG21_Men";
	uniformClass = "U_LIB_GER_Schutze";
	attendant = 0;
	canDeactivateMines = 0;
	engineer = 0;
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH'] call BG21_IFA3_fnc_random_gear;};";
	};
	Items[] = {ITEMS_BASE};
	RespawnItems[] = {ITEMS_BASE};
	weapons[] = {"LIB_K98","Throw","Put"};
	respawnWeapons[] = {"LIB_K98","Throw","Put"};
	magazines[] = {GER_20x_lib_5Rnd_792x57,GER_GRENADES};
	respawnmagazines[] = {GER_20x_lib_5Rnd_792x57,GER_GRENADES};
	linkedItems[] = {"V_LIB_GER_VestKar98",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_GER_VestKar98",LINKED_ITEMS_BASE};
	backpack = "B_LIB_GER_A_frame";
};
	
#include "Men_GER.hpp"
#include "Vhl_GER.hpp"
