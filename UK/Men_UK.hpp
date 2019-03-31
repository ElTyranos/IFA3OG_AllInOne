// ARMY
class BG21_UK_ARMY_PL: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Captain";
	weapons[] = {"LIB_Sten_Mk2","LIB_Webley_mk6","LIB_Binocular_UK","Throw","Put"};
	respawnWeapons[] = {"LIB_Sten_Mk2","LIB_Webley_mk6","LIB_Binocular_UK","Throw","Put"};
	magazines[] = {UK_7x_LIB_32Rnd_9x19_Sten,UK_2x_LIB_6Rnd_455,UK_GRENADES};
	respawnmagazines[] = {UK_7x_LIB_32Rnd_9x19_Sten,UK_2x_LIB_6Rnd_455,UK_GRENADES};
	linkedItems[] = {"V_LIB_UK_P37_Officer",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Officer",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_UK_B_CO";
};
class BG21_UK_ARMY_PL2: BG21_UK_ARMY_PL {
	scope = 2;
	displayname = "Lieutenant";
	linkedItems[] = {"V_LIB_UK_P37_Officer",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Officer",LINKED_ITEMS_COMMANDER};
};
class BG21_UK_ARMY_SL: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Squad Leader";
	weapons[] = {"LIB_Sten_Mk2","LIB_Webley_mk6","LIB_Binocular_UK","Throw","Put"};
	respawnWeapons[] = {"LIB_Sten_Mk2","LIB_Webley_mk6","LIB_Binocular_UK","Throw","Put"};
	magazines[] = {UK_7x_LIB_32Rnd_9x19_Sten,UK_2x_LIB_6Rnd_455,UK_GRENADES};
	respawnmagazines[] = {UK_7x_LIB_32Rnd_9x19_Sten,UK_2x_LIB_6Rnd_455,UK_GRENADES};
	linkedItems[] = {"V_LIB_UK_P37_Sten",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Sten",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_UK_B_SL";
};
class BG21_UK_ARMY_TL: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Team Leader";
	weapons[] = {"LIB_LeeEnfield_No4","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No4","Throw","Put"};
	magazines[] = {UK_10x_LIB_10Rnd_770x56,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LIB_10Rnd_770x56,UK_GRENADES};
	linkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B";
};
class BG21_UK_ARMY_Rifleman: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Rifleman";
	weapons[] = {"LIB_LeeEnfield_No4","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No4","Throw","Put"};
	magazines[] = {UK_10x_LIB_10Rnd_770x56,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LIB_10Rnd_770x56,UK_GRENADES};
	linkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B";
};
class BG21_UK_ARMY_Rifleman_Sten: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Assault Rifleman (Sten)";
	weapons[] = {"LIB_Sten_Mk2","Throw","Put"};
	respawnWeapons[] = {"LIB_Sten_Mk2","Throw","Put"};
	magazines[] = {UK_7x_LIB_32Rnd_9x19_Sten,UK_GRENADES};
	respawnmagazines[] = {UK_7x_LIB_32Rnd_9x19_Sten,UK_GRENADES};
	linkedItems[] = {"V_LIB_UK_P37_Sten",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Sten",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B";
};
class BG21_UK_ARMY_Recon_TL: BG21_UK_ARMY_Rifleman {
	displayname = "Recon Team Leader";
	weapons[] = {"LIB_LeeEnfield_No4","LIB_Binocular_UK","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No4","LIB_Binocular_UK","Throw","Put"};
	magazines[] = {UK_10x_LIB_10Rnd_770x56,UK_GRENADES,UK_GRENADES_SMOKE};
	respawnmagazines[] = {UK_10x_LIB_10Rnd_770x56,UK_GRENADES,UK_GRENADES_SMOKE};	
	linkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_COMMANDER};
};
class BG21_UK_ARMY_Recon: BG21_UK_ARMY_Rifleman {
	displayname = "Recon";
	weapons[] = {"LIB_LeeEnfield_No4","LIB_Binocular_UK","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No4","LIB_Binocular_UK","Throw","Put"};
};
class BG21_UK_ARMY_Radio: BG21_UK_ARMY_Rifleman {
	displayname = "Radio";
	backpack = "BG21_UK_B_RADIO";
};
class BG21_UK_ARMY_Mortar: BG21_UK_ARMY_Rifleman {
	displayname = "Mortar Operator";
	weapons[] = {"LIB_LeeEnfield_No4","LIB_M2_60_Barrel","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No4","LIB_M2_60_Barrel","Throw","Put"};	
	linkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_UK_B_MORTAR";
};
class BG21_UK_ARMY_Mortar_TL: BG21_UK_ARMY_Rifleman {
	displayname = "Mortar Team leader";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_UK_B_MORTAR";
};
class BG21_UK_ARMY_Mortar_AS: BG21_UK_ARMY_Rifleman {
	displayname = "Mortar Assistant";
	backpack = "BG21_UK_B_MORTAR";
	weapons[] = {"LIB_LeeEnfield_No4","LIB_M2_60_Tripod","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No4","LIB_M2_60_Tripod","Throw","Put"};
};
class BG21_UK_ARMY_Sniper: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Sniper";
	weapons[] = {"LIB_LeeEnfield_No4T","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No4T","Throw","Put"};
	magazines[] = {UK_5x_LIB_10Rnd_770x56,UK_GRENADES};
	respawnmagazines[] = {UK_5x_LIB_10Rnd_770x56,UK_GRENADES};
	linkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_BASE};
	backpack = "";
};
class BG21_UK_ARMY_AT: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "AT Rifleman";
	weapons[] = {"LIB_LeeEnfield_No4","LIB_PIAT","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No4","LIB_PIAT","Throw","Put"};
	magazines[] = {UK_10x_LIB_10Rnd_770x56,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LIB_10Rnd_770x56,UK_GRENADES};
	linkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_AT";
};
class BG21_UK_ARMY_AT_AS: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "AT Assistant";
	weapons[] = {"LIB_LeeEnfield_No4","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No4","Throw","Put"};
	magazines[] = {UK_10x_LIB_10Rnd_770x56,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LIB_10Rnd_770x56,UK_GRENADES};
	linkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_AT_AS";
};
class BG21_UK_ARMY_BREN: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Bren Gunner";
	weapons[] = {"LIB_Bren_Mk2","Throw","Put"};
	respawnWeapons[] = {"LIB_Bren_Mk2","Throw","Put"};
	magazines[] = {UK_5x_LIB_30Rnd_770x56,UK_GRENADES};
	respawnmagazines[] = {UK_5x_LIB_30Rnd_770x56,UK_GRENADES};
	linkedItems[] = {"V_LIB_UK_P37_Heavy",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Heavy",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_BREN";
};
class BG21_UK_ARMY_BREN_AS: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Bren Gunner Assistant";
	weapons[] = {"LIB_LeeEnfield_No4","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No4","Throw","Put"};
	magazines[] = {UK_10x_LIB_10Rnd_770x56,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LIB_10Rnd_770x56,UK_GRENADES};
	linkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_BREN";
};
class BG21_UK_ARMY_MG: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "M1919 Gunner";
	weapons[] = {"LIB_M1919A4","Throw","Put"};
	respawnWeapons[] = {"LIB_M1919A4","Throw","Put"};
	magazines[] = {UK_3x_LIB_50Rnd_762x63,UK_GRENADES};
	respawnmagazines[] = {UK_3x_LIB_50Rnd_762x63,UK_GRENADES};
	linkedItems[] = {"V_LIB_UK_P37_Heavy",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Heavy",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_MG";
};
class BG21_UK_ARMY_MG_AS: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "M1919 Assistant";
	weapons[] = {"LIB_LeeEnfield_No4","LIB_M2_Tripod","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No4","LIB_M2_Tripod","Throw","Put"};
	magazines[] = {UK_10x_LIB_10Rnd_770x56,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LIB_10Rnd_770x56,UK_GRENADES};
	linkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_MG_AS";
};
class BG21_UK_ARMY_MG_TL: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "M1919 Team Leader";
	weapons[] = {"LIB_LeeEnfield_No4","LIB_Binocular_UK","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No4","LIB_Binocular_UK","Throw","Put"};
	magazines[] = {UK_10x_LIB_10Rnd_770x56,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LIB_10Rnd_770x56,UK_GRENADES};
	linkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_MG_AS";
};
class BG21_UK_ARMY_Engineer_Mines: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Engineer (Mines)";
	weapons[] = {"LIB_LeeEnfield_No4","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No4","Throw","Put"};
	magazines[] = {UK_10x_LIB_10Rnd_770x56};
	respawnmagazines[] = {UK_10x_LIB_10Rnd_770x56};
	linkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_MINES";
};
class BG21_UK_ARMY_Engineer_Explos: BG21_UK_ARMY_Engineer_Mines {
	scope = 2;
	displayname = "Engineer (Explosives)";
	backpack = "BG21_UK_B_EXPLOS";
};
class BG21_UK_ARMY_Medic: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Medic";
	weapons[] = {"LIB_LeeEnfield_No4","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No4","Throw","Put"};
	magazines[] = {UK_10x_LIB_10Rnd_770x56,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LIB_10Rnd_770x56,UK_GRENADES};
	linkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_MEDIC";
};

// DESERT
class BG21_UK_DR_PL: BG21_UK_ARMY_PL {
	faction = "BG21_UK_DR";
	weapons[] = {"LIB_M1928A1_Thompson","LIB_Webley_mk6","LIB_Binocular_UK","Throw","Put"};
	respawnWeapons[] = {"LIB_M1928A1_Thompson","LIB_Webley_mk6","LIB_Binocular_UK","Throw","Put"};
	magazines[] = {UK_7x_LIB_30Rnd_45ACP,UK_2x_LIB_6Rnd_455,UK_GRENADES};
	respawnmagazines[] = {UK_7x_LIB_30Rnd_45ACP,UK_2x_LIB_6Rnd_455,UK_GRENADES};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_DR'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_DR_PL2: BG21_UK_ARMY_PL2 {
	faction = "BG21_UK_DR";
};
class BG21_UK_DR_SL: BG21_UK_ARMY_SL {
	faction = "BG21_UK_DR";
	weapons[] = {"LIB_M1928A1_Thompson","LIB_Webley_mk6","LIB_Binocular_UK","Throw","Put"};
	respawnWeapons[] = {"LIB_M1928A1_Thompson","LIB_Webley_mk6","LIB_Binocular_UK","Throw","Put"};
	magazines[] = {UK_7x_LIB_30Rnd_45ACP,UK_2x_LIB_6Rnd_455,UK_GRENADES};
	respawnmagazines[] = {UK_7x_LIB_30Rnd_45ACP,UK_2x_LIB_6Rnd_455,UK_GRENADES};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_DR'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_DR_TL: BG21_UK_ARMY_TL {
	faction = "BG21_UK_DR";
	weapons[] = {"LIB_LeeEnfield_No1","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No1","Throw","Put"};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_DR'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_DR_Rifleman: BG21_UK_ARMY_Rifleman {
	faction = "BG21_UK_DR";
	weapons[] = {"LIB_LeeEnfield_No1","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No1","Throw","Put"};
};
class BG21_UK_DR_Rifleman_Sten: BG21_UK_ARMY_Rifleman_Sten {
	faction = "BG21_UK_DR";
	displayname = "Assault Rifleman (Thompson)";
	weapons[] = {"LIB_M1928A1_Thompson","Throw","Put"};
	respawnWeapons[] = {"LIB_M1928A1_Thompson","Throw","Put"};
	magazines[] = {UK_7x_LIB_30Rnd_45ACP,UK_GRENADES};
	respawnmagazines[] = {UK_7x_LIB_30Rnd_45ACP,UK_GRENADES};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_DR'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_DR_Recon_TL: BG21_UK_ARMY_Recon_TL {
	faction = "BG21_UK_DR";
	weapons[] = {"LIB_LeeEnfield_No1","LIB_Binocular_UK","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No1","LIB_Binocular_UK","Throw","Put"};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_DR'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_DR_Recon: BG21_UK_ARMY_Recon {
	faction = "BG21_UK_DR";
	weapons[] = {"LIB_LeeEnfield_No1","LIB_Binocular_UK","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No1","LIB_Binocular_UK","Throw","Put"};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_DR'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_DR_Radio: BG21_UK_ARMY_Radio {
	faction = "BG21_UK_DR";
	weapons[] = {"LIB_LeeEnfield_No1","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No1","Throw","Put"};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_DR'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_DR_Mortar: BG21_UK_ARMY_Mortar {
	faction = "BG21_UK_DR";
	weapons[] = {"LIB_LeeEnfield_No1","LIB_M2_60_Barrel","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No1","LIB_M2_60_Barrel","Throw","Put"};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_DR'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_DR_Mortar_TL: BG21_UK_ARMY_Mortar_TL {
	faction = "BG21_UK_DR";
	weapons[] = {"LIB_LeeEnfield_No1","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No1","Throw","Put"};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_DR'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_DR_Mortar_AS: BG21_UK_ARMY_Mortar_AS {
	faction = "BG21_UK_DR";
	weapons[] = {"LIB_LeeEnfield_No1","LIB_M2_60_Tripod","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No1","LIB_M2_60_Tripod","Throw","Put"};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_DR'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_DR_Sniper: BG21_UK_ARMY_Sniper {
	faction = "BG21_UK_DR";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_DR'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_DR_AT: BG21_UK_ARMY_AT {
	faction = "BG21_UK_DR";
	weapons[] = {"LIB_LeeEnfield_No1","LIB_PIAT","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No1","LIB_PIAT","Throw","Put"};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_DR'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_DR_AT_AS: BG21_UK_ARMY_AT_AS {
	faction = "BG21_UK_DR";
	displayname = "AT Assistant";
	weapons[] = {"LIB_LeeEnfield_No1","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No1","Throw","Put"};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_DR'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_DR_BREN: BG21_UK_ARMY_BREN {
	faction = "BG21_UK_DR";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_DR'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_DR_BREN_AS: BG21_UK_ARMY_BREN_AS {
	faction = "BG21_UK_DR";
	weapons[] = {"LIB_LeeEnfield_No1","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No1","Throw","Put"};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_DR'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_DR_MG: BG21_UK_ARMY_MG {
	faction = "BG21_UK_DR";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_DR'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_DR_MG_AS: BG21_UK_ARMY_MG_AS {
	faction = "BG21_UK_DR";
	weapons[] = {"LIB_LeeEnfield_No1","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No1","Throw","Put"};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_DR'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_DR_MG_TL: BG21_UK_ARMY_TL {
	faction = "BG21_UK_DR";
	weapons[] = {"LIB_LeeEnfield_No1","LIB_Binocular_UK","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No1","LIB_Binocular_UK","Throw","Put"};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_DR'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_DR_Engineer_Mines: BG21_UK_ARMY_Engineer_Mines {
	faction = "BG21_UK_DR";
	weapons[] = {"LIB_LeeEnfield_No1","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No1","Throw","Put"};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_DR'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_DR_Engineer_Explos: BG21_UK_ARMY_Engineer_Explos {
	faction = "BG21_UK_DR";
	weapons[] = {"LIB_LeeEnfield_No1","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No1","Throw","Put"};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_DR'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_DR_Medic: BG21_UK_ARMY_Medic {
	faction = "BG21_UK_DR";
	weapons[] = {"LIB_LeeEnfield_No1","Throw","Put"};
	respawnWeapons[] = {"LIB_LeeEnfield_No1","Throw","Put"};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_DR'] call BG21_IFA3_fnc_random_gear;};";
	};
};

// AIRBORNE
class BG21_UK_AB_PL: BG21_UK_ARMY_PL {
	faction = "BG21_UK_AB";
	weapons[] = {"LIB_Sten_Mk5","LIB_Webley_mk6","LIB_Binocular_UK","Throw","Put"};
	respawnWeapons[] = {"LIB_Sten_Mk5","LIB_Webley_mk6","LIB_Binocular_UK","Throw","Put"};
	magazines[] = {UK_7x_LIB_32Rnd_9x19_Sten,UK_2x_LIB_6Rnd_455,UK_GRENADES};
	respawnmagazines[] = {UK_7x_LIB_32Rnd_9x19_Sten,UK_2x_LIB_6Rnd_455,UK_GRENADES};
	linkedItems[] = {"V_LIB_UK_P37_Officer_Blanco",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Officer_Blanco",LINKED_ITEMS_COMMANDER};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_PL2: BG21_UK_ARMY_PL2 {
	faction = "BG21_UK_AB";
	weapons[] = {"LIB_Sten_Mk5","LIB_Webley_mk6","LIB_Binocular_UK","Throw","Put"};
	respawnWeapons[] = {"LIB_Sten_Mk5","LIB_Webley_mk6","LIB_Binocular_UK","Throw","Put"};
	magazines[] = {UK_7x_LIB_32Rnd_9x19_Sten,UK_2x_LIB_6Rnd_455,UK_GRENADES};
	respawnmagazines[] = {UK_7x_LIB_32Rnd_9x19_Sten,UK_2x_LIB_6Rnd_455,UK_GRENADES};
	linkedItems[] = {"V_LIB_UK_P37_Officer_Blanco",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Officer_Blanco",LINKED_ITEMS_COMMANDER};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_SL: BG21_UK_ARMY_SL {
	faction = "BG21_UK_AB";
	weapons[] = {"LIB_Sten_Mk5","LIB_Webley_mk6","LIB_Binocular_UK","Throw","Put"};
	respawnWeapons[] = {"LIB_Sten_Mk5","LIB_Webley_mk6","LIB_Binocular_UK","Throw","Put"};
	magazines[] = {UK_7x_LIB_32Rnd_9x19_Sten,UK_2x_LIB_6Rnd_455,UK_GRENADES};
	respawnmagazines[] = {UK_7x_LIB_32Rnd_9x19_Sten,UK_2x_LIB_6Rnd_455,UK_GRENADES};
	linkedItems[] = {"V_LIB_UK_P37_Sten_Blanco",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Sten_Blanco",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_UK_AB_B_SL";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_TL: BG21_UK_ARMY_TL {
	faction = "BG21_UK_AB";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_AB_B";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_Rifleman: BG21_UK_ARMY_Rifleman {
	faction = "BG21_UK_AB";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_AB_B";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_Rifleman_Sten: BG21_UK_ARMY_Rifleman_Sten {
	faction = "BG21_UK_AB";
	weapons[] = {"LIB_Sten_Mk5","LIB_Binocular_UK","Throw","Put"};
	respawnWeapons[] = {"LIB_Sten_Mk5","LIB_Binocular_UK","Throw","Put"};
	magazines[] = {UK_7x_LIB_32Rnd_9x19_Sten,UK_GRENADES};
	respawnmagazines[] = {UK_7x_LIB_32Rnd_9x19_Sten,UK_GRENADES};
	linkedItems[] = {"V_LIB_UK_P37_Sten_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Sten_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_AB_B";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_Recon_TL: BG21_UK_ARMY_Recon_TL {
	faction = "BG21_UK_AB";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_COMMANDER};	
	backpack = "BG21_UK_AB_B";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_Recon: BG21_UK_ARMY_Recon {
	faction = "BG21_UK_AB";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_AB_B";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_Radio: BG21_UK_ARMY_Radio {
	faction = "BG21_UK_AB";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_Mortar: BG21_UK_ARMY_Mortar {
	faction = "BG21_UK_AB";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_UK_AB_B_MORTAR";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};	
};
class BG21_UK_AB_Mortar_TL: BG21_UK_ARMY_Mortar_TL {
	faction = "BG21_UK_AB";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_UK_AB_B_MORTAR";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};	
};
class BG21_UK_AB_Mortar_AS: BG21_UK_ARMY_Mortar_AS {
	faction = "BG21_UK_AB";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_AB_B_MORTAR";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};	
};
class BG21_UK_AB_Sniper: BG21_UK_ARMY_Sniper {
	faction = "BG21_UK_AB";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_AB_B";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_AT: BG21_UK_ARMY_AT {
	faction = "BG21_UK_AB";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_AB_B_AT";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_AT_AS: BG21_UK_ARMY_AT_AS {
	faction = "BG21_UK_AB";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_AB_B_AT_AS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_BREN: BG21_UK_ARMY_BREN {
	faction = "BG21_UK_AB";
	linkedItems[] = {"V_LIB_UK_P37_Heavy_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Heavy_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_AB_B_BREN";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_BREN_AS: BG21_UK_ARMY_BREN_AS {
	faction = "BG21_UK_AB";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_AB_B_BREN_AS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_MG: BG21_UK_ARMY_MG {
	faction = "BG21_UK_AB";
	linkedItems[] = {"V_LIB_UK_P37_Heavy_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Heavy_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_AB_B_MG";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_MG_AS: BG21_UK_ARMY_MG_AS {
	faction = "BG21_UK_AB";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_AB_B_MG_AS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_MG_TL: BG21_UK_ARMY_MG_TL {
	faction = "BG21_UK_AB";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_AB_B_MG_AS";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_Engineer_Mines: BG21_UK_ARMY_Engineer_Mines {
	faction = "BG21_UK_AB";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_AB_B_MINES";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_Engineer_Explos: BG21_UK_ARMY_Engineer_Explos {
	faction = "BG21_UK_AB";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_AB_B_EXPLOS";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_Medic: BG21_UK_ARMY_Medic {
	faction = "BG21_UK_AB";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_AB_B_MEDIC";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};

// COMMANDOS
class BG21_UK_CDO_PL: BG21_UK_ARMY_PL {
	faction = "BG21_UK_CDO";
	weapons[] = {"LIB_M1928A1_Thompson","LIB_Webley_mk6","LIB_Binocular_UK","Throw","Put"};
	respawnWeapons[] = {"LIB_M1928A1_Thompson","LIB_Webley_mk6","LIB_Binocular_UK","Throw","Put"};
	magazines[] = {UK_7x_LIB_30Rnd_45ACP,UK_2x_LIB_6Rnd_455,UK_GRENADES};
	respawnmagazines[] = {UK_7x_LIB_30Rnd_45ACP,UK_2x_LIB_6Rnd_455,UK_GRENADES};
	linkedItems[] = {"V_LIB_UK_P37_Officer_Blanco",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Officer_Blanco",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_UK_B_CO";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_PL2: BG21_UK_ARMY_PL2 {
	faction = "BG21_UK_CDO";
	weapons[] = {"LIB_M1928A1_Thompson","LIB_Webley_mk6","LIB_Binocular_UK","Throw","Put"};
	respawnWeapons[] = {"LIB_M1928A1_Thompson","LIB_Webley_mk6","LIB_Binocular_UK","Throw","Put"};
	magazines[] = {UK_7x_LIB_30Rnd_45ACP,UK_2x_LIB_6Rnd_455,UK_GRENADES};
	respawnmagazines[] = {UK_7x_LIB_30Rnd_45ACP,UK_2x_LIB_6Rnd_455,UK_GRENADES};
	linkedItems[] = {"V_LIB_UK_P37_Officer_Blanco",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Officer_Blanco",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_UK_B_CO";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_SL: BG21_UK_ARMY_SL {
	faction = "BG21_UK_CDO";
	weapons[] = {"LIB_M1928A1_Thompson","LIB_Webley_mk6","LIB_Binocular_UK","Throw","Put"};
	respawnWeapons[] = {"LIB_M1928A1_Thompson","LIB_Webley_mk6","LIB_Binocular_UK","Throw","Put"};
	magazines[] = {UK_7x_LIB_30Rnd_45ACP,UK_2x_LIB_6Rnd_455,UK_GRENADES};
	respawnmagazines[] = {UK_7x_LIB_30Rnd_45ACP,UK_2x_LIB_6Rnd_455,UK_GRENADES};
	linkedItems[] = {"V_LIB_UK_P37_Sten_Blanco",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Sten_Blanco",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_UK_CDO_B_SL";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_TL: BG21_UK_ARMY_TL {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_Rifleman: BG21_UK_ARMY_Rifleman {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_Rifleman_Sten: BG21_UK_ARMY_Rifleman_Sten {
	faction = "BG21_UK_CDO";
	displayname = "Assault Rifleman (Thompson)";	
	weapons[] = {"LIB_M1928A1_Thompson","LIB_Binocular_UK","Throw","Put"};
	respawnWeapons[] = {"LIB_M1928A1_Thompson","LIB_Binocular_UK","Throw","Put"};
	magazines[] = {UK_7x_LIB_30Rnd_45ACP,UK_GRENADES};
	respawnmagazines[] = {UK_7x_LIB_30Rnd_45ACP,UK_GRENADES};
	linkedItems[] = {"V_LIB_UK_P37_Sten_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Sten_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_Recon_TL: BG21_UK_ARMY_Recon_TL {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_UK_CDO_B";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_Recon: BG21_UK_ARMY_Recon {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_Radio: BG21_UK_ARMY_Radio {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_Mortar: BG21_UK_ARMY_Mortar {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_COMMANDER};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};	
	backpack = "BG21_UK_CDO_B_MORTAR";
};
class BG21_UK_CDO_Mortar_TL: BG21_UK_ARMY_Mortar_TL {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_COMMANDER};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_UK_CDO_B_MORTAR";
};
class BG21_UK_CDO_Mortar_AS: BG21_UK_ARMY_Mortar_AS {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_UK_CDO_B_MORTAR";
};
class BG21_UK_CDO_Sniper: BG21_UK_ARMY_Sniper {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_AT: BG21_UK_ARMY_AT {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B_AT";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_AT_AS: BG21_UK_ARMY_AT_AS {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B_AT_AS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_BREN: BG21_UK_ARMY_BREN {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"V_LIB_UK_P37_Heavy_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Heavy_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B_BREN";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_BREN_AS: BG21_UK_ARMY_BREN_AS {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B_BREN_AS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_MG: BG21_UK_ARMY_MG {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"V_LIB_UK_P37_Heavy_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Heavy_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B_MG";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_MG_AS: BG21_UK_ARMY_MG_AS {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B_MG_AS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_MG_TL: BG21_UK_ARMY_MG_TL {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B_MG_AS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_Engineer_Mines: BG21_UK_ARMY_Engineer_Mines {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B_MINES";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_Engineer_Explos: BG21_UK_ARMY_Engineer_Explos {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B_EXPLOS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_Medic: BG21_UK_ARMY_Medic {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_UK_P37_Rifleman_Blanco",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B_MEDIC";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
