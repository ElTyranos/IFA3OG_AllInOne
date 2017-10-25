// IJA
class BG21_IJA_PL: BG21_IJA_Soldier_base {
	scope = 2;
	displayname = "Captain";
	uniformClass = "fow_u_ija_type98";
	class EventHandlers {};
	weapons[] = {"fow_w_type100","fow_w_type14","LIB_Binocular_GER","Throw","Put"};
	respawnWeapons[] = {"fow_w_type100","fow_w_type14","LIB_Binocular_GER","Throw","Put"};
	magazines[] = {IJA_7x_fow_32Rnd_8x22,IJA_2x_fow_8Rnd_8x22,IJA_GRENADES};
	respawnmagazines[] = {IJA_7x_fow_32Rnd_8x22,IJA_2x_fow_8Rnd_8x22,IJA_GRENADES};
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
	weapons[] = {"fow_w_type100",,"fow_w_type14","LIB_Binocular_GER","Throw","Put"};
	respawnWeapons[] = {"fow_w_type100","fow_w_type14","LIB_Binocular_GER","Throw","Put"};
	magazines[] = {IJA_7x_fow_32Rnd_8x22,IJA_2x_fow_8Rnd_8x22,IJA_GRENADES};
	respawnmagazines[] = {IJA_7x_fow_32Rnd_8x22,IJA_2x_fow_8Rnd_8x22,IJA_GRENADES};
	linkedItems[] = {"fow_v_ija_nco",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_ija_nco",LINKED_ITEMS_COMMANDER};
	backpack = "BG21_IJA_B_SL";
};
class BG21_IJA_TL: BG21_IJA_Soldier_base {
	scope = 2;
	displayname = "Team Leader";
	weapons[] = {"fow_w_type99",IJA_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"fow_w_type99",IJA_KNIFE,"Throw","Put"};
	magazines[] = {IJA_KNIFE_MAG,IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	respawnmagazines[] = {IJA_KNIFE_MAG,IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	linkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	backpack = "BG21_IJA_B";
};
class BG21_IJA_Rifleman: BG21_IJA_Soldier_base {
	scope = 2;
	displayname = "Rifleman";
	weapons[] = {"fow_w_type99",IJA_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"fow_w_type99",IJA_KNIFE,"Throw","Put"};
	magazines[] = {IJA_KNIFE_MAG,IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	respawnmagazines[] = {IJA_KNIFE_MAG,IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	linkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	backpack = "BG21_IJA_B";
};
class BG21_IJA_Grenadier: BG21_IJA_Rifleman {
	displayname = "Grenadier";
	linkedItems[] = {"fow_v_ija_grenadier",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_ija_grenadier",LINKED_ITEMS_BASE};
	backpack = "BG21_IJA_B_GRENADIER";
};
class BG21_IJA_Radio: BG21_IJA_Rifleman {
	displayname = "Radio";
	backpack = "BG21_IJA_B_RADIO";
};
class BG21_IJA_Mortar: BG21_IJA_Rifleman {
	displayname = "Mortar Operator";
	weapons[] = {"fow_w_type99","LIB_GrWr34_Barrel",IJA_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"fow_w_type99","LIB_GrWr34_Barrel",IJA_KNIFE,"Throw","Put"};	
	linkedItems[] = {"fow_v_ija_mortar",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_ija_mortar",LINKED_ITEMS_COMMANDER};	
	backpack = "BG21_IJA_B_MORTAR";
};
class BG21_IJA_Mortar_TL: BG21_IJA_Rifleman {
	displayname = "Mortar Team Leader";
	linkedItems[] = {"fow_v_ija_mortar",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_ija_mortar",LINKED_ITEMS_COMMANDER};	
	backpack = "BG21_IJA_B_MORTAR";
};
class BG21_IJA_Mortar_AS: BG21_IJA_Rifleman {
	displayname = "Mortar Assistant";
	weapons[] = {"fow_w_type99","LIB_GrWr34_Tripod",IJA_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"fow_w_type99","LIB_GrWr34_Tripod",IJA_KNIFE,"Throw","Put"};
	linkedItems[] = {"fow_v_ija_mortar",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_ija_mortar",LINKED_ITEMS_BASE};	
	backpack = "BG21_IJA_B_MORTAR";
};
class BG21_IJA_Sniper: BG21_IJA_Soldier_base {
	scope = 2;
	displayname = "Sniper";
	uniformClass = "fow_u_ija_type98_foliage";
	class EventHandlers {};
	weapons[] = {"fow_w_type99_sniper",IJA_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"fow_w_type99_sniper",IJA_KNIFE,"Throw","Put"};
	magazines[] = {IJA_KNIFE_MAG,IJA_10x_fow_5Rnd_77x58,IJA_GRENADES};
	respawnmagazines[] = {IJA_KNIFE_MAG,IJA_10x_fow_5Rnd_77x58,IJA_GRENADES};
	linkedItems[] = {"fow_v_ija_rifle","fow_h_ija_type90_foliage",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_ija_rifle","fow_h_ija_type90_foliage",LINKED_ITEMS_BASE};
	backpack = "";
};
class BG21_IJA_Recon: BG21_IJA_Sniper {
	displayname = "Recon";
	weapons[] = {"fow_w_type99","LIB_Binocular_GER",IJA_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"fow_w_type99","LIB_Binocular_GER",IJA_KNIFE,"Throw","Put"};
	magazines[] = {IJA_KNIFE_MAG,IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	respawnmagazines[] = {IJA_KNIFE_MAG,IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	backpack = "BG21_IJA_B_FOLIAGE";
};
class BG21_IJA_SL_Recon: BG21_IJA_Recon {
	displayname = "Recon Squad Leader";
	weapons[] = {"fow_w_type100","LIB_Binocular_GER",IJA_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"fow_w_type100","LIB_Binocular_GER",IJA_KNIFE,"Throw","Put"};
	magazines[] = {IJA_KNIFE_MAG,IJA_7x_fow_32Rnd_8x22,IJA_GRENADES};
	respawnmagazines[] = {IJA_KNIFE_MAG,IJA_7x_fow_32Rnd_8x22,IJA_GRENADES};
	linkedItems[] = {"fow_v_ija_nco","fow_h_ija_type90_foliage",LINKED_ITEMS_COMMANDER};
	respawnLinkedItems[] = {"fow_v_ija_nco","fow_h_ija_type90_foliage",LINKED_ITEMS_COMMANDER};	
	backpack = "BG21_IJA_B_SL_RECON";
};
class BG21_IJA_Radio_Recon: BG21_IJA_Recon {
	displayname = "Recon Radio";
	backpack = "BG21_IJA_B_RADIO";
};
class BG21_IJA_AT: BG21_IJA_Soldier_base {
	scope = 2;
	displayname = "AT Rifleman";
	weapons[] = {"fow_w_type99","LIB_M1A1_Bazooka",IJA_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"fow_w_type99","LIB_M1A1_Bazooka",IJA_KNIFE,"Throw","Put"};
	magazines[] = {IJA_KNIFE_MAG,IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	respawnmagazines[] = {IJA_KNIFE_MAG,IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	linkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	backpack = "BG21_IJA_B_AT";
};
class BG21_IJA_AT_AS: BG21_IJA_Soldier_base {
	scope = 2;
	displayname = "AT Assistant";
	weapons[] = {"fow_w_type99",IJA_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"fow_w_type99",IJA_KNIFE,"Throw","Put"};
	magazines[] = {IJA_KNIFE_MAG,IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	respawnmagazines[] = {IJA_KNIFE_MAG,IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	linkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	backpack = "BG21_IJA_B_AT_AS";
};
class BG21_IJA_MG: BG21_IJA_Soldier_base {
	scope = 2;
	displayname = "LMG Rifleman";
	weapons[] = {"fow_w_type99_lmg",IJA_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"fow_w_type99_lmg",IJA_KNIFE,"Throw","Put"};
	magazines[] = {IJA_KNIFE_MAG,IJA_5x_fow_30Rnd_77x58,IJA_GRENADES};
	respawnmagazines[] = {IJA_KNIFE_MAG,IJA_5x_fow_30Rnd_77x58,IJA_GRENADES};
	linkedItems[] = {"fow_v_ija_mg",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_ija_mg",LINKED_ITEMS_BASE};
	backpack = "BG21_IJA_B_MG";
};
class BG21_IJA_MG_AS: BG21_IJA_Soldier_base {
	scope = 2;
	displayname = "LMG Assistant";
	weapons[] = {"fow_w_type99",IJA_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"fow_w_type99",IJA_KNIFE,"Throw","Put"};
	magazines[] = {IJA_KNIFE_MAG,IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	respawnmagazines[] = {IJA_KNIFE_MAG,IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	linkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	backpack = "BG21_IJA_B_MG_AS";
};
class BG21_IJA_MG_TL: BG21_IJA_Soldier_base {
	scope = 2;
	displayname = "LMG Team Leader";
	weapons[] = {"fow_w_type99",IJA_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"fow_w_type99",IJA_KNIFE,"Throw","Put"};
	magazines[] = {IJA_KNIFE_MAG,IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	respawnmagazines[] = {IJA_KNIFE_MAG,IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	linkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_ija_rifle",LINKED_ITEMS_BASE};
	backpack = "BG21_IJA_B_MG_AS";
};
class BG21_IJA_Engineer_Mines: BG21_IJA_Soldier_base {
	scope = 2;
	displayname = "Engineer (Mines)";
	weapons[] = {"fow_w_type99",IJA_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"fow_w_type99",IJA_KNIFE,"Throw","Put"};
	magazines[] = {IJA_KNIFE_MAG,IJA_20x_fow_5Rnd_77x58};
	respawnmagazines[] = {IJA_KNIFE_MAG,IJA_20x_fow_5Rnd_77x58};
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
	weapons[] = {"fow_w_type99",IJA_KNIFE,"Throw","Put"};
	respawnWeapons[] = {"fow_w_type99",IJA_KNIFE,"Throw","Put"};
	magazines[] = {IJA_KNIFE_MAG,IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	respawnmagazines[] = {IJA_KNIFE_MAG,IJA_20x_fow_5Rnd_77x58,IJA_GRENADES};
	linkedItems[] = {"fow_v_ija_medic",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"fow_v_ija_medic",LINKED_ITEMS_BASE};
	backpack = "BG21_IJA_B_MEDIC";
};
