class LIB_M4A3_75;
class BG21_M4A3_75: LIB_M4A3_75 {
	faction = "BG21_US";
	vehicleClass = "BG21_Tanks";
	ARMORED_VHL_TRANSPORT_ITEMS
};

class LIB_P47;
class BG21_P47: LIB_P47 {
	faction = "BG21_US";
	vehicleClass = "BG21_Air";
	class TransportItems {};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class LIB_US_P39;
class BG21_US_P39: LIB_US_P39 {
	faction = "BG21_US";
	vehicleClass = "BG21_Air";
	class TransportItems {};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};

class LIB_US_M3_Halftrack;
class LIB_US_Scout_M3_FFV;
class BG21_US_M3_Halftrack: LIB_US_M3_Halftrack {
	faction = "BG21_US";
	vehicleClass = "BG21_APC";
	COMMON_VHL_TRANSPORT_ITEMS
	US_VHL_TRANSPORT_WEAPONS
};
class BG21_US_Scout_M3_FFV: LIB_US_Scout_M3_FFV {
	faction = "BG21_US";
	vehicleClass = "BG21_APC";
	COMMON_VHL_TRANSPORT_ITEMS
	US_VHL_TRANSPORT_WEAPONS
};

class LIB_US_GMC_Open;
class LIB_US_GMC_Tent;
class LIB_US_GMC_Ammo;
class LIB_US_GMC_Ambulance;
class LIB_US_GMC_Parm;
class LIB_US_GMC_Fuel;
class BG21_GMC_Open: LIB_US_GMC_Open {
	faction = "BG21_US";
	vehicleClass = "BG21_Wheeled";
	COMMON_VHL_TRANSPORT_ITEMS
	US_VHL_TRANSPORT_WEAPONS
};
class BG21_GMC_Tent: LIB_US_GMC_Tent {
	faction = "BG21_US";
	vehicleClass = "BG21_Wheeled";
	COMMON_VHL_TRANSPORT_ITEMS
	US_VHL_TRANSPORT_WEAPONS
};
class BG21_GMC_Fuel: LIB_US_GMC_Fuel {
	faction = "BG21_US";
	vehicleClass = "BG21_Wheeled";
	COMMON_VHL_TRANSPORT_TOOLKIT
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class BG21_GMC_Med: LIB_US_GMC_Ambulance {
	faction = "BG21_US";
	vehicleClass = "BG21_Wheeled";
	COMMON_VHL_TRANSPORT_TOOLKIT
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class BG21_GMC_Repair: LIB_US_GMC_Parm {
	faction = "BG21_US";
	vehicleClass = "BG21_Wheeled";
	COMMON_VHL_TRANSPORT_TOOLKIT
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class BG21_GMC_Ammo: LIB_US_GMC_Ammo {
	faction = "BG21_US";
	vehicleClass = "BG21_Wheeled";
	COMMON_VHL_TRANSPORT_ITEMS
	US_VHL_TRANSPORT_WEAPONS
};

class LIB_US_Willys_MB;
class BG21_US_Willys_MB: LIB_US_Willys_MB {
	faction = "BG21_US";
	vehicleClass = "BG21_Wheeled";
	COMMON_VHL_TRANSPORT_TOOLKIT
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};