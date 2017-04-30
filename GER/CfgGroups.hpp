class BG21_GER_WH
{
	name = "[BG21] Wh";
	class Infantry
	{
		name = "1. Infantry";
		GROUP3(BG21_GER_WH_HQ,Befehl Gruppe,BG21_GER_WH,1,Infantry,BG21_GER_WH_PL,CAPTAIN,BG21_GER_WH_Recon,PRIVATE,BG21_GER_WH_Recon,PRIVATE)
		GROUP3(BG21_GER_WH_RECON,Recon Gruppe,BG21_GER_WH,1,Infantry,BG21_GER_WH_SL,SERGEANT,BG21_GER_WH_Recon,PRIVATE,BG21_GER_WH_Recon,PRIVATE)
		GROUP3(BG21_GER_WH_PIONIER1,Pionier Gruppe (Mines),BG21_GER_WH,1,Infantry,BG21_GER_WH_Pioneer_Mines,PRIVATE,BG21_GER_WH_Pioneer_Mines,PRIVATE,BG21_GER_WH_Pioneer_Mines,PRIVATE)
		GROUP3(BG21_GER_WH_PIONIER2,Pionier Gruppe (Explos),BG21_GER_WH,1,Infantry,BG21_GER_WH_Pioneer_Explos,PRIVATE,BG21_GER_WH_Pioneer_Explos,PRIVATE,BG21_GER_WH_Pioneer_Explos,PRIVATE)
		GROUP3(BG21_GER_WH_PIONIER3,Pionier Gruppe (Mixed),BG21_GER_WH,1,Infantry,BG21_GER_WH_Pioneer_Mines,PRIVATE,BG21_GER_WH_Pioneer_Mines,PRIVATE,BG21_GER_WH_Pioneer_Explos,PRIVATE)
		GROUP3(BG21_GER_WH_AT,Ab. Gruppe,BG21_GER_WH,1,Infantry,BG21_GER_WH_SL,CORPORAL,BG21_GER_WH_AT,PRIVATE,BG21_GER_WH_AT_AS,PRIVATE)
		GROUP3(BG21_GER_WH_MORTAR,Mortar Team,BG21_GER_WH,1,Infantry,BG21_GER_WH_SL,CORPORAL,BG21_GER_WH_MORTAR,PRIVATE,BG21_GER_WH_Radio,PRIVATE)
		GROUP7(BG21_GER_WH_INF1,Inf. Gruppe (MG-34),BG21_GER_WH,1,Infantry,BG21_GER_WH_SL,SERGEANT,BG21_GER_WH_TL_G43,CORPORAL,BG21_GER_WH_AT_pzft,PRIVATE,BG21_GER_WH_Rifleman_k98,PRIVATE,BG21_GER_WH_Radio,PRIVATE,BG21_GER_WH_MG_34,PRIVATE,BG21_GER_WH_MG_AS,PRIVATE)
		GROUP7(BG21_GER_WH_INF2,Inf. Gruppe (MG-42),BG21_GER_WH,1,Infantry,BG21_GER_WH_SL,SERGEANT,BG21_GER_WH_TL_G43,CORPORAL,BG21_GER_WH_AT_pzft,PRIVATE,BG21_GER_WH_Rifleman_k98,PRIVATE,BG21_GER_WH_Radio,PRIVATE,BG21_GER_WH_MG_42,PRIVATE,BG21_GER_WH_MG_AS,PRIVATE)
	};
};
class BG21_GER_PZW
{
	name = "[BG21] Panzerwaffe";
	class Armored 
	{
		name = "Panzer gruppen";
		GROUP3(BG21_GER_WH_TankCrew1,Panzer Gruppe (3),BG21_GER_PZW,1,Armored,BG21_GER_WH_Tank_Commander,LIEUTENANT,BG21_GER_WH_Tank_Crew,SERGEANT,BG21_GER_WH_Tank_Crew,PRIVATE)
		GROUP2(BG21_GER_WH_TankCrew2,Panzer Gruppe (2),BG21_GER_PZW,1,Armored,BG21_GER_WH_Tank_Commander,SERGEANT,BG21_GER_WH_Tank_Crew,PRIVATE)
	};
};
class BG21_GER_WH_W
{
	name = "[BG21] Wh (Winter)";
	class Infantry
	{
		name = "1. Infantry";
		GROUP3(BG21_GER_WH_W_HQ,Befehl Gruppe,BG21_GER_WH_W,1,Infantry,BG21_GER_WH_W_PL,CAPTAIN,BG21_GER_WH_W_Recon,PRIVATE,BG21_GER_WH_W_Recon,PRIVATE)
		GROUP3(BG21_GER_WH_W_RECON,Recon Gruppe,BG21_GER_WH_W,1,Infantry,BG21_GER_WH_W_SL,SERGEANT,BG21_GER_WH_W_Recon,PRIVATE,BG21_GER_WH_W_Recon,PRIVATE)
		GROUP3(BG21_GER_WH_W_PIONIER1,Pionier Gruppe (Mines),BG21_GER_WH_W,1,Infantry,BG21_GER_WH_W_Pioneer_Mines,PRIVATE,BG21_GER_WH_W_Pioneer_Mines,PRIVATE,BG21_GER_WH_W_Pioneer_Mines,PRIVATE)
		GROUP3(BG21_GER_WH_W_PIONIER2,Pionier Gruppe (Explos),BG21_GER_WH_W,1,Infantry,BG21_GER_WH_W_Pioneer_Explos,PRIVATE,BG21_GER_WH_W_Pioneer_Explos,PRIVATE,BG21_GER_WH_W_Pioneer_Explos,PRIVATE)
		GROUP3(BG21_GER_WH_W_PIONIER3,Pionier Gruppe (Mixed),BG21_GER_WH_W,1,Infantry,BG21_GER_WH_W_Pioneer_Mines,PRIVATE,BG21_GER_WH_W_Pioneer_Mines,PRIVATE,BG21_GER_WH_W_Pioneer_Explos,PRIVATE)
		GROUP3(BG21_GER_WH_W_AT,Ab. Gruppe,BG21_GER_WH_W,1,Infantry,BG21_GER_WH_W_SL,SERGEANT,BG21_GER_WH_W_AT,PRIVATE,BG21_GER_WH_W_AT_AS,PRIVATE)
		GROUP3(BG21_GER_WH_W_MORTAR,Mortar Team,BG21_GER_WH,1,Infantry,BG21_GER_WH_W_SL,CORPORAL,BG21_GER_WH_W_MORTAR,PRIVATE,BG21_GER_WH_W_Radio,PRIVATE)
		GROUP7(BG21_GER_WH_W_INF1,Inf. Gruppe (MG-34),BG21_GER_WH_W,1,Infantry,BG21_GER_WH_W_SL,SERGEANT,BG21_GER_WH_W_TL_G43,CORPORAL,BG21_GER_WH_W_AT_pzft,PRIVATE,BG21_GER_WH_W_Rifleman_k98,PRIVATE,BG21_GER_WH_W_Radio,PRIVATE,BG21_GER_WH_W_MG_34,PRIVATE,BG21_GER_WH_W_MG_AS,PRIVATE)
		GROUP7(BG21_GER_WH_W_INF2,Inf. Gruppe (MG-34),BG21_GER_WH_W,1,Infantry,BG21_GER_WH_W_SL,SERGEANT,BG21_GER_WH_W_TL_G43,CORPORAL,BG21_GER_WH_W_AT_pzft,PRIVATE,BG21_GER_WH_W_Rifleman_k98,PRIVATE,BG21_GER_WH_W_Radio,PRIVATE,BG21_GER_WH_W_MG_42,PRIVATE,BG21_GER_WH_W_MG_AS,PRIVATE)
	};
};
class BG21_GER_FJS
{
	name = "[BG21] FJS";
	class Infantry
	{
		name = "1. Infantry";
		GROUP3(BG21_GER_FJS_HQ,Befehl Gruppe,BG21_GER_FJS,1,Infantry,BG21_GER_FJS_PL,CAPTAIN,BG21_GER_FJS_Recon,PRIVATE,BG21_GER_FJS_Recon,PRIVATE)
		GROUP3(BG21_GER_FJS_RECON,Recon Gruppe,BG21_GER_FJS,1,Infantry,BG21_GER_FJS_SL,SERGEANT,BG21_GER_FJS_Recon,PRIVATE,BG21_GER_FJS_Recon,PRIVATE)
		GROUP3(BG21_GER_FJS_PIONIER1,Pionier Gruppe (Mines),BG21_GER_FJS,1,Infantry,BG21_GER_FJS_Pioneer_Mines,PRIVATE,BG21_GER_FJS_Pioneer_Mines,PRIVATE,BG21_GER_FJS_Pioneer_Mines,PRIVATE)
		GROUP3(BG21_GER_FJS_PIONIER2,Pionier Gruppe (Explos),BG21_GER_FJS,1,Infantry,BG21_GER_FJS_Pioneer_Explos,PRIVATE,BG21_GER_FJS_Pioneer_Explos,PRIVATE,BG21_GER_FJS_Pioneer_Explos,PRIVATE)
		GROUP3(BG21_GER_FJS_PIONIER3,Pionier Gruppe (Mixed),BG21_GER_FJS,1,Infantry,BG21_GER_FJS_Pioneer_Mines,PRIVATE,BG21_GER_FJS_Pioneer_Mines,PRIVATE,BG21_GER_FJS_Pioneer_Explos,PRIVATE)
		GROUP3(BG21_GER_FJS_AT,Ab. Gruppe,BG21_GER_FJS,1,Infantry,BG21_GER_FJS_SL,SERGEANT,BG21_GER_FJS_AT,PRIVATE,BG21_GER_FJS_AT_AS,PRIVATE)
		GROUP3(BG21_GER_FJS_MORTAR,Mortar Team,BG21_GER_FJS,1,Infantry,BG21_GER_FJS_SL,CORPORAL,BG21_GER_FJS_MORTAR,PRIVATE,BG21_GER_FJS_Radio,PRIVATE)
		GROUP7(BG21_GER_FJS_INF1,Inf. Gruppe (MG-34),BG21_GER_FJS,1,Infantry,BG21_GER_FJS_SL,SERGEANT,BG21_GER_FJS_TL_G43,CORPORAL,BG21_GER_FJS_AT_pzft,PRIVATE,BG21_GER_FJS_Rifleman_k98,PRIVATE,BG21_GER_FJS_Radio,PRIVATE,BG21_GER_FJS_MG_34,PRIVATE,BG21_GER_FJS_MG_AS,PRIVATE)
		GROUP7(BG21_GER_FJS_INF2,Inf. Gruppe (MG-34),BG21_GER_FJS,1,Infantry,BG21_GER_FJS_SL,SERGEANT,BG21_GER_FJS_TL_G43,CORPORAL,BG21_GER_FJS_AT_pzft,PRIVATE,BG21_GER_FJS_Rifleman_k98,PRIVATE,BG21_GER_FJS_Radio,PRIVATE,BG21_GER_FJS_MG_42,PRIVATE,BG21_GER_FJS_MG_AS,PRIVATE)		
	};
};
class BG21_GER_DAK
{
	name = "[BG21] DAK";
	class Infantry
	{
		name = "1. Infantry";
		GROUP3(BG21_GER_DAK_HQ,Befehl Gruppe,BG21_GER_DAK,1,Infantry,BG21_GER_DAK_PL,CAPTAIN,BG21_GER_DAK_Recon,PRIVATE,BG21_GER_DAK_Recon,PRIVATE)
		GROUP3(BG21_GER_DAK_RECON,Recon Gruppe,BG21_GER_DAK,1,Infantry,BG21_GER_DAK_SL,SERGEANT,BG21_GER_DAK_Recon,PRIVATE,BG21_GER_DAK_Recon,PRIVATE)
		GROUP3(BG21_GER_DAK_PIONIER1,Pionier Gruppe (Mines),BG21_GER_DAK,1,Infantry,BG21_GER_DAK_Pioneer_Mines,PRIVATE,BG21_GER_DAK_Pioneer_Mines,PRIVATE,BG21_GER_DAK_Pioneer_Mines,PRIVATE)
		GROUP3(BG21_GER_DAK_PIONIER2,Pionier Gruppe (Explos),BG21_GER_DAK,1,Infantry,BG21_GER_DAK_Pioneer_Explos,PRIVATE,BG21_GER_DAK_Pioneer_Explos,PRIVATE,BG21_GER_DAK_Pioneer_Explos,PRIVATE)
		GROUP3(BG21_GER_DAK_PIONIER3,Pionier Gruppe (Mixed),BG21_GER_DAK,1,Infantry,BG21_GER_DAK_Pioneer_Mines,PRIVATE,BG21_GER_DAK_Pioneer_Mines,PRIVATE,BG21_GER_DAK_Pioneer_Explos,PRIVATE)
		GROUP3(BG21_GER_DAK_AT,Ab. Gruppe,BG21_GER_DAK,1,Infantry,BG21_GER_DAK_SL,SERGEANT,BG21_GER_DAK_AT,PRIVATE,BG21_GER_DAK_AT_AS,PRIVATE)
		GROUP3(BG21_GER_DAK_MORTAR,Mortar Team,BG21_GER_DAK,1,Infantry,BG21_GER_DAK_SL,CORPORAL,BG21_GER_DAK_MORTAR,PRIVATE,BG21_GER_DAK_Radio,PRIVATE)
		GROUP7(BG21_GER_DAK_INF1,Inf. Gruppe (MG-34),BG21_GER_DAK,1,Infantry,BG21_GER_DAK_SL,SERGEANT,BG21_GER_DAK_TL_K98,CORPORAL,BG21_GER_DAK_AT_pzft,PRIVATE,BG21_GER_DAK_Rifleman_k98,PRIVATE,BG21_GER_DAK_Radio,PRIVATE,BG21_GER_DAK_MG_34,PRIVATE,BG21_GER_DAK_MG_AS,PRIVATE)
	};
};
