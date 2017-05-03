// ARMY
class BG21_UK_ARMY_PL: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Captain";
	weapons[] = {"LEN_StenMk2","LIB_Binocular_SU","Throw","Put"};
	respawnWeapons[] = {"LEN_StenMk2","LIB_Binocular_SU","Throw","Put"};
	magazines[] = {UK_7x_LEN_32Rnd_9x19,UK_GRENADES,UK_GRENADES_SMOKE};
	respawnmagazines[] = {UK_7x_LEN_32Rnd_9x19,UK_GRENADES,UK_GRENADES_SMOKE};
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
	weapons[] = {"LEN_StenMk2","LIB_Binocular_SU","Throw","Put"};
	respawnWeapons[] = {"LEN_StenMk2","LIB_Binocular_SU","Throw","Put"};
	magazines[] = {UK_7x_LEN_32Rnd_9x19,UK_GRENADES,UK_GRENADES_SMOKE};
	respawnmagazines[] = {UK_7x_LEN_32Rnd_9x19,UK_GRENADES,UK_GRENADES_SMOKE};
	linkedItems[] = {"fow_v_uk_sten",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_uk_sten",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_UK_B_SL";
};
class BG21_UK_ARMY_TL: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Team Leader";
	weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	magazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B";
};
class BG21_UK_ARMY_Rifleman: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Rifleman";
	weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	magazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B";
};
class BG21_UK_ARMY_Recon: BG21_UK_ARMY_Rifleman {
	displayname = "Recon";
	weapons[] = {"LEN_SMLE_No4Mk1","LIB_Binocular_SU","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","LIB_Binocular_SU","Throw","Put"};
};
class BG21_UK_ARMY_Radio: BG21_UK_ARMY_Rifleman {
	displayname = "Radio";
	backpack = "fow_b_uk_p37_radio";
};
class BG21_UK_ARMY_Mortar: BG21_UK_ARMY_Rifleman {
	displayname = "Mortar Operator";
	backpack = "BG21_UK_B_MORTAR";
};
class BG21_UK_ARMY_Sniper: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Sniper";
	weapons[] = {"LEN_SMLE_No4Mk1T","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1T","Throw","Put"};
	magazines[] = {UK_5x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_5x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	backpack = "";
};
class BG21_UK_ARMY_AT: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "AT Rifleman";
	weapons[] = {"LEN_SMLE_No4Mk1","LIB_M1A1_Bazooka","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","LIB_M1A1_Bazooka","Throw","Put"};
	magazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_AT";
};
class BG21_UK_ARMY_AT_AS: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "AT Assistant";
	weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	magazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_AT_AS";
};
class BG21_UK_ARMY_MG: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "LMG Rifleman";
	weapons[] = {"fow_w_bren","Throw","Put"};
	respawnWeapons[] = {"fow_w_bren","Throw","Put"};
	magazines[] = {UK_5x_fow_30Rnd_303_bren,UK_GRENADES};
	respawnmagazines[] = {UK_5x_fow_30Rnd_303_bren,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_bren",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_bren",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_MG";
};
class BG21_UK_ARMY_MG_AS: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "LMG Assistant";
	weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	magazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_MG_AS";
};
class BG21_UK_ARMY_Engineer_Mines: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Engineer (Mines)";
	weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	magazines[] = {UK_10x_LEN_10Rnd_303};
	respawnmagazines[] = {UK_10x_LEN_10Rnd_303};
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
	weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	magazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_MEDIC";
};

// AIRBORNE
class BG21_UK_AB_PL: BG21_UK_ARMY_PL {
	faction = "BG21_UK_AB";
	weapons[] = {"LEN_StenMk5","LIB_Binocular_SU","Throw","Put"};
	respawnWeapons[] = {"LEN_StenMk5","LIB_Binocular_SU","Throw","Put"};
	magazines[] = {UK_7x_LEN_32Rnd_9x19,UK_GRENADES,UK_GRENADES_SMOKE};
	respawnmagazines[] = {UK_7x_LEN_32Rnd_9x19,UK_GRENADES,UK_GRENADES_SMOKE};
	linkedItems[] = {"fow_v_uk_officer",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_uk_officer",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_UK_B_CO";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_PL2: BG21_UK_AB_PL {
	faction = "BG21_UK_AB";
	linkedItems[] = {"fow_v_uk_officer",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_uk_officer",LINKED_ITEMS_COMMANDER};
};
class BG21_UK_AB_SL: BG21_UK_ARMY_SL {
	faction = "BG21_UK_AB";
	weapons[] = {"LEN_StenMk5","LIB_Binocular_SU","Throw","Put"};
	respawnWeapons[] = {"LEN_StenMk5","LIB_Binocular_SU","Throw","Put"};
	magazines[] = {UK_7x_LEN_32Rnd_9x19,UK_GRENADES,UK_GRENADES_SMOKE};
	respawnmagazines[] = {UK_7x_LEN_32Rnd_9x19,UK_GRENADES,UK_GRENADES_SMOKE};
	linkedItems[] = {"fow_v_uk_para_sten",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_uk_para_sten",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_UK_B_SL";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_TL: BG21_UK_ARMY_TL {
	faction = "BG21_UK_AB";
	weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	magazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_Rifleman: BG21_UK_ARMY_Rifleman {
	faction = "BG21_UK_AB";
	weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	magazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_Recon: BG21_UK_AB_Rifleman {
	displayname = "Recon";
	faction = "BG21_UK_AB";
	weapons[] = {"LEN_SMLE_No4Mk1","LIB_Binocular_SU","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","LIB_Binocular_SU","Throw","Put"};
};
class BG21_UK_AB_Radio: BG21_UK_AB_Rifleman {
	displayname = "Radio";
	faction = "BG21_UK_AB";
	backpack = "fow_b_uk_p37_radio";
};
class BG21_UK_AB_Mortar: BG21_UK_AB_Rifleman {
	displayname = "Mortar Operator";
	faction = "BG21_UK_AB";
	backpack = "BG21_UK_B_MORTAR";
};
class BG21_UK_AB_Sniper: BG21_UK_ARMY_Sniper {
	faction = "BG21_UK_AB";
	weapons[] = {"LEN_SMLE_No4Mk1T","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1T","Throw","Put"};
	magazines[] = {UK_5x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_5x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	backpack = "";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_AT: BG21_UK_ARMY_AT {
	faction = "BG21_UK_AB";
	weapons[] = {"LEN_SMLE_No4Mk1","LIB_M1A1_Bazooka","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","LIB_M1A1_Bazooka","Throw","Put"};
	magazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_AT";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_AT_AS: BG21_UK_ARMY_AT_AS {
	faction = "BG21_UK_AB";
	weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	magazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_AT_AS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_MG: BG21_UK_ARMY_MG {
	faction = "BG21_UK_AB";
	weapons[] = {"fow_w_bren","Throw","Put"};
	respawnWeapons[] = {"fow_w_bren","Throw","Put"};
	magazines[] = {UK_5x_fow_30Rnd_303_bren,UK_GRENADES};
	respawnmagazines[] = {UK_5x_fow_30Rnd_303_bren,UK_GRENADES};
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
	weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	magazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_MG_AS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_Engineer_Mines: BG21_UK_ARMY_Engineer_Mines {
	faction = "BG21_UK_AB";
	weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	magazines[] = {UK_10x_LEN_10Rnd_303};
	respawnmagazines[] = {UK_10x_LEN_10Rnd_303};
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_MINES";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_AB_Engineer_Explos: BG21_UK_AB_Engineer_Mines {
	displayname = "Engineer (Explosives)";
	faction = "BG21_UK_AB";
	backpack = "BG21_UK_B_EXPLOS";
};
class BG21_UK_AB_Medic: BG21_UK_ARMY_Medic {
	faction = "BG21_UK_AB";
	weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	magazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_para_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_MEDIC";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_AB'] call BG21_IFA3_fnc_random_gear;};";
	};
};

// COMMANDOS
class BG21_UK_CDO_PL: BG21_UK_ARMY_PL {
	faction = "BG21_UK_CDO";
	weapons[] = {"LEN_StenMk2","LIB_Binocular_SU","Throw","Put"};
	respawnWeapons[] = {"LEN_StenMk2","LIB_Binocular_SU","Throw","Put"};
	magazines[] = {UK_7x_LEN_32Rnd_9x19,UK_GRENADES,UK_GRENADES_SMOKE};
	respawnmagazines[] = {UK_7x_LEN_32Rnd_9x19,UK_GRENADES,UK_GRENADES_SMOKE};
	linkedItems[] = {"fow_v_uk_officer_green",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_uk_officer_green",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_UK_B_CO";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_PL2: BG21_UK_CDO_PL {
	faction = "BG21_UK_CDO";
	linkedItems[] = {"fow_v_uk_officer_green",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_uk_officer_green",LINKED_ITEMS_COMMANDER};
};
class BG21_UK_CDO_SL: BG21_UK_ARMY_SL {
	faction = "BG21_UK_CDO";
	weapons[] = {"LEN_StenMk2","LIB_Binocular_SU","Throw","Put"};
	respawnWeapons[] = {"LEN_StenMk2","LIB_Binocular_SU","Throw","Put"};
	magazines[] = {UK_7x_LEN_32Rnd_9x19,UK_GRENADES,UK_GRENADES_SMOKE};
	respawnmagazines[] = {UK_7x_LEN_32Rnd_9x19,UK_GRENADES,UK_GRENADES_SMOKE};
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
	weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	magazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
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
	weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	magazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_Recon: BG21_UK_CDO_Rifleman {
	displayname = "Recon";
	faction = "BG21_UK_CDO";
	weapons[] = {"LEN_SMLE_No4Mk1","LIB_Binocular_SU","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","LIB_Binocular_SU","Throw","Put"};
};
class BG21_UK_CDO_Radio: BG21_UK_CDO_Rifleman {
	displayname = "Radio";
	faction = "BG21_UK_CDO";
	backpack = "fow_b_uk_p37_radio";
};
class BG21_UK_CDO_Mortar: BG21_UK_CDO_Rifleman {
	displayname = "Mortar Operator";
	faction = "BG21_UK_CDO";
	backpack = "BG21_UK_CDO_B_MORTAR";
};
class BG21_UK_CDO_Sniper: BG21_UK_ARMY_Sniper {
	faction = "BG21_UK_CDO";
	weapons[] = {"LEN_SMLE_No4Mk1T","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1T","Throw","Put"};
	magazines[] = {UK_5x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_5x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	backpack = "";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_AT: BG21_UK_ARMY_AT {
	faction = "BG21_UK_CDO";
	weapons[] = {"LEN_SMLE_No4Mk1","LIB_M1A1_Bazooka","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","LIB_M1A1_Bazooka","Throw","Put"};
	magazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
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
	weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	magazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B_AT_AS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_MG: BG21_UK_ARMY_MG {
	faction = "BG21_UK_CDO";
	weapons[] = {"fow_w_bren","Throw","Put"};
	respawnWeapons[] = {"fow_w_bren","Throw","Put"};
	magazines[] = {UK_5x_fow_30Rnd_303_bren,UK_GRENADES};
	respawnmagazines[] = {UK_5x_fow_30Rnd_303_bren,UK_GRENADES};
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
	weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	magazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
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
	weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	magazines[] = {UK_10x_LEN_10Rnd_303};
	respawnmagazines[] = {UK_10x_LEN_10Rnd_303};
	linkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B_MINES";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_UK_CDO_Engineer_Explos: BG21_UK_CDO_Engineer_Mines {
	displayname = "Engineer (Explosives)";
	faction = "BG21_UK_CDO";
	backpack = "BG21_UK_B_CDO_EXPLOS";
};
class BG21_UK_CDO_Medic: BG21_UK_ARMY_Medic {
	faction = "BG21_UK_CDO";
	weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
	magazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_LEN_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base_green",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_CDO_B_MEDIC";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'UK_CDO'] call BG21_IFA3_fnc_random_gear;};";
	};
};
