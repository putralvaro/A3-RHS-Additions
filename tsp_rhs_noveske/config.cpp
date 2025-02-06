class CfgPatches {class tsp_rhs_noveske {requiredAddons[] = {"tsp_rhs_weapon"}; units[] = {};};};

class WeaponSlotsInfo;
class CfgWeapons {
	class rhs_acc_bipod;
	class rhs_weap_m4a1_blockII;
	class rhs_weap_mk18;
	
	class rhs_acc_nsr_blk: rhs_acc_bipod {displayName = "NSR Handguard (Black)"; model = "\tsp_rhs_noveske\nsr_blk.p3d";};
	class rhs_acc_nsr_tan: rhs_acc_nsr_blk {displayName = "NSR Handguard (Tan)"; model = "\tsp_rhs_noveske\nsr_tan.p3d";};
	class rhs_acc_nsr_des: rhs_acc_nsr_blk {displayName = "NSR Handguard (Desert)"; model = "\tsp_rhs_noveske\nsr_des.p3d";};
	class rhs_acc_nsr_wdl: rhs_acc_nsr_blk {displayName = "NSR Handguard (Woodland)"; model = "\tsp_rhs_noveske\nsr_wdl.p3d";};
	class rhs_acc_nsr_bcm_blk: rhs_acc_nsr_blk {displayName = "NSR Handguard (BCM, Black)"; model = "\tsp_rhs_noveske\nsr_bcm_blk.p3d"; weaponInfoType = "RHS_Gripod1"; rhs_grip_type = "rhs_grip5_change";};
	class rhs_acc_nsr_bcm_tan: rhs_acc_nsr_bcm_blk {displayName = "NSR Handguard (BCM, Tan)"; model = "\tsp_rhs_noveske\nsr_bcm_tan.p3d";};
	class rhs_acc_nsr_bcm_des: rhs_acc_nsr_bcm_blk {displayName = "NSR Handguard (BCM, Desert)"; model = "\tsp_rhs_noveske\nsr_bcm_des.p3d";};
	class rhs_acc_nsr_bcm_wdl: rhs_acc_nsr_bcm_blk {displayName = "NSR Handguard (BCM, Woodland)"; model = "\tsp_rhs_noveske\nsr_bcm_wdl.p3d";};
	class rhs_acc_nsr13_blk: rhs_acc_nsr_blk {displayName = "NSR Handguard (13, Black)"; model = "\tsp_rhs_noveske\nsr13_blk.p3d";};
	class rhs_acc_nsr13_tan: rhs_acc_nsr13_blk {displayName = "NSR Handguard (13, Tan)"; model = "\tsp_rhs_noveske\nsr13_tan.p3d";};
	class rhs_acc_nsr13_des: rhs_acc_nsr13_blk {displayName = "NSR Handguard (13, Desert)"; model = "\tsp_rhs_noveske\nsr13_des.p3d";};
	class rhs_acc_nsr13_wdl: rhs_acc_nsr13_blk {displayName = "NSR Handguard (13, Woodland)"; model = "\tsp_rhs_noveske\nsr13_wdl.p3d";};
	class rhs_acc_nsr13_bcm_blk: rhs_acc_nsr_bcm_blk {displayName = "NSR Handguard (13, BCM, Black)"; model = "\tsp_rhs_noveske\nsr13_bcm_blk.p3d";};
	class rhs_acc_nsr13_bcm_tan: rhs_acc_nsr13_bcm_blk {displayName = "NSR Handguard (13, BCM, Tan)"; model = "\tsp_rhs_noveske\nsr13_bcm_tan.p3d";};
	class rhs_acc_nsr13_bcm_des: rhs_acc_nsr13_bcm_blk {displayName = "NSR Handguard (13, BCM, Desert)"; model = "\tsp_rhs_noveske\nsr13_bcm_des.p3d";};
	class rhs_acc_nsr13_bcm_wdl: rhs_acc_nsr13_bcm_blk {displayName = "NSR Handguard (13, BCM, Woodland)"; model = "\tsp_rhs_noveske\nsr13_bcm_wdl.p3d";};
	
	class rhs_weap_m4a1_nsr: rhs_weap_m4a1_blockII {
		baseWeapon = "rhs_weap_m4a1_nsr"; displayName = "Noveske NSR"; picture = "\tsp_rhs_noveske\gui\nsr_blk.paa"; rhs_grip5_change = "rhs_weap_m4a1_nsr_bcm";
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG"}; handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\clamp_thumb.rtm"};
		hiddenSelectionsTextures[] = {
			"\tsp_rhs_noveske\tex\nsr_noris_nostock.paa",
			"\tsp_rhs_weapon\tex\empty.paa",
			"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"\tsp_rhs_weapon\tex\empty.paa"
		};
		hiddenSelectionsMaterials[] = {"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1.rvmat", "\tsp_rhs_weapon\tex\empty.rvmat", "\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.rvmat", "\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.rvmat", "\tsp_rhs_weapon\tex\empty.rvmat"};			
		class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_nsr_blk";}; class linkedItemsMuzzle {slot = "MuzzleSlot"; item = "rhsusf_acc_SF3P556";};};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class gripodSlot {}; 
			class underBarrelSlot {linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL"; class compatibleItems {rhs_acc_nsr_blk = 1; rhs_acc_nsr_tan = 1; rhs_acc_nsr_des = 1; rhs_acc_nsr_wdl = 1; rhs_acc_nsr_bcm_blk = 1; rhs_acc_nsr_bcm_tan = 1; rhs_acc_nsr_bcm_des = 1; rhs_acc_nsr_bcm_wdl = 1; rhs_acc_nsr13_blk = 1; rhs_acc_nsr13_tan = 1; rhs_acc_nsr13_des = 1; rhs_acc_nsr13_wdl = 1; rhs_acc_nsr13_bcm_blk = 1; rhs_acc_nsr13_bcm_tan = 1; rhs_acc_nsr13_bcm_des = 1; rhs_acc_nsr13_bcm_wdl = 1;};};
		};
	};
	class rhs_weap_m4a1_nsr_tan: rhs_weap_m4a1_nsr {
		baseWeapon = "rhs_weap_m4a1_nsr_tan"; displayName = "Noveske NSR (Tan)"; picture = "\tsp_rhs_noveske\gui\nsr_tan.paa"; rhs_grip5_change = "rhs_weap_m4a1_nsr_bcm_tan";	
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan"};
		hiddenSelectionsTextures[] = {
			"\tsp_rhs_noveske\tex\nsr_noris_nostock_tan.paa",
			"\tsp_rhs_weapon\tex\empty.paa",
			"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"\tsp_rhs_weapon\tex\empty.paa"
		};
		class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_nsr_tan";}; class linkedItemsMuzzle {slot = "MuzzleSlot"; item = "rhsusf_acc_SF3P556";};};
	};
	class rhs_weap_m4a1_nsr_des: rhs_weap_m4a1_nsr {
		baseWeapon = "rhs_weap_m4a1_nsr_des"; displayName = "Noveske NSR (Desert)"; picture = "\tsp_rhs_noveske\gui\nsr_des.paa"; rhs_grip5_change = "rhs_weap_m4a1_nsr_bcm_des";	
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan"};
		hiddenSelectionsTextures[] = {
			"\tsp_rhs_noveske\tex\nsr_noris_nostock_des.paa",
			"\tsp_rhs_weapon\tex\empty.paa",
			"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"\tsp_rhs_weapon\tex\empty.paa"
		};
		class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_nsr_des";}; class linkedItemsMuzzle {slot = "MuzzleSlot"; item = "rhsusf_acc_SF3P556";};};
	};
	class rhs_weap_m4a1_nsr_wdl: rhs_weap_m4a1_nsr {
		baseWeapon = "rhs_weap_m4a1_nsr_wdl"; displayName = "Noveske NSR (Woodland)"; picture = "\tsp_rhs_noveske\gui\nsr_wdl.paa"; rhs_grip5_change = "rhs_weap_m4a1_nsr_bcm_wdl";		
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG"};
		hiddenSelectionsTextures[] = {
			"\tsp_rhs_noveske\tex\nsr_noris_nostock_wdl.paa",
			"\tsp_rhs_weapon\tex\empty.paa",
			"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"\tsp_rhs_weapon\tex\empty.paa"
		};
		class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_nsr_wdl";}; class linkedItemsMuzzle {slot = "MuzzleSlot"; item = "rhsusf_acc_SF3P556";};};
	};
	class rhs_weap_m4a1_nsr_bcm: rhs_weap_m4a1_nsr {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm.rtm"};};
	class rhs_weap_m4a1_nsr_bcm_tan: rhs_weap_m4a1_nsr_tan {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm.rtm"};};
	class rhs_weap_m4a1_nsr_bcm_des: rhs_weap_m4a1_nsr_des {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm.rtm"};};
	class rhs_weap_m4a1_nsr_bcm_wdl: rhs_weap_m4a1_nsr_wdl {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm.rtm"};};

	class rhs_acc_nsr9_blk: rhs_acc_bipod {displayName = "NSR Handguard (Black)"; model = "\tsp_rhs_noveske\nsr9_blk.p3d";};
	class rhs_acc_nsr9_tan: rhs_acc_nsr9_blk {displayName = "NSR Handguard (Tan)"; model = "\tsp_rhs_noveske\nsr9_tan.p3d";};
	class rhs_acc_nsr9_des: rhs_acc_nsr9_blk {displayName = "NSR Handguard (Desert)"; model = "\tsp_rhs_noveske\nsr9_des.p3d";};
	class rhs_acc_nsr9_wdl: rhs_acc_nsr9_blk {displayName = "NSR Handguard (Woodland)"; model = "\tsp_rhs_noveske\nsr9_wdl.p3d";};
	class rhs_acc_nsr9_bcm_blk: rhs_acc_nsr9_blk {displayName = "NSR Handguard (BCM, Black)"; model = "\tsp_rhs_noveske\nsr9_bcm_blk.p3d"; weaponInfoType = "RHS_Gripod1"; rhs_grip_type = "rhs_grip5_change";};
	class rhs_acc_nsr9_bcm_tan: rhs_acc_nsr9_bcm_blk {displayName = "NSR Handguard (BCM, Tan)"; model = "\tsp_rhs_noveske\nsr9_bcm_tan.p3d";};
	class rhs_acc_nsr9_bcm_des: rhs_acc_nsr9_bcm_blk {displayName = "NSR Handguard (BCM, Desert)"; model = "\tsp_rhs_noveske\nsr9_bcm_des.p3d";};
	class rhs_acc_nsr9_bcm_wdl: rhs_acc_nsr9_bcm_blk {displayName = "NSR Handguard (BCM, Woodland)"; model = "\tsp_rhs_noveske\nsr9_bcm_wdl.p3d";};

	class rhs_weap_mk18_nsr: rhs_weap_mk18 {
		baseWeapon = "rhs_weap_mk18_nsr"; displayName = "Noveske NSR 9"; picture = "\tsp_rhs_noveske\gui\nsr_blk.paa"; rhs_grip5_change = "rhs_weap_mk18_nsr_bcm";
		model = "\rhsusf\addons\rhsusf_weapons3\M4BII\MK18_KACSTOCK.p3d";
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG"}; handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\clamp_thumb_s.rtm"};
		hiddenSelectionsTextures[] = {
			"\tsp_rhs_noveske\tex\nsr_noris_nostock.paa",
			"\tsp_rhs_weapon\tex\empty.paa",
			"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"\tsp_rhs_weapon\tex\empty.paa"
		};
		hiddenSelectionsMaterials[] = {"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1.rvmat", "\tsp_rhs_weapon\tex\empty.rvmat", "\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.rvmat"};
		class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_nsr9_tan";}; class linkedItemsMuzzle {slot = "MuzzleSlot"; item = "rhsusf_acc_SF3P556";};};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class gripodSlot {}; 
			class underBarrelSlot {linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL"; class compatibleItems {rhs_acc_nsr9_blk = 1; rhs_acc_nsr9_tan = 1; rhs_acc_nsr9_des = 1; rhs_acc_nsr9_wdl = 1; rhs_acc_nsr9_bcm_blk = 1; rhs_acc_nsr9_bcm_tan = 1; rhs_acc_nsr9_bcm_des = 1; rhs_acc_nsr9_bcm_wdl = 1;};};
		};
	};
	class rhs_weap_mk18_nsr_tan: rhs_weap_mk18_nsr {
		baseWeapon = "rhs_weap_mk18_nsr_tan"; displayName = "Noveske NSR 9 (Tan)"; picture = "\tsp_rhs_noveske\gui\nsr_tan.paa"; rhs_grip5_change = "rhs_weap_mk18_nsr_bcm_tan";	
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan"};
		hiddenSelectionsTextures[] = {
			"\tsp_rhs_noveske\tex\nsr_noris_nostock_tan.paa",
			"\tsp_rhs_weapon\tex\empty.paa",
			"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"\tsp_rhs_weapon\tex\empty.paa"
		};
		class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_nsr9_tan";}; class linkedItemsMuzzle {slot = "MuzzleSlot"; item = "rhsusf_acc_SF3P556";};};
	};
	class rhs_weap_mk18_nsr_des: rhs_weap_mk18_nsr {
		baseWeapon = "rhs_weap_mk18_nsr_des"; displayName = "Noveske NSR 9 (Desert)"; picture = "\tsp_rhs_noveske\gui\nsr_des.paa"; rhs_grip5_change = "rhs_weap_mk18_nsr_bcm_des";	
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan"};
		hiddenSelectionsTextures[] = {
			"\tsp_rhs_noveske\tex\nsr_noris_nostock_des.paa",
			"\tsp_rhs_weapon\tex\empty.paa",
			"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"\tsp_rhs_weapon\tex\empty.paa"
		};
		class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_nsr9_des";}; class linkedItemsMuzzle {slot = "MuzzleSlot"; item = "rhsusf_acc_SF3P556";};};
	};
	class rhs_weap_mk18_nsr_wdl: rhs_weap_mk18_nsr {
		baseWeapon = "rhs_weap_mk18_nsr_wdl"; displayName = "Noveske NSR 9 (Woodland)"; picture = "\tsp_rhs_noveske\gui\nsr_wdl.paa"; rhs_grip5_change = "rhs_weap_mk18_nsr_bcm_wdl";		
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG"};
		hiddenSelectionsTextures[] = {
			"\tsp_rhs_noveske\tex\nsr_noris_nostock_wdl.paa",
			"\tsp_rhs_weapon\tex\empty.paa",
			"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"\tsp_rhs_weapon\tex\empty.paa"
		};
		class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_nsr9_wdl";}; class linkedItemsMuzzle {slot = "MuzzleSlot"; item = "rhsusf_acc_SF3P556";};};
	};

	class rhs_weap_mk18_nsr_bcm: rhs_weap_mk18_nsr {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm_s.rtm"};};
	class rhs_weap_mk18_nsr_bcm_tan: rhs_weap_mk18_nsr_tan {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm_s.rtm"};};
	class rhs_weap_mk18_nsr_bcm_des: rhs_weap_mk18_nsr_des {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm_s.rtm"};};
	class rhs_weap_mk18_nsr_bcm_wdl: rhs_weap_mk18_nsr_wdl {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm_s.rtm"};};
};