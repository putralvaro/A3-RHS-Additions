class CfgPatches {class tsp_rhs_m16 {requiredAddons[] = {"tsp_rhs_weapon"}; units[] = {};};};

class WeaponSlotsInfo;
class CfgWeapons {
	class rhs_acc_bipod;
	class rhs_acc_pointer;
	class rhs_weap_m16a4_carryhandle;
	class rhs_weap_m16a4_carryhandle_m203;
	
	class rhs_acc_m16_norail: rhs_acc_pointer {displayName = "Rail Remover"; model = "\tsp_rhs_m16\m16_norail.p3d"; descriptionShort = "";};
	class rhs_acc_m16_handguard: rhs_acc_bipod {displayName = "Plastic Handguard"; model = "\tsp_rhs_m16\handguard.p3d"; descriptionShort = "Standard plastic M16 handguard";};
	class rhs_acc_m16_handguard2: rhs_acc_m16_handguard {displayName = "Plastic Handguard (Magwell)"; weaponInfoType = "RHS_Gripod1"; rhs_grip_type = "rhs_grip1_change";};

	class rhs_acc_m16_handguard_m203: rhs_acc_m16_handguard {displayName = "M203 Handguard"; model = "\tsp_rhs_m16\handguard_m203.p3d"; descriptionShort = "M203 handguard";};
	class rhs_acc_m16_handguard_m203_norail: rhs_acc_pointer {model = "\tsp_rhs_m16\handguard_m203_norail.p3d";};

	class rhs_weap_m16a4_handguard: rhs_weap_m16a4_carryhandle {
		baseWeapon = "rhs_weap_m16a4_handguard"; displayName = "M16A4 (Plastic Handguard)"; rhs_grip1_change = "rhs_weap_m16a4_handguard_grip1";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\tsp_rhs_weapon\tex\m16_noris.paa", "\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa", "\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa", "\tsp_rhs_weapon\tex\empty.paa"};
		hiddenSelectionsMaterials[] = {"\rhsusf\addons\rhsusf_weapons\m16\data\m16a4.rvmat", "\rhsusf\addons\rhsusf_weapons\m4\data\magazine.rvmat", "\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.rvmat", "\tsp_rhs_weapon\tex\empty.rvmat"};
		class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_m16_handguard2";};};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class gripodSlot {}; 
			class underBarrelSlot {linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL"; class compatibleItems {rhs_acc_m16_handguard = 1; rhs_acc_m16_handguard2 = 1; rhs_acc_m16_handguard_m203 = 1;};};
			class pointerSlot {};
		};
	};	
    class rhs_weap_m16a4_handguard_grip1: rhs_weap_m16a4_handguard {handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1.rtm"};};
	class rhs_weap_m16a2: rhs_weap_m16a4_handguard {
		baseWeapon = "rhs_weap_m16a2"; displayName = "M16A2"; rhs_grip1_change = "rhs_weap_m16a2_grip1";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};	
		hiddenSelectionsTextures[] = {"\tsp_rhs_weapon\tex\m16_noris_nohandle.paa", "\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa", "\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa", "\tsp_rhs_weapon\tex\empty.paa"};
		hiddenSelectionsMaterials[] = {"\rhsusf\addons\rhsusf_weapons\m16\data\m16a4.rvmat", "\rhsusf\addons\rhsusf_weapons\m4\data\magazine.rvmat", "\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.rvmat", "\tsp_rhs_weapon\tex\empty.rvmat"};
		class linkedItems {class linkedItemsPointer {slot = "pointerSlot"; item = "rhs_acc_m16_norail";}; class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_m16_handguard";};};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class CowsSlot {};  //-- No optics on m16a2		
			class pointerSlot {linkProxy = "\a3\data_f\proxies\weapon_slots\SIDE"; class compatibleItems {rhs_acc_m16_norail = 1;};};
		};
	};
    class rhs_weap_m16a2_grip1: rhs_weap_m16a2 {handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1.rtm"};};
	class rhs_weap_m16a2_m203: rhs_weap_m16a4_carryhandle_m203 {	
		baseWeapon = "rhs_weap_m16a2_m203"; displayName = "M16A2 (M203)";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\tsp_rhs_weapon\tex\m16_noris_nohandle.paa", "\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa", "\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa", "\tsp_rhs_weapon\tex\empty.paa"};
		hiddenSelectionsMaterials[] = {"\rhsusf\addons\rhsusf_weapons\m16\data\m16a4.rvmat", "\rhsusf\addons\rhsusf_weapons\m4\data\magazine.rvmat", "\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.rvmat", "\tsp_rhs_weapon\tex\empty.rvmat"};
		class linkedItems {class linkedItemsPointer {slot = "pointerSlot"; item = "rhs_acc_m16_handguard_m203_norail";};};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class CowsSlot {};  //-- No optics on m16a2
			class pointerSlot {linkProxy = "\a3\data_f\proxies\weapon_slots\SIDE"; class compatibleItems {rhs_acc_m16_handguard_m203_norail = 1;};};
		};
	};
};