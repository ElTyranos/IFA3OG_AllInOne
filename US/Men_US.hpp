// ARMY
class BG21_US_ARMY_PL: BG21_US_Soldier_base {
	scope = 2;
	displayname = "Captain";
	uniformClass = "U_LIB_US_Private";
	class EventHandlers {};
	weapons[] = {"LIB_M1A1_Thompson","LIB_Colt_M1911","LIB_Binocular_US","Throw","Put"};
	respawnWeapons[] = {"LIB_M1A1_Thompson","LIB_Colt_M1911","LIB_Binocular_US","Throw","Put"};
	magazines[] = {US_7x_LIB_30Rnd_45ACP,US_2x_LIB_7Rnd_45ACP,US_GRENADES_SMOKE,US_GRENADES};
	respawnmagazines[] = {US_7x_LIB_30Rnd_45ACP,US_2x_LIB_7Rnd_45ACP,US_GRENADES_SMOKE,US_GRENADES};
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
	weapons[] = {"LIB_M1A1_Thompson","LIB_Colt_M1911","LIB_Binocular_US","Throw","Put"};
	respawnWeapons[] = {"LIB_M1A1_Thompson","LIB_Colt_M1911","LIB_Binocular_US","Throw","Put"};
	magazines[] = {US_7x_LIB_30Rnd_45ACP,US_2x_LIB_7Rnd_45ACP,US_GRENADES_SMOKE,US_GRENADES};
	respawnmagazines[] = {US_7x_LIB_30Rnd_45ACP,US_2x_LIB_7Rnd_45ACP,US_GRENADES_SMOKE,US_GRENADES};
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
class BG21_US_ARMY_Grenadier: BG21_US_ARMY_Rifleman {
	displayname = "Grenadier";
	weapons[] = {"BG21_M1_Garand_Grenadier","Throw","Put"};
	respawnWeapons[] = {"BG21_M1_Garand_Grenadier","Throw","Put"};	
	backpack = "BG21_US_B_GRENADIER";
};
class BG21_US_ARMY_Recon_TL: BG21_US_ARMY_Rifleman {
	displayname = "Recon Team Leader";
	weapons[] = {"LIB_M1_Carbine","LIB_Binocular_US","Throw","Put"};
	respawnWeapons[] = {"LIB_M1_Carbine","LIB_Binocular_US","Throw","Put"};
	magazines[] = {US_10x_LIB_15Rnd_762x33,US_GRENADES_SMOKE,US_GRENADES};
	respawnmagazines[] = {US_10x_LIB_15Rnd_762x33,US_GRENADES_SMOKE,US_GRENADES};
};
class BG21_US_ARMY_Recon: BG21_US_ARMY_Rifleman {
	displayname = "Recon";
	weapons[] = {"LIB_M1903A3_Springfield","LIB_Binocular_US","Throw","Put"};
	respawnWeapons[] = {"LIB_M1903A3_Springfield","LIB_Binocular_US","Throw","Put"};
	magazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
	respawnmagazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
};
class BG21_US_ARMY_Radio: BG21_US_ARMY_Rifleman {
	displayname = "Radio";
	backpack = "BG21_US_B_RADIO";
};
class BG21_US_ARMY_Flamethrower: BG21_US_ARMY_Rifleman {
	displayname = "Flamethrower Operator";
	weapons[] = {"LIB_M2_Flamethrower","LIB_Colt_M1911","Throw","Put"};
	respawnWeapons[] = {"LIB_M2_Flamethrower","LIB_Colt_M1911","Throw","Put"};
	magazines[] = {US_2x_LIB_7Rnd_45ACP,US_GRENADES};
	respawnmagazines[] = {US_2x_LIB_7Rnd_45ACP,US_GRENADES};
	linkedItems[] = {"V_LIB_US_Vest_45",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_Vest_45",LINKED_ITEMS_BASE};
	backpack = "B_LIB_US_M2Flamethrower";	
};
class BG21_US_ARMY_BAR: BG21_US_Soldier_base {
	scope = 2;
	displayname = "BAR Rifleman";
	weapons[] = {"LIB_M1918A2_BAR","Throw","Put"};
	respawnWeapons[] = {"LIB_M1918A2_BAR","Throw","Put"};
	magazines[] = {US_7x_LIB_20Rnd_762x63,US_GRENADES};
	respawnmagazines[] = {US_7x_LIB_20Rnd_762x63,US_GRENADES};
	linkedItems[] = {"V_LIB_US_Vest_Bar",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Bar",LINKED_ITEMS_BASE};
	backpack = "BG21_US_B_BAR";
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
	displayname = "M1919A4 Gunner";
	weapons[] = {"LIB_M1919A4","Throw","Put"};
	respawnWeapons[] = {"LIB_M1919A4","Throw","Put"};
	magazines[] = {US_3x_LIB_50Rnd_762x63,US_GRENADES};
	respawnmagazines[] = {US_3x_LIB_50Rnd_762x63,US_GRENADES};
	linkedItems[] = {"V_LIB_US_Vest_Bar",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Bar",LINKED_ITEMS_BASE};
	backpack = "BG21_US_B_MG";
};
class BG21_US_ARMY_MG_AS: BG21_US_Soldier_base {
	scope = 2;
	displayname = "M1919A4 Assistant";
	weapons[] = {"LIB_M1_Garand","Throw","Put"};
	respawnWeapons[] = {"LIB_M1_Garand","Throw","Put"};
	magazines[] = {US_13x_LIB_8Rnd_762x63,US_GRENADES};
	respawnmagazines[] = {US_13x_LIB_8Rnd_762x63,US_GRENADES};
	linkedItems[] = {"V_LIB_US_Vest_Grenadier",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Grenadier",LINKED_ITEMS_BASE};
	backpack = "BG21_US_B_MG_AS";
};
class BG21_US_ARMY_MG_AS_TRIPOD: BG21_US_ARMY_MG_AS {
	displayname = "M1919A4 Assistant (Tripod)";
	weapons[] = {"LIB_M1_Garand","LIB_M2_Tripod","Throw","Put"};
	respawnWeapons[] = {"LIB_M1_Garand","LIB_M2_Tripod","Throw","Put"};
};
class BG21_US_ARMY_MG_TL: BG21_US_Soldier_base {
	scope = 2;
	displayname = "M1919A4 Team Leader";
	weapons[] = {"LIB_M1_Garand","LIB_Binocular_US","Throw","Put"};
	respawnWeapons[] = {"LIB_M1_Garand","LIB_Binocular_US","Throw","Put"};
	magazines[] = {US_13x_LIB_8Rnd_762x63,US_GRENADES};
	respawnmagazines[] = {US_13x_LIB_8Rnd_762x63,US_GRENADES};
	linkedItems[] = {"V_LIB_US_Vest_Garand",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Garand",LINKED_ITEMS_BASE};
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
class BG21_US_ARMY_Mortar_TL: BG21_US_ARMY_Rifleman {
	scope = 2;
	displayname = "Mortar Team Leader";
	weapons[] = {"LIB_M1_Carbine","Throw","Put"};
	respawnWeapons[] = {"LIB_M1_Carbine","Throw","Put"};
	magazines[] = {US_10x_LIB_15Rnd_762x33,US_GRENADES};
	respawnmagazines[] = {US_10x_LIB_15Rnd_762x33,US_GRENADES};
	linkedItems[] = {"V_LIB_US_Vest_Carbine",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Carbine",LINKED_ITEMS_BASE};	
	backpack = "BG21_US_B_MORTAR";	
};
class BG21_US_ARMY_Mortar: BG21_US_ARMY_Rifleman {
	scope = 2;
	displayname = "Mortar Operator";
	weapons[] = {"LIB_M1_Carbine","LIB_M2_60_Barrel","Throw","Put"};
	respawnWeapons[] = {"LIB_M1_Carbine","LIB_M2_60_Barrel","Throw","Put"};
	magazines[] = {US_10x_LIB_15Rnd_762x33,US_GRENADES};
	respawnmagazines[] = {US_10x_LIB_15Rnd_762x33,US_GRENADES};
	linkedItems[] = {"V_LIB_US_Vest_Carbine",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Carbine",LINKED_ITEMS_BASE};	
	backpack = "BG21_US_B_MORTAR";
};
class BG21_US_ARMY_Mortar_AS: BG21_US_ARMY_Rifleman {
	scope = 2;
	displayname = "Mortar Assistant";
	weapons[] = {"LIB_M1_Carbine","LIB_M2_60_Tripod","Throw","Put"};
	respawnWeapons[] = {"LIB_M1_Carbine","LIB_M2_60_Tripod","Throw","Put"};
	magazines[] = {US_10x_LIB_15Rnd_762x33,US_GRENADES};
	respawnmagazines[] = {US_10x_LIB_15Rnd_762x33,US_GRENADES};
	linkedItems[] = {"V_LIB_US_Vest_Carbine",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Carbine",LINKED_ITEMS_BASE};	
	backpack = "BG21_US_B_MORTAR";
};

// ARMY WINTER
class BG21_US_ARMY_W_PL: BG21_US_ARMY_PL {
	uniformClass = "U_LIB_US_Private_w";
	class EventHandlers {};
	linkedItems[] = {"V_LIB_US_Vest_Thompson_nco","H_LIB_US_Helmet_Cap_w",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Thompson_nco","H_LIB_US_Helmet_Cap_w",LINKED_ITEMS_COMMANDER};
};
class BG21_US_ARMY_W_PL2: BG21_US_ARMY_PL2 {
	uniformClass = "U_LIB_US_Private_w";
	class EventHandlers {};
	linkedItems[] = {"V_LIB_US_Vest_Thompson_nco","H_LIB_US_Helmet_First_lieutenant_w",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Thompson_nco","H_LIB_US_Helmet_First_lieutenant_w",LINKED_ITEMS_COMMANDER};
};
class BG21_US_ARMY_W_SL: BG21_US_ARMY_SL {
	faction = "BG21_US_Winter";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USARMY_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_US_ARMY_W_TL: BG21_US_ARMY_TL {
	faction = "BG21_US_Winter";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USARMY_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_US_ARMY_W_Rifleman: BG21_US_ARMY_Rifleman {
	faction = "BG21_US_Winter";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USARMY_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_US_ARMY_W_Grenadier: BG21_US_ARMY_Grenadier {
	faction = "BG21_US_Winter";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USARMY_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_US_ARMY_W_Recon_TL: BG21_US_ARMY_Recon_TL {
	faction = "BG21_US_Winter";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USARMY_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_US_ARMY_W_Recon: BG21_US_ARMY_Recon {
	faction = "BG21_US_Winter";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USARMY_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_US_ARMY_W_Radio: BG21_US_ARMY_Radio {
	faction = "BG21_US_Winter";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USARMY_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_US_ARMY_W_BAR: BG21_US_ARMY_BAR {
	faction = "BG21_US_Winter";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USARMY_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_US_ARMY_W_Sniper: BG21_US_ARMY_Sniper {
	faction = "BG21_US_Winter";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USARMY_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_US_ARMY_W_AT: BG21_US_ARMY_AT {
	faction = "BG21_US_Winter";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USARMY_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_US_ARMY_W_AT_AS: BG21_US_ARMY_AT_AS {
	faction = "BG21_US_Winter";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USARMY_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_US_ARMY_W_MG: BG21_US_ARMY_MG {
	faction = "BG21_US_Winter";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USARMY_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_US_ARMY_W_MG_AS: BG21_US_ARMY_MG_AS {
	faction = "BG21_US_Winter";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USARMY_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_US_ARMY_W_MG_AS_TRIPOD: BG21_US_ARMY_MG_AS_TRIPOD {
	faction = "BG21_US_Winter";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USARMY_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_US_ARMY_W_MG_TL: BG21_US_ARMY_MG_TL {
	faction = "BG21_US_Winter";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USARMY_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_US_ARMY_W_Engineer_Mines: BG21_US_ARMY_Engineer_Mines {
	faction = "BG21_US_Winter";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USARMY_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_US_ARMY_W_Engineer_Explos: BG21_US_ARMY_Engineer_Explos {
	faction = "BG21_US_Winter";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USARMY_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_US_ARMY_W_Medic: BG21_US_ARMY_Medic {
	uniformClass = "U_LIB_US_Med";
	class EventHandlers {};
	linkedItems[] = {"V_LIB_US_Vest_Medic2","H_LIB_US_Helmet_Med_w",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Medic2","H_LIB_US_Helmet_Med_w",LINKED_ITEMS_BASE};
};
class BG21_US_ARMY_W_Mortar_TL: BG21_US_ARMY_Mortar_TL {
	faction = "BG21_US_Winter";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USARMY_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_US_ARMY_W_Mortar: BG21_US_ARMY_Mortar {
	faction = "BG21_US_Winter";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USARMY_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_US_ARMY_W_Mortar_AS: BG21_US_ARMY_Mortar_AS {
	faction = "BG21_US_Winter";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USARMY_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};

// TANK CREW
class BG21_US_ARMY_Tank_Commander: BG21_US_Soldier_base {
	scope = 2;
	displayname = "Tank Commander";
	uniformClass = "U_LIB_US_Tank_Crew";
	class EventHandlers {};
	weapons[] = {"LEN_M3a1","LIB_Colt_M1911","LIB_Binocular_US","Throw","Put"};
	respawnWeapons[] = {"LEN_M3a1","LIB_Colt_M1911","LIB_Binocular_US","Throw","Put"};
	magazines[] = {US_7x_LEN_30Rnd_45ACP_M3,US_2x_LIB_7Rnd_45ACP,US_GRENADES_SMOKE,US_GRENADES};
	respawnmagazines[] = {US_7x_LEN_30Rnd_45ACP_M3,US_2x_LIB_7Rnd_45ACP,US_GRENADES_SMOKE,US_GRENADES};
	linkedItems[] = {"V_LIB_US_Vest_45","H_LIB_US_Helmet_Tank",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_US_Vest_45","H_LIB_US_Helmet_Tank",LINKED_ITEMS_COMMANDER};
	backpack = "";
};
class BG21_US_ARMY_Tank_Crew: BG21_US_Soldier_base {
	scope = 2;
	displayname = "Tank Crew";
	uniformClass = "U_LIB_US_Tank_Crew";
	class EventHandlers {};
	weapons[] = {"LIB_M1_Carbine","Throw","Put"};
	respawnWeapons[] = {"LIB_M1_Carbine","Throw","Put"};
	magazines[] = {US_10x_LIB_15Rnd_762x33,US_GRENADES};
	respawnmagazines[] = {US_10x_LIB_15Rnd_762x33,US_GRENADES};
	linkedItems[] = {"V_LIB_US_Vest_45","H_LIB_US_Helmet_Tank",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_Vest_45","H_LIB_US_Helmet_Tank",LINKED_ITEMS_BASE};
	backpack = "";
};

// 101st AIRBORNE
class BG21_USAB101_PL: BG21_US_ARMY_PL {
	faction = "BG21_USAB101";
	uniformClass = "U_LIB_US_AB_Uniform_M42";
	linkedItems[] = {"V_LIB_US_AB_Vest_Thompson_nco","H_LIB_US_AB_Helmet_CO_1",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_US_AB_Vest_Thompson_nco","H_LIB_US_AB_Helmet_CO_1",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_US_B_CO_M36";
};
class BG21_USAB101_PL2: BG21_USAB101_PL {
	faction = "BG21_USAB101";
	uniformClass = "U_LIB_US_AB_Uniform_M42";
	linkedItems[] = {"V_LIB_US_AB_Vest_Thompson_nco","H_LIB_US_AB_Helmet_CO_1",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_US_AB_Vest_Thompson_nco","H_LIB_US_AB_Helmet_CO_1",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_US_B_CO_M36";
};
class BG21_USAB101_SL: BG21_US_ARMY_SL {
	faction = "BG21_USAB101";
	uniformClass = "U_LIB_US_AB_Uniform_M42_NCO";
	class EventHandlers {};
	linkedItems[] = {"V_LIB_US_AB_Vest_Thompson","H_LIB_US_AB_Helmet_NCO_1",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_US_AB_Vest_Thompson","H_LIB_US_AB_Helmet_NCO_1",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_US_B_SL_M36";
};
class BG21_USAB101_TL: BG21_US_ARMY_TL {
	faction = "BG21_USAB101";
	weapons[] = {"LIB_M1A1_Carbine","Throw","Put"};
	respawnWeapons[] = {"LIB_M1A1_Carbine","Throw","Put"};
	linkedItems[] = {"V_LIB_US_AB_Vest_Carbine",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_AB_Vest_Carbine",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USAB_101'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "B_LIB_US_Backpack_M36";
};
class BG21_USAB101_Rifleman: BG21_US_ARMY_Rifleman {
	faction = "BG21_USAB101";
	linkedItems[] = {"V_LIB_US_AB_Vest_Garand",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_AB_Vest_Garand",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USAB_101'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "B_LIB_US_Backpack_M36";
};
class BG21_USAB101_AssaultRifleman: BG21_US_ARMY_Rifleman {
	faction = "BG21_USAB101";
	displayname = "Assault rifleman";
	weapons[] = {"LIB_M1A1_Thompson","Throw","Put"};
	respawnWeapons[] = {"LIB_M1A1_Thompson","Throw","Put"};
	magazines[] = {US_7x_LIB_30Rnd_45ACP,US_GRENADES};
	respawnmagazines[] = {US_7x_LIB_30Rnd_45ACP,US_GRENADES};	
	linkedItems[] = {"V_LIB_US_AB_Vest_Thompson",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_AB_Vest_Thompson",LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USAB_101'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "B_LIB_US_Backpack_M36";	
};
class BG21_USAB101_Grenadier: BG21_US_ARMY_Grenadier {
	faction = "BG21_USAB101";
	linkedItems[] = {"V_LIB_US_AB_Vest_Grenadier",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_AB_Vest_Grenadier",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USAB_101'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_GRENADIER_M36";
};
class BG21_USAB101_Recon_TL: BG21_US_ARMY_Recon_TL {
	faction = "BG21_USAB101";
	weapons[] = {"LIB_M1A1_Carbine","LIB_Binocular_US","Throw","Put"};
	respawnWeapons[] = {"LIB_M1A1_Carbine","LIB_Binocular_US","Throw","Put"};
	linkedItems[] = {"V_LIB_US_AB_Vest_Carbine",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_AB_Vest_Carbine",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USAB_101'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "B_LIB_US_Backpack_M36";
};
class BG21_USAB101_Recon: BG21_US_ARMY_Recon {
	faction = "BG21_USAB101";
	weapons[] = {"LIB_M1_Garand","LIB_Binocular_US","Throw","Put"};
	respawnWeapons[] = {"LIB_M1_Garand","LIB_Binocular_US","Throw","Put"};
	magazines[] = {US_13x_LIB_8Rnd_762x63,US_GRENADES};
	respawnmagazines[] = {US_13x_LIB_8Rnd_762x63,US_GRENADES};	
	linkedItems[] = {"V_LIB_US_AB_Vest_Garand",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_AB_Vest_Garand",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USAB_101'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "B_LIB_US_Backpack_M36";
};
class BG21_USAB101_Radio: BG21_US_ARMY_Radio {
	faction = "BG21_USAB101";
	weapons[] = {"LIB_M1A1_Carbine","Throw","Put"};
	respawnWeapons[] = {"LIB_M1A1_Carbine","Throw","Put"};
	magazines[] = {US_10x_LIB_15Rnd_762x33,US_GRENADES};
	respawnmagazines[] = {US_10x_LIB_15Rnd_762x33,US_GRENADES};
	linkedItems[] = {"V_LIB_US_AB_Vest_Carbine",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_AB_Vest_Carbine",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USAB_101'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_USAB101_BAR: BG21_US_ARMY_BAR {
	faction = "BG21_USAB101";
	linkedItems[] = {"V_LIB_US_AB_Vest_Bar",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_AB_Vest_Bar",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USAB_101'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_BAR_M36";
};
class BG21_USAB101_Sniper: BG21_US_ARMY_Sniper {
	faction = "BG21_USAB101";
	linkedItems[] = {"V_LIB_US_AB_Vest_Carbine",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_AB_Vest_Carbine",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USAB_101'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_USAB101_AT: BG21_US_ARMY_AT {
	faction = "BG21_USAB101";
	weapons[] = {"LIB_M1A1_Carbine","Throw","Put"};
	respawnWeapons[] = {"LIB_M1A1_Carbine","Throw","Put"};
	linkedItems[] = {"V_LIB_US_AB_Vest_Carbine",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_AB_Vest_Carbine",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USAB_101'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_AT_M36";
};
class BG21_USAB101_AT_AS: BG21_US_ARMY_AT_AS {
	faction = "BG21_USAB101";
	linkedItems[] = {"V_LIB_US_AB_Vest_Garand",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_AB_Vest_Garand",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USAB_101'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_AT_AS_M36";
};
class BG21_USAB101_MG: BG21_US_ARMY_MG {
	faction = "BG21_USAB101";
	linkedItems[] = {"V_LIB_US_AB_Vest_Bar",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_AB_Vest_Bar",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USAB_101'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_MG_M36";
};
class BG21_USAB101_MG_AS: BG21_US_ARMY_MG_AS {
	faction = "BG21_USAB101";
	linkedItems[] = {"V_LIB_US_AB_Vest_Grenadier",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_AB_Vest_Grenadier",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USAB_101'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_MG_AS_M36";
};
class BG21_USAB101_MG_AS_TRIPOD: BG21_US_ARMY_MG_AS_TRIPOD {
	faction = "BG21_USAB101";
	linkedItems[] = {"V_LIB_US_AB_Vest_Grenadier",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_AB_Vest_Grenadier",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USAB_101'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_MG_AS_M36";
};
class BG21_USAB101_MG_TL: BG21_US_ARMY_MG_TL {
	faction = "BG21_USAB101";
	linkedItems[] = {"V_LIB_US_AB_Vest_Garand",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_AB_Vest_Garand",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USAB_101'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_MG_AS_M36";
};
class BG21_USAB101_Engineer_Mines: BG21_US_ARMY_Engineer_Mines {
	faction = "BG21_USAB101";
	linkedItems[] = {"V_LIB_US_AB_Vest_Grenadier",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_AB_Vest_Grenadier",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USAB_101'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_MINES_M36";
};
class BG21_USAB101_Engineer_Explos: BG21_US_ARMY_Engineer_Explos {
	faction = "BG21_USAB101";
	linkedItems[] = {"V_LIB_US_AB_Vest_Grenadier",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_AB_Vest_Grenadier",LINKED_ITEMS_BASE};		
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USAB_101'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_EXPLOS_M36";
};
class BG21_USAB101_Medic: BG21_US_ARMY_Medic {
	faction = "BG21_USAB101";
	uniformClass = "U_LIB_US_AB_Uniform_M42_Medic";
	weapons[] = {"LIB_M1A1_Carbine","Throw","Put"};
	respawnWeapons[] = {"LIB_M1A1_Carbine","Throw","Put"};
	linkedItems[] = {"V_LIB_US_Vest_Medic2","H_LIB_US_AB_Helmet_Medic_1",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_Vest_Medic2","H_LIB_US_AB_Helmet_Medic_1",LINKED_ITEMS_BASE};	
	backpack = "BG21_US_B_MEDIC_M36";
};
class BG21_USAB101_Mortar_TL: BG21_US_ARMY_Mortar_TL {
	faction = "BG21_USAB101";
	weapons[] = {"LIB_M1A1_Carbine","Throw","Put"};
	respawnWeapons[] = {"LIB_M1A1_Carbine","Throw","Put"};
	linkedItems[] = {"V_LIB_US_AB_Vest_Carbine",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_AB_Vest_Carbine",LINKED_ITEMS_BASE};		
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USAB_101'] call BG21_IFA3_fnc_random_gear;};";
	};	
	backpack = "BG21_US_B_MORTAR_M36";
};
class BG21_USAB101_Mortar: BG21_US_ARMY_Mortar {
	faction = "BG21_USAB101";
	weapons[] = {"LIB_M1A1_Carbine","LIB_M2_60_Barrel","Throw","Put"};
	respawnWeapons[] = {"LIB_M1A1_Carbine","LIB_M2_60_Barrel","Throw","Put"};
	linkedItems[] = {"V_LIB_US_AB_Vest_Carbine",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_AB_Vest_Carbine",LINKED_ITEMS_BASE};		
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USAB_101'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_MORTAR_M36";
};
class BG21_USAB101_Mortar_AS: BG21_US_ARMY_Mortar_AS {
	faction = "BG21_USAB101";
	weapons[] = {"LIB_M1A1_Carbine","LIB_M2_60_Tripod","Throw","Put"};
	respawnWeapons[] = {"LIB_M1A1_Carbine","LIB_M2_60_Tripod","Throw","Put"};
	linkedItems[] = {"V_LIB_US_AB_Vest_Carbine",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_US_AB_Vest_Carbine",LINKED_ITEMS_BASE};		
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USAB_101'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_MORTAR_M36";
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
class BG21_US_DDAY_Grenadier: BG21_US_ARMY_Grenadier {
	faction = "BG21_US_DDAY";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USRANGERS'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_GRENADIER_DDAY";
};
class BG21_US_DDAY_Recon_TL: BG21_US_ARMY_Recon_TL {
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
class BG21_US_DDAY_BAR: BG21_US_ARMY_BAR {
	faction = "BG21_US_DDAY";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USRANGERS'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_BAR_DDAY";
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
class BG21_US_DDAY_MG_AS_TRIPOD: BG21_US_ARMY_MG_AS_TRIPOD {
	faction = "BG21_US_DDAY";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USRANGERS'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_MG_AS_DDAY";
};
class BG21_US_DDAY_MG_TL: BG21_US_ARMY_MG_TL {
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
class BG21_US_DDAY_Mortar_TL: BG21_US_ARMY_Mortar_TL {
	faction = "BG21_US_DDAY";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USRANGERS'] call BG21_IFA3_fnc_random_gear;};";
	};	
	backpack = "BG21_US_B_MORTAR_DDAY";
};
class BG21_US_DDAY_Mortar: BG21_US_ARMY_Mortar {
	faction = "BG21_US_DDAY";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USRANGERS'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_MORTAR_DDAY";
};
class BG21_US_DDAY_Mortar_AS: BG21_US_ARMY_Mortar_AS {
	faction = "BG21_US_DDAY";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USRANGERS'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_US_B_MORTAR_DDAY";
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
class BG21_USMC_Grenadier: BG21_US_ARMY_Grenadier {
	faction = "BG21_USMC";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_USMC_B_GRENADIER";
};
class BG21_USMC_Recon_TL: BG21_US_ARMY_Recon_TL {
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
	// weapons[] = {"LIB_M1903A3_Springfield","Throw","Put"};
	// respawnWeapons[] = {"LIB_M1903A3_Springfield","Throw","Put"};
	// magazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
	// respawnmagazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_USMC_Flamethrower: BG21_US_ARMY_Flamethrower {
	faction = "BG21_USMC";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_USMC_BAR: BG21_US_ARMY_BAR {
	faction = "BG21_USMC";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_USMC_B_BAR";
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
	// weapons[] = {"LIB_M1903A3_Springfield","LIB_M1A1_Bazooka","Throw","Put"};
	// respawnWeapons[] = {"LIB_M1903A3_Springfield","LIB_M1A1_Bazooka","Throw","Put"};
	// magazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
	// respawnmagazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
	// linkedItems[] = {"V_LIB_US_Vest_Garand",LINKED_ITEMS_BASE};
	// respawnLinkedItems[] = {"V_LIB_US_Vest_Garand",LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_USMC_B_AT";
};
class BG21_USMC_AT_AS: BG21_US_ARMY_AT_AS {
	faction = "BG21_USMC";
	// weapons[] = {"LIB_M1903A3_Springfield","Throw","Put"};
	// respawnWeapons[] = {"LIB_M1903A3_Springfield","Throw","Put"};
	// magazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
	// respawnmagazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
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
	// weapons[] = {"LIB_M1903A3_Springfield","Throw","Put"};
	// respawnWeapons[] = {"LIB_M1903A3_Springfield","Throw","Put"};
	// magazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
	// respawnmagazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_USMC_B_MG_AS";
};
class BG21_USMC_MG_AS_TRIPOD: BG21_US_ARMY_MG_AS_TRIPOD {
	faction = "BG21_USMC";
	// weapons[] = {"LIB_M1903A3_Springfield","Throw","Put"};
	// respawnWeapons[] = {"LIB_M1903A3_Springfield","Throw","Put"};
	// magazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
	// respawnmagazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_USMC_B_MG_AS";
};
class BG21_USMC_MG_TL: BG21_US_ARMY_MG_TL {
	faction = "BG21_USMC";
	// weapons[] = {"LIB_M1903A3_Springfield","LIB_Binocular_US","Throw","Put"};
	// respawnWeapons[] = {"LIB_M1903A3_Springfield","LIB_Binocular_US","Throw","Put"};
	// magazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
	// respawnmagazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};	
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
	// weapons[] = {"LIB_M1903A3_Springfield","Throw","Put"};
	// respawnWeapons[] = {"LIB_M1903A3_Springfield","Throw","Put"};
	// magazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};
	// respawnmagazines[] = {US_20x_LIB_5Rnd_762x63,US_GRENADES};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_USMC_B_MEDIC";
};
class BG21_USMC_Mortar_TL: BG21_US_ARMY_Mortar_TL {
	faction = "BG21_USMC";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};	
	backpack = "BG21_USMC_B_MORTAR";
};
class BG21_USMC_Mortar: BG21_US_ARMY_Mortar {
	faction = "BG21_USMC";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_USMC_B_MORTAR";
};
class BG21_USMC_Mortar_AS: BG21_US_ARMY_Mortar_AS {
	faction = "BG21_USMC";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'USMC'] call BG21_IFA3_fnc_random_gear;};";
	};
	backpack = "BG21_USMC_B_MORTAR";
};

