class LIB_M1919A4;
class LIB_Fake_20mm: LIB_M1919A4
{
	author = "El Tyranos";
	scope = 1;
	displayName = "Fake 20mm";
	descriptionShort = "Fake 20mm";
	magazines[] = {"LIB_20Rnd_fake_20mm"};
	class Full: Mode_FullAuto {
		reloadTime = 0.075;
		dispersion = 0.009;
		sounds[] = {"StandardSound"};
		class StandardSound: BaseSoundModetype {
			soundSetShot[] = {"IFA3_flak38_Shot_SoundSet","IFA3_20mm_Tail_SoundSet"};
		};
	};
};

/*// FOW Vests
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

class fow_v_ija_grenadier: fow_v_base
{
class ItemInfo: ItemInfo
{
	containerClass = "Supply100";
};
};
class fow_v_ija_bayonet: fow_v_base
{	
class ItemInfo: ItemInfo
{
	containerClass = "Supply100";
};
};
class fow_v_ija_medic: fow_v_base
{
class ItemInfo: ItemInfo
{
	containerClass = "Supply100";
};
};
class fow_v_ija_mg: fow_v_base
{	
class ItemInfo: ItemInfo
{
	containerClass = "Supply100";
};
};
class fow_v_ija_nco: fow_v_base
{
class ItemInfo: ItemInfo
{
	containerClass = "Supply100";
};
};
class fow_v_ija_officer: fow_v_base
{
class ItemInfo: ItemInfo
{
	containerClass = "Supply100";
};
};
class fow_v_ija_rifle: fow_v_base
{
class ItemInfo: ItemInfo
{
	containerClass = "Supply100";
};
};
class fow_v_ija_mortar: fow_v_base
{
class ItemInfo: ItemInfo
{
	containerClass = "Supply100";
};
};
*/