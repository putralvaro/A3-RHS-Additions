class CfgPatches {
	class tsp_tier1 {
		requiredAddons[] = {"asdg_jointmuzzles", "asdg_jointrails", "cba_main", "cba_main_a3"};
		units[] = {}; weapons[] = {"Tier1_HK416D145_22"};
	};
};

class CfgWeapons {
	class rhs_weap_sr25;
	class Tier1_M110k1: rhs_weap_sr25 {initSpeed = 2200; dispersion = 0.000001; handAnim[] = {"OFP2_ManSkeleton","\tsp_tier1\anim\clamp.rtm"};};
	class Tier1_M110k5_ACS: Tier1_M110k1 {
		displayName = "SR-25 M-LOK (ACS, Coyote)";
		hiddenSelections[] = {"camo","camo1","URX4"};
		hiddenSelectionsTextures[] = {"\tsp_tier1\tex\m110k5_coy_co.paa","\tsp_tier1\tex\kac_coy_co.paa","\tsp_tier1\tex\urx_coy_co.paa"};
		rhs_grip1_change = "Tier1_M110k5_ACS_grip"; rhs_grip2_change = "Tier1_M110k5_ACS_grip2"; rhs_grip3_change = "Tier1_M110k5_ACS_grip3";
	};
	class Tier1_M110k5_ACS_grip: Tier1_M110k5_ACS {handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_scar_vfg.rtm"};};
	class Tier1_M110k5_ACS_grip2: Tier1_M110k5_ACS {handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_scar_afg.rtm"};};
	class Tier1_M110k5_ACS_grip3: Tier1_M110k5_ACS {handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_scar_vfg.rtm"};};
	class Tier1_M110k5_ACS_blk: Tier1_M110k5_ACS {
		baseWeapon = "Tier1_M110k5_ACS_blk"; displayName = "SR-25 M-LOK (ACS, Black)"; picture = "\tsp_tier1\tex\m110k5_blk.paa";
		hiddenSelectionsTextures[] = {"\tsp_tier1\tex\m110k5_blk_co.paa","\tsp_tier1\tex\kac_blk_co.paa","\tsp_tier1\tex\urx_blk_co.paa"};
		rhs_grip1_change = "Tier1_M110k5_ACS_blk_grip"; rhs_grip2_change = "Tier1_M110k5_ACS_blk_grip2"; rhs_grip3_change = "Tier1_M110k5_ACS_blk_grip3";
	};
	class Tier1_M110k5_ACS_blk_grip: Tier1_M110k5_ACS_blk {handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_scar_vfg.rtm"};};
	class Tier1_M110k5_ACS_blk_grip2: Tier1_M110k5_ACS_blk {handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_scar_afg.rtm"};};
	class Tier1_M110k5_ACS_blk_grip3: Tier1_M110k5_ACS_blk {handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_scar_vfg.rtm"};};
	class Tier1_M110k5_ACS_des: Tier1_M110k5_ACS {
		baseWeapon = "Tier1_M110k5_ACS_des"; displayName = "SR-25 M-LOK (ACS, Desert)"; picture = "\tsp_tier1\tex\m110k5_des.paa";
		hiddenSelectionsTextures[] = {"\tsp_tier1\tex\m110k5_des_co.paa","\tsp_tier1\tex\kac_coy_co.paa","\tsp_tier1\tex\urx_des_co.paa"};
		rhs_grip1_change = "Tier1_M110k5_ACS_des_grip"; rhs_grip2_change = "Tier1_M110k5_ACS_des_grip2"; rhs_grip3_change = "Tier1_M110k5_ACS_des_grip3";
	};
	class Tier1_M110k5_ACS_des_grip: Tier1_M110k5_ACS_des {handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_scar_vfg.rtm"};};
	class Tier1_M110k5_ACS_des_grip2: Tier1_M110k5_ACS_des {handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_scar_afg.rtm"};};
	class Tier1_M110k5_ACS_des_grip3: Tier1_M110k5_ACS_des {handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_scar_vfg.rtm"};};
	class Tier1_M110k5_ACS_wdl: Tier1_M110k5_ACS {
		baseWeapon = "Tier1_M110k5_ACS_wdl"; displayName = "SR-25 M-LOK (ACS, Woodland)"; picture = "\tsp_tier1\tex\m110k5_wdl.paa";
		hiddenSelectionsTextures[] = {"\tsp_tier1\tex\m110k5_wdl_co.paa","\tsp_tier1\tex\kac_blk_co.paa","\tsp_tier1\tex\urx_wdl_co.paa"};
		rhs_grip1_change = "Tier1_M110k5_ACS_wdl_grip"; rhs_grip2_change = "Tier1_M110k5_ACS_wdl_grip2"; rhs_grip3_change = "Tier1_M110k5_ACS_wdl_grip3";
	};
	class Tier1_M110k5_ACS_wdl_grip: Tier1_M110k5_ACS_wdl {handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_scar_vfg.rtm"};};
	class Tier1_M110k5_ACS_wdl_grip2: Tier1_M110k5_ACS_wdl {handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_scar_afg.rtm"};};
	class Tier1_M110k5_ACS_wdl_grip3: Tier1_M110k5_ACS_wdl {handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_scar_vfg.rtm"};};
};

class UnderBarrelSlot;
class Tier1_M110k5_grip_slot: UnderBarrelSlot {
	class compatibleItems {
		rhs_acc_grip_ffg2 = 1;
		rhs_acc_grip_rk2 = 1;
		rhs_acc_grip_rk6 = 1;
		rhsusf_acc_grip1 = 1;
		rhsusf_acc_grip2 = 1;
		rhsusf_acc_grip2_tan = 1;
		rhsusf_acc_grip2_wd = 1;
		rhsusf_acc_grip3 = 1;
		rhsusf_acc_grip3_tan = 1;
		rhsusf_acc_kac_grip = 1;
		rhsusf_acc_rvg_blk = 1;
		rhsusf_acc_rvg_de = 1;
		rhsusf_acc_tacsac_blk = 1;
		rhsusf_acc_tacsac_blue = 1;
		rhsusf_acc_tacsac_tan = 1;
		rhsusf_acc_tdstubby_blk = 1;
		rhsusf_acc_tdstubby_tan = 1;
	};
};
class asdg_FrontSideRail;
class Tier1_URX4_Slot: asdg_FrontSideRail {
	class compatibleItems {
		acc_flashlight = 1;
		acc_flashlight_broken = 1;
		acc_pointer_IR = 1;
		acc_pointer_IR_broken = 1;
		rhs_acc_2dpZenit_ris = 1;
		rhs_acc_perst1ik_ris = 1;
		rhs_acc_perst3 = 1;
		rhsusf_acc_anpeq15 = 1;
		rhsusf_acc_anpeq15_bk = 1;
		rhsusf_acc_anpeq15_bk_h = 1;
		rhsusf_acc_anpeq15_bk_light = 1;
		rhsusf_acc_anpeq15_bk_light_h = 1;
		rhsusf_acc_anpeq15_bk_light_sc = 1;
		rhsusf_acc_anpeq15_bk_sc = 1;
		rhsusf_acc_anpeq15_bk_top = 1;
		rhsusf_acc_anpeq15_bk_top_h = 1;
		rhsusf_acc_anpeq15_bk_top_sc = 1;
		rhsusf_acc_anpeq15_h = 1;
		rhsusf_acc_anpeq15_light = 1;
		rhsusf_acc_anpeq15_light_h = 1;
		rhsusf_acc_anpeq15_light_sc = 1;
		rhsusf_acc_anpeq15_sc = 1;
		rhsusf_acc_anpeq15_top = 1;
		rhsusf_acc_anpeq15_top_h = 1;
		rhsusf_acc_anpeq15_top_sc = 1;
		rhsusf_acc_anpeq15_wmx = 1;
		rhsusf_acc_anpeq15_wmx_h = 1;
		rhsusf_acc_anpeq15_wmx_light = 1;
		rhsusf_acc_anpeq15_wmx_light_h = 1;
		rhsusf_acc_anpeq15_wmx_light_sc = 1;
		rhsusf_acc_anpeq15_wmx_sc = 1;
		rhsusf_acc_anpeq15A = 1;
		rhsusf_acc_anpeq15side = 1;
		rhsusf_acc_anpeq15side_bk = 1;
		rhsusf_acc_anpeq16a = 1;
		rhsusf_acc_anpeq16a_light = 1;
		rhsusf_acc_anpeq16a_light_top = 1;
		rhsusf_acc_anpeq16a_light_top_h = 1;
		rhsusf_acc_anpeq16a_light_top_sc = 1;
		rhsusf_acc_anpeq16a_top = 1;
		rhsusf_acc_anpeq16a_top_h = 1;
		rhsusf_acc_anpeq16a_top_sc = 1;
		rhsusf_acc_M952V = 1;
		rhsusf_acc_wmx = 1;
		rhsusf_acc_wmx_bk = 1;
	};
};
class asdg_UnderSlot;
class Tier1_MLOK_UnderSlot: asdg_UnderSlot {
	class compatibleItems {
		bipod_01_F_blk = 1;
		bipod_01_F_khk = 1;
		bipod_01_F_mtp = 1;
		bipod_01_F_snd = 1;
		bipod_02_F_arid = 1;
		bipod_02_F_blk = 1;
		bipod_02_F_hex = 1;
		bipod_02_F_lush = 1;
		bipod_02_F_tan = 1;
		bipod_03_F_blk = 1;
		bipod_03_F_oli = 1;
		rhs_acc_harris_swivel = 1;
		rhsusf_acc_harris_bipod = 1;
	};
};