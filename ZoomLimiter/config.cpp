class CfgPatches
{
	class WW2_Core_c_Optional_Zoom_Limiter_c
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"WW2_Assets_c_Weapons_InfantryWeapons_c"};
	};
};
class cfgWeapons
{
	class SlotInfo;
	class Launcher_Base_F;
	class MGun;
	class Pistol_Base_F;
	class Rifle_Base_F;
	class Rifle_Long_Base_F;
	class Rifle_Short_Base_F;
	class LIB_DT;

	// IF
	class LIB_PISTOL: Pistol_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomInit = 0.4; // 1
		opticsZoomMax = 0.4;
	};
	class LIB_SMG: Rifle_Short_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomInit = 0.4; // 1
		opticsZoomMax = 0.4;
	};
	class LIB_RIFLE: Rifle_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomInit = 0.4; // 1
		opticsZoomMax = 0.4;
	};
	class LIB_LMG: Rifle_Long_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomInit = 0.4; // 1
		opticsZoomMax = 0.4;
	};
	class LIB_SRIFLE: Rifle_Long_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomInit = 0.4; // 1
		opticsZoomMax = 0.4;
	};
	class LIB_K98ZF39: LIB_SRIFLE
	{
		class OpticsModes
		{
			class Scope
			{
				opticsZoomMin = 0.1;
				opticsZoomInit = 0.1;
				opticsZoomMax = 0.1;
				discretefov[] = {0.1,0.1};
				discreteInitIndex = 0;
			};
			class Ironsights
			{
				opticsZoomMin = 0.4;
				opticsZoomInit = 0.4; // 1
				opticsZoomMax = 0.4;
				discretefov[] = {0.75,0.75};
				discreteInitIndex = 0;
			};
		};
	};
	class LIB_M9130PU: LIB_SRIFLE
	{
		class OpticsModes
		{
			class Scope
			{
				opticsZoomMin = 0.114;
				opticsZoomInit = 0.114;
				opticsZoomMax = 0.114;
				discretefov[] = {0.114,0.114};
				discreteInitIndex = 0;
			};
			class Ironsights
			{
				opticsZoomMin = 0.4;
				opticsZoomInit = 0.4; // 1
				opticsZoomMax = 0.4;
				discretefov[] = {0.75,0.75};
				discreteInitIndex = 0;
			};
		};
	};
	class LIB_M1903A4_Springfield: LIB_SRIFLE
	{
		opticsZoomMin = 0.18;
		opticsZoomInit = 0.18;
		opticsZoomMax = 0.18;
	};
	class LIB_LAUNCHER: Launcher_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomInit = 0.4; // 1
		opticsZoomMax = 0.4;
	};
	class LIB_PzFaust_30m: LIB_LAUNCHER
	{
		opticsZoomMin = 0.4;
		opticsZoomInit = 0.4; // 1
		opticsZoomMax = 0.4;
	};
	class LIB_DT_OPTIC: LIB_DT
	{
		opticsZoomMin = 0.194;
		opticsZoomInit = 0.194;
		opticsZoomMax = 0.194;
	};

	// FOW
	class fow_rifle_base : Rifle_Base_F {
			opticsZoomMin = 0.4;
			opticsZoomInit = 0.4;
			opticsZoomMax = 0.4;
	};

	// LEN
	class LIB_K98: LIB_RIFLE {
		
	};
	class LEN_SMLE_No4Mk1: LIB_K98
	{
		class OpticsModes
		{
			class Ironsights
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsFlare = 0;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomMin = 0.4;
				opticsZoomMax = 0.4;
				opticsZoomInit = 0.4;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 1;
				distanceZoomMax = 300;
				distanceZoomMin = 300;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsDisablePeripherialVision = 0;
				cameraDir = "";
			};
		};
		class WeaponSlotsInfo
		{
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"Len_ACC_No4_Bayo"};
			};
			class CowsSlot{};
			class PointerSlot{};
			class UnderBarrelSlot{};
		};
	};
	class LEN_SMLE_No4Mk1T: LEN_SMLE_No4Mk1
	{
		class OpticsModes
		{
			class Scope
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur3"};
				opticsZoomMin = 0.0425;
				opticsZoomMax = 0.0425;
				opticsZoomInit = 0.0425;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = "true";
				opticsDisablePeripherialVision = "true";
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				discreteDistance[] = {100,200,300,400,500,600,700,800};
				discreteDistanceInitIndex = 2;
				cameraDir = "";
			};
			class Ironsights: Scope
			{
				opticsID = 2;
				useModelOptics = 0;
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.4;
				opticsZoomMax = 0.4;
				opticsZoomInit = 0.4;
				memoryPointCamera = "eye";
				visionMode[] = {};
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				discreteDistance[] = {100,200,300,400};
				discreteDistanceInitIndex = 0;
			};
		};
	};

};
