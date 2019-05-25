class B_LIB_UK_HSack;
// class B_LIB_US_Radio_ACRE2; // already called
class BG21_UK_B_CO: B_LIB_US_Radio_ACRE2 {
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
class BG21_UK_B_RADIO: B_LIB_US_Radio_ACRE2 {
	class TransportItems
	{		
		class _xx_ACRE_PRC77
		{
			count = 1;
			name = "ACRE_PRC77";
		};
	};
};

// ARMY
class BG21_UK_B: B_LIB_UK_HSack {
	scopeArsenal = 1;
};
class BG21_UK_B_SL: BG21_UK_B {
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
		class _xx_LIB_1Rnd_89m_PIAT	{
			magazine = "LIB_1Rnd_89m_PIAT";
			count = 2;
		};
	};
};
class BG21_UK_B_AT_AS: BG21_UK_B {
	class TransportMagazines {
		class _xx_LIB_1Rnd_89m_PIAT	{
			magazine = "LIB_1Rnd_89m_PIAT";
			count = 3;
		};
	};
};
class BG21_UK_B_MG: BG21_UK_B {
	class TransportMagazines {
		class _xx_LIB_50Rnd_762x63 {
			magazine = "LIB_50Rnd_762x63";
			count = 1;
		};
	};
};
class BG21_UK_B_MG_AS: BG21_UK_B {
	class TransportMagazines {
		class _xx_LIB_50Rnd_762x63 {
			magazine = "LIB_50Rnd_762x63";
			count = 4;
		};
	};
};
class BG21_UK_B_BREN: BG21_UK_B {
	class TransportMagazines {
		class _xx_LIB_30Rnd_770x56 {
			magazine = "LIB_30Rnd_770x56";
			count = 2;
		};
	};
};
class BG21_UK_B_BREN_AS: BG21_UK_B {
	class TransportMagazines {
		class _xx_LIB_30Rnd_770x56 {
			magazine = "LIB_30Rnd_770x56";
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
	class TransportMagazines {
		class _xx_LIB_1Rnd_60mm_Mo_HE {
			magazine = "LIB_1Rnd_60mm_Mo_HE";
			count = 3;
		};
	};	
};
class BG21_UK_B_GRENADIER: BG21_UK_B {
	scope = 1;
	class TransportMagazines {
		class _xx_LIB_1Rnd_G_MillsBomb {
			magazine = "LIB_1Rnd_G_MillsBomb";
			count = 4;
		};
	};
};
// AB
class BG21_UK_AB_B: BG21_UK_B {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems {
		class _xx_H_LIB_UK_Para_Beret {
			name = "H_LIB_UK_Para_Beret";
			count = 1;
		};
	};	
};
class BG21_UK_AB_B_SL: BG21_UK_B_SL {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems {
		class _xx_H_LIB_UK_Para_Beret {
			name = "H_LIB_UK_Para_Beret";
			count = 1;
		};
	};
};
class BG21_UK_AB_B_MEDIC: BG21_UK_B_MEDIC {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems: TransportItems {
		class _xx_H_LIB_UK_Para_Beret {
			name = "H_LIB_UK_Para_Beret";
			count = 1;
		};
	};	
};
class BG21_UK_AB_B_AT: BG21_UK_B_AT {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems {
		class _xx_H_LIB_UK_Para_Beret {
			name = "H_LIB_UK_Para_Beret";
			count = 1;
		};
	};	
};
class BG21_UK_AB_B_AT_AS: BG21_UK_B_AT_AS {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems {
		class _xx_H_LIB_UK_Para_Beret {
			name = "H_LIB_UK_Para_Beret";
			count = 1;
		};
	};	
};
class BG21_UK_AB_B_MG: BG21_UK_B_MG {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems {
		class _xx_H_LIB_UK_Para_Beret {
			name = "H_LIB_UK_Para_Beret";
			count = 1;
		};
	};	
};
class BG21_UK_AB_B_MG_AS: BG21_UK_B_MG_AS {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems {
		class _xx_H_LIB_UK_Para_Beret {
			name = "H_LIB_UK_Para_Beret";
			count = 1;
		};
	};	
};
class BG21_UK_AB_B_BREN: BG21_UK_B_BREN {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems {
		class _xx_H_LIB_UK_Para_Beret {
			name = "H_LIB_UK_Para_Beret";
			count = 1;
		};
	};	
};
class BG21_UK_AB_B_BREN_AS: BG21_UK_B_BREN_AS {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems {
		class _xx_H_LIB_UK_Para_Beret {
			name = "H_LIB_UK_Para_Beret";
			count = 1;
		};
	};	
};
class BG21_UK_AB_B_EXPLOS: BG21_UK_B_EXPLOS {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems: TransportItems {
		class _xx_H_LIB_UK_Para_Beret {
			name = "H_LIB_UK_Para_Beret";
			count = 1;
		};
		class _xx_LIB_US_TNT_4pound_mag: _xx_LIB_US_TNT_4pound_mag {};
		class _xx_ACE_LIB_LadungPM: _xx_ACE_LIB_LadungPM {};
		class _xx_ACE_LIB_FireCord: _xx_ACE_LIB_FireCord {};
	};
};
class BG21_UK_AB_B_MINES: BG21_UK_B_MINES {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems: TransportItems {
		class _xx_H_LIB_UK_Para_Beret {
			name = "H_LIB_UK_Para_Beret";
			count = 1;
		};
		class _xx_LIB_US_M1A1_ATMINE_mag: _xx_LIB_US_M1A1_ATMINE_mag {};
		class _xx_ACE_DefusalKit: _xx_ACE_DefusalKit {};
	};		
};
class BG21_UK_AB_B_MORTAR: BG21_UK_B_MORTAR {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems: TransportItems {
		class _xx_H_LIB_UK_Para_Beret {
			name = "H_LIB_UK_Para_Beret";
			count = 1;
		};
	};
};
class BG21_UK_AB_B_GRENADIER: BG21_UK_B_GRENADIER {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems {
		class _xx_H_LIB_UK_Para_Beret {
			name = "H_LIB_UK_Para_Beret";
			count = 1;
		};
	};
};

// CDO
class BG21_UK_CDO_B: BG21_UK_B {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems {
		class _xx_H_LIB_UK_Beret_Commando {
			name = "H_LIB_UK_Beret_Commando";
			count = 1;
		};
	};	
};
class BG21_UK_CDO_B_SL: BG21_UK_B_SL {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems {
		class _xx_H_LIB_UK_Beret_Commando {
			name = "H_LIB_UK_Beret_Commando";
			count = 1;
		};
	};
};
class BG21_UK_CDO_B_MEDIC: BG21_UK_B_MEDIC {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems: TransportItems {
		class _xx_H_LIB_UK_Beret_Commando {
			name = "H_LIB_UK_Beret_Commando";
			count = 1;
		};
	};	
};
class BG21_UK_CDO_B_AT: BG21_UK_B_AT {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems {
		class _xx_H_LIB_UK_Beret_Commando {
			name = "H_LIB_UK_Beret_Commando";
			count = 1;
		};
	};	
};
class BG21_UK_CDO_B_AT_AS: BG21_UK_B_AT_AS {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems {
		class _xx_H_LIB_UK_Beret_Commando {
			name = "H_LIB_UK_Beret_Commando";
			count = 1;
		};
	};	
};
class BG21_UK_CDO_B_MG: BG21_UK_B_MG {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems {
		class _xx_H_LIB_UK_Beret_Commando {
			name = "H_LIB_UK_Beret_Commando";
			count = 1;
		};
	};	
};
class BG21_UK_CDO_B_MG_AS: BG21_UK_B_MG_AS {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems {
		class _xx_H_LIB_UK_Beret_Commando {
			name = "H_LIB_UK_Beret_Commando";
			count = 1;
		};
	};	
};
class BG21_UK_CDO_B_BREN: BG21_UK_B_BREN {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems {
		class _xx_H_LIB_UK_Beret_Commando {
			name = "H_LIB_UK_Beret_Commando";
			count = 1;
		};
	};	
};
class BG21_UK_CDO_B_BREN_AS: BG21_UK_B_BREN_AS {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems {
		class _xx_H_LIB_UK_Beret_Commando {
			name = "H_LIB_UK_Beret_Commando";
			count = 1;
		};
	};	
};
class BG21_UK_CDO_B_EXPLOS: BG21_UK_B_EXPLOS {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems: TransportItems {
		class _xx_H_LIB_UK_Beret_Commando {
			name = "H_LIB_UK_Beret_Commando";
			count = 1;
		};
		class _xx_LIB_US_TNT_4pound_mag: _xx_LIB_US_TNT_4pound_mag {};
		class _xx_ACE_LIB_LadungPM: _xx_ACE_LIB_LadungPM {};
		class _xx_ACE_LIB_FireCord: _xx_ACE_LIB_FireCord {};
	};		
};
class BG21_UK_CDO_B_MINES: BG21_UK_B_MINES {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems: TransportItems {
		class _xx_H_LIB_UK_Beret_Commando {
			name = "H_LIB_UK_Beret_Commando";
			count = 1;
		};
		class _xx_LIB_US_M1A1_ATMINE_mag: _xx_LIB_US_M1A1_ATMINE_mag {};
		class _xx_ACE_DefusalKit: _xx_ACE_DefusalKit {};
	};		
};
class BG21_UK_CDO_B_MORTAR: BG21_UK_B_MORTAR {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems: TransportItems {
		class _xx_H_LIB_UK_Beret_Commando {
			name = "H_LIB_UK_Beret_Commando";
			count = 1;
		};
	};
};
class BG21_UK_CDO_B_GRENADIER: BG21_UK_B_GRENADIER {
	hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\HSack_Blanco_co.paa"};
	class TransportItems {
		class _xx_H_LIB_UK_Beret_Commando {
			name = "H_LIB_UK_Beret_Commando";
			count = 1;
		};
	};
};


class LIB_UK_Soldier_base;
class BG21_UK_base: LIB_UK_Soldier_base
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
	uniformClass = "U_LIB_UK_P37";
	attendant = 0;
	canDeactivateMines = 0;
	engineer = 0;
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK'] call BG21_IFA3_fnc_random_gear;};";
	};
	Items[] = {ITEMS_BASE};
	RespawnItems[] = {ITEMS_BASE};
	weapons[] = {"LIB_LeeEnfield_No4","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No4","Throw","Put"};
	magazines[] = {UK_10x_LIB_10Rnd_770x56,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LIB_10Rnd_770x56,UK_GRENADES};
	linkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B";
};

#include "Men_UK.hpp"
#include "Vhl_UK.hpp"
