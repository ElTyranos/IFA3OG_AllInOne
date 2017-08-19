class CfgPatches
{
	class BG21_IFA3_OpenGames
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.00;
		requiredAddons[] = {"WW2_Core_c_WW2_Core_c","fow_characters_c","LEN_IFA3_WP"};
		author[] = {"El Tyranos"};
	};
	#include "Compatibility\cfgPatches.hpp"
};
#include "CfgRagdolls.hpp"
#include "CfgFunctions.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicleClasses.hpp"
#include "CfgMarkers.hpp"
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
	#include "IJA\cfgWeapons.hpp"
};
class CfgVehicles
{
	#include "SOV\cfgVehicles.hpp"
	#include "GER\cfgVehicles.hpp"
	#include "US\cfgVehicles.hpp"
	#include "UK\cfgVehicles.hpp"
	#include "IJA\cfgVehicles.hpp"
};
class CfgGroups
{
	class West
	{
		#include "GER\CfgGroups.hpp"
		#include "IJA\CfgGroups.hpp"
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
