class CfgFunctions
{
	class BG21_IFA3_Functions
	{
		tag = "BG21_IFA3";
		class BG21_IFA3_Functions
		{
			file = "WW2OG_AllInOne\fnc";
			class random_gear
			{
				preInit = 1;
			};
		};
	};
	class BG21
	{
		class DeathScreams
		{
			class DeathScream
			{
				file="\WW2OG_AllInOne\fnc\DeathScream.sqf";
			};
		};
		class CoverMap
		{
			class Mainthread
			{
				file = "WW2OG_AllInOne\fnc\fn_CoverMap.sqf";
			};
		};
		class OutofAera
		{
			class Settings
			{
				file = "WW2OG_AllInOne\fnc\fn_OutofAera_PreInit.sqf";
			};
			class client
			{
				file = "WW2OG_AllInOne\fnc\fn_OutofAera_client.sqf";
			};
			class server
			{
				file = "WW2OG_AllInOne\fnc\fn_OutofAera_server.sqf";
			};
		};
	};
};
