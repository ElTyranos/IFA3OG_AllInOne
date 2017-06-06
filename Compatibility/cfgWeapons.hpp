// FOW Vests
class ItemCore;
class Vest_Camo_Base;
class fow_v_base: Vest_Camo_Base {
	class ItemInfo;
};
class fow_v_uk_officer: fow_v_base
{
	class ItemInfo: ItemInfo
	{
		containerClass = "Supply100";
	};
};
class fow_v_uk_base: fow_v_base
{	
	class ItemInfo: ItemInfo
	{
		containerClass = "Supply100";
	};
};
class fow_v_uk_bren: fow_v_base
{
	class ItemInfo: ItemInfo
	{
		containerClass = "Supply100";
	};
};
class fow_v_uk_sten: fow_v_base
{
	class ItemInfo: ItemInfo
	{
		containerClass = "Supply100";
	};
};
class fow_v_uk_para_base: fow_v_base
{
	class ItemInfo: ItemInfo
	{
		containerClass = "Supply100";
	};
};
class fow_v_uk_para_sten: fow_v_base
{
	class ItemInfo: ItemInfo
	{
		containerClass = "Supply100";
	};
};
class fow_v_uk_para_bren: fow_v_base
{
	class ItemInfo: ItemInfo
	{
		containerClass = "Supply100";
	};
};

class fow_v_heer_p38: fow_v_base
{	
	class ItemInfo: ItemInfo
	{
		containerClass = "Supply100";
	};
};
class fow_v_heer_g43: fow_v_base
{	
	class ItemInfo: ItemInfo
	{
		containerClass = "Supply100";
	};
};
class fow_v_heer_k98: fow_v_base
{
	class ItemInfo: ItemInfo
	{
		containerClass = "Supply100";
	};
};
class fow_v_heer_k98_ass: fow_v_base
{
	class ItemInfo: ItemInfo
	{
		containerClass = "Supply100";
	};
};

class fow_v_heer_k98_light: fow_v_base
{
	class ItemInfo: ItemInfo
	{
		containerClass = "Supply100";
	};
};
class fow_v_heer_mg: fow_v_base
{	
	class ItemInfo: ItemInfo
	{
		containerClass = "Supply100";
	};
};
class fow_v_heer_mp40: fow_v_base
{	
	class ItemInfo: ItemInfo
	{
		containerClass = "Supply100";
	};
};
class fow_v_heer_mp40_nco: fow_v_base
{	
	class ItemInfo: ItemInfo
	{
		containerClass = "Supply100";
	};
};
class fow_v_heer_mp44: fow_v_base
{
	class ItemInfo: ItemInfo
	{
		containerClass = "Supply100";
	};
};
class fow_v_fall_bandoleer: fow_v_base
{
	class ItemInfo: ItemInfo
	{
		containerClass = "Supply100";
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
