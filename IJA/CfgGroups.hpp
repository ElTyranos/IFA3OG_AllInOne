class BG21_IJA
{
	name = "[BG21] IJA";
	class Infantry
	{
		name = "1. Infantry";
		class BG21_IJA_HQ
		{
			name = "HQ Squad";
			faction = "BG21_IJA";
			side = 1;
			aliveCategory = "Infantry";
			class Unit0
			{
				side = 1;
				vehicle = "BG21_IJA_PL";
				rank = "CAPTAIN";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 1;
				vehicle = "BG21_IJA_PL2";
				rank = "LIEUTENANT";
				position[] = {1,-1,0};
			};
			class Unit2
			{
				side = 1;
				vehicle = "BG21_IJA_Medic";
				rank = "CORPORAL";
				position[] = {2,-2,0};
			};
			class Unit3
			{
				side = 1;
				vehicle = "BG21_IJA_Sniper";
				rank = "PRIVATE";
				position[] = {3,-3,0};
			};
			class Unit4
			{
				side = 1;
				vehicle = "BG21_IJA_Rifleman";
				rank = "PRIVATE";
				position[] = {-1,-1,0};
			};
		};
		class BG21_IJA_RECON: BG21_IJA_HQ
		{
			name = "Recon Squad";
			class Unit0: Unit0
			{
				vehicle = "BG21_IJA_SL_Recon";
				rank = "SERGEANT";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_IJA_Recon";
				rank = "PRIVATE";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_IJA_Recon";
				rank = "PRIVATE";
			};
			class Unit3: Unit3
			{
				vehicle = "BG21_IJA_Recon";
				rank = "PRIVATE";
			};
			class Unit4: Unit4
			{
				vehicle = "BG21_IJA_Recon";
				rank = "PRIVATE";
			};
		};		
		class BG21_IJA_ENGINEER1: BG21_IJA_HQ
		{
			name = "Engineer Squad (Mines)";
			class Unit0: Unit0
			{
				vehicle = "BG21_IJA_SL";
				rank = "SERGEANT";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_IJA_Engineer_Mines";
				rank = "PRIVATE";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_IJA_Engineer_Mines";
				rank = "PRIVATE";
			};
			class Unit3: Unit3
			{
				vehicle = "BG21_IJA_Engineer_Mines";
				rank = "PRIVATE";
			};
			class Unit4: Unit4
			{
				vehicle = "BG21_IJA_Engineer_Mines";
				rank = "PRIVATE";
			};
		};
		class BG21_IJA_ENGINEER2: BG21_IJA_ENGINEER1
		{
			name = "Engineer Squad (Explos)";
			class Unit0: Unit0
			{
				vehicle = "BG21_IJA_SL";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_IJA_Engineer_Explos";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_IJA_Engineer_Explos";
			};
			class Unit3: Unit3
			{
				vehicle = "BG21_IJA_Engineer_Explos";
			};
			class Unit4: Unit4
			{
				vehicle = "BG21_IJA_Engineer_Explos";
			};
		};
		class BG21_IJA_ENGINEER3: BG21_IJA_ENGINEER1
		{
			name = "Engineer Squad (Mixed)";
			class Unit0: Unit0
			{
				vehicle = "BG21_IJA_SL";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_IJA_Engineer_Explos";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_IJA_Engineer_Explos";
			};
			class Unit3: Unit3
			{
				vehicle = "BG21_IJA_Engineer_Mines";
			};
			class Unit4: Unit4
			{
				vehicle = "BG21_IJA_Engineer_Mines";
			};
		};
		class BG21_IJA_AT: BG21_IJA_ENGINEER1
		{
			name = "AT Squad";
			class Unit0: Unit0
			{
				vehicle = "BG21_IJA_SL";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_IJA_AT";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_IJA_AT_AS";
			};
			class Unit3: Unit3
			{
				vehicle = "BG21_IJA_AT";
			};
			class Unit4: Unit4
			{
				vehicle = "BG21_IJA_AT_AS";
			};
		};
		class BG21_IJA_INF1
		{
			name = "Infantry Squad";
			faction = "BG21_IJA";
			side = 1;
			aliveCategory = "Infantry";
			class Unit0
			{
				side = 1;
				vehicle = "BG21_IJA_SL";
				rank = "SERGEANT";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 1;
				vehicle = "BG21_IJA_TL";
				rank = "CORPORAL";
				position[] = {1,-1,0};
			};
			class Unit2
			{
				side = 1;
				vehicle = "BG21_IJA_Rifleman";
				rank = "PRIVATE";
				position[] = {2,-2,0};
			};
			class Unit3
			{
				side = 1;
				vehicle = "BG21_IJA_Rifleman";
				rank = "PRIVATE";
				position[] = {3,-3,0};
			};
			class Unit4
			{
				side = 1;
				vehicle = "BG21_IJA_TL";
				rank = "PRIVATE";
				position[] = {4,-4,0};
			};
			class Unit5
			{
				side = 1;
				vehicle = "BG21_IJA_MG";
				rank = "PRIVATE";
				position[] = {-1,-1,0};
			};
			class Unit6
			{
				side = 1;
				vehicle = "BG21_IJA_MG_AS";
				rank = "PRIVATE";
				position[] = {-2,-2,0};
			};
		};
	};
};
