class Extended_PreInit_EventHandlers
{
	class BG21_fnc_OutofAera_Client
	{
		clientInit = "call compile preProcessFileLineNumbers '\WW2OG_AllInOne\fnc\fn_OutofAera_client.sqf'";
	};
	class BG21_fnc_OutofAera_Server
	{
		serverInit = "call compile preProcessFileLineNumbers '\WW2OG_AllInOne\fnc\fn_OutofAera_server.sqf'";
	};
	// class BG21_fnc_Log
	// {
		// serverInit = "call compile preProcessFileLineNumbers '\WW2OG_AllInOne\fnc\fn_log.sqf'";
	// };
	// class BG21_fnc_isModLoaded
	// {
		// serverInit = "call compile preProcessFileLineNumbers '\WW2OG_AllInOne\fnc\fn_isModLoaded.sqf'";
	// };
};
