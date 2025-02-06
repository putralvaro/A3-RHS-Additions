class CfgPatches {class tsp_rhs_m4 {requiredAddons[] = {"tsp_rhs_weapon"}; units[] = {};};};

class WeaponSlotsInfo;
class CfgWeapons {
	class rhs_acc_bipod;
	class rhs_acc_pointer;
	class rhs_weap_m4_carryhandle;

	class rhs_acc_m4_handguard: rhs_acc_bipod {displayName = "Plastic Handguard"; model = "\tsp_rhs_m4\handguard.p3d"; descriptionShort = "Standard plastic M4 handguard";};
	class rhs_acc_m4_moe: rhs_acc_m4_handguard {displayName = "MOE Handguard"; model = "\tsp_rhs_m4\moe.p3d"; descriptionShort = "MOE handguard";};	
	class rhs_acc_m4_moe_tan: rhs_acc_m4_moe {displayName = "MOE Handguard (Tan)"; model = "\tsp_rhs_m4\moe_tan.p3d";};
	class rhs_acc_m4_car_bipod: rhs_acc_m4_handguard {displayName = "CAR Stock"; model = "\tsp_rhs_m4\car_bipod.p3d"; descriptionShort = "CAR-15 style stock";};
	class rhs_acc_m4_car_pointer: rhs_acc_pointer {displayName = "CAR Stock"; model = "\tsp_rhs_m4\car_pointer.p3d"; descriptionShort = "CAR-15 style stock";};

	class rhs_weap_m4_handguard: rhs_weap_m4_carryhandle {
		baseWeapon = "rhs_weap_m4_handguard"; displayName = "M4 (Plastic Handguard)"; picture = "\tsp_rhs_m4\m4.paa";
		hiddenSelectionsTextures[] = {"\tsp_rhs_weapon\tex\m4_noris.paa"};
		hiddenSelectionsMaterials[] = {"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1.rvmat", "\rhsusf\addons\rhsusf_weapons\m4\data\magazine.rvmat", "\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.rvmat", "\tsp_rhs_weapon\tex\empty.rvmat"};
		class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_m4_handguard";};};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class gripodSlot {}; 
			class underBarrelSlot {linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL"; class compatibleItems {rhs_acc_m4_handguard = 1; rhs_acc_m4_moe = 1; rhs_acc_m4_moe_tan = 1;};};
		};
	};
	class rhs_weap_m4_car: rhs_weap_m4_handguard {
		displayName = "M4 (CAR Stock)";
		baseWeapon = "rhs_weap_m4_car";
		hiddenSelectionsTextures[] = {"\tsp_rhs_weapon\tex\m4_nostock.paa"};
		class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_m4_car_bipod";};};
		class WeaponSlotsInfo: WeaponSlotsInfo {class underBarrelSlot {linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL"; class compatibleItems {rhs_acc_m4_car_bipod = 1;};};};
	};
	class rhs_weap_m4_handguard_car: rhs_weap_m4_handguard {
		displayName = "M4 (Plastic Handguard/CAR Stock)";
		baseWeapon = "rhs_weap_m4_handguard_car";
		hiddenSelectionsTextures[] = {"\tsp_rhs_weapon\tex\m4_noris_nostock.paa"};
		class linkedItems {class linkedItemsPointer {slot = "pointerSlot"; item = "rhs_acc_m4_car_pointer";}; class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_m4_handguard";};};
		class WeaponSlotsInfo: WeaponSlotsInfo {class pointerSlot {linkProxy = "\a3\data_f\proxies\weapon_slots\SIDE"; class compatibleItems {rhs_acc_m4_car_pointer = 1;};};};
	};

	class rhs_weap_m4_moe: rhs_weap_m4_handguard {
		baseWeapon = "rhs_weap_m4_moe"; displayName = "M4 (Magpul MOE)"; magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG"}; model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_mstock.p3d";
		hiddenSelectionsTextures[] = {"\tsp_rhs_weapon\tex\m4_noris.paa", "\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa", "\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa", "\tsp_rhs_weapon\tex\empty.paa", "\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa", "\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa"};
		class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_m4_moe";};};
	};
	class rhs_weap_m4_moe_tan: rhs_weap_m4_handguard {
		baseWeapon = "rhs_weap_m4_moe_tan"; displayName = "M4 (Magpul MOE/Tan)"; magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan"};  model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_mstock.p3d";
		hiddenSelectionsTextures[] = {"\tsp_rhs_weapon\tex\m4_noris.paa", "\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa", "\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa", "\tsp_rhs_weapon\tex\empty.paa", "\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa", "\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_d_co.paa"};
		class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_m4_moe_tan";};};
	};	
};