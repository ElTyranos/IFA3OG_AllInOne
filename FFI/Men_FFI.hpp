class BG21_FFI_PL: BG21_FFI_Soldier_base {
	scope = 2;
	displayname = "Cell leader";
	weapons[] = {"LIB_PPSh41_m","LIB_TT33","LIB_Binocular_SU","Throw","Put"};
	respawnWeapons[] = {"LIB_PPSh41_m","LIB_TT33","LIB_Binocular_SU","Throw","Put"};
	magazines[] = {SOV_6x_LIB_35Rnd_762x25,SOV_2x_LIB_8Rnd_762x25,SOV_GRENADES};
	respawnmagazines[] = {SOV_6x_LIB_35Rnd_762x25,SOV_2x_LIB_8Rnd_762x25,SOV_GRENADES};
	linkedItems[] = {"V_LIB_SOV_RA_OfficerVest",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_OfficerVest",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_FFI_B_CO";
};
class BG21_FFI_SL: BG21_FFI_Soldier_base {
	scope = 2;
	displayname = "Squad Leader";
	weapons[] = {"LIB_PPSh41_d","LIB_TT33","LIB_Binocular_SU","Throw","Put"};
	respawnWeapons[] = {"LIB_PPSh41_d","LIB_TT33","LIB_Binocular_SU","Throw","Put"};
	magazines[] = {SOV_3x_LIB_71Rnd_762x25,SOV_2x_LIB_8Rnd_762x25,SOV_GRENADES};
	respawnmagazines[] = {SOV_3x_LIB_71Rnd_762x25,SOV_2x_LIB_8Rnd_762x25,SOV_GRENADES};
	linkedItems[] = {"V_LIB_SOV_RA_PPShBelt",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_PPShBelt",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_FFI_B_SL";
};
class BG21_FFI_Rifleman: BG21_FFI_Soldier_base {
	scope = 2;
	displayname = "Rifleman";
	weapons[] = {"LIB_M9130","Throw","Put"};
	respawnWeapons[] = {"LIB_M9130","Throw","Put"};
	magazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	respawnmagazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	linkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	items[] = {ITEMS_BASE,"LIB_ACC_M1891_Bayo"};
	respawnItems[] = {ITEMS_BASE,"LIB_ACC_M1891_Bayo"};
	backpack = "BG21_B_Invisble";
};
class BG21_FFI_Grenadier: BG21_FFI_Rifleman {
	displayname = "Grenadier";
	backpack = "BG21_FFI_B_GRENADIER";
};
class BG21_FFI_Radio: BG21_FFI_Rifleman {
	displayname = "Radio";
	backpack = "BG21_FFI_B_RADIO";
};
class BG21_FFI_Recon: BG21_FFI_Rifleman {
	displayname = "Recon";
	weapons[] = {"LIB_M9130","LIB_Binocular_SU","Throw","Put"};
	respawnWeapons[] = {"LIB_M9130","LIB_Binocular_SU","Throw","Put"};
};
class BG21_FFI_Mortar: BG21_FFI_Rifleman {
	displayname = "Mortar Operator";
	weapons[] = {"LIB_M9130","LIB_BM37_Barrel","Throw","Put"};
	respawnWeapons[] = {"LIB_M9130","LIB_BM37_Barrel","Throw","Put"};	
	linkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_FFI_B_MORTAR";
};
class BG21_FFI_Mortar_TL: BG21_FFI_Rifleman {
	displayname = "Mortar Team Leader";
	linkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_FFI_B_MORTAR";
};
class BG21_FFI_Mortar_AS: BG21_FFI_Rifleman {
	displayname = "Mortar Assistant";
	weapons[] = {"LIB_M9130","LIB_BM37_Tripod","Throw","Put"};
	respawnWeapons[] = {"LIB_M9130","LIB_BM37_Tripod","Throw","Put"};	
	backpack = "BG21_FFI_B_MORTAR";
};
class BG21_FFI_Sniper: BG21_FFI_Soldier_base {
	scope = 2;
	displayname = "Sniper";
	weapons[] = {"LIB_M9130PU","Throw","Put"};
	respawnWeapons[] = {"LIB_M9130PU","Throw","Put"};
	magazines[] = {SOV_10x_LIB_5Rnd_762x54,SOV_GRENADES};
	respawnmagazines[] = {SOV_10x_LIB_5Rnd_762x54,SOV_GRENADES};
	linkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	backpack = "BG21_B_Invisble";
};
class BG21_FFI_AT: BG21_FFI_Soldier_base {
	scope = 2;
	displayname = "PTRD-41 Gunner";
	weapons[] = {"LIB_PTRD","LIB_M1895","Throw","Put"};
	respawnWeapons[] = {"LIB_PTRD","LIB_M1895","Throw","Put"};
	magazines[] = {SOV_LIB_5x_1Rnd_145x114,SOV_2x_LIB_7Rnd_762x38,SOV_GRENADES};
	respawnmagazines[] = {SOV_LIB_5x_1Rnd_145x114,SOV_2x_LIB_7Rnd_762x38,SOV_GRENADES};
	linkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	backpack = "BG21_FFI_B_AT";
};
class BG21_FFI_AT_AS: BG21_FFI_Soldier_base {
	scope = 2;
	displayname = "PTRD-41 Assistant";
	weapons[] = {"LIB_M9130","Throw","Put"};
	respawnWeapons[] = {"LIB_M9130","Throw","Put"};
	magazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	respawnmagazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	linkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	items[] = {ITEMS_BASE,"LIB_ACC_M1891_Bayo"};
	respawnItems[] = {ITEMS_BASE,"LIB_ACC_M1891_Bayo"};
	backpack = "BG21_FFI_B_AT_AS";
};
class BG21_FFI_MG: BG21_FFI_Soldier_base {
	scope = 2;
	displayname = "Machinegunner";
	weapons[] = {"LIB_DP28","Throw","Put"};
	respawnWeapons[] = {"LIB_DP28","Throw","Put"};
	magazines[] = {SOV_2x_LIB_47Rnd_762x54,SOV_GRENADES};
	respawnmagazines[] = {SOV_2x_LIB_47Rnd_762x54,SOV_GRENADES};
	linkedItems[] = {"V_LIB_SOV_RA_MGBelt",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_MGBelt",LINKED_ITEMS_BASE};
	backpack = "BG21_FFI_B_MG";
};
class BG21_FFI_MG_AS: BG21_FFI_Soldier_base {
	scope = 2;
	displayname = "Machinegunner Assistant";
	weapons[] = {"LIB_M9130","Throw","Put"};
	respawnWeapons[] = {"LIB_M9130","Throw","Put"};
	magazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	respawnmagazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	linkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	items[] = {ITEMS_BASE,"LIB_ACC_M1891_Bayo"};
	respawnItems[] = {ITEMS_BASE,"LIB_ACC_M1891_Bayo"};
	backpack = "BG21_FFI_B_MG_AS";
};
class BG21_FFI_Pioneer_Mines: BG21_FFI_Soldier_base {
	scope = 2;
	displayname = "Pioneer (Mines)";
	weapons[] = {"LIB_M9130","Throw","Put"};
	respawnWeapons[] = {"LIB_M9130","Throw","Put"};
	magazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	respawnmagazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	linkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	items[] = {ITEMS_BASE,"LIB_ACC_M1891_Bayo"};
	respawnItems[] = {ITEMS_BASE,"LIB_ACC_M1891_Bayo"};
	backpack = "BG21_FFI_B_MINES";
};
class BG21_FFI_Pioneer_Explos: BG21_FFI_Pioneer_Mines {
	scope = 2;
	displayname = "Pioneer (Explosives)";
	backpack = "BG21_FFI_B_EXPLOS";
};
class BG21_FFI_Medic: BG21_FFI_Soldier_base {
	scope = 2;
	displayname = "Doctor";
	weapons[] = {"LIB_M9130","Throw","Put"};
	respawnWeapons[] = {"LIB_M9130","Throw","Put"};
	magazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	respawnmagazines[] = {SOV_20x_LIB_5Rnd_762x54,SOV_GRENADES};
	linkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"V_LIB_SOV_RA_MosinBelt",LINKED_ITEMS_BASE};
	items[] = {ITEMS_BASE,"LIB_ACC_M1891_Bayo"};
	respawnItems[] = {ITEMS_BASE,"LIB_ACC_M1891_Bayo"};
	backpack = "BG21_FFI_B_MEDIC";
};
