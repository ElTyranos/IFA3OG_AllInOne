class BG21_SOV_RA_PL: BG21_SOV_RA_Soldier_base {
	scope = 2;
	displayname = "Kapitan";
	uniformClass = "U_LIB_SOV_Kapitan";
	class EventHandlers {};
	weapons[] = {"LIB_PPSh41_m","LIB_Binocular_SU","Throw","Put"};
	respawnWeapons[] = {"LIB_PPSh41_m","LIB_Binocular_SU","Throw","Put"};
	magazines[] = {SOV_6x_LIB_35Rnd_762x25,SOV_GRENADES,SOV_GRENADES_SMOKE};
	respawnmagazines[] = {SOV_6x_LIB_35Rnd_762x25,SOV_GRENADES,SOV_GRENADES_SMOKE};
	linkedItems[] = {"V_LIB_SOV_RA_OfficerVest","H_LIB_SOV_RA_OfficerCap",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_OfficerVest","H_LIB_SOV_RA_OfficerCap",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_SOV_B_CO";
};
class BG21_SOV_RA_PL2: BG21_SOV_RA_PL {
	scope = 2;
	displayname = "Leitenant ";
	uniformClass = "U_LIB_SOV_Leutenant";
};
class BG21_SOV_RA_SL: BG21_SOV_RA_Soldier_base {
	scope = 2;
	displayname = "Serjant";
	weapons[] = {"LIB_PPSh41_d","LIB_Binocular_SU","Throw","Put"};
	respawnWeapons[] = {"LIB_PPSh41_d","LIB_Binocular_SU","Throw","Put"};
	magazines[] = {SOV_3x_LIB_71Rnd_762x25,SOV_GRENADES,SOV_GRENADES_SMOKE};
	respawnmagazines[] = {SOV_3x_LIB_71Rnd_762x25,SOV_GRENADES,SOV_GRENADES_SMOKE};
	linkedItems[] = {"V_LIB_SOV_RA_PPShBelt",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_PPShBelt",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_SOV_B_SL";
};
class BG21_SOV_RA_TL_SVT40: BG21_SOV_RA_Soldier_base {
	scope = 2;
	displayname = "Yefreitor (SVT-40)";
	weapons[] = {"LIB_SVT_40","Throw","Put"};
	respawnWeapons[] = {"LIB_SVT_40","Throw","Put"};
	magazines[] = {SOV_10x_LIB_10Rnd_762x54,SOV_GRENADES};
	respawnmagazines[] = {SOV_10x_LIB_10Rnd_762x54,SOV_GRENADES};
	linkedItems[] = {"V_LIB_SOV_RA_SVTBelt",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_SVTBelt",LINKED_ITEMS_BASE};
	backpack = "B_LIB_SOV_RA_Shinel";
};
class BG21_SOV_RA_TL_MOSIN: BG21_SOV_RA_Soldier_base {
	scope = 2;
	displayname = "Yefreitor (Mosin Nagant)";
	weapons[] = {"LIB_M9130","Throw","Put"};
	respawnWeapons[] = {"LIB_M9130","Throw","Put"};
	magazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	respawnmagazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	linkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	backpack = "B_LIB_SOV_RA_Shinel";
};
class BG21_SOV_RA_Rifleman_Mosin: BG21_SOV_RA_Soldier_base {
	scope = 2;
	displayname = "Strelok";
	weapons[] = {"LIB_M9130","Throw","Put"};
	respawnWeapons[] = {"LIB_M9130","Throw","Put"};
	magazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	respawnmagazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	linkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	backpack = "B_LIB_SOV_RA_Shinel";
};
class BG21_SOV_RA_Radio: BG21_SOV_RA_Rifleman_Mosin {
	displayname = "Radio";
	backpack = "B_LIB_SOV_RA_Radio";
};
class BG21_SOV_RA_Mortar: BG21_SOV_RA_Rifleman_Mosin {
	displayname = "Mortar Operator";
	backpack = "BG21_SOV_B_MORTAR";
};
class BG21_SOV_RA_Rifleman_SVT40: BG21_SOV_RA_Soldier_base {
	scope = 2;
	displayname = "Strelok (SVT-40)";
	weapons[] = {"LIB_SVT_40","Throw","Put"};
	respawnWeapons[] = {"LIB_SVT_40","Throw","Put"};
	magazines[] = {SOV_10x_LIB_10Rnd_762x54,SOV_GRENADES};
	respawnmagazines[] = {SOV_10x_LIB_10Rnd_762x54,SOV_GRENADES};
	linkedItems[] = {"V_LIB_SOV_RA_SVTBelt",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_SVTBelt",LINKED_ITEMS_BASE};
	backpack = "B_LIB_SOV_RA_Shinel";
};
class BG21_SOV_RA_Sniper: BG21_SOV_RA_Soldier_base {
	scope = 2;
	displayname = "Sniper";
	uniformClass = "U_LIB_SOV_Sniper";
	class EventHandlers {};
	weapons[] = {"LIB_M9130PU","Throw","Put"};
	respawnWeapons[] = {"LIB_M9130PU","Throw","Put"};
	magazines[] = {SOV_10x_LIB_5Rnd_762x54,SOV_GRENADES};
	respawnmagazines[] = {SOV_10x_LIB_5Rnd_762x54,SOV_GRENADES};
	linkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	backpack = "B_LIB_SOV_RA_Shinel";
};
class BG21_SOV_RA_AT: BG21_SOV_RA_Soldier_base {
	scope = 2;
	displayname = "Strelok (PTRD-41)";
	weapons[] = {"LIB_PTRD","LIB_M1895","Throw","Put"};
	respawnWeapons[] = {"LIB_PTRD","LIB_M1895","Throw","Put"};
	magazines[] = {SOV_3x_Lib_B32,SOV_2x_LIB_7Rnd_762x38,SOV_GRENADES};
	respawnmagazines[] = {SOV_3x_Lib_B32,SOV_2x_LIB_7Rnd_762x38,SOV_GRENADES};
	linkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	backpack = "BG21_SOV_B_AT";
};
class BG21_SOV_RA_AT_AS: BG21_SOV_RA_Soldier_base {
	scope = 2;
	displayname = "PTRD-41 Assistant";
	weapons[] = {"LIB_M9130","Throw","Put"};
	respawnWeapons[] = {"LIB_M9130","Throw","Put"};
	magazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	respawnmagazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	linkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	backpack = "BG21_SOV_B_AT_AS";
};
class BG21_SOV_RA_MG: BG21_SOV_RA_Soldier_base {
	scope = 2;
	displayname = "Kanonir";
	weapons[] = {"LIB_DP28","Throw","Put"};
	respawnWeapons[] = {"LIB_DP28","Throw","Put"};
	magazines[] = {SOV_2x_LIB_47Rnd_762x54,SOV_GRENADES};
	respawnmagazines[] = {SOV_2x_LIB_47Rnd_762x54,SOV_GRENADES};
	linkedItems[] = {"V_LIB_SOV_RA_MGBelt",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_MGBelt",LINKED_ITEMS_BASE};
	backpack = "BG21_SOV_B_MG";
};
class BG21_SOV_RA_MG_AS: BG21_SOV_RA_Soldier_base {
	scope = 2;
	displayname = "Kanonir Assistant";
	weapons[] = {"LIB_M9130","Throw","Put"};
	respawnWeapons[] = {"LIB_M9130","Throw","Put"};
	magazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	respawnmagazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	linkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	backpack = "BG21_SOV_B_MG_AS";
};
class BG21_SOV_RA_Pioneer_Mines: BG21_SOV_RA_Soldier_base {
	scope = 2;
	displayname = "Pioneer (Mines)";
	weapons[] = {"LIB_M9130","Throw","Put"};
	respawnWeapons[] = {"LIB_M9130","Throw","Put"};
	magazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	respawnmagazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	linkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	backpack = "BG21_SOV_B_MINES";
};
class BG21_SOV_RA_Pioneer_Explos: BG21_SOV_RA_Pioneer_Mines {
	scope = 2;
	displayname = "Pioneer (Explosives)";
	backpack = "BG21_SOV_B_EXPLOS";
};
class BG21_SOV_RA_Medic: BG21_SOV_RA_Soldier_base {
	scope = 2;
	displayname = "Doctor";
	weapons[] = {"LIB_M9130","Throw","Put"};
	respawnWeapons[] = {"LIB_M9130","Throw","Put"};
	magazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	respawnmagazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	linkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	backpack = "BG21_SOV_B_MEDIC";
};
class BG21_SOV_RA_Tank_Commander: BG21_SOV_RA_Soldier_base {
	scope = 2;
	displayname = "Komandir tanka";
	uniformClass = "U_LIB_SOV_Tank_ryadovoi";
	class EventHandlers {};
	weapons[] = {"LEN_PPS43","LIB_Binocular_SU","Throw","Put"};
	respawnWeapons[] = {"LEN_PPS43","LIB_Binocular_SU","Throw","Put"};
	magazines[] = {SOV_3x_LIB_35Rnd_762x25,SOV_GRENADES,SOV_GRENADES_SMOKE};
	respawnmagazines[] = {SOV_3x_LIB_35Rnd_762x25,SOV_GRENADES,SOV_GRENADES_SMOKE};
	linkedItems[] = {"V_LIB_SOV_RA_OfficerVest","H_LIB_SOV_RA_OfficerCap",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_OfficerVest","H_LIB_SOV_RA_OfficerCap",LINKED_ITEMS_COMMANDER};
	backpack = "";
};
class BG21_SOV_RA_Tank_Crew: BG21_SOV_RA_Soldier_base {
	scope = 2;
	displayname = "Tanker";
	uniformClass = "U_LIB_SOV_Tank_ryadovoi";
	class EventHandlers {};
	weapons[] = {"LEN_PPS43","Throw","Put"};
	respawnWeapons[] = {"LEN_PPS43","Throw","Put"};
	magazines[] = {SOV_3x_LIB_35Rnd_762x25,SOV_GRENADES};
	respawnmagazines[] = {SOV_3x_LIB_35Rnd_762x25,SOV_GRENADES};
	linkedItems[] = {"V_LIB_SOV_RA_PPShBelt","H_LIB_SOV_TankHelmet",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_PPShBelt","H_LIB_SOV_TankHelmet",LINKED_ITEMS_BASE};
	backpack = "";
};
class BG21_SOV_RA_Pilot: BG21_SOV_RA_Soldier_base {
	scope = 2;
	displayname = "Pilot";
	uniformClass = "U_LIB_SOV_Pilot";
	class EventHandlers {};
	weapons[] = {"LIB_M1895","Throw","Put"};
	respawnWeapons[] = {"LIB_M1895","Throw","Put"};
	magazines[] = {SOV_2x_LIB_7Rnd_762x38};
	respawnmagazines[] = {SOV_2x_LIB_7Rnd_762x38};
	linkedItems[] = {"V_LIB_SOV_RA_OfficerVest","H_LIB_SOV_PilotHelmet",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_OfficerVest","H_LIB_SOV_PilotHelmet",LINKED_ITEMS_COMMANDER};
	backpack = "B_LIB_SOV_RA_Paradrop";
};

// WINTER
class BG21_SOV_RA_W_PL: BG21_SOV_RA_PL {
	faction = "BG21_SOV_RA_WINTER";
	uniformClass = "U_LIB_SOV_Strelok_w";
};
class BG21_SOV_RA_W_PL2: BG21_SOV_RA_PL2 {
	faction = "BG21_SOV_RA_WINTER";
	uniformClass = "U_LIB_SOV_Strelok_w";
};
class BG21_SOV_RA_W_SL: BG21_SOV_RA_SL {
	faction = "BG21_SOV_RA_WINTER";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'RA_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_SOV_RA_W_TL_SVT40: BG21_SOV_RA_TL_SVT40 {
	faction = "BG21_SOV_RA_WINTER";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'RA_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_SOV_RA_W_TL_MOSIN: BG21_SOV_RA_TL_MOSIN {
	faction = "BG21_SOV_RA_WINTER";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'RA_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_SOV_RA_W_Rifleman_Mosin: BG21_SOV_RA_Rifleman_Mosin {
	faction = "BG21_SOV_RA_WINTER";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'RA_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_SOV_RA_W_Radio: BG21_SOV_RA_Radio {
	faction = "BG21_SOV_RA_WINTER";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'RA_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_SOV_RA_W_Mortar: BG21_SOV_RA_Mortar {
	faction = "BG21_SOV_RA_WINTER";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'RA_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_SOV_RA_W_Rifleman_SVT40: BG21_SOV_RA_Rifleman_SVT40 {
	faction = "BG21_SOV_RA_WINTER";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'RA_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_SOV_RA_W_Sniper: BG21_SOV_RA_Sniper {
	faction = "BG21_SOV_RA_WINTER";
	uniformClass = "U_LIB_SOV_Sniper_w";
};
class BG21_SOV_RA_W_AT: BG21_SOV_RA_AT {
	faction = "BG21_SOV_RA_WINTER";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'RA_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_SOV_RA_W_AT_AS: BG21_SOV_RA_AT_AS {
	faction = "BG21_SOV_RA_WINTER";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'RA_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_SOV_RA_W_MG: BG21_SOV_RA_MG {
	faction = "BG21_SOV_RA_WINTER";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'RA_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_SOV_RA_W_MG_AS: BG21_SOV_RA_MG_AS {
	faction = "BG21_SOV_RA_WINTER";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'RA_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_SOV_RA_W_Pioneer_Mines: BG21_SOV_RA_Pioneer_Mines {
	faction = "BG21_SOV_RA_WINTER";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'RA_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_SOV_RA_W_Pioneer_Explos: BG21_SOV_RA_Pioneer_Explos {
	faction = "BG21_SOV_RA_WINTER";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'RA_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_SOV_RA_W_Medic: BG21_SOV_RA_Medic {
	faction = "BG21_SOV_RA_WINTER";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'RA_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_SOV_RA_W_Tank_Commander: BG21_SOV_RA_Tank_Commander {
	faction = "BG21_SOV_RA_WINTER";
};
class BG21_SOV_RA_W_Tank_Crew: BG21_SOV_RA_Tank_Crew {
	faction = "BG21_SOV_RA_WINTER";
};
class BG21_SOV_RA_W_Pilot: BG21_SOV_RA_Pilot {
	faction = "BG21_SOV_RA_WINTER";
};
