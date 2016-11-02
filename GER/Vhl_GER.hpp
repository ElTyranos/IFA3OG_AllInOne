class LIB_PzKpfwIV_H;
class LIB_PzKpfwV;
class LIB_PzKpfwVI_B;
class LIB_PzKpfwVI_E;
class LIB_StuG_III_G;
class BG21_PzKpfwIV_H: LIB_PzKpfwIV_H {
	faction = "BG21_GER_WH";
	vehicleClass = "BG21_Tanks";
	ARMORED_VHL_TRANSPORT_ITEMS
};
class BG21_PzKpfwV: LIB_PzKpfwV {
	faction = "BG21_GER_WH";
	vehicleClass = "BG21_Tanks";
	ARMORED_VHL_TRANSPORT_ITEMS
};
class BG21_PzKpfwVI_B: LIB_PzKpfwVI_B {
	faction = "BG21_GER_WH";
	vehicleClass = "BG21_Tanks";
	ARMORED_VHL_TRANSPORT_ITEMS
};
class BG21_PzKpfwVI_E: LIB_PzKpfwVI_E {
	faction = "BG21_GER_WH";
	vehicleClass = "BG21_Tanks";
	ARMORED_VHL_TRANSPORT_ITEMS
};
class BG21_StuG_III_G: LIB_StuG_III_G {
	faction = "BG21_GER_WH";
	vehicleClass = "BG21_Tanks";
	ARMORED_VHL_TRANSPORT_ITEMS
};

class LIB_Ju87;
class LIB_FW190F8;
class BG21_Ju87: LIB_Ju87 {
	faction = "BG21_GER_WH";
	vehicleClass = "BG21_Air";
	class TransportItems {};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class BG21_FW190F8: LIB_FW190F8 {
	faction = "BG21_GER_WH";
	vehicleClass = "BG21_Air";
	class TransportItems {};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};

class LIB_SdKfz251_FFV;
class LIB_SdKfz_7;
class LIB_SdKfz_7_AA;
class BG21_SdKfz251_FFV: LIB_SdKfz251_FFV {
	faction = "BG21_GER_WH";
	vehicleClass = "BG21_APC";
	COMMON_VHL_TRANSPORT_ITEMS
	GER_VHL_TRANSPORT_WEAPONS
};
class BG21_SdKfz_7: LIB_SdKfz_7 {
	faction = "BG21_GER_WH";
	vehicleClass = "BG21_APC";
	COMMON_VHL_TRANSPORT_ITEMS
	GER_VHL_TRANSPORT_WEAPONS
};
class BG21_SdKfz_7_AA: LIB_SdKfz_7_AA {
	faction = "BG21_GER_WH";
	vehicleClass = "BG21_APC";
	COMMON_VHL_TRANSPORT_TOOLKIT
};

class LIB_opelblitz_open_y_camo;
class LIB_opelblitz_tent_y_camo;
class LIB_opelblitz_fuel;
class LIB_opelblitz_ambulance;
class LIB_opelblitz_parm;
class LIB_opelblitz_ammo;
class BG21_OB_Open: LIB_opelblitz_open_y_camo {
	faction = "BG21_GER_WH";
	vehicleClass = "BG21_Wheeled";
	COMMON_VHL_TRANSPORT_ITEMS
	GER_VHL_TRANSPORT_WEAPONS
};
class BG21_OB_Tent: LIB_opelblitz_tent_y_camo {
	faction = "BG21_GER_WH";
	vehicleClass = "BG21_Wheeled";
	COMMON_VHL_TRANSPORT_ITEMS
	GER_VHL_TRANSPORT_WEAPONS
};
class BG21_OB_Fuel: LIB_opelblitz_fuel {
	faction = "BG21_GER_WH";
	vehicleClass = "BG21_Wheeled";
	COMMON_VHL_TRANSPORT_TOOLKIT
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class BG21_OB_Med: LIB_opelblitz_ambulance {
	faction = "BG21_GER_WH";
	vehicleClass = "BG21_Wheeled";
	COMMON_VHL_TRANSPORT_TOOLKIT
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class BG21_OB_Repair: LIB_opelblitz_parm {
	faction = "BG21_GER_WH";
	vehicleClass = "BG21_Wheeled";
	COMMON_VHL_TRANSPORT_TOOLKIT
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class BG21_OB_Ammo: LIB_opelblitz_ammo {
	faction = "BG21_GER_WH";
	vehicleClass = "BG21_Wheeled";
	COMMON_VHL_TRANSPORT_ITEMS
	GER_VHL_TRANSPORT_WEAPONS
};

class LIB_Kfz1;
class LIB_Kfz1_MG42;
class BG21_Kfz1: LIB_Kfz1 {
	faction = "BG21_GER_WH";
	vehicleClass = "BG21_Wheeled";
	COMMON_VHL_TRANSPORT_TOOLKIT
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class BG21_Kfz1_MG42: LIB_Kfz1_MG42 {
	faction = "BG21_GER_WH";
	vehicleClass = "BG21_Wheeled";
	COMMON_VHL_TRANSPORT_TOOLKIT
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
