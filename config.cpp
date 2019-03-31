class CfgPatches
{
	class BG21_IFA3_OpenGames
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.00;
		requiredAddons[] = {"WW2_Core_c_WW2_Core_c","CBA_Extended_EventHandlers"};
		authors[] = {"El Tyranos"};
	};
	#include "Compatibility\cfgPatches.hpp"
};

#include "Extended_killed_Eventhandlers.hpp"
#include "Extended_PostInit_EventHandlers.hpp"
// #include "CfgRagdolls.hpp" // Included in IFA3
#include "CfgFunctions.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicleClasses.hpp"
#include "CfgMarkers.hpp"
#include "CfgSounds.hpp"
#include "CfgDeathScreams.hpp"
#include "CfgMacros.hpp"

class cfgMagazines
{
	#include "Compatibility\cfgMagazines.hpp"
};
class cfgWeapons
{
	#include "Compatibility\cfgWeapons.hpp"
	#include "SOV\cfgWeapons.hpp"
	#include "GER\cfgWeapons.hpp"
	#include "US\cfgWeapons.hpp"
	#include "UK\cfgWeapons.hpp"
	// #include "IJA\cfgWeapons.hpp"
};
class CfgVehicles
{
	#include "SOV\cfgVehicles.hpp"
	#include "GER\cfgVehicles.hpp"
	#include "US\cfgVehicles.hpp"
	#include "UK\cfgVehicles.hpp"
	// #include "IJA\cfgVehicles.hpp"
};
class CfgGroups
{
	class West
	{
		#include "GER\CfgGroups.hpp"
		// #include "IJA\CfgGroups.hpp"
	};
	class East
	{
		#include "SOV\CfgGroups.hpp"
	};
	class Indep
	{
		#include "US\CfgGroups.hpp"
		#include "UK\CfgGroups.hpp"
	};	
};
