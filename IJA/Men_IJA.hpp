// IJA
class BG21_IJA_PL: BG21_IJA_Soldier_base {
	scope = 2;
	displayname = "Captain";
	uniformClass = "fow_u_ija_type98";
	class EventHandlers {};
	weapons[] = {"fow_w_type100","LIB_Binocular_GER","Throw","Put"};
	respawnWeapons[] = {"fow_w_type100","LIB_Binocular_GER","Throw","Put"};
	magazines[] = {IJA_7x_fow_32Rnd_8x22,IJA_GRENADES,IJA_GRENADES_SMOKE};
	respawnmagazines[] = {IJA_7x_fow_32Rnd_8x22,IJA_GRENADES,IJA_GRENADES_SMOKE};
	linkedItems[] = {"fow_v_ija_officer","fow_h_ija_fieldcap_officer",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_ija_officer","fow_h_ija_fieldcap_officer",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_IJA_B_CO";
};
class BG21_IJA_PL2: BG21_IJA_PL {
	scope = 2;
	displayname = "Lieutenant";
};
class BG21_IJA_SL: BG21_IJA_Soldier_base {
	scope = 2;
	displayname = "Squad Leader";
	weapons[] = {"fow_w_type100","LIB_Binocular_GER","Throw","Put"};
	respawnWeapons[] = {"fow_w_type100","LIB_Binocular_GER","Throw","Put"};
	magazines[] = {IJA_7x_fow_32Rnd_8x22,IJA_GRENADES,IJA_GRENADES_SMOKE};
	respawnmagazines[] = {IJA_7x_fow_32Rnd_8x22,IJA_GRENADES,IJA_GRENADES_SMOKE};
	linkedItems[] = {"fow_v_ija_nco",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_ija_nco",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_IJA_B_SL";
};
class BG21_IJA_TL: BG21_IJA_Soldier_base {
	scope = 2;
	displayname = "Team Leader";
	weapons[] = {"fow_w_type99","Throw","Put"};
	respawnWeapons[] = {"fow_w_type99","Throw","Put"};
	magazines[] = {IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	respawnmagazines[] = {IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	linkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	backpack = "BG21_IJA_B";
};
class BG21_IJA_Rifleman: BG21_IJA_Soldier_base {
	scope = 2;
	displayname = "Rifleman";
	weapons[] = {"fow_w_type99","Throw","Put"};
	respawnWeapons[] = {"fow_w_type99","Throw","Put"};
	magazines[] = {IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	respawnmagazines[] = {IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	linkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	backpack = "BG21_IJA_B";
};
class BG21_IJA_Radio: BG21_IJA_Rifleman {
	displayname = "Radio";
	backpack = "B_LIB_GER_Radio";
};
class BG21_IJA_Sniper: BG21_IJA_Soldier_base {
	scope = 2;
	displayname = "Sniper";
	uniformClass = "fow_u_ija_type98_foliage";
	class EventHandlers {};
	weapons[] = {"LIB_M1903A4_Springfield","Throw","Put"};
	respawnWeapons[] = {"LIB_M1903A4_Springfield","Throw","Put"};
	magazines[] = {US_10x_LIB_5Rnd_762x63,IJA_GRENADES};
	respawnmagazines[] = {US_10x_LIB_5Rnd_762x63,IJA_GRENADES};
	// weapons[] = {"fow_w_type99","Throw","Put"};
	// respawnWeapons[] = {"fow_w_type99","Throw","Put"};
	// magazines[] = {IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	// respawnmagazines[] = {IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	linkedItems[] = {"fow_v_ija_rifle","fow_h_ija_type90_foliage",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_ija_rifle","fow_h_ija_type90_foliage",LINKED_ITEMS_BASE};
	backpack = "";
};
class BG21_IJA_Recon: BG21_IJA_Sniper {
	displayname = "Recon";
	weapons[] = {"fow_w_type99","LIB_Binocular_GER","Throw","Put"};
	respawnWeapons[] = {"fow_w_type99","LIB_Binocular_GER","Throw","Put"};
	magazines[] = {IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	respawnmagazines[] = {IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	backpack = "BG21_IJA_B_FOLIAGE";
};
class BG21_IJA_SL_Recon: BG21_IJA_Recon {
	displayname = "Recon Squad Leader";
	weapons[] = {"fow_w_type100","LIB_Binocular_GER","Throw","Put"};
	respawnWeapons[] = {"fow_w_type100","LIB_Binocular_GER","Throw","Put"};
	magazines[] = {IJA_7x_fow_32Rnd_8x22,IJA_GRENADES,IJA_GRENADES_SMOKE};
	respawnmagazines[] = {IJA_7x_fow_32Rnd_8x22,IJA_GRENADES,IJA_GRENADES_SMOKE};
	linkedItems[] = {"fow_v_ija_nco","fow_h_ija_type90_foliage",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_ija_nco","fow_h_ija_type90_foliage",LINKED_ITEMS_COMMANDER};	
	backpack = "BG21_IJA_B_CO_RECON";
};
class BG21_IJA_AT: BG21_IJA_Soldier_base {
	scope = 2;
	displayname = "AT Rifleman";
	weapons[] = {"fow_w_type99","LIB_M1A1_Bazooka","Throw","Put"};
	respawnWeapons[] = {"fow_w_type99","LIB_M1A1_Bazooka","Throw","Put"};
	magazines[] = {IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	respawnmagazines[] = {IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	linkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	backpack = "BG21_IJA_B_AT";
};
class BG21_IJA_AT_AS: BG21_IJA_Soldier_base {
	scope = 2;
	displayname = "AT Assistant";
	weapons[] = {"fow_w_type99","Throw","Put"};
	respawnWeapons[] = {"fow_w_type99","Throw","Put"};
	magazines[] = {IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	respawnmagazines[] = {IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	linkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	backpack = "BG21_IJA_B_AT_AS";
};
class BG21_IJA_MG: BG21_IJA_Soldier_base {
	scope = 2;
	displayname = "LMG Rifleman";
	weapons[] = {"fow_w_type99_lmg","Throw","Put"};
	respawnWeapons[] = {"fow_w_type99_lmg","Throw","Put"};
	magazines[] = {IJA_5x_fow_30Rnd_77x58,IJA_GRENADES};
	respawnmagazines[] = {IJA_5x_fow_30Rnd_77x58,IJA_GRENADES};
	linkedItems[] = {"fow_v_ija_mg",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_ija_mg",LINKED_ITEMS_BASE};
	backpack = "BG21_IJA_B_MG";
};
class BG21_IJA_MG_AS: BG21_IJA_Soldier_base {
	scope = 2;
	displayname = "LMG Assistant";
	weapons[] = {"fow_w_type99","Throw","Put"};
	respawnWeapons[] = {"fow_w_type99","Throw","Put"};
	magazines[] = {IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	respawnmagazines[] = {IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	linkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	backpack = "BG21_IJA_B_MG_AS";
};
class BG21_IJA_Engineer_Mines: BG21_IJA_Soldier_base {
	scope = 2;
	displayname = "Engineer (Mines)";
	weapons[] = {"fow_w_type99","Throw","Put"};
	respawnWeapons[] = {"fow_w_type99","Throw","Put"};
	magazines[] = {IJA_20x_fow_5Rnd_77x58};
	respawnmagazines[] = {IJA_20x_fow_5Rnd_77x58};
	linkedItems[] = {"fow_v_ija_grenadier",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_ija_grenadier",LINKED_ITEMS_BASE};
	backpack = "BG21_IJA_B_MINES";
};
class BG21_IJA_Engineer_Explos: BG21_IJA_Engineer_Mines {
	scope = 2;
	displayname = "Engineer (Explosives)";
	backpack = "BG21_IJA_B_EXPLOS";
};
class BG21_IJA_Medic: BG21_IJA_Soldier_base {
	scope = 2;
	displayname = "Medic";
	weapons[] = {"fow_w_type99","Throw","Put"};
	respawnWeapons[] = {"fow_w_type99","Throw","Put"};
	magazines[] = {IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	respawnmagazines[] = {IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	linkedItems[] = {"fow_v_ija_medic",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_ija_medic",LINKED_ITEMS_BASE};
	backpack = "BG21_IJA_B_MEDIC";
};
