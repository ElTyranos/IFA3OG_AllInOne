// FOW Vests
class ItemCore;
class Vest_Camo_Base: ItemCore {
	class ItemInfo;
};
class fow_v_base: Vest_Camo_Base {
	class ItemInfo: ItemInfo
	{
		containerClass = "Supply70";
	};
};

// LEN Sounds
class LIB_RIFLE;
class LIB_K98: LIB_RIFLE {
	class Single;
};
class LEN_SMLE_No4Mk1: LIB_K98 {
	class Single : Single {
		reloadTime = 1;
		dispersion = 0.0008;
		aiDispersionCoefX = 7;
		aiDispersionCoefY = 7;
		aiRateOfFire = 0.001;
		aiRateOfFireDistance = 10;
		minRange = 0;
		minRangeProbab = 0.2;
		midRange = 5;
		midRangeProbab = 0.7;
		maxRange = 10;
		maxRangeProbab = 0.05;
		
		sounds[] = {"StandardSound"};
		class BaseSoundModeType;
		class StandardSound : BaseSoundModeType {
			soundSetShot[] = {"FoW_SMLE_Firing", "FoW_Rifle_EFX"};
		};
	};
};
