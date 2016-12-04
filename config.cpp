class CfgPatches
{
	class BG21_IFA3_OpenGames
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.00;
		requiredAddons[] = {};
	};
};
#include "CfgFunctions.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicleClasses.hpp"
#include "CfgMacros.hpp"

class cfgWeapons
{
	#include "SOV\cfgWeapons.hpp"
	#include "GER\cfgWeapons.hpp"
	#include "US\cfgWeapons.hpp"
	#include "UK\cfgWeapons.hpp"
};
class CfgVehicles
{
	#include "SOV\cfgVehicles.hpp"
	#include "GER\cfgVehicles.hpp"
	#include "US\cfgVehicles.hpp"
	#include "UK\cfgVehicles.hpp"
};
class CfgGroups
{
	class West
	{
		#include "GER\CfgGroups.hpp"
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