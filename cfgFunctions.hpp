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
			class Spectator
			{
				file="\WW2OG_AllInOne\fnc\fn_onPlayerKilled.sqf";
			};
			class IntroScreen
			{
				file="\WW2OG_AllInOne\fnc\fn_IntroScreen.sqf";
			};
			class TeleportGlider
			{
				file="\WW2OG_AllInOne\fnc\fn_teleportGlider.sqf";
			};
			class InsertPointMarker
			{
				file="\WW2OG_AllInOne\fnc\fn_InsertPointMarker.sqf";
			};
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
		class ACE3
		{
			class StartOnSafe
			{
				file = "\WW2OG_AllInOne\fnc\fn_StartOnSafe.sqf";
			};
			class StartWithEarplugs
			{
				file = "\WW2OG_AllInOne\fnc\fn_StartWithEarplugs.sqf";
			};
		};
	};
};
