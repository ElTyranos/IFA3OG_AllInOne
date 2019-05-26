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
				file="\WW2OG_AllInOne\fnc\fn_DeathScream.sqf";
			};
		};
		class Mission
		{
			// class Log
			// {
				// file="\WW2OG_AllInOne\fnc\fn_log.sqf";
				// preInit = 1;
			// };
			// class isModLoaded
			// {
				// file="\WW2OG_AllInOne\fnc\fn_isModLoaded.sqf";
				// preInit = 1;
			// };
		};
		class MapHandler
		{
			class CoverMap
			{
				file = "\WW2OG_AllInOne\fnc\fn_CoverMap.sqf";
			};
			class OutofAera_Client
			{
				file = "\WW2OG_AllInOne\fnc\fn_OutofAera_client.sqf";
			};
			class OutofAera_Server
			{
				file = "\WW2OG_AllInOne\fnc\fn_OutofAera_server.sqf";
			};
		};
	};
};
