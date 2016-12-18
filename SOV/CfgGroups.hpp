class BG21_SOV_RA
{
	name = "[BG21] SOV (Spring)";
	class Infantry
	{
		name = "1. Infantry";
		class BG21_SOV_RA_HQ
		{
			name = "HQ Gruppa";
			faction = "BG21_SOV_RA";
			side = 0;
			aliveCategory = "Infantry";
			class Unit0
			{
				side = 0;
				vehicle = "BG21_SOV_RA_PL";
				rank = "CAPTAIN";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "BG21_SOV_RA_PL2";
				rank = "LIEUTENANT";
				position[] = {1,-1,0};
			};
			class Unit2
			{
				side = 0;
				vehicle = "BG21_SOV_RA_Medic";
				rank = "CORPORAL";
				position[] = {2,-2,0};
			};
			class Unit3
			{
				side = 0;
				vehicle = "BG21_SOV_RA_Sniper";
				rank = "PRIVATE";
				position[] = {3,-3,0};
			};
			class Unit4
			{
				side = 0;
				vehicle = "BG21_SOV_RA_Rifleman_MOSIN";
				rank = "PRIVATE";
				position[] = {-1,-1,0};
			};
		};
		
		class BG21_SOV_RA_PIONIER1: BG21_SOV_RA_HQ
		{
			name = "Pionier Gruppa (Mines)";
			class Unit0: Unit0
			{
				vehicle = "BG21_SOV_RA_SL";
				rank = "SERGEANT";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_SOV_RA_Pioneer_Mines";
				rank = "PRIVATE";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_SOV_RA_Pioneer_Mines";
				rank = "PRIVATE";
			};
			class Unit3: Unit3
			{
				vehicle = "BG21_SOV_RA_Pioneer_Mines";
				rank = "PRIVATE";
			};
			class Unit4: Unit4
			{
				vehicle = "BG21_SOV_RA_Pioneer_Mines";
				rank = "PRIVATE";
			};
		};
		class BG21_SOV_RA_PIONIER2: BG21_SOV_RA_PIONIER1
		{
			name = "Pionier Gruppa (Explos)";
			class Unit0: Unit0
			{
				vehicle = "BG21_SOV_RA_SL";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_SOV_RA_Pioneer_Explos";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_SOV_RA_Pioneer_Explos";
			};
			class Unit3: Unit3
			{
				vehicle = "BG21_SOV_RA_Pioneer_Explos";
			};
			class Unit4: Unit4
			{
				vehicle = "BG21_SOV_RA_Pioneer_Explos";
			};
		};
		class BG21_SOV_RA_PIONIER3: BG21_SOV_RA_PIONIER1
		{
			name = "Pionier Gruppa (Mixed)";
			class Unit0: Unit0
			{
				vehicle = "BG21_SOV_RA_SL";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_SOV_RA_Pioneer_Explos";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_SOV_RA_Pioneer_Explos";
			};
			class Unit3: Unit3
			{
				vehicle = "BG21_SOV_RA_Pioneer_Mines";
			};
			class Unit4: Unit4
			{
				vehicle = "BG21_SOV_RA_Pioneer_Mines";
			};
		};
		class BG21_SOV_RA_AT: BG21_SOV_RA_PIONIER1
		{
			name = "AB. Gruppa";
			class Unit0: Unit0
			{
				vehicle = "BG21_SOV_RA_SL";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_SOV_RA_AT";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_SOV_RA_AT_AS";
			};
			class Unit3: Unit3
			{
				vehicle = "BG21_SOV_RA_AT";
			};
			class Unit4: Unit4
			{
				vehicle = "BG21_SOV_RA_AT_AS";
			};
		};
		
		class BG21_SOV_RA_INF1
		{
			name = "Inf. Gruppa";
			faction = "BG21_SOV_RA";
			side = 0;
			aliveCategory = "Infantry";
			class Unit0
			{
				side = 0;
				vehicle = "BG21_SOV_RA_SL";
				rank = "SERGEANT";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "BG21_SOV_RA_TL_SVT40";
				rank = "CORPORAL";
				position[] = {1,-1,0};
			};
			class Unit2
			{
				side = 0;
				vehicle = "BG21_SOV_RA_Rifleman_MOSIN";
				rank = "PRIVATE";
				position[] = {2,-2,0};
			};
			class Unit3
			{
				side = 0;
				vehicle = "BG21_SOV_RA_Rifleman_MOSIN";
				rank = "PRIVATE";
				position[] = {3,-3,0};
			};
			class Unit4
			{
				side = 0;
				vehicle = "BG21_SOV_RA_TL_MOSIN";
				rank = "PRIVATE";
				position[] = {4,-4,0};
			};
			class Unit5
			{
				side = 0;
				vehicle = "BG21_SOV_RA_MG";
				rank = "PRIVATE";
				position[] = {-1,-1,0};
			};
			class Unit6
			{
				side = 0;
				vehicle = "BG21_SOV_RA_MG_AS";
				rank = "PRIVATE";
				position[] = {-2,-2,0};
			};
		};
	};
	class Armored 
	{
		name = "2. Tanks";
		class BG21_SOV_RA_TankCrew1
		{
			name = "Motorizovannyy Gruppa (3)";
			faction = "BG21_SOV_RA";
			side = 0;
			aliveCategory = "Armored";
			class Unit0
			{
				side = 0;
				vehicle = "BG21_SOV_RA_Tank_Commander";
				rank = "LIEUTENANT";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "BG21_SOV_RA_Tank_Crew";
				rank = "SERGEANT";
				position[] = {1,-1,0};
			};
			class Unit2
			{
				side = 0;
				vehicle = "BG21_SOV_RA_Tank_Crew";
				rank = "PRIVATE";
				position[] = {2,-2,0};
			};
		};
		class BG21_SOV_RA_TankCrew2
		{
			name = "Motorizovannyy Gruppa (2)";
			faction = "BG21_SOV_RA";
			side = 0;
			aliveCategory = "Armored";
			class Unit0
			{
				side = 0;
				vehicle = "BG21_SOV_RA_Tank_Commander";
				rank = "SERGEANT";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "BG21_SOV_RA_Tank_Crew";
				rank = "PRIVATE";
				position[] = {1,-1,0};
			};
		};
	};
};
class BG21_SOV_RA_W
{
	name = "[BG21] SOV (Winter)";
	class Infantry
	{
		name = "1. Infantry";
		class BG21_SOV_RA_W_HQ
		{
			name = "HQ Gruppa";
			faction = "BG21_SOV_RA_WINTER";
			side = 0;
			aliveCategory = "Infantry";
			class Unit0
			{
				side = 0;
				vehicle = "BG21_SOV_RA_W_PL";
				rank = "CAPTAIN";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "BG21_SOV_RA_W_PL2";
				rank = "LIEUTENANT";
				position[] = {1,-1,0};
			};
			class Unit2
			{
				side = 0;
				vehicle = "BG21_SOV_RA_W_Medic";
				rank = "CORPORAL";
				position[] = {2,-2,0};
			};
			class Unit3
			{
				side = 0;
				vehicle = "BG21_SOV_RA_W_Sniper";
				rank = "PRIVATE";
				position[] = {3,-3,0};
			};
			class Unit4
			{
				side = 0;
				vehicle = "BG21_SOV_RA_W_Rifleman_MOSIN";
				rank = "PRIVATE";
				position[] = {-1,-1,0};
			};
		};
		class BG21_SOV_RA_W_PIONIER1: BG21_SOV_RA_W_HQ
		{
			name = "Pionier Gruppa (Mines)";
			class Unit0: Unit0
			{
				vehicle = "BG21_SOV_RA_W_SL";
				rank = "SERGEANT";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_SOV_RA_W_Pioneer_Mines";
				rank = "PRIVATE";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_SOV_RA_W_Pioneer_Mines";
				rank = "PRIVATE";
			};
			class Unit3: Unit3
			{
				vehicle = "BG21_SOV_RA_W_Pioneer_Mines";
				rank = "PRIVATE";
			};
			class Unit4: Unit4
			{
				vehicle = "BG21_SOV_RA_W_Pioneer_Mines";
				rank = "PRIVATE";
			};
		};
		class BG21_SOV_RA_W_PIONIER2: BG21_SOV_RA_W_PIONIER1
		{
			name = "Pionier Gruppa (Mines)";
			class Unit0: Unit0
			{
				vehicle = "BG21_SOV_RA_W_SL";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_SOV_RA_W_Pioneer_Explos";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_SOV_RA_W_Pioneer_Explos";
			};
			class Unit3: Unit3
			{
				vehicle = "BG21_SOV_RA_W_Pioneer_Explos";
			};
			class Unit4: Unit4
			{
				vehicle = "BG21_SOV_RA_W_Pioneer_Explos";
			};
		};
		class BG21_SOV_RA_W_PIONIER3: BG21_SOV_RA_W_PIONIER1
		{
			name = "Pionier Gruppa (Mixed)";
			class Unit0: Unit0
			{
				vehicle = "BG21_SOV_RA_W_SL";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_SOV_RA_W_Pioneer_Explos";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_SOV_RA_W_Pioneer_Explos";
			};
			class Unit3: Unit3
			{
				vehicle = "BG21_SOV_RA_W_Pioneer_Mines";
			};
			class Unit4: Unit4
			{
				vehicle = "BG21_SOV_RA_W_Pioneer_Mines";
			};
		};
		class BG21_SOV_RA_W_AT: BG21_SOV_RA_W_PIONIER1
		{
			name = "AB. Gruppa";
			class Unit0: Unit0
			{
				vehicle = "BG21_SOV_RA_W_SL";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_SOV_RA_W_AT";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_SOV_RA_W_AT_AS";
			};
			class Unit3: Unit3
			{
				vehicle = "BG21_SOV_RA_W_AT";
			};
			class Unit4: Unit4
			{
				vehicle = "BG21_SOV_RA_W_AT_AS";
			};
		};
		class BG21_SOV_RA_W_INF1
		{
			name = "Inf. Gruppa";
			faction = "BG21_SOV_RA_WINTER";
			side = 0;
			aliveCategory = "Infantry";
			class Unit0
			{
				side = 0;
				vehicle = "BG21_SOV_RA_W_SL";
				rank = "SERGEANT";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "BG21_SOV_RA_W_TL_SVT40";
				rank = "CORPORAL";
				position[] = {1,-1,0};
			};
			class Unit2
			{
				side = 0;
				vehicle = "BG21_SOV_RA_W_Rifleman_MOSIN";
				rank = "PRIVATE";
				position[] = {2,-2,0};
			};
			class Unit3
			{
				side = 0;
				vehicle = "BG21_SOV_RA_W_Rifleman_MOSIN";
				rank = "PRIVATE";
				position[] = {3,-3,0};
			};
			class Unit4
			{
				side = 0;
				vehicle = "BG21_SOV_RA_W_TL_MOSIN";
				rank = "PRIVATE";
				position[] = {4,-4,0};
			};
			class Unit5
			{
				side = 0;
				vehicle = "BG21_SOV_RA_W_MG";
				rank = "PRIVATE";
				position[] = {-1,-1,0};
			};
			class Unit6
			{
				side = 0;
				vehicle = "BG21_SOV_RA_W_MG_AS";
				rank = "PRIVATE";
				position[] = {-2,-2,0};
			};
		};
	};
};