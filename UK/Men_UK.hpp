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
	weapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
	respawnWeapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
	magazines[] = {UK_10x_fow_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_fow_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B";
};
class BG21_UK_ARMY_Rifleman: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Rifleman";
	weapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
	respawnWeapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
	magazines[] = {UK_10x_fow_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_fow_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B";
};
class BG21_UK_ARMY_Recon: BG21_UK_ARMY_Rifleman {
	displayname = "Recon";
	weapons[] = {"fow_w_leeenfield_no4mk1","LIB_Binocular_SU","Throw","Put"};
	respawnWeapons[] = {"fow_w_leeenfield_no4mk1","LIB_Binocular_SU","Throw","Put"};
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
	weapons[] = {"fow_w_leeenfield_no4mk1","LIB_M1A1_Bazooka","Throw","Put"};
	respawnWeapons[] = {"fow_w_leeenfield_no4mk1","LIB_M1A1_Bazooka","Throw","Put"};
	magazines[] = {UK_10x_fow_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_fow_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_AT";
};
class BG21_UK_ARMY_AT_AS: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "AT Assistant";
	weapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
	respawnWeapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
	magazines[] = {UK_10x_fow_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_fow_10Rnd_303,UK_GRENADES};
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
	weapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
	respawnWeapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
	magazines[] = {UK_10x_fow_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_fow_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_MG_AS";
};
class BG21_UK_ARMY_Engineer_Mines: BG21_UK_Soldier_base {
	scope = 2;
	displayname = "Engineer (Mines)";
	weapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
	respawnWeapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
	magazines[] = {UK_10x_fow_10Rnd_303};
	respawnmagazines[] = {UK_10x_fow_10Rnd_303};
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
	weapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
	respawnWeapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
	magazines[] = {UK_10x_fow_10Rnd_303,UK_GRENADES};
	respawnmagazines[] = {UK_10x_fow_10Rnd_303,UK_GRENADES};
	linkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_uk_base",LINKED_ITEMS_BASE};
	backpack = "BG21_UK_B_MEDIC";
};
