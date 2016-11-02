class LIB_JS2_43;
class LIB_t34_76;
class LIB_t34_85;
class LIB_SU85;
class BG21_JS2_43: LIB_JS2_43 {
	faction = "BG21_SOV_RA";
	vehicleClass = "BG21_Tanks";
	ARMORED_VHL_TRANSPORT_ITEMS
};
class BG21_t34_76: LIB_t34_76 {
	faction = "BG21_SOV_RA";
	vehicleClass = "BG21_Tanks";
	ARMORED_VHL_TRANSPORT_ITEMS
};
class BG21_t34_85: LIB_t34_85 {
	faction = "BG21_SOV_RA";
	vehicleClass = "BG21_Tanks";
	ARMORED_VHL_TRANSPORT_ITEMS
};
class BG21_SU85: LIB_SU85 {
	faction = "BG21_SOV_RA";
	vehicleClass = "BG21_Tanks";
	ARMORED_VHL_TRANSPORT_ITEMS
};

class LIB_Pe2;
class LIB_P39;
class BG21_Pe2: LIB_Pe2 {
	faction = "BG21_SOV_RA";
	vehicleClass = "BG21_Air";
	class TransportItems {};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class BG21_P39: LIB_P39 {
	faction = "BG21_SOV_RA";
	vehicleClass = "BG21_Air";
	class TransportItems {};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};

class LIB_Scout_M3_FFV;
class LIB_SOV_M3_Halftrack;


// class LIB_Scout_M3_FFV {
	// faction = "BG21_SOV_RA";
	// vehicleClass = "BG21_APC";
	// COMMON_VHL_TRANSPORT_ITEMS
	// SOV_VHL_TRANSPORT_WEAPONS
// };
// class LIB_SOV_M3_Halftrack {
	// faction = "BG21_SOV_RA";
	// vehicleClass = "BG21_APC";
	// COMMON_VHL_TRANSPORT_ITEMS
	// SOV_VHL_TRANSPORT_WEAPONS
// };

class LIB_zis5v;
class LIB_zis5v_med;
class LIB_zis6_parm;
class LIB_zis5v_fuel;
class BG21_Zis5v: LIB_zis5v {
	faction = "BG21_SOV_RA";
	vehicleClass = "BG21_Wheeled";
	COMMON_VHL_TRANSPORT_ITEMS
	SOV_VHL_TRANSPORT_WEAPONS
};
class BG21_Zis5v_med: LIB_zis5v_med {
	faction = "BG21_SOV_RA";
	vehicleClass = "BG21_Wheeled";
	COMMON_VHL_TRANSPORT_TOOLKIT
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class BG21_Zis5v_parm: LIB_zis6_parm {
	faction = "BG21_SOV_RA";
	vehicleClass = "BG21_Wheeled";
	COMMON_VHL_TRANSPORT_TOOLKIT
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class BG21_Zis5v_fuel: LIB_zis5v_fuel {
	faction = "BG21_SOV_RA";
	vehicleClass = "BG21_Wheeled";
	COMMON_VHL_TRANSPORT_TOOLKIT
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};

class LIB_Willys_MB;
class BG21_Willys_MB: LIB_Willys_MB {
	faction = "BG21_SOV_RA";
	vehicleClass = "BG21_Wheeled";
	COMMON_VHL_TRANSPORT_TOOLKIT
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
