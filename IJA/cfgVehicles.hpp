class fow_b_ija_backpack;
class fow_b_ija_backpack_foliage;
class BG21_IJA_B: fow_b_ija_backpack {
	scopeArsenal = 1;
	maximumLoad = 100;
};
class BG21_IJA_B_FOLIAGE: fow_b_ija_backpack_foliage {
	scopeArsenal = 1;
	maximumLoad = 100;
};
class BG21_IJA_B_CO: B_LIB_GER_Radio_ACRE2 {
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
class BG21_IJA_B_RADIO: B_LIB_GER_Radio_ACRE2 {
	class TransportItems
	{
		class _xx_ACRE_PRC77
		{
			count = 1;
			name = "ACRE_PRC77";
		};
	};
};
class BG21_IJA_B_SL: BG21_IJA_B {
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
class BG21_IJA_B_SL_RECON: BG21_IJA_B_FOLIAGE {
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
class BG21_IJA_B_MEDIC: BG21_IJA_B {
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
class BG21_IJA_B_AT: BG21_IJA_B {
	class TransportMagazines {
		class _xx_LIB_1Rnd_60mm_M6	{
			magazine = "LIB_1Rnd_60mm_M6";
			count = 2;
		};
	};
};
class BG21_IJA_B_AT_AS: BG21_IJA_B {
	class TransportMagazines {
		class _xx_LIB_1Rnd_60mm_M6	{
			magazine = "LIB_1Rnd_60mm_M6";
			count = 3;
		};
	};
};
class BG21_IJA_B_MG: BG21_IJA_B {
	class TransportMagazines {
		class _xx_fow_30Rnd_77x58 {
			magazine = "fow_30Rnd_77x58";
			count = 2;
		};
	};
};
class BG21_IJA_B_MG_AS: BG21_IJA_B {
	class TransportMagazines {
		class _xx_LIB_50Rnd_792x57 {
			magazine = "fow_30Rnd_77x58";
			count = 6;
		};
	};
};
class BG21_IJA_B_EXPLOS: BG21_IJA_B {
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
class BG21_IJA_B_MINES: BG21_IJA_B {
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
class BG21_IJA_B_MORTAR: BG21_IJA_B {
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
class BG21_IJA_B_GRENADIER: BG21_IJA_B {
	class TransportMagazines {
		class _xx_fow_1Rnd_type2_40 {
			magazine = "fow_1Rnd_type2_40";
			count = 4;
		};
	};		
};

class fow_s_ija_base;
class BG21_IJA_base: fow_s_ija_base
{
	class EventHandlers;
};
class BG21_IJA_Soldier_base: BG21_IJA_base
{
	scope = 0;
	author = "El Tyranos";
	identityTypes[] = {"LanguagePER_F","Head_Asian","LIB_Glasses"};
	faction = "BG21_IJA";
	vehicleClass = "BG21_Men";
	uniformClass = "fow_u_ija_type98";
	attendant = 0;
	canDeactivateMines = 0;
	engineer = 0;
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'IJA'] call BG21_IFA3_fnc_random_gear;};";
	};
	Items[] = {ITEMS_BASE};
	RespawnItems[] = {ITEMS_BASE};
	weapons[] = {"fow_w_type100","Throw","Put"};
	respawnWeapons[] = {"fow_w_type100","Throw","Put"};
	magazines[] = {IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	respawnmagazines[] = {IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	linkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	backpack = "BG21_IJA_B";
};

#include "Men_IJA.hpp"
#include "Vhl_IJA.hpp"
