class fow_b_uk_p37;
class BG21_UK_B: fow_b_uk_p37 {
	scopeArsenal = 1;
	maximumLoad = 100;
};
class BG21_UK_B_CO: B_LIB_US_Radio {
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
class BG21_UK_B_SL: BG21_UK_B {
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
class BG21_UK_B_MEDIC: BG21_UK_B {
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
class BG21_UK_B_AT: BG21_UK_B {
	class TransportMagazines {
		class _xx_LIB_1Rnd_60mm_M6	{
			magazine = "LIB_1Rnd_60mm_M6";
			count = 2;
		};
	};
};
class BG21_UK_B_AT_AS: BG21_UK_B {
	class TransportMagazines {
		class _xx_LIB_1Rnd_60mm_M6	{
			magazine = "LIB_1Rnd_60mm_M6";
			count = 3;
		};
	};
};
class BG21_UK_B_MG: BG21_UK_B {
	class TransportMagazines {
		class _xx_fow_30Rnd_303_bren {
			magazine = "fow_30Rnd_303_bren";
			count = 2;
		};
	};
};
class BG21_UK_B_MG_AS: BG21_UK_B {
	class TransportMagazines {
		class _xx_fow_30Rnd_303_bren {
			magazine = "fow_30Rnd_303_bren";
			count = 6;
		};
	};
};
class BG21_UK_B_EXPLOS: BG21_UK_B {
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
class BG21_UK_B_MINES: BG21_UK_B {
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
class BG21_UK_B_MORTAR: BG21_UK_B {
	class TransportItems {
		class _xx_ACE_RangeTable_82mm {
			count = 1;
			name = "ACE_RangeTable_82mm";
		};
	};
};

class fow_b_uk_p37_radio: fow_b_uk_p37 {
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_hasLRradio = 1;
	tf_range = 5000;
	tf_encryptionCode = "tf_guer_radio_code";
	tf_dialog = "anprc155_radio_dialog";
	tf_subtype = "digital_lr";
};

class fow_s_uk_base;
class BG21_UK_base: fow_s_uk_base
{
	class EventHandlers;
};
class BG21_UK_Soldier_base: BG21_UK_base
{
	scope = 0;
	author = "El Tyranos";
	identityTypes[] = {"Language_EN_EP1","Head_EURO","LIB_Glasses"};
	faction = "BG21_UK_ARMY";
	vehicleClass = "BG21_Men";
	uniformClass = "fow_u_uk_bd40_01_private";
	attendant = 0;
	canDeactivateMines = 0;
	engineer = 0;
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK'] call BG21_IFA3_fnc_random_gear;};";
	};
	Items[] = {ITEMS_BASE};
	RespawnItems[] = {ITEMS_BASE};
	weapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
	respawnWeapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
	magazines[] = {US_13x_LIB_8Rnd_762x63,UK_GRENADES};
	respawnmagazines[] = {US_13x_LIB_8Rnd_762x63,UK_GRENADES};
	linkedItems[] = {"V_LIB_US_Vest_Garand",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Garand",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B";
};

#include "Men_UK.hpp"
#include "Vhl_UK.hpp"
