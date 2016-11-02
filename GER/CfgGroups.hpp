class BG21_GER_WH
{
	name = "[BG21] Wh";
	class Infantry
	{
		name = "1. Infantry";
		class BG21_GER_WH_HQ
		{
			name = "Befehl Gruppe";
			faction = "BG21_GER_WH";
			side = 1;
			aliveCategory = "Infantry";
			class Unit0
			{
				side = 1;
				vehicle = "BG21_GER_WH_PL";
				rank = "CAPTAIN";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 1;
				vehicle = "BG21_GER_WH_PL2";
				rank = "LIEUTENANT";
				position[] = {1,-1,0};
			};
			class Unit2
			{
				side = 1;
				vehicle = "BG21_GER_WH_Medic";
				rank = "CORPORAL";
				position[] = {2,-2,0};
			};
			class Unit3
			{
				side = 1;
				vehicle = "BG21_GER_WH_Sniper";
				rank = "PRIVATE";
				position[] = {3,-3,0};
			};
			class Unit4
			{
				side = 1;
				vehicle = "BG21_GER_WH_Rifleman_k98";
				rank = "PRIVATE";
				position[] = {-1,-1,0};
			};
		};
		
		class BG21_GER_WH_PIONIER1: BG21_GER_WH_HQ
		{
			name = "Pionier Gruppe (Mines)";
			class Unit0: Unit0
			{
				vehicle = "BG21_GER_WH_SL";
				rank = "SERGEANT";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_GER_WH_Pioneer_Mines";
				rank = "PRIVATE";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_GER_WH_Pioneer_Mines";
				rank = "PRIVATE";
			};
			class Unit3: Unit3
			{
				vehicle = "BG21_GER_WH_Pioneer_Mines";
				rank = "PRIVATE";
			};
			class Unit4: Unit4
			{
				vehicle = "BG21_GER_WH_Pioneer_Mines";
				rank = "PRIVATE";
			};
		};
		class BG21_GER_WH_PIONIER2: BG21_GER_WH_PIONIER1
		{
			name = "Pionier Gruppe (Explos)";
			class Unit0: Unit0
			{
				vehicle = "BG21_GER_WH_SL";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_GER_WH_Pioneer_Explos";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_GER_WH_Pioneer_Explos";
			};
			class Unit3: Unit3
			{
				vehicle = "BG21_GER_WH_Pioneer_Explos";
			};
			class Unit4: Unit4
			{
				vehicle = "BG21_GER_WH_Pioneer_Explos";
			};
		};
		class BG21_GER_WH_PIONIER3: BG21_GER_WH_PIONIER1
		{
			name = "Pionier Gruppe (Mixed)";
			class Unit0: Unit0
			{
				vehicle = "BG21_GER_WH_SL";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_GER_WH_Pioneer_Explos";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_GER_WH_Pioneer_Explos";
			};
			class Unit3: Unit3
			{
				vehicle = "BG21_GER_WH_Pioneer_Mines";
			};
			class Unit4: Unit4
			{
				vehicle = "BG21_GER_WH_Pioneer_Mines";
			};
		};
		class BG21_GER_WH_AT: BG21_GER_WH_PIONIER1
		{
			name = "Ab. Gruppe";
			class Unit0: Unit0
			{
				vehicle = "BG21_GER_WH_SL";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_GER_WH_AT";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_GER_WH_AT_AS";
			};
			class Unit3: Unit3
			{
				vehicle = "BG21_GER_WH_AT";
			};
			class Unit4: Unit4
			{
				vehicle = "BG21_GER_WH_AT_AS";
			};
		};
		
		class BG21_GER_WH_INF1
		{
			name = "Inf. Gruppe (MG-34)";
			faction = "BG21_GER_WH";
			side = 1;
			aliveCategory = "Infantry";
			class Unit0
			{
				side = 1;
				vehicle = "BG21_GER_WH_SL";
				rank = "SERGEANT";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 1;
				vehicle = "BG21_GER_WH_TL_G43";
				rank = "CORPORAL";
				position[] = {1,-1,0};
			};
			class Unit2
			{
				side = 1;
				vehicle = "BG21_GER_WH_AT_pzft";
				rank = "PRIVATE";
				position[] = {2,-2,0};
			};
			class Unit3
			{
				side = 1;
				vehicle = "BG21_GER_WH_Rifleman_k98";
				rank = "PRIVATE";
				position[] = {3,-3,0};
			};
			class Unit4
			{
				side = 1;
				vehicle = "BG21_GER_WH_TL_K98";
				rank = "PRIVATE";
				position[] = {4,-4,0};
			};
			class Unit5
			{
				side = 1;
				vehicle = "BG21_GER_WH_MG_34";
				rank = "PRIVATE";
				position[] = {-1,-1,0};
			};
			class Unit6
			{
				side = 1;
				vehicle = "BG21_GER_WH_MG_AS";
				rank = "PRIVATE";
				position[] = {-2,-2,0};
			};
		};
		class BG21_GER_WH_INF2: BG21_GER_WH_INF1
		{
			name = "Inf. Gruppe (MG-42)";
			class Unit0: Unit0
			{
				vehicle = "BG21_GER_WH_SL";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_GER_WH_TL_G43";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_GER_WH_AT_pzft";
			};
			class Unit3: Unit3
			{
				vehicle = "BG21_GER_WH_Rifleman_k98";
			};
			class Unit4: Unit4
			{
				vehicle = "BG21_GER_WH_TL_K98";
			};
			class Unit5: Unit5
			{
				vehicle = "BG21_GER_WH_MG_34";
			};
			class Unit6: Unit6
			{
				vehicle = "BG21_GER_WH_MG_AS";
			};
		};
	};
	class Armored 
	{
		name = "2. Panzer";
		class BG21_GER_WH_TankCrew1
		{
			name = "Panzer Gruppe (3)";
			faction = "BG21_GER_WH";
			side = 1;
			aliveCategory = "Armored";
			class Unit0
			{
				side = 1;
				vehicle = "BG21_GER_WH_Tank_Commander";
				rank = "LIEUTENANT";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 1;
				vehicle = "BG21_GER_WH_Tank_Crew";
				rank = "SERGEANT";
				position[] = {1,-1,0};
			};
			class Unit2
			{
				side = 1;
				vehicle = "BG21_GER_WH_Tank_Crew";
				rank = "PRIVATE";
				position[] = {2,-2,0};
			};
		};
		class BG21_GER_WH_TankCrew2
		{
			name = "Panzer Gruppe (2)";
			faction = "BG21_GER_WH";
			side = 1;
			aliveCategory = "Armored";
			class Unit0
			{
				side = 1;
				vehicle = "BG21_GER_WH_Tank_Commander";
				rank = "SERGEANT";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 1;
				vehicle = "BG21_GER_WH_Tank_Crew";
				rank = "PRIVATE";
				position[] = {1,-1,0};
			};
		};
	};
};
class BG21_GER_WH_W
{
	name = "[BG21] Wh (Winter)";
	class Infantry
	{
		name = "1. Infantry";
		class BG21_GER_WH_W_HQ
		{
			name = "Befehl Gruppe";
			faction = "BG21_GER_WH";
			side = 1;
			aliveCategory = "Infantry";
			class Unit0
			{
				side = 1;
				vehicle = "BG21_GER_WH_W_PL";
				rank = "CAPTAIN";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 1;
				vehicle = "BG21_GER_WH_W_PL2";
				rank = "LIEUTENANT";
				position[] = {1,-1,0};
			};
			class Unit2
			{
				side = 1;
				vehicle = "BG21_GER_WH_W_Medic";
				rank = "CORPORAL";
				position[] = {2,-2,0};
			};
			class Unit3
			{
				side = 1;
				vehicle = "BG21_GER_WH_W_Sniper";
				rank = "PRIVATE";
				position[] = {3,-3,0};
			};
			class Unit4
			{
				side = 1;
				vehicle = "BG21_GER_WH_W_Rifleman_k98";
				rank = "PRIVATE";
				position[] = {-1,-1,0};
			};
		};
		
		class BG21_GER_WH_W_PIONIER1: BG21_GER_WH_W_HQ
		{
			name = "Pionier Gruppe (Mines)";
			class Unit0: Unit0
			{
				vehicle = "BG21_GER_WH_W_SL";
				rank = "SERGEANT";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_GER_WH_W_Pioneer_Mines";
				rank = "PRIVATE";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_GER_WH_W_Pioneer_Mines";
				rank = "PRIVATE";
			};
			class Unit3: Unit3
			{
				vehicle = "BG21_GER_WH_W_Pioneer_Mines";
				rank = "PRIVATE";
			};
			class Unit4: Unit4
			{
				vehicle = "BG21_GER_WH_W_Pioneer_Mines";
				rank = "PRIVATE";
			};
		};
		class BG21_GER_WH_W_PIONIER2: BG21_GER_WH_W_PIONIER1
		{
			name = "Pionier Gruppe (Mines)";
			class Unit0: Unit0
			{
				vehicle = "BG21_GER_WH_W_SL";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_GER_WH_W_Pioneer_Explos";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_GER_WH_W_Pioneer_Explos";
			};
			class Unit3: Unit3
			{
				vehicle = "BG21_GER_WH_W_Pioneer_Explos";
			};
			class Unit4: Unit4
			{
				vehicle = "BG21_GER_WH_W_Pioneer_Explos";
			};
		};
		class BG21_GER_WH_W_PIONIER3: BG21_GER_WH_W_PIONIER1
		{
			name = "Pionier Gruppe (Mixed)";
			class Unit0: Unit0
			{
				vehicle = "BG21_GER_WH_W_SL";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_GER_WH_W_Pioneer_Explos";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_GER_WH_W_Pioneer_Explos";
			};
			class Unit3: Unit3
			{
				vehicle = "BG21_GER_WH_W_Pioneer_Mines";
			};
			class Unit4: Unit4
			{
				vehicle = "BG21_GER_WH_W_Pioneer_Mines";
			};
		};
		class BG21_GER_WH_W_AT: BG21_GER_WH_W_PIONIER1
		{
			name = "Ab. Gruppe";
			class Unit0: Unit0
			{
				vehicle = "BG21_GER_WH_W_SL";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_GER_WH_W_AT";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_GER_WH_W_AT_AS";
			};
			class Unit3: Unit3
			{
				vehicle = "BG21_GER_WH_W_AT";
			};
			class Unit4: Unit4
			{
				vehicle = "BG21_GER_WH_W_AT_AS";
			};
		};
		
		class BG21_GER_WH_W_INF1
		{
			name = "Inf. Gruppe (MG-34)";
			faction = "BG21_GER_WH";
			side = 1;
			aliveCategory = "Infantry";
			class Unit0
			{
				side = 1;
				vehicle = "BG21_GER_WH_W_SL";
				rank = "SERGEANT";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 1;
				vehicle = "BG21_GER_WH_W_TL_G43";
				rank = "CORPORAL";
				position[] = {1,-1,0};
			};
			class Unit2
			{
				side = 1;
				vehicle = "BG21_GER_WH_W_AT_pzft";
				rank = "PRIVATE";
				position[] = {2,-2,0};
			};
			class Unit3
			{
				side = 1;
				vehicle = "BG21_GER_WH_W_Rifleman_k98";
				rank = "PRIVATE";
				position[] = {3,-3,0};
			};
			class Unit4
			{
				side = 1;
				vehicle = "BG21_GER_WH_W_TL_K98";
				rank = "PRIVATE";
				position[] = {4,-4,0};
			};
			class Unit5
			{
				side = 1;
				vehicle = "BG21_GER_WH_W_MG_34";
				rank = "PRIVATE";
				position[] = {-1,-1,0};
			};
			class Unit6
			{
				side = 1;
				vehicle = "BG21_GER_WH_W_MG_AS";
				rank = "PRIVATE";
				position[] = {-2,-2,0};
			};
		};
		class BG21_GER_WH_W_INF2: BG21_GER_WH_W_INF1
		{
			name = "Inf. Gruppe (MG-42)";
			class Unit0: Unit0
			{
				vehicle = "BG21_GER_WH_W_SL";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_GER_WH_W_TL_G43";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_GER_WH_W_AT_pzft";
			};
			class Unit3: Unit3
			{
				vehicle = "BG21_GER_WH_W_Rifleman_k98";
			};
			class Unit4: Unit4
			{
				vehicle = "BG21_GER_WH_W_TL_K98";
			};
			class Unit5: Unit5
			{
				vehicle = "BG21_GER_WH_W_MG_34";
			};
			class Unit6: Unit6
			{
				vehicle = "BG21_GER_WH_W_MG_AS";
			};
		};
	};
	class Armored 
	{
		name = "2. Panzer";
		class BG21_GER_WH_W_TankCrew1
		{
			name = "Panzer Gruppe (3)";
			faction = "BG21_GER_WH";
			side = 1;
			aliveCategory = "Armored";
			class Unit0
			{
				side = 1;
				vehicle = "BG21_GER_WH_W_Tank_Commander";
				rank = "LIEUTENANT";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 1;
				vehicle = "BG21_GER_WH_W_Tank_Crew";
				rank = "SERGEANT";
				position[] = {1,-1,0};
			};
			class Unit2
			{
				side = 1;
				vehicle = "BG21_GER_WH_W_Tank_Crew";
				rank = "PRIVATE";
				position[] = {2,-2,0};
			};
		};
		class BG21_GER_WH_W_TankCrew2
		{
			name = "Panzer Gruppe (2)";
			faction = "BG21_GER_WH";
			side = 1;
			aliveCategory = "Armored";
			class Unit0
			{
				side = 1;
				vehicle = "BG21_GER_WH_W_Tank_Commander";
				rank = "SERGEANT";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 1;
				vehicle = "BG21_GER_WH_W_Tank_Crew";
				rank = "PRIVATE";
				position[] = {1,-1,0};
			};
		};
	};
};