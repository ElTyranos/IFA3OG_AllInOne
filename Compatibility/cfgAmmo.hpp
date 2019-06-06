class LIB_Bullet_AA_base;
class LIB_Fake_Flak: LIB_Bullet_AA_base
{
	hit = 40;
	indirectHit = 4;
	indirectHitRange = 3;
	caliber = 1.9;
	model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red.p3d";
	tracerEndTime = 3.6;
	LIB_FLAK_Ammo = 1;
	LIB_FLAK_CanAdjust = 0;
	LIB_FLAK_AdjustmentPerAmmo = 0;
	//~2000m
	LIB_FLAK_DefaultRange = 2 * 500/2 * 0.9;//time in seconds * initSpeed * 0.9 (air resistance)
	LIB_FLAK_MinimumRange = -1;
	LIB_FLAK_MaximumRange = -1;
	LIB_FLAK_ExplosionTypeAmmo = "LIB_Flak38Explosion";
};
