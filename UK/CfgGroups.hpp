class BG21_UK_ARMY
{
	name = "[BG21] UK Army";
	class Infantry
	{
		name = "1. Infantry";
		class BG21_UK_ARMY_HQ
		{
			name = "HQ Squad";
			faction = "BG21_UK_ARMY";
			side = 1;
			aliveCategory = "Infantry";
			class Unit0
			{
				side = 1;
				vehicle = "BG21_UK_ARMY_PL";
				rank = "CAPTAIN";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 1;
				vehicle = "BG21_UK_ARMY_Recon";
				rank = "PRIVATE";
				position[] = {1,-1,0};
			};
			class Unit2
			{
				side = 1;
				vehicle = "BG21_UK_ARMY_Recon";
				rank = "PRIVATE";
				position[] = {2,-2,0};
			};
		};
		class BG21_UK_ARMY_RECON: BG21_UK_ARMY_HQ
		{
			name = "Recon Squad";
			class Unit0: Unit0
			{
				vehicle = "BG21_UK_ARMY_SL";
				rank = "SERGEANT";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_UK_ARMY_Recon";
				rank = "PRIVATE";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_UK_ARMY_Radio";
				rank = "PRIVATE";
			};
		};			
		class BG21_UK_ARMY_ENGINEER1: BG21_UK_ARMY_HQ
		{
			name = "Engineer Squad (Mines)";
			class Unit0: Unit0
			{
				vehicle = "BG21_UK_ARMY_Engineer_Mines";
				rank = "PRIVATE";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_UK_ARMY_Engineer_Mines";
				rank = "PRIVATE";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_UK_ARMY_Engineer_Mines";
				rank = "PRIVATE";
			};
		};
		class BG21_UK_ARMY_ENGINEER2: BG21_UK_ARMY_ENGINEER1
		{
			name = "Engineer Squad (Explos)";
			class Unit0: Unit0
			{
				vehicle = "BG21_UK_ARMY_Engineer_Explos";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_UK_ARMY_Engineer_Explos";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_UK_ARMY_Engineer_Explos";
			};
		};
		class BG21_UK_ARMY_ENGINEER3: BG21_UK_ARMY_ENGINEER1
		{
			name = "Engineer Squad (Mixed)";
			class Unit0: Unit0
			{
				vehicle = "BG21_UK_ARMY_SL";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_UK_ARMY_Engineer_Mines";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_UK_ARMY_Engineer_Explos";
			};
		};
		class BG21_UK_ARMY_AT: BG21_UK_ARMY_ENGINEER1
		{
			name = "AT Squad";
			class Unit0: Unit0
			{
				vehicle = "BG21_UK_ARMY_SL";
			};
			class Unit1: Unit1
			{
				vehicle = "BG21_UK_ARMY_AT";
			};
			class Unit2: Unit2
			{
				vehicle = "BG21_UK_ARMY_AT_AS";
			};
		};
		
		class BG21_UK_ARMY_INF1
		{
			name = "Inf. Squad";
			faction = "BG21_UK_ARMY";
			side = 1;
			aliveCategory = "Infantry";
			class Unit0
			{
				side = 1;
				vehicle = "BG21_UK_ARMY_SL";
				rank = "SERGEANT";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 1;
				vehicle = "BG21_UK_ARMY_TL";
				rank = "CORPORAL";
				position[] = {1,-1,0};
			};
			class Unit2
			{
				side = 1;
				vehicle = "BG21_UK_ARMY_Rifleman";
				rank = "PRIVATE";
				position[] = {2,-2,0};
			};
			class Unit3
			{
				side = 1;
				vehicle = "BG21_UK_ARMY_Rifleman";
				rank = "PRIVATE";
				position[] = {3,-3,0};
			};
			class Unit4
			{
				side = 1;
				vehicle = "BG21_UK_ARMY_Radio";
				rank = "PRIVATE";
				position[] = {4,-4,0};
			};
			class Unit5
			{
				side = 1;
				vehicle = "BG21_UK_ARMY_MG";
				rank = "PRIVATE";
				position[] = {-1,-1,0};
			};
			class Unit6
			{
				side = 1;
				vehicle = "BG21_UK_ARMY_MG_AS";
				rank = "PRIVATE";
				position[] = {-2,-2,0};
			};
		};
	};
};
