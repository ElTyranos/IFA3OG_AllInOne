// WH
class BG21_GER_WH_PL: BG21_GER_WH_Soldier_base {
	scope = 2;
	displayname = "Kapitan";
	uniformClass = "U_LIB_GER_Oberst";
	class EventHandlers {};
	weapons[] = {"LIB_MP40","LIB_P08","LIB_Binocular_GER","Throw","Put"};
	respawnWeapons[] = {"LIB_MP40","LIB_P08","LIB_Binocular_GER","Throw","Put"};
	magazines[] = {GER_7x_lib_32Rnd_9x19,GER_2x_LIB_8Rnd_9x19_P08,GER_GRENADES};
	respawnmagazines[] = {GER_7x_lib_32Rnd_9x19,GER_2x_LIB_8Rnd_9x19_P08,GER_GRENADES};
	linkedItems[] = {"V_LIB_GER_VestUnterofficer","H_LIB_GER_OfficerCap",GER_LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_GER_VestUnterofficer","H_LIB_GER_OfficerCap",GER_LINKED_ITEMS_COMMANDER};
	backpack = "BG21_GER_B_CO";
};
class BG21_GER_WH_PL2: BG21_GER_WH_PL {
	scope = 2;
	displayname = "Leutnant";
	uniformClass = "U_LIB_GER_Leutnant";
};
class BG21_GER_WH_SL: BG21_GER_WH_Soldier_base {
	scope = 2;
	displayname = "Unterfeldwebel";
	weapons[] = {"LIB_MP40","LIB_P38","LIB_Binocular_GER","Throw","Put"};
	respawnWeapons[] = {"LIB_MP40","LIB_P38","LIB_Binocular_GER","Throw","Put"};
	magazines[] = {GER_7x_lib_32Rnd_9x19,GER_2x_lib_8Rnd_9x19,GER_GRENADES};
	respawnmagazines[] = {GER_7x_lib_32Rnd_9x19,GER_2x_lib_8Rnd_9x19,GER_GRENADES};
	linkedItems[] = {"V_LIB_GER_VestMP40",GER_LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_GER_VestMP40",GER_LINKED_ITEMS_COMMANDER};
	backpack = "BG21_GER_B_SL";
};
class BG21_GER_WH_TL_G43: BG21_GER_WH_Soldier_base {
	scope = 2;
	displayname = "Unteroffizier (G43)";
	weapons[] = {"LIB_G43","Throw","Put"};
	respawnWeapons[] = {"LIB_G43","Throw","Put"};
	magazines[] = {GER_10x_lib_10Rnd_792x57,GER_GRENADES};
	respawnmagazines[] = {GER_10x_lib_10Rnd_792x57,GER_GRENADES};
	linkedItems[] = {"V_LIB_GER_VestG43",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_GER_VestG43",GER_LINKED_ITEMS_BASE};
	backpack = "B_LIB_GER_A_frame";
};
class BG21_GER_WH_TL_K98: BG21_GER_WH_Soldier_base {
	scope = 2;
	displayname = "Unteroffizier (K98)";
	weapons[] = {"LIB_K98_Late","Throw","Put"};
	respawnWeapons[] = {"LIB_K98_Late","Throw","Put"};
	magazines[] = {GER_20x_lib_5Rnd_792x57,GER_GRENADES};
	respawnmagazines[] = {GER_20x_lib_5Rnd_792x57,GER_GRENADES};
	linkedItems[] = {"V_LIB_GER_VestKar98",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_GER_VestKar98",GER_LINKED_ITEMS_BASE};
	items[] = {ITEMS_BASE,"LIB_ACC_K98_Bayo"};
	respawnItems[] = {ITEMS_BASE,"LIB_ACC_K98_Bayo"};
	backpack = "B_LIB_GER_A_frame";
};
class BG21_GER_WH_Rifleman_K98: BG21_GER_WH_Soldier_base {
	scope = 2;
	displayname = "Schutze (K98)";
	weapons[] = {"LIB_K98","Throw","Put"};
	respawnWeapons[] = {"LIB_K98","Throw","Put"};
	magazines[] = {GER_20x_lib_5Rnd_792x57,GER_GRENADES};
	respawnmagazines[] = {GER_20x_lib_5Rnd_792x57,GER_GRENADES};
	linkedItems[] = {"V_LIB_GER_VestKar98",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_GER_VestKar98",GER_LINKED_ITEMS_BASE};
	items[] = {ITEMS_BASE,"LIB_ACC_K98_Bayo"};
	respawnItems[] = {ITEMS_BASE,"LIB_ACC_K98_Bayo"};
	backpack = "B_LIB_GER_A_frame";
};
class BG21_GER_WH_Grenadier: BG21_GER_WH_Rifleman_K98 {
	displayname = "Grenadier";
	weapons[] = {"LIB_K98_GW","Throw","Put"};
	respawnWeapons[] = {"LIB_K98_GW","Throw","Put"};	
	backpack = "B_LIB_GER_GRENADIER";
};
class BG21_GER_WH_Recon_TL: BG21_GER_WH_Rifleman_K98 {
	displayname = "Recon Team Leader";
	weapons[] = {"LIB_K98_Late","LIB_Binocular_GER","Throw","Put"};
	respawnWeapons[] = {"LIB_K98_Late","LIB_Binocular_GER","Throw","Put"};
	magazines[] = {GER_20x_lib_5Rnd_792x57,GER_GRENADES,GER_GRENADES_SMOKE};
	respawnmagazines[] = {GER_20x_lib_5Rnd_792x57,GER_GRENADES,GER_GRENADES_SMOKE};
	linkedItems[] = {"V_LIB_GER_VestKar98",GER_LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_GER_VestKar98",GER_LINKED_ITEMS_COMMANDER};	
};
class BG21_GER_WH_Recon: BG21_GER_WH_Rifleman_K98 {
	displayname = "Recon";
	weapons[] = {"LIB_K98","LIB_Binocular_GER","Throw","Put"};
	respawnWeapons[] = {"LIB_K98","LIB_Binocular_GER","Throw","Put"};
};
class BG21_GER_WH_Radio: BG21_GER_WH_Rifleman_K98 {
	displayname = "Radio";
	backpack = "BG21_GER_B_RADIO";
};
class BG21_GER_WH_Mortar: BG21_GER_WH_Rifleman_K98 {
	displayname = "Mortar Operator";
	weapons[] = {"LIB_K98","LIB_GrWr34_Barrel","Throw","Put"};
	respawnWeapons[] = {"LIB_K98","LIB_GrWr34_Barrel","Throw","Put"};	
	linkedItems[] = {"V_LIB_GER_VestKar98",GER_LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_GER_VestKar98",GER_LINKED_ITEMS_COMMANDER};
	backpack = "BG21_GER_B_MORTAR";
};
class BG21_GER_WH_Mortar_TL: BG21_GER_WH_Rifleman_K98 {
	displayname = "Mortar Team Leader";
	linkedItems[] = {"V_LIB_GER_VestKar98",GER_LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_GER_VestKar98",GER_LINKED_ITEMS_COMMANDER};
	backpack = "BG21_GER_B_MORTAR";
};
class BG21_GER_WH_Mortar_AS: BG21_GER_WH_Rifleman_K98 {
	displayname = "Mortar Assistant";
	weapons[] = {"LIB_K98","LIB_GrWr34_Tripod","Throw","Put"};
	respawnWeapons[] = {"LIB_K98","LIB_GrWr34_Tripod","Throw","Put"};
	backpack = "BG21_GER_B_MORTAR";
};
class BG21_GER_WH_Rifleman_G43: BG21_GER_WH_Soldier_base {
	scope = 2;
	displayname = "Schutze (G43)";
	weapons[] = {"LIB_G43","Throw","Put"};
	respawnWeapons[] = {"LIB_G43","Throw","Put"};
	magazines[] = {GER_10x_lib_10Rnd_792x57,GER_GRENADES};
	respawnmagazines[] = {GER_10x_lib_10Rnd_792x57,GER_GRENADES};
	linkedItems[] = {"V_LIB_GER_VestG43",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_GER_VestG43",GER_LINKED_ITEMS_BASE};
	backpack = "B_LIB_GER_A_frame";
};
class BG21_GER_WH_Rifleman_STG44: BG21_GER_WH_Soldier_base {
	scope = 2;
	displayname = "Schutze (STG44)";
	weapons[] = {"LIB_MP44","Throw","Put"};
	respawnWeapons[] = {"LIB_MP44","Throw","Put"};
	magazines[] = {GER_7x_LIB_30Rnd_792x33,GER_GRENADES};
	respawnmagazines[] = {GER_7x_LIB_30Rnd_792x33,GER_GRENADES};
	linkedItems[] = {"V_LIB_GER_VestSTG",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_GER_VestSTG",GER_LINKED_ITEMS_BASE};
	backpack = "B_LIB_GER_A_frame";
};
class BG21_GER_WH_Sniper: BG21_GER_WH_Soldier_base {
	scope = 2;
	displayname = "Scharfschutze";
	uniformClass = "U_LIB_GER_Scharfschutze";
	class EventHandlers {};
	weapons[] = {"LIB_K98ZF39","Throw","Put"};
	respawnWeapons[] = {"LIB_K98ZF39","Throw","Put"};
	magazines[] = {GER_10x_lib_5Rnd_792x57,GER_GRENADES};
	respawnmagazines[] = {GER_10x_lib_5Rnd_792x57,GER_GRENADES};
	linkedItems[] = {"V_LIB_GER_VestKar98","H_LIB_GER_HelmetCamo",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_GER_VestKar98","H_LIB_GER_HelmetCamo",GER_LINKED_ITEMS_BASE};
	backpack = "";
};
class BG21_GER_WH_AT: BG21_GER_WH_Soldier_base {
	scope = 2;
	displayname = "Schutze (Panzerschreck)";
	weapons[] = {"LIB_K98","LIB_RPzB","Throw","Put"};
	respawnWeapons[] = {"LIB_K98","LIB_RPzB","Throw","Put"};
	magazines[] = {GER_20x_lib_5Rnd_792x57,GER_GRENADES};
	respawnmagazines[] = {GER_20x_lib_5Rnd_792x57,GER_GRENADES};
	linkedItems[] = {"V_LIB_GER_VestKar98",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_GER_VestKar98",GER_LINKED_ITEMS_BASE};
	items[] = {ITEMS_BASE,"LIB_ACC_K98_Bayo"};
	respawnItems[] = {ITEMS_BASE,"LIB_ACC_K98_Bayo"};
	backpack = "BG21_GER_B_AT";
};
class BG21_GER_WH_AT_AS: BG21_GER_WH_Soldier_base {
	scope = 2;
	displayname = "Panzerschreck Assistant";
	weapons[] = {"LIB_K98","Throw","Put"};
	respawnWeapons[] = {"LIB_K98","Throw","Put"};
	magazines[] = {GER_20x_lib_5Rnd_792x57,GER_GRENADES};
	respawnmagazines[] = {GER_20x_lib_5Rnd_792x57,GER_GRENADES};
	linkedItems[] = {"V_LIB_GER_VestKar98",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_GER_VestKar98",GER_LINKED_ITEMS_BASE};
	items[] = {ITEMS_BASE,"LIB_ACC_K98_Bayo"};
	respawnItems[] = {ITEMS_BASE,"LIB_ACC_K98_Bayo"};
	backpack = "BG21_GER_B_AT_AS";
};
class BG21_GER_WH_AT_pzft: BG21_GER_WH_Soldier_base {
	scope = 2;
	displayname = "Schutze (Panzerfaust)";
	weapons[] = {"LIB_K98_Late","LIB_PzFaust_30m","Throw","Put"};
	respawnWeapons[] = {"LIB_K98_Late","LIB_PzFaust_30m","Throw","Put"};
	magazines[] = {GER_20x_lib_5Rnd_792x57,GER_GRENADES};
	respawnmagazines[] = {GER_20x_lib_5Rnd_792x57,GER_GRENADES};
	linkedItems[] = {"V_LIB_GER_VestKar98",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_GER_VestKar98",GER_LINKED_ITEMS_BASE};
	items[] = {ITEMS_BASE,"LIB_ACC_K98_Bayo"};
	respawnItems[] = {ITEMS_BASE,"LIB_ACC_K98_Bayo"};
	backpack = "B_LIB_GER_A_frame";
};
class BG21_GER_WH_MG_34: BG21_GER_WH_Soldier_base {
	scope = 2;
	displayname = "MG Schutze (MG-34)";
	weapons[] = {"LIB_MG34","Throw","Put"};
	respawnWeapons[] = {"LIB_MG34","Throw","Put"};
	magazines[] = {GER_3x_LIB_50Rnd_792x57,GER_GRENADES};
	respawnmagazines[] = {GER_3x_LIB_50Rnd_792x57,GER_GRENADES};
	linkedItems[] = {"V_LIB_GER_VestMG",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_GER_VestMG",GER_LINKED_ITEMS_BASE};
	backpack = "BG21_GER_B_MG";
};
class BG21_GER_WH_MG_42: BG21_GER_WH_MG_34 {
	displayname = "MG Schutze (MG-42)";
	weapons[] = {"LIB_MG42","Throw","Put"};
	respawnWeapons[] = {"LIB_MG42","Throw","Put"};
};
class BG21_GER_WH_MG_AS: BG21_GER_WH_Soldier_base {
	scope = 2;
	displayname = "MG Assistant";
	weapons[] = {"LIB_K98","Throw","Put"};
	respawnWeapons[] = {"LIB_K98","Throw","Put"};
	magazines[] = {GER_20x_lib_5Rnd_792x57,GER_GRENADES};
	respawnmagazines[] = {GER_20x_lib_5Rnd_792x57,GER_GRENADES};
	linkedItems[] = {"V_LIB_GER_VestKar98",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_GER_VestKar98",GER_LINKED_ITEMS_BASE};
	items[] = {ITEMS_BASE,"LIB_ACC_K98_Bayo"};
	respawnItems[] = {ITEMS_BASE,"LIB_ACC_K98_Bayo"};
	backpack = "BG21_GER_B_MG_AS";
};
class BG21_GER_WH_MG_TL: BG21_GER_WH_MG_AS {
	displayname = "MG Team Leader";
	weapons[] = {"LIB_K98_Late","LIB_Binocular_GER","Throw","Put"};
	respawnWeapons[] = {"LIB_K98_Late","LIB_Binocular_GER","Throw","Put"};
};
class BG21_GER_WH_MG_AS_TRIPOD: BG21_GER_WH_MG_AS {
	displayname = "MG Assistant (Tripod)";
	weapons[] = {"LIB_K98","LIB_Laffete_Tripod","Throw","Put"};
	respawnWeapons[] = {"LIB_K98","LIB_Laffete_Tripod","Throw","Put"};
};
class BG21_GER_WH_Pioneer_Mines: BG21_GER_WH_Soldier_base {
	scope = 2;
	displayname = "Pioneer (Mines)";
	weapons[] = {"LIB_K98","Throw","Put"};
	respawnWeapons[] = {"LIB_K98","Throw","Put"};
	magazines[] = {GER_20x_lib_5Rnd_792x57};
	respawnmagazines[] = {GER_20x_lib_5Rnd_792x57};
	linkedItems[] = {"V_LIB_GER_PioneerVest",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_GER_PioneerVest",GER_LINKED_ITEMS_BASE};
	items[] = {ITEMS_BASE,"LIB_ACC_K98_Bayo"};
	respawnItems[] = {ITEMS_BASE,"LIB_ACC_K98_Bayo"};
	backpack = "BG21_GER_B_MINES";
};
class BG21_GER_WH_Pioneer_Explos: BG21_GER_WH_Pioneer_Mines {
	scope = 2;
	displayname = "Pioneer (Explosives)";
	backpack = "BG21_GER_B_EXPLOS";
};
class BG21_GER_WH_Medic: BG21_GER_WH_Soldier_base {
	scope = 2;
	displayname = "Mediziner";
	uniformClass = "U_LIB_GER_Medic";
	class EventHandlers {};
	weapons[] = {"LIB_K98","Throw","Put"};
	respawnWeapons[] = {"LIB_K98","Throw","Put"};
	magazines[] = {GER_20x_lib_5Rnd_792x57,GER_GRENADES};
	respawnmagazines[] = {GER_20x_lib_5Rnd_792x57,GER_GRENADES};
	linkedItems[] = {"V_LIB_GER_VestKar98","H_LIB_GER_Helmet_Medic",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_GER_VestKar98","H_LIB_GER_Helmet_Medic",GER_LINKED_ITEMS_BASE};
	items[] = {ITEMS_BASE,"LIB_ACC_K98_Bayo"};
	respawnItems[] = {ITEMS_BASE,"LIB_ACC_K98_Bayo"};
	backpack = "BG21_GER_B_MEDIC";
};

// Panzerwaffe
class BG21_GER_WH_Tank_Commander: BG21_GER_WH_Soldier_base {
	scope = 2;
	faction = "BG21_GER_PZW";
	displayname = "Panzerkommandant";
	uniformClass = "U_LIB_GER_Tank_crew_leutnant";
	class EventHandlers {};
	weapons[] = {"LIB_MP38","LIB_P38","LIB_Binocular_GER","Throw","Put"};
	respawnWeapons[] = {"LIB_MP38","LIB_P38","LIB_Binocular_GER","Throw","Put"};
	magazines[] = {GER_3x_lib_32Rnd_9x19,GER_2x_lib_8Rnd_9x19,GER_GRENADES,GER_GRENADES_SMOKE};
	respawnmagazines[] = {GER_3x_lib_32Rnd_9x19,GER_2x_lib_8Rnd_9x19,GER_GRENADES,GER_GRENADES_SMOKE};
	linkedItems[] = {"V_LIB_GER_VestUnterofficer","H_LIB_GER_TankOfficerCap",GER_LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_GER_VestUnterofficer","H_LIB_GER_TankOfficerCap",GER_LINKED_ITEMS_COMMANDER};
	backpack = "";
};
class BG21_GER_WH_Tank_Crew: BG21_GER_WH_Soldier_base {
	scope = 2;
	faction = "BG21_GER_PZW";
	displayname = "Panzerbesatzung";
	uniformClass = "U_LIB_GER_Tank_crew_private";
	class EventHandlers {};
	weapons[] = {"LIB_MP38","Throw","Put"};
	respawnWeapons[] = {"LIB_MP38","Throw","Put"};
	magazines[] = {GER_3x_lib_32Rnd_9x19,GER_GRENADES};
	respawnmagazines[] = {GER_3x_lib_32Rnd_9x19,GER_GRENADES};
	linkedItems[] = {"V_LIB_GER_TankPrivateBelt","H_LIB_GER_TankPrivateCap",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_GER_TankPrivateBelt","H_LIB_GER_TankPrivateCap",GER_LINKED_ITEMS_BASE};
	backpack = "";
};

// LW
class BG21_GER_WH_Pilot: BG21_GER_WH_Soldier_base {
	scope = 2;
	faction = "BG21_GER_LW";
	displayname = "Pilot";
	uniformClass = "U_LIB_GER_LW_pilot";
	class EventHandlers {};
	weapons[] = {"LIB_P38","Throw","Put"};
	respawnWeapons[] = {"LIB_P38","Throw","Put"};
	magazines[] = {GER_2x_LIB_8Rnd_9x19};
	respawnmagazines[] = {GER_2x_LIB_8Rnd_9x19};
	linkedItems[] = {"V_LIB_GER_OfficerBelt","H_LIB_GER_LW_PilotHelmet",GER_LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_GER_OfficerBelt","H_LIB_GER_LW_PilotHelmet",GER_LINKED_ITEMS_COMMANDER};
	backpack = "B_LIB_GER_LW_Paradrop";
};

// WINTER
class BG21_GER_WH_W_PL: BG21_GER_WH_PL {
	faction = "BG21_GER_WH_Winter";
	uniformClass = "U_LIB_GER_Soldier_camo_w";
};
class BG21_GER_WH_W_PL2: BG21_GER_WH_PL2 {
	faction = "BG21_GER_WH_Winter";
	uniformClass = "U_LIB_GER_Soldier_camo_w";
};
class BG21_GER_WH_W_SL: BG21_GER_WH_SL {
	faction = "BG21_GER_WH_Winter";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_TL_G43: BG21_GER_WH_TL_G43 {
	faction = "BG21_GER_WH_Winter";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_TL_K98: BG21_GER_WH_TL_K98 {
	faction = "BG21_GER_WH_Winter";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_Rifleman_k98: BG21_GER_WH_Rifleman_K98 {
	faction = "BG21_GER_WH_Winter";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_Grenadier: BG21_GER_WH_Grenadier {
	faction = "BG21_GER_WH_Winter";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_Recon_TL: BG21_GER_WH_Recon_TL {
	faction = "BG21_GER_WH_Winter";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_Recon: BG21_GER_WH_Recon {
	faction = "BG21_GER_WH_Winter";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_Radio: BG21_GER_WH_Radio {
	faction = "BG21_GER_WH_Winter";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_Mortar: BG21_GER_WH_Mortar {
	faction = "BG21_GER_WH_Winter";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_Mortar_TL: BG21_GER_WH_Mortar_TL {
	faction = "BG21_GER_WH_Winter";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_Mortar_AS: BG21_GER_WH_Mortar_AS {
	faction = "BG21_GER_WH_Winter";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_Rifleman_g43: BG21_GER_WH_Rifleman_G43 {
	faction = "BG21_GER_WH_Winter";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_Rifleman_STG44: BG21_GER_WH_Rifleman_STG44 {
	faction = "BG21_GER_WH_Winter";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_Sniper: BG21_GER_WH_Sniper {
	faction = "BG21_GER_WH_Winter";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_AT: BG21_GER_WH_AT {
	faction = "BG21_GER_WH_Winter";
	weapons[] = {"LIB_K98","LIB_RPzB_w","Throw","Put"};
	respawnWeapons[] = {"LIB_K98","LIB_RPzB_w","Throw","Put"};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_AT_AS: BG21_GER_WH_AT_AS {
	faction = "BG21_GER_WH_Winter";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_AT_pzft: BG21_GER_WH_AT_pzft {
	faction = "BG21_GER_WH_Winter";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_MG_34: BG21_GER_WH_MG_34 {
	faction = "BG21_GER_WH_Winter";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_MG_42: BG21_GER_WH_MG_42 {
	faction = "BG21_GER_WH_Winter";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_MG_AS: BG21_GER_WH_MG_AS {
	faction = "BG21_GER_WH_Winter";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_MG_TL: BG21_GER_WH_MG_TL {
	faction = "BG21_GER_WH_Winter";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_MG_AS_TRIPOD: BG21_GER_WH_MG_TL {
	faction = "BG21_GER_WH_Winter";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_Pioneer_Mines: BG21_GER_WH_Pioneer_Mines {
	faction = "BG21_GER_WH_Winter";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_Pioneer_Explos: BG21_GER_WH_Pioneer_Explos {
	faction = "BG21_GER_WH_Winter";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'WH_W'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_WH_W_Medic: BG21_GER_WH_Medic {
	faction = "BG21_GER_WH_Winter";
	uniformClass = "U_LIB_GER_Soldier3_w";
};

// FJS
class BG21_GER_FJS_PL: BG21_GER_WH_PL {
	faction = "BG21_GER_FJS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_PL2: BG21_GER_WH_PL2 {
	faction = "BG21_GER_FJS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_SL: BG21_GER_WH_SL {
	faction = "BG21_GER_FJS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_TL_G43: BG21_GER_WH_TL_G43 {
	faction = "BG21_GER_FJS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_TL_K98: BG21_GER_WH_TL_K98 {
	faction = "BG21_GER_FJS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_TL_FG42: BG21_GER_FJS_TL_G43 {
	displayname = "Unteroffizier (FG42)";
	weapons[] = {"LIB_FG42G","Throw","Put"};
	respawnWeapons[] = {"LIB_FG42G","Throw","Put"};
	magazines[] = {GER_9x_LIB_20Rnd_792x57,GER_GRENADES};
	respawnmagazines[] = {GER_9x_LIB_20Rnd_792x57,GER_GRENADES};
};
class BG21_GER_FJS_Rifleman_k98: BG21_GER_WH_Rifleman_K98 {
	faction = "BG21_GER_FJS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_Grenadier: BG21_GER_WH_Grenadier {
	faction = "BG21_GER_FJS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_Recon_TL: BG21_GER_WH_Recon_TL {
	faction = "BG21_GER_FJS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_Recon: BG21_GER_WH_Recon {
	faction = "BG21_GER_FJS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_Radio: BG21_GER_WH_Radio {
	faction = "BG21_GER_FJS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_Mortar: BG21_GER_WH_Mortar {
	faction = "BG21_GER_FJS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_Mortar_TL: BG21_GER_WH_Mortar_TL {
	faction = "BG21_GER_FJS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_Mortar_AS: BG21_GER_WH_Mortar_AS {
	faction = "BG21_GER_FJS";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_Rifleman_g43: BG21_GER_WH_Rifleman_G43 {
	faction = "BG21_GER_FJS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_Rifleman_STG44: BG21_GER_WH_Rifleman_STG44 {
	faction = "BG21_GER_FJS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_Sniper: BG21_GER_WH_Sniper {
	faction = "BG21_GER_FJS";
};
class BG21_GER_FJS_AT: BG21_GER_WH_AT {
	faction = "BG21_GER_FJS";	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_AT_AS: BG21_GER_WH_AT_AS {
	faction = "BG21_GER_FJS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_AT_pzft: BG21_GER_WH_AT_pzft {
	faction = "BG21_GER_FJS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_MG_34: BG21_GER_WH_MG_34 {
	faction = "BG21_GER_FJS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_MG_42: BG21_GER_WH_MG_42 {
	faction = "BG21_GER_FJS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_MG_AS: BG21_GER_WH_MG_AS {
	faction = "BG21_GER_FJS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_MG_TL: BG21_GER_WH_MG_TL {
	faction = "BG21_GER_FJS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_MG_AS_TRIPOD: BG21_GER_WH_MG_AS_TRIPOD {
	faction = "BG21_GER_FJS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_Pioneer_Mines: BG21_GER_WH_Pioneer_Mines {
	faction = "BG21_GER_FJS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_Pioneer_Explos: BG21_GER_WH_Pioneer_Explos {
	faction = "BG21_GER_FJS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'FJS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_FJS_Medic: BG21_GER_WH_Medic {
	faction = "BG21_GER_FJS";
	uniformClass = "U_LIB_FSJ_Soldier";
	linkedItems[] = {"V_LIB_GER_VestKar98","H_LIB_GER_FSJ_M44_Helmet_Medic",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_GER_VestKar98","H_LIB_GER_FSJ_M44_Helmet_Medic",GER_LINKED_ITEMS_BASE};
};

// DAK
class BG21_GER_DAK_PL: BG21_GER_WH_PL {
	faction = "BG21_GER_DAK";
	uniformClass = "U_LIB_DAK_lieutenant";
	linkedItems[] = {"V_LIB_DAK_VestUnterofficer","H_LIB_GER_OfficerCap",GER_LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_DAK_VestUnterofficer","H_LIB_GER_OfficerCap",GER_LINKED_ITEMS_COMMANDER};
};
class BG21_GER_DAK_PL2: BG21_GER_WH_PL2 {
	faction = "BG21_GER_DAK";
	uniformClass = "U_LIB_DAK_lieutenant";
	linkedItems[] = {"V_LIB_DAK_VestUnterofficer","H_LIB_GER_OfficerCap",GER_LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_DAK_VestUnterofficer","H_LIB_GER_OfficerCap",GER_LINKED_ITEMS_COMMANDER};
};
class BG21_GER_DAK_SL: BG21_GER_WH_SL {
	faction = "BG21_GER_DAK";
	linkedItems[] = {"V_LIB_DAK_VestMP40",GER_LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_DAK_VestMP40",GER_LINKED_ITEMS_COMMANDER};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_TL_G43: BG21_GER_WH_TL_G43 {
	faction = "BG21_GER_DAK";
	linkedItems[] = {"V_LIB_DAK_VestG43",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_DAK_VestG43",GER_LINKED_ITEMS_BASE};
	backpack = "B_LIB_DAK_A_frame";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_TL_K98: BG21_GER_WH_TL_K98 {
	faction = "BG21_GER_DAK";
	linkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_BASE};
	backpack = "B_LIB_DAK_A_frame";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_Rifleman_k98: BG21_GER_WH_Rifleman_K98 {
	faction = "BG21_GER_DAK";
	linkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_BASE};
	backpack = "B_LIB_DAK_A_frame";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_Grenadier: BG21_GER_WH_Grenadier {
	faction = "BG21_GER_DAK";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_Recon_TL: BG21_GER_WH_Recon_TL {
	faction = "BG21_GER_DAK";
	linkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_COMMANDER};
	backpack = "B_LIB_DAK_A_frame";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_Recon: BG21_GER_WH_Recon {
	faction = "BG21_GER_DAK";
	linkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_BASE};
	backpack = "B_LIB_DAK_A_frame";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_Radio: BG21_GER_WH_Radio {
	faction = "BG21_GER_DAK";
	linkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_Mortar: BG21_GER_WH_Mortar {
	faction = "BG21_GER_DAK";
	linkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_COMMANDER};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_Mortar_TL: BG21_GER_WH_Mortar_TL {
	faction = "BG21_GER_DAK";
	linkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_COMMANDER};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_Mortar_AS: BG21_GER_WH_Mortar_AS {
	faction = "BG21_GER_DAK";
	linkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_BASE};	
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_Rifleman_g43: BG21_GER_WH_Rifleman_G43 {
	faction = "BG21_GER_DAK";
	linkedItems[] = {"V_LIB_DAK_VestG43",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_DAK_VestG43",GER_LINKED_ITEMS_BASE};
	backpack = "B_LIB_DAK_A_frame";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_Rifleman_STG44: BG21_GER_WH_Rifleman_STG44 {
	faction = "BG21_GER_DAK";
	linkedItems[] = {"V_LIB_DAK_VestSTG",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_DAK_VestSTG",GER_LINKED_ITEMS_BASE};
	backpack = "B_LIB_DAK_A_frame";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_Sniper: BG21_GER_WH_Sniper {
	faction = "BG21_GER_DAK";
	linkedItems[] = {"V_LIB_DAK_VestKar98","H_LIB_GER_HelmetCamo",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_DAK_VestKar98","H_LIB_GER_HelmetCamo",GER_LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_AT: BG21_GER_WH_AT {
	faction = "BG21_GER_DAK";
	linkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_AT_AS: BG21_GER_WH_AT_AS {
	faction = "BG21_GER_DAK";
	linkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_AT_pzft: BG21_GER_WH_AT_pzft {
	faction = "BG21_GER_DAK";
	linkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_MG_34: BG21_GER_WH_MG_34 {
	faction = "BG21_GER_DAK";
	linkedItems[] = {"V_LIB_DAK_VestMG",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_DAK_VestMG",GER_LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_MG_42: BG21_GER_WH_MG_42 {
	faction = "BG21_GER_DAK";
	linkedItems[] = {"V_LIB_DAK_VestMG",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_DAK_VestMG",GER_LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_MG_AS: BG21_GER_WH_MG_AS {
	faction = "BG21_GER_DAK";
	linkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_MG_TL: BG21_GER_WH_MG_TL {
	faction = "BG21_GER_DAK";
	linkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_MG_AS_TRIPOD: BG21_GER_WH_MG_TL {
	faction = "BG21_GER_DAK";
	linkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_DAK_VestKar98",GER_LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_Pioneer_Mines: BG21_GER_WH_Pioneer_Mines {
	faction = "BG21_GER_DAK";
	linkedItems[] = {"V_LIB_DAK_PioneerVest",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_DAK_PioneerVest",GER_LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_Pioneer_Explos: BG21_GER_WH_Pioneer_Explos {
	faction = "BG21_GER_DAK";
	linkedItems[] = {"V_LIB_DAK_PioneerVest",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_DAK_PioneerVest",GER_LINKED_ITEMS_BASE};
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'DAK'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_DAK_Medic: BG21_GER_WH_Medic {
	faction = "BG21_GER_DAK";
	uniformClass = "U_LIB_DAK_Medic";
	linkedItems[] = {"V_LIB_DAK_VestKar98","H_LIB_GER_Helmet_Medic",GER_LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_DAK_VestKar98","H_LIB_GER_Helmet_Medic",GER_LINKED_ITEMS_BASE};
};

// WAFFEN SS
class BG21_GER_SS_PL: BG21_GER_WH_PL {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_PL2: BG21_GER_WH_PL2 {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_SL: BG21_GER_WH_SL {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_TL_G43: BG21_GER_WH_TL_G43 {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_TL_K98: BG21_GER_WH_TL_K98 {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_Rifleman_k98: BG21_GER_WH_Rifleman_K98 {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_Grenadier: BG21_GER_WH_Grenadier {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_Recon_TL: BG21_GER_WH_Recon_TL {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_Recon: BG21_GER_WH_Recon {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_Radio: BG21_GER_WH_Radio {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_Mortar: BG21_GER_WH_Mortar {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_Mortar_TL: BG21_GER_WH_Mortar_TL {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_Mortar_AS: BG21_GER_WH_Mortar_AS {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_Rifleman_g43: BG21_GER_WH_Rifleman_G43 {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_Rifleman_STG44: BG21_GER_WH_Rifleman_STG44 {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_Sniper: BG21_GER_WH_Sniper {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_AT: BG21_GER_WH_AT {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_AT_AS: BG21_GER_WH_AT_AS {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_AT_pzft: BG21_GER_WH_AT_pzft {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_MG_34: BG21_GER_WH_MG_34 {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_MG_42: BG21_GER_WH_MG_42 {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_MG_AS: BG21_GER_WH_MG_AS {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_MG_TL: BG21_GER_WH_MG_TL {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_MG_AS_TRIPOD: BG21_GER_WH_MG_TL {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_Pioneer_Mines: BG21_GER_WH_Pioneer_Mines {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_Pioneer_Explos: BG21_GER_WH_Pioneer_Explos {
	faction = "BG21_GER_SS";
	class EventHandlers: Eventhandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'SS'] call BG21_IFA3_fnc_random_gear;};";
	};
};
class BG21_GER_SS_Medic: BG21_GER_WH_Medic {
	faction = "BG21_GER_SS";
	uniformClass = "U_LIB_ST_Medic_E44";
};
