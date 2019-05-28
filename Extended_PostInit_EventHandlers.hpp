class Extended_PostInit_EventHandlers
{
	class BG21_DeathScreams_Init
	{
		clientInit = "call compile preProcessFileLineNumbers '\WW2OG_AllInOne\fnc\PostInit.sqf'";
	};
	class BG21_fnc_OutofAera_Client
	{
		clientInit = "[] spawn compile preProcessFileLineNumbers '\WW2OG_AllInOne\fnc\fn_OutofAera_client.sqf'";
	};
	class BG21_fnc_OutofAera_Server
	{
		serverInit = "[] spawn compile preProcessFileLineNumbers '\WW2OG_AllInOne\fnc\fn_OutofAera_server.sqf'";
	};
};
