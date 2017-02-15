// ARMY
class BG21_US_ARMY_PL: BG21_US_Soldier_base {
	scope = 2;
	displayname = "Captain";
	uniformClass = "U_LIB_US_Private";
	class EventHandlers {};
	weapons[] = {"LIB_M1A1_Thompson","LIB_Binocular_SU","Throw","Put"};
	respawnWeapons[] = {"LIB_M1A1_Thompson","LIB_Binocular_SU","Throw","Put"};
	magazines[] = {US_7x_LIB_30Rnd_45ACP,US_GRENADES,US_GRENADES_SMOKE};
	respawnmagazines[] = {US_7x_LIB_30Rnd_45ACP,US_GRENADES,US_GRENADES_SMOKE};
	linkedItems[] = {"V_LIB_US_Vest_Thompson_nco","H_LIB_US_Helmet_Cap",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Thompson_nco","H_LIB_US_Helmet_Cap",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_US_B_CO";
};
class BG21_US_ARMY_PL2: BG21_US_ARMY_PL {
	scope = 2;
	displayname = "Lieutenant";
	linkedItems[] = {"V_LIB_US_Vest_Thompson_nco","H_LIB_US_Helmet_First_lieutenant",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Thompson_nco","H_LIB_US_Helmet_First_lieutenant",LINKED_ITEMS_COMMANDER};
};
class BG21_US_ARMY_SL: BG21_US_Soldier_base {
	scope = 2;
	displayname = "Squad Leader";
	weapons[] = {"LIB_M1A1_Thompson","LIB_Binocular_SU","Throw","Put"};
	respawnWeapons[] = {"LIB_M1A1_Thompson","LIB_Binocular_SU","Throw","Put"};
	magazines[] = {US_7x_LIB_30Rnd_45ACP,US_GRENADES,US_GRENADES_SMOKE};
	respawnmagazines[] = {US_7x_LIB_30Rnd_45ACP,US_GRENADES,US_GRENADES_SMOKE};
	linkedItems[] = {"V_LIB_US_Vest_Thompson",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Thompson",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_US_B_SL";
};
class BG21_US_ARMY_TL: BG21_US_Soldier_base {
	scope = 2;
	displayname = "Team Leader";
	weapons[] = {"LIB_M1_Carbine","Throw","Put"};
	respawnWeapons[] = {"LIB_M1_Carbine","Throw","Put"};
	magazines[] = {US_10x_LIB_15Rnd_762x33,US_GRENADES};
	respawnmagazines[] = {US_10x_LIB_15Rnd_762x33,US_GRENADES};
	linkedItems[] = {"V_LIB_US_Vest_Carbine",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Carbine",LINKED_ITEMS_BASE};
	backpack = "B_LIB_US_Backpack";
};
class BG21_US_ARMY_Rifleman: BG21_US_Soldier_base {
	scope = 2;
	displayname = "Rifleman";
	weapons[] = {"LIB_M1_Garand","Throw","Put"};
	respawnWeapons[] = {"LIB_M1_Garand","Throw","Put"};
	magazines[] = {US_13x_LIB_8Rnd_762x63,US_GRENADES};
	respawnmagazines[] = {US_13x_LIB_8Rnd_762x63,US_GRENADES};
	linkedItems[] = {"V_LIB_US_Vest_Garand",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Garand",LINKED_ITEMS_BASE};
	backpack = "B_LIB_US_Backpack";
};
class BG21_US_ARMY_Recon: BG21_US_ARMY_Rifleman {
	displayname = "Recon";
	weapons[] = {"LIB_M1903A3_Springfield","LIB_Binocular_SU","Throw","Put"};
	respawnWeapons[] = {"LIB_M1903A3_Springfield","LIB_Binocular_SU","Throw","Put"};
	magazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
	respawnmagazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
};
class BG21_US_ARMY_Radio: BG21_US_ARMY_Rifleman {
	displayname = "Radio";
	backpack = "B_LIB_US_Radio";
};
class BG21_US_ARMY_Sniper: BG21_US_Soldier_base {
	scope = 2;
	displayname = "Sniper";
	weapons[] = {"LIB_M1903A4_Springfield","Throw","Put"};
	respawnWeapons[] = {"LIB_M1903A4_Springfield","Throw","Put"};
	magazines[] = {US_10x_LIB_5Rnd_762x63,US_GRENADES};
	respawnmagazines[] = {US_10x_LIB_5Rnd_762x63,US_GRENADES};
	linkedItems[] = {"V_LIB_US_Vest_Carbine",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Carbine",LINKED_ITEMS_BASE};
	backpack = "";
};
class BG21_US_ARMY_AT: BG21_US_Soldier_base {
	scope = 2;
	displayname = "AT Rifleman";
	weapons[] = {"LIB_M1_Carbine","LIB_M1A1_Bazooka","Throw","Put"};
	respawnWeapons[] = {"LIB_M1_Carbine","LIB_M1A1_Bazooka","Throw","Put"};
	magazines[] = {US_10x_LIB_15Rnd_762x33,US_GRENADES};
	respawnmagazines[] = {US_10x_LIB_15Rnd_762x33,US_GRENADES};
	linkedItems[] = {"V_LIB_US_Vest_Carbine",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Carbine",LINKED_ITEMS_BASE};
	backpack = "BG21_US_B_AT";
};
class BG21_US_ARMY_AT_AS: BG21_US_Soldier_base {
	scope = 2;
	displayname = "AT Assistant";
	weapons[] = {"LIB_M1_Garand","Throw","Put"};
	respawnWeapons[] = {"LIB_M1_Garand","Throw","Put"};
	magazines[] = {US_13x_LIB_8Rnd_762x63,US_GRENADES};
	respawnmagazines[] = {US_13x_LIB_8Rnd_762x63,US_GRENADES};
	linkedItems[] = {"V_LIB_US_Vest_Garand",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Garand",LINKED_ITEMS_BASE};
	backpack = "BG21_US_B_AT_AS";
};
class BG21_US_ARMY_MG: BG21_US_Soldier_base {
	scope = 2;
	displayname = "LMG Rifleman";
	weapons[] = {"LIB_M1918A2_BAR","Throw","Put"};
	respawnWeapons[] = {"LIB_M1918A2_BAR","Throw","Put"};
	magazines[] = {US_7x_LIB_20Rnd_762x63,US_GRENADES};
	respawnmagazines[] = {US_7x_LIB_20Rnd_762x63,US_GRENADES};
	linkedItems[] = {"V_LIB_US_Vest_Bar",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Bar",LINKED_ITEMS_BASE};
	backpack = "BG21_US_B_MG";
};
class BG21_US_ARMY_MG_AS: BG21_US_Soldier_base {
	scope = 2;
	displayname = "LMG Assistant";
	weapons[] = {"LIB_M1_Garand","Throw","Put"};
	respawnWeapons[] = {"LIB_M1_Garand","Throw","Put"};
	magazines[] = {US_13x_LIB_8Rnd_762x63,US_GRENADES};
	respawnmagazines[] = {US_13x_LIB_8Rnd_762x63,US_GRENADES};
	linkedItems[] = {"V_LIB_US_Vest_Grenadier",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Grenadier",LINKED_ITEMS_BASE};
	backpack = "BG21_US_B_MG_AS";
};
class BG21_US_ARMY_Engineer_Mines: BG21_US_Soldier_base {
	scope = 2;
	displayname = "Engineer (Mines)";
	weapons[] = {"LIB_M1_Garand","Throw","Put"};
	respawnWeapons[] = {"LIB_M1_Garand","Throw","Put"};
	magazines[] = {US_13x_LIB_8Rnd_762x63};
	respawnmagazines[] = {US_13x_LIB_8Rnd_762x63};
	linkedItems[] = {"V_LIB_US_Vest_Carbine_eng",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Carbine_eng",LINKED_ITEMS_BASE};
	backpack = "BG21_US_B_MINES";
};
class BG21_US_ARMY_Engineer_Explos: BG21_US_ARMY_Engineer_Mines {
	scope = 2;
	displayname = "Engineer (Explosives)";
	backpack = "BG21_US_B_EXPLOS";
};
class BG21_US_ARMY_Medic: BG21_US_Soldier_base {
	scope = 2;
	displayname = "Medic";
	uniformClass = "U_LIB_US_Med";
	class EventHandlers {};
	weapons[] = {"LIB_M1_Carbine","Throw","Put"};
	respawnWeapons[] = {"LIB_M1_Carbine","Throw","Put"};
	magazines[] = {US_10x_LIB_15Rnd_762x33,US_GRENADES};
	respawnmagazines[] = {US_10x_LIB_15Rnd_762x33,US_GRENADES};
	linkedItems[] = {"V_LIB_US_Vest_Medic2","H_LIB_US_Helmet_Med_ns",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Medic2","H_LIB_US_Helmet_Med_ns",LINKED_ITEMS_BASE};
	backpack = "BG21_US_B_MEDIC";
};

// DDAY
class BG21_US_DDAY_PL: BG21_US_ARMY_PL {
	faction = "BG21_US_DDAY";
	uniformClass = "U_LIB_US_Rangers_Uniform";
	linkedItems[] = {"V_LIB_US_Vest_Thompson","H_LIB_US_Rangers_Helmet_Cap",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Thompson","H_LIB_US_Rangers_Helmet_Cap",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_US_B_CO_DDAY";
};
class BG21_US_DDAY_PL2: BG21_US_DDAY_PL {
	faction = "BG21_US_DDAY";
	uniformClass = "U_LIB_US_Rangers_Uniform";
	linkedItems[] = {"V_LIB_US_Vest_Thompson","H_LIB_US_Rangers_Helmet_First_lieutenant",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Thompson","H_LIB_US_Rangers_Helmet_First_lieutenant",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_US_B_CO_DDAY";
};
class BG21_US_DDAY_SL: BG21_US_ARMY_SL {
	faction = "BG21_US_DDAY";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USRANGERS'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_SL";
};
class BG21_US_DDAY_TL: BG21_US_ARMY_TL {
	faction = "BG21_US_DDAY";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USRANGERS'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "B_LIB_US_Backpack_DDAY";
};
class BG21_US_DDAY_Rifleman: BG21_US_ARMY_Rifleman {
	faction = "BG21_US_DDAY";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USRANGERS'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "B_LIB_US_Backpack_DDAY";
};
class BG21_US_DDAY_Recon: BG21_US_ARMY_Recon {
	faction = "BG21_US_DDAY";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USRANGERS'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "B_LIB_US_Backpack_DDAY";
};
class BG21_US_DDAY_Radio: BG21_US_ARMY_Radio {
	faction = "BG21_US_DDAY";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USRANGERS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_US_DDAY_Sniper: BG21_US_ARMY_Sniper {
	faction = "BG21_US_DDAY";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USRANGERS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_US_DDAY_AT: BG21_US_ARMY_AT {
	faction = "BG21_US_DDAY";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USRANGERS'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_AT_DDAY";
};
class BG21_US_DDAY_AT_AS: BG21_US_ARMY_AT_AS {
	faction = "BG21_US_DDAY";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USRANGERS'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_AT_AS_DDAY";
};
class BG21_US_DDAY_MG: BG21_US_ARMY_MG {
	faction = "BG21_US_DDAY";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USRANGERS'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_MG_DDAY";
};
class BG21_US_DDAY_MG_AS: BG21_US_ARMY_MG_AS {
	faction = "BG21_US_DDAY";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USRANGERS'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_MG_AS_DDAY";
};
class BG21_US_DDAY_Engineer_Mines: BG21_US_ARMY_Engineer_Mines {
	faction = "BG21_US_DDAY";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USRANGERS'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_MINES_DDAY";
};
class BG21_US_DDAY_Engineer_Explos: BG21_US_ARMY_Engineer_Explos {
	faction = "BG21_US_DDAY";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USRANGERS'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_EXPLOS_DDAY";
};
class BG21_US_DDAY_Medic: BG21_US_ARMY_Medic {
	faction = "BG21_US_DDAY";
	uniformClass = "U_LIB_US_Rangers_Med";
	backpack = "BG21_US_B_MEDIC_DDAY";
};

// USMC
class BG21_USMC_PL: BG21_US_ARMY_PL {
	faction = "BG21_USMC";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};	
	backpack = "BG21_USMC_B_CO";
};
class BG21_USMC_PL2: BG21_USMC_PL {
	faction = "BG21_USMC";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};	
	backpack = "BG21_USMC_B_CO";
};
class BG21_USMC_SL: BG21_US_ARMY_SL {
	faction = "BG21_USMC";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_SL";
};
class BG21_USMC_TL: BG21_US_ARMY_TL {
	faction = "BG21_USMC";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_USMC_Backpack";
};
class BG21_USMC_Rifleman: BG21_US_ARMY_Rifleman {
	faction = "BG21_USMC";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_USMC_Backpack";
};
class BG21_USMC_Recon: BG21_US_ARMY_Recon {
	faction = "BG21_USMC";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_USMC_Backpack";
};
class BG21_USMC_Radio: BG21_US_ARMY_Radio {
	faction = "BG21_USMC";
	weapons[] = {"LIB_M1903A3_Springfield","Throw","Put"};
	respawnWeapons[] = {"LIB_M1903A3_Springfield","Throw","Put"};
	magazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
	respawnmagazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_USMC_Sniper: BG21_US_ARMY_Sniper {
	faction = "BG21_USMC";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_USMC_AT: BG21_US_ARMY_AT {
	faction = "BG21_USMC";
	weapons[] = {"LIB_M1903A3_Springfield","LIB_M1A1_Bazooka","Throw","Put"};
	respawnWeapons[] = {"LIB_M1903A3_Springfield","LIB_M1A1_Bazooka","Throw","Put"};
	magazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
	respawnmagazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
	linkedItems[] = {"V_LIB_US_Vest_Garand",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Garand",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_USMC_B_AT";
};
class BG21_USMC_AT_AS: BG21_US_ARMY_AT_AS {
	faction = "BG21_USMC";
	weapons[] = {"LIB_M1903A3_Springfield","Throw","Put"};
	respawnWeapons[] = {"LIB_M1903A3_Springfield","Throw","Put"};
	magazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
	respawnmagazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_USMC_B_AT_AS";
};
class BG21_USMC_MG: BG21_US_ARMY_MG {
	faction = "BG21_USMC";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_USMC_B_MG";
};
class BG21_USMC_MG_AS: BG21_US_ARMY_MG_AS {
	faction = "BG21_USMC";
	weapons[] = {"LIB_M1903A3_Springfield","Throw","Put"};
	respawnWeapons[] = {"LIB_M1903A3_Springfield","Throw","Put"};
	magazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
	respawnmagazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_USMC_B_MG_AS";
};
class BG21_USMC_Engineer_Mines: BG21_US_ARMY_Engineer_Mines {
	faction = "BG21_USMC";
	weapons[] = {"LIB_M1903A3_Springfield","Throw","Put"};
	respawnWeapons[] = {"LIB_M1903A3_Springfield","Throw","Put"};
	magazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
	respawnmagazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_USMC_B_MINES";
};
class BG21_USMC_Engineer_Explos: BG21_US_ARMY_Engineer_Explos {
	faction = "BG21_USMC";
	weapons[] = {"LIB_M1903A3_Springfield","Throw","Put"};
	respawnWeapons[] = {"LIB_M1903A3_Springfield","Throw","Put"};
	magazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
	respawnmagazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_USMC_B_EXPLOS";
};
class BG21_USMC_Medic: BG21_US_ARMY_Medic {
	faction = "BG21_USMC";
	weapons[] = {"LIB_M1903A3_Springfield","Throw","Put"};
	respawnWeapons[] = {"LIB_M1903A3_Springfield","Throw","Put"};
	magazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
	respawnmagazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_USMC_B_MEDIC";
};

