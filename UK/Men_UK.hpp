// ARMY
class BG21_UK_ARMY_PL: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Captain";
	weapons[] = {"LEN_StenMk2","fow_w_webley","LIB_Binocular_US","Throw","Put"};
	respawnWeapons[] = {"LEN_StenMk2","fow_w_webley","LIB_Binocular_US","Throw","Put"};
	magazines[] = {UK_7x_LEN_32Rnd_9x19,UK_2x_fow_6Rnd_455,UK_GRENADES};
	respawnmagazines[] = {UK_7x_LEN_32Rnd_9x19,UK_2x_fow_6Rnd_455,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_officer",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_uk_officer",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_UK_B_CO";
};
class BG21_UK_ARMY_PL2: BG21_UK_ARMY_PL {
	scope = 2;
	displayname = "Lieutenant";
	linkedItems[] = {"fow_v_uk_officer",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_uk_officer",LINKED_ITEMS_COMMANDER};
};
class BG21_UK_ARMY_SL: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Squad Leader";
	weapons[] = {"LEN_StenMk2","fow_w_webley","LIB_Binocular_US","Throw","Put"};
	respawnWeapons[] = {"LEN_StenMk2","fow_w_webley","LIB_Binocular_US","Throw","Put"};
	magazines[] = {UK_7x_LEN_32Rnd_9x19,UK_2x_fow_6Rnd_455,UK_GRENADES};
	respawnmagazines[] = {UK_7x_LEN_32Rnd_9x19,UK_2x_fow_6Rnd_455,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_sten",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_uk_sten",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_UK_B_SL";
};
class BG21_UK_ARMY_TL: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Team Leader";
	weapons[] = {"LEN_SMLE_No4Mk1",UK_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1",UK_KNIFE,"Throw","Put"};
	magazines[] = {UK_KNIFE_MAG,UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_KNIFE_MAG,UK_10x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B";
};
class BG21_UK_ARMY_Rifleman: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Rifleman";
	weapons[] = {"LEN_SMLE_No4Mk1",UK_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1",UK_KNIFE,"Throw","Put"};
	magazines[] = {UK_KNIFE_MAG,UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_KNIFE_MAG,UK_10x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B";
};
class BG21_UK_ARMY_Rifleman_Sten: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Assault Rifleman (Sten)";
	weapons[] = {"LEN_StenMk2",UK_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"LEN_StenMk2",UK_KNIFE,"Throw","Put"};
	magazines[] = {UK_KNIFE_MAG,UK_7x_LEN_32Rnd_9x19,UK_GRENADES};
	respawnmagazines[] = {UK_KNIFE_MAG,UK_7x_LEN_32Rnd_9x19,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_sten",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_uk_sten",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_UK_B";
};
class BG21_UK_ARMY_Recon_TL: BG21_UK_ARMY_Rifleman {
	displayname = "Recon Team Leader";
	weapons[] = {"LEN_SMLE_No4Mk1","LIB_Binocular_US",UK_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","LIB_Binocular_US",UK_KNIFE,"Throw","Put"};
	magazines[] = {UK_KNIFE_MAG,UK_10x_LEN_10Rnd_303,UK_GRENADES,UK_GRENADES_SMOKE};
	respawnmagazines[] = {UK_KNIFE_MAG,UK_10x_LEN_10Rnd_303,UK_GRENADES,UK_GRENADES_SMOKE};	
};
class BG21_UK_ARMY_Recon: BG21_UK_ARMY_Rifleman {
	displayname = "Recon";
	weapons[] = {"LEN_SMLE_No4Mk1","LIB_Binocular_US",UK_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","LIB_Binocular_US",UK_KNIFE,"Throw","Put"};
};
class BG21_UK_ARMY_Radio: BG21_UK_ARMY_Rifleman {
	displayname = "Radio";
	backpack = "BG21_UK_B_RADIO";
};
class BG21_UK_ARMY_Mortar: BG21_UK_ARMY_Rifleman {
	displayname = "Mortar Operator";
	backpack = "BG21_UK_B_MORTAR";
	weapons[] = {"LEN_SMLE_No4Mk1","LIB_M2_60_Barrel",UK_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","LIB_M2_60_Barrel",UK_KNIFE,"Throw","Put"};	
};
class BG21_UK_ARMY_Mortar_TL: BG21_UK_ARMY_Rifleman {
	displayname = "Mortar Team leader";
	backpack = "BG21_UK_B_MORTAR";
};
class BG21_UK_ARMY_Mortar_AS: BG21_UK_ARMY_Rifleman {
	displayname = "Mortar Assistant";
	backpack = "BG21_UK_B_MORTAR";
	weapons[] = {"LEN_SMLE_No4Mk1","LIB_M2_60_Tripod",UK_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","LIB_M2_60_Tripod",UK_KNIFE,"Throw","Put"};
};
class BG21_UK_ARMY_Sniper: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Sniper";
	weapons[] = {"LEN_SMLE_No4Mk1T",UK_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1T",UK_KNIFE,"Throw","Put"};
	magazines[] = {UK_KNIFE_MAG,UK_5x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_KNIFE_MAG,UK_5x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	backpack = "";
};
class BG21_UK_ARMY_AT: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "AT Rifleman";
	weapons[] = {"LEN_SMLE_No4Mk1","fow_w_piat",UK_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","fow_w_piat",UK_KNIFE,"Throw","Put"};
	magazines[] = {UK_KNIFE_MAG,UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_KNIFE_MAG,UK_10x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_AT";
};
class BG21_UK_ARMY_AT_AS: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "AT Assistant";
	weapons[] = {"LEN_SMLE_No4Mk1",UK_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1",UK_KNIFE,"Throw","Put"};
	magazines[] = {UK_KNIFE_MAG,UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_KNIFE_MAG,UK_10x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_AT_AS";
};
class BG21_UK_ARMY_BREN: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Bren Gunner";
	weapons[] = {"fow_w_bren",UK_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"fow_w_bren",UK_KNIFE,"Throw","Put"};
	magazines[] = {UK_KNIFE_MAG,UK_5x_fow_30Rnd_303_bren,UK_GRENADES};
	respawnmagazines[] = {UK_KNIFE_MAG,UK_5x_fow_30Rnd_303_bren,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_bren",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_bren",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_BREN";
};
class BG21_UK_ARMY_BREN_AS: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Bren Gunner Assistant";
	weapons[] = {"LEN_SMLE_No4Mk1",UK_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1",UK_KNIFE,"Throw","Put"};
	magazines[] = {UK_KNIFE_MAG,UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_KNIFE_MAG,UK_10x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_BREN";
};
class BG21_UK_ARMY_MG: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "M1919 Gunner";
	weapons[] = {"LIB_M1919A4",UK_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"LIB_M1919A4",UK_KNIFE,"Throw","Put"};
	magazines[] = {UK_KNIFE_MAG,UK_3x_LIB_50Rnd_762x63,UK_GRENADES};
	respawnmagazines[] = {UK_KNIFE_MAG,UK_3x_LIB_50Rnd_762x63,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_bren",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_bren",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_MG";
};
class BG21_UK_ARMY_MG_AS: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "M1919 Assistant";
	weapons[] = {"LEN_SMLE_No4Mk1","LIB_M2_Tripod",UK_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","LIB_M2_Tripod",UK_KNIFE,"Throw","Put"};
	magazines[] = {UK_KNIFE_MAG,UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_KNIFE_MAG,UK_10x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_MG_AS";
};
class BG21_UK_ARMY_MG_TL: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "M1919 Team Leader";
	weapons[] = {"LEN_SMLE_No4Mk1","LIB_Binocular_US",UK_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","LIB_Binocular_US",UK_KNIFE,"Throw","Put"};
	magazines[] = {UK_KNIFE_MAG,UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_KNIFE_MAG,UK_10x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_MG_AS";
};
class BG21_UK_ARMY_Engineer_Mines: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Engineer (Mines)";
	weapons[] = {"LEN_SMLE_No4Mk1",UK_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1",UK_KNIFE,"Throw","Put"};
	magazines[] = {UK_KNIFE_MAG,UK_10x_LEN_10Rnd_303};
	respawnmagazines[] = {UK_KNIFE_MAG,UK_10x_LEN_10Rnd_303};
	linkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
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
	weapons[] = {"LEN_SMLE_No4Mk1",UK_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1",UK_KNIFE,"Throw","Put"};
	magazines[] = {UK_KNIFE_MAG,UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_KNIFE_MAG,UK_10x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_MEDIC";
};

// AIRBORNE
class BG21_UK_AB_PL: BG21_UK_ARMY_PL {
	faction = "BG21_UK_AB";
	weapons[] = {"LEN_StenMk5","fow_w_webley","LIB_Binocular_US","Throw","Put"};
	respawnWeapons[] = {"LEN_StenMk5","fow_w_webley","LIB_Binocular_US","Throw","Put"};
	magazines[] = {UK_7x_LEN_32Rnd_9x19,UK_2x_fow_6Rnd_455,UK_GRENADES};
	respawnmagazines[] = {UK_7x_LEN_32Rnd_9x19,UK_2x_fow_6Rnd_455,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_officer",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_uk_officer",LINKED_ITEMS_COMMANDER};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_PL2: BG21_UK_ARMY_PL2 {
	faction = "BG21_UK_AB";
	weapons[] = {"LEN_StenMk5","fow_w_webley","LIB_Binocular_US","Throw","Put"};
	respawnWeapons[] = {"LEN_StenMk5","fow_w_webley","LIB_Binocular_US","Throw","Put"};
	magazines[] = {UK_7x_LEN_32Rnd_9x19,UK_2x_fow_6Rnd_455,UK_GRENADES};
	respawnmagazines[] = {UK_7x_LEN_32Rnd_9x19,UK_2x_fow_6Rnd_455,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_officer",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_uk_officer",LINKED_ITEMS_COMMANDER};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_SL: BG21_UK_ARMY_SL {
	faction = "BG21_UK_AB";
	weapons[] = {"LEN_StenMk5","fow_w_webley","LIB_Binocular_US","Throw","Put"};
	respawnWeapons[] = {"LEN_StenMk5","fow_w_webley","LIB_Binocular_US","Throw","Put"};
	magazines[] = {UK_7x_LEN_32Rnd_9x19,UK_2x_fow_6Rnd_455,UK_GRENADES};
	respawnmagazines[] = {UK_7x_LEN_32Rnd_9x19,UK_2x_fow_6Rnd_455,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_para_sten",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_uk_para_sten",LINKED_ITEMS_COMMANDER};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_TL: BG21_UK_ARMY_TL {
	faction = "BG21_UK_AB";
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_Rifleman: BG21_UK_ARMY_Rifleman {
	faction = "BG21_UK_AB";
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_Rifleman_Sten: BG21_UK_ARMY_Rifleman_Sten {
	faction = "BG21_UK_AB";
	weapons[] = {"LEN_StenMk5","LIB_Binocular_US",UK_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"LEN_StenMk5","LIB_Binocular_US",UK_KNIFE,"Throw","Put"};
	magazines[] = {UK_KNIFE_MAG,UK_7x_LEN_32Rnd_9x19,UK_GRENADES};
	respawnmagazines[] = {UK_KNIFE_MAG,UK_7x_LEN_32Rnd_9x19,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_para_sten",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_uk_para_sten",LINKED_ITEMS_COMMANDER};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_Recon_TL: BG21_UK_ARMY_Recon_TL {
	faction = "BG21_UK_AB";
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_Recon: BG21_UK_ARMY_Recon {
	faction = "BG21_UK_AB";
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_Radio: BG21_UK_ARMY_Radio {
	faction = "BG21_UK_AB";
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_Mortar: BG21_UK_ARMY_Mortar {
	faction = "BG21_UK_AB";
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};	
};
class BG21_UK_AB_Mortar_TL: BG21_UK_ARMY_Mortar_TL {
	faction = "BG21_UK_AB";
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};	
};
class BG21_UK_AB_Mortar_AS: BG21_UK_ARMY_Mortar_AS {
	faction = "BG21_UK_AB";
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};	
};
class BG21_UK_AB_Sniper: BG21_UK_ARMY_Sniper {
	faction = "BG21_UK_AB";
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_AT: BG21_UK_ARMY_AT {
	faction = "BG21_UK_AB";
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_AT_AS: BG21_UK_ARMY_AT_AS {
	faction = "BG21_UK_AB";
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_BREN: BG21_UK_ARMY_BREN {
	faction = "BG21_UK_AB";
	linkedItems[] = {"fow_v_uk_para_bren",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_bren",LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_BREN_AS: BG21_UK_ARMY_BREN_AS {
	faction = "BG21_UK_AB";
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_MG: BG21_UK_ARMY_MG {
	faction = "BG21_UK_AB";
	linkedItems[] = {"fow_v_uk_para_bren",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_bren",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_MG";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_MG_AS: BG21_UK_ARMY_MG_AS {
	faction = "BG21_UK_AB";
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_MG_TL: BG21_UK_ARMY_MG_TL {
	faction = "BG21_UK_AB";
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_Engineer_Mines: BG21_UK_ARMY_Engineer_Mines {
	faction = "BG21_UK_AB";
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_Engineer_Explos: BG21_UK_ARMY_Engineer_Explos {
	faction = "BG21_UK_AB";
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_Medic: BG21_UK_ARMY_Medic {
	faction = "BG21_UK_AB";
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};

// COMMANDOS
class BG21_UK_CDO_PL: BG21_UK_ARMY_PL {
	faction = "BG21_UK_CDO";
	weapons[] = {"LIB_M1928A1_Thompson","fow_w_webley","LIB_Binocular_US","Throw","Put"};
	respawnWeapons[] = {"LIB_M1928A1_Thompson","fow_w_webley","LIB_Binocular_US","Throw","Put"};
	magazines[] = {UK_7x_LIB_30Rnd_45ACP,UK_2x_fow_6Rnd_455,UK_GRENADES};
	respawnmagazines[] = {UK_7x_LIB_30Rnd_45ACP,UK_2x_fow_6Rnd_455,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_officer_green",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_uk_officer_green",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_UK_B_CO";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_PL2: BG21_UK_ARMY_PL2 {
	faction = "BG21_UK_CDO";
	weapons[] = {"LIB_M1928A1_Thompson","fow_w_webley","LIB_Binocular_US","Throw","Put"};
	respawnWeapons[] = {"LIB_M1928A1_Thompson","fow_w_webley","LIB_Binocular_US","Throw","Put"};
	magazines[] = {UK_7x_LIB_30Rnd_45ACP,UK_2x_fow_6Rnd_455,UK_GRENADES};
	respawnmagazines[] = {UK_7x_LIB_30Rnd_45ACP,UK_2x_fow_6Rnd_455,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_officer_green",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_uk_officer_green",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_UK_B_CO";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_SL: BG21_UK_ARMY_SL {
	faction = "BG21_UK_CDO";
	weapons[] = {"LIB_M1928A1_Thompson","fow_w_webley","LIB_Binocular_US","Throw","Put"};
	respawnWeapons[] = {"LIB_M1928A1_Thompson","fow_w_webley","LIB_Binocular_US","Throw","Put"};
	magazines[] = {UK_7x_LIB_30Rnd_45ACP,UK_2x_fow_6Rnd_455,UK_GRENADES};
	respawnmagazines[] = {UK_7x_LIB_30Rnd_45ACP,UK_2x_fow_6Rnd_455,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_sten_green",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_uk_sten_green",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_UK_CDO_B_SL";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_TL: BG21_UK_ARMY_TL {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_Rifleman: BG21_UK_ARMY_Rifleman {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_Rifleman_Sten: BG21_UK_ARMY_Rifleman_Sten {
	faction = "BG21_UK_CDO";
	displayname = "Assault Rifleman (Thompson)";	
	weapons[] = {"LIB_M1928A1_Thompson","LIB_Binocular_US",UK_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"LIB_M1928A1_Thompson","LIB_Binocular_US",UK_KNIFE,"Throw","Put"};
	magazines[] = {UK_KNIFE_MAG,UK_7x_LIB_30Rnd_45ACP,UK_GRENADES};
	respawnmagazines[] = {UK_KNIFE_MAG,UK_7x_LIB_30Rnd_45ACP,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_sten_green",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_uk_sten_green",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_UK_CDO_B";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_Recon_TL: BG21_UK_ARMY_Recon_TL {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_Recon: BG21_UK_ARMY_Recon {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_Radio: BG21_UK_ARMY_Radio {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_Mortar: BG21_UK_ARMY_Mortar {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};	
	backpack = "BG21_UK_CDO_B_MORTAR";
};
class BG21_UK_CDO_Mortar_TL: BG21_UK_ARMY_Mortar_TL {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_UK_CDO_B_MORTAR";
};
class BG21_UK_CDO_Mortar_AS: BG21_UK_ARMY_Mortar_AS {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_UK_CDO_B_MORTAR";
};
class BG21_UK_CDO_Sniper: BG21_UK_ARMY_Sniper {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_AT: BG21_UK_ARMY_AT {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B_AT";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_AT_AS: BG21_UK_ARMY_AT_AS {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B_AT_AS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_BREN: BG21_UK_ARMY_BREN {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"fow_v_uk_bren_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_bren_green",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B_BREN";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_BREN_AS: BG21_UK_ARMY_BREN_AS {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B_BREN_AS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_MG: BG21_UK_ARMY_MG {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"fow_v_uk_bren_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_bren_green",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B_MG";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_MG_AS: BG21_UK_ARMY_MG_AS {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B_MG_AS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_MG_TL: BG21_UK_ARMY_MG_TL {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B_MG_AS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_Engineer_Mines: BG21_UK_ARMY_Engineer_Mines {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B_MINES";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_Engineer_Explos: BG21_UK_ARMY_Engineer_Explos {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B_EXPLOS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_Medic: BG21_UK_ARMY_Medic {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B_MEDIC";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
