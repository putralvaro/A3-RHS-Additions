class CfgPatches {class tsp_rhs_fsp {requiredAddons[] = {"tsp_rhs_weapon"}; units[] = {};};};

class WeaponSlotsInfo;
class CfgWeapons {
	class rhs_acc_bipod;
	class rhs_weap_m4a1;

	class rhs_acc_fsp_blk: rhs_acc_bipod {displayName = "FSP Handguard (Black)"; model = "\tsp_rhs_fsp\fsp_blk.p3d";};
	class rhs_acc_fsp_coy: rhs_acc_bipod {displayName = "FSP Handguard (Coyote)"; model = "\tsp_rhs_fsp\fsp_coy.p3d";};
	class rhs_acc_fsp_des: rhs_acc_bipod {displayName = "FSP Handguard (Desert)"; model = "\tsp_rhs_fsp\fsp_des.p3d";};
	class rhs_acc_fsp_wdl: rhs_acc_bipod {displayName = "FSP Handguard (Woodland)"; model = "\tsp_rhs_fsp\fsp_wdl.p3d";};
	
	class rhs_weap_m4a1_fsp: rhs_weap_m4a1 {
		baseWeapon = "rhs_weap_m4a1_fsp"; displayName = "M4A1 (FSP)"; picture = "\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_m4a1_blockII_ca.paa";	
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG"}; handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\clamp.rtm"};
		hiddenSelectionsTextures[] = {
			"\tsp_rhs_weapon\tex\m4_noris_noring.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover_co.paa",
			"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m203_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa"
		};
		hiddenSelectionsMaterials[] = {"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1.rvmat", "\rhsusf\addons\rhsusf_weapons\m4\data\magazine.rvmat", "\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.rvmat", "\tsp_rhs_weapon\tex\empty.rvmat"};
		class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_fsp_coy";}; class linkedItemsMuzzle {slot = "MuzzleSlot"; item = "rhsusf_acc_SF3P556";};};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class gripodSlot {}; 
			class underBarrelSlot {linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL"; class compatibleItems {rhs_acc_fsp_blk = 1; rhs_acc_fsp_coy = 1; rhs_acc_fsp_des = 1; rhs_acc_fsp_wdl = 1;};};
		};
	};
	class rhs_weap_m4a1_fsp_des: rhs_weap_m4a1_fsp {
		baseWeapon = "rhs_weap_m4a1_fsp_des"; displayName = "M4A1 (FSP/Desert)"; picture = "\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_m4a1_blockII_d_ca.paa";			
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan"};
		hiddenSelectionsTextures[] = {
			"\tsp_rhs_weapon\tex\m4_noris_noring_des.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_d_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover_co.paa",
			"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_d_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m203s_d_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_d_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa"
		};
		class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_fsp_des";}; class linkedItemsMuzzle {slot = "MuzzleSlot"; item = "rhsusf_acc_SF3P556";};};
	};
	class rhs_weap_m4a1_fsp_wdl: rhs_weap_m4a1_fsp {
		baseWeapon = "rhs_weap_m4a1_fsp_wdl"; displayName = "M4A1 (FSP/Woodland)"; picture = "\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_m4a1_blockII_wd_ca.paa";			
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG"};
		hiddenSelectionsTextures[] = {
			"\tsp_rhs_weapon\tex\m4_noris_noring_wdl.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_wd_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover_co.paa",
			"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_wd_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m203s_d_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_wd_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa"
		};
		class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_fsp_wdl";}; class linkedItemsMuzzle {slot = "MuzzleSlot"; item = "rhsusf_acc_SF3P556";};};
	};

	class rhs_weap_m4a1_fsp_mstock: rhs_weap_m4a1_fsp {baseWeapon = "rhs_weap_m4a1_fsp_mstock"; displayName = "M4A1 (FSP/Magpul Stock)"; model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_mstock.p3d";};
	class rhs_weap_m4a1_fsp_mstock_des: rhs_weap_m4a1_fsp_des {baseWeapon = "rhs_weap_m4a1_fsp_mstock_des"; displayName = "M4A1 (FSP/Desert/Magpul Stock)"; model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_mstock.p3d";};
	class rhs_weap_m4a1_fsp_mstock_wdl: rhs_weap_m4a1_fsp_wdl {baseWeapon = "rhs_weap_m4a1_fsp_mstock_wdl"; displayName = "M4A1 (FSP/Woodland/Magpul Stock)"; model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_mstock.p3d";};
};