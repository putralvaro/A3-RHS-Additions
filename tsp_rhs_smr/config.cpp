class CfgPatches {class tsp_rhs_smr {requiredAddons[] = {"tsp_rhs_weapon"}; units[] = {};};};

class WeaponSlotsInfo;
class CfgWeapons {
    class rhs_acc_bipod;
    class rhs_weap_m4a1_blockII;
    class rhs_weap_mk18;

    class rhs_acc_smr_blk: rhs_acc_bipod {displayName = "SMR Handguard (Black)"; model = "\tsp_rhs_smr\smr_blk.p3d";};
    class rhs_acc_smr_tan: rhs_acc_smr_blk {displayName = "SMR Handguard (Tan)"; model = "\tsp_rhs_smr\smr_tan.p3d";};
    class rhs_acc_smr_des: rhs_acc_smr_blk {displayName = "SMR Handguard (Desert)"; model = "\tsp_rhs_smr\smr_des.p3d";};
    class rhs_acc_smr_wdl: rhs_acc_smr_blk {displayName = "SMR Handguard (Woodland)"; model = "\tsp_rhs_smr\smr_wdl.p3d";};
    class rhs_acc_smr_bcm_blk: rhs_acc_smr_blk {displayName = "SMR Handguard (BCM, Black)"; model = "\tsp_rhs_smr\smr_bcm_blk.p3d"; weaponInfoType = "RHS_Gripod1"; rhs_grip_type = "rhs_grip5_change";};
    class rhs_acc_smr_bcm_tan: rhs_acc_smr_bcm_blk {displayName = "SMR Handguard (BCM, Tan)"; model = "\tsp_rhs_smr\smr_bcm_tan.p3d";};
    class rhs_acc_smr_bcm_des: rhs_acc_smr_bcm_blk {displayName = "SMR Handguard (BCM, Desert)"; model = "\tsp_rhs_smr\smr_bcm_des.p3d";};
    class rhs_acc_smr_bcm_wdl: rhs_acc_smr_bcm_blk {displayName = "SMR Handguard (BCM, Woodland)"; model = "\tsp_rhs_smr\smr_bcm_wdl.p3d";};

    class rhs_acc_smr_s_blk: rhs_acc_smr_blk {displayName = "SMR Handguard (Black)"; model = "\tsp_rhs_smr\smr_s_blk.p3d";};
    class rhs_acc_smr_s_tan: rhs_acc_smr_s_blk {displayName = "SMR Handguard (Tan)"; model = "\tsp_rhs_smr\smr_s_tan.p3d";};
    class rhs_acc_smr_s_des: rhs_acc_smr_s_blk {displayName = "SMR Handguard (Desert)"; model = "\tsp_rhs_smr\smr_s_des.p3d";};
    class rhs_acc_smr_s_wdl: rhs_acc_smr_s_blk {displayName = "SMR Handguard (Woodland)"; model = "\tsp_rhs_smr\smr_s_wdl.p3d";};
    class rhs_acc_smr_s_bcm_blk: rhs_acc_smr_s_blk {displayName = "SMR Handguard (BCM, Black)"; model = "\tsp_rhs_smr\smr_s_bcm_blk.p3d"; weaponInfoType = "RHS_Gripod1"; rhs_grip_type = "rhs_grip5_change";};
    class rhs_acc_smr_s_bcm_tan: rhs_acc_smr_s_bcm_blk {displayName = "SMR Handguard (BCM, Tan)"; model = "\tsp_rhs_smr\smr_s_bcm_tan.p3d";};
    class rhs_acc_smr_s_bcm_des: rhs_acc_smr_s_bcm_blk {displayName = "SMR Handguard (BCM, Desert)"; model = "\tsp_rhs_smr\smr_s_bcm_des.p3d";};
    class rhs_acc_smr_s_bcm_wdl: rhs_acc_smr_s_bcm_blk {displayName = "SMR Handguard (BCM, Woodland)"; model = "\tsp_rhs_smr\smr_s_bcm_wdl.p3d";};

    class rhs_weap_HK416D15_smr: rhs_weap_m4a1_blockII {
        baseWeapon = "rhs_weap_HK416D15_smr"; displayName = "HK416D15 (SMR)"; picture = "\tsp_rhs_smr\gui\hk_blk.paa"; rhs_grip5_change = "rhs_weap_HK416D15_smr_bcm";
        handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\clamp.rtm"};
        hiddenSelectionsTextures[] = {
            "\tsp_rhs_smr\tex\hk_blk_co.paa",
            "\tsp_rhs_weapon\tex\empty.paa",
            "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
            "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
            "\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_co.paa"
        };
        hiddenSelectionsMaterials[] = {"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1.rvmat", "\tsp_rhs_weapon\tex\empty.rvmat", "\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.rvmat"};
        class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_smr_blk";};};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class gripodSlot {}; 
            class underBarrelSlot {linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL"; class compatibleItems {rhs_acc_smr_blk = 1; rhs_acc_smr_tan = 1; rhs_acc_smr_des = 1; rhs_acc_smr_wdl = 1; rhs_acc_smr_bcm_blk = 1; rhs_acc_smr_bcm_tan = 1; rhs_acc_smr_bcm_des = 1; rhs_acc_smr_bcm_wdl = 1;};};
        };
    };
    class rhs_weap_HK416D15_smr_kac: rhs_weap_HK416D15_smr {
        baseWeapon = "rhs_weap_HK416D15_smr_kac"; displayName = "HK416D15 (SMR/SOPMOD Stock)"; model = "\rhsusf\addons\rhsusf_weapons3\M4BII\m4a1_blockII_KACSTOCK.p3d"; rhs_grip5_change = "rhs_weap_HK416D15_smr_kac_bcm";
        hiddenSelectionsTextures[] = {"\tsp_rhs_smr\tex\hk_blk_co.paa", "\tsp_rhs_weapon\tex\empty.paa", "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa", "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa", "\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_co.paa"};
    };

    class rhs_weap_HK416D15_smr_tan: rhs_weap_HK416D15_smr {
        baseWeapon = "rhs_weap_HK416D15_smr_tan"; displayName = "HK416D15 (SMR/Tanodized)"; picture = "\tsp_rhs_smr\gui\hk_tan.paa"; rhs_grip5_change = "rhs_weap_HK416D15_smr_bcm_tan";	
        hiddenSelectionsTextures[] = {
            "\tsp_rhs_smr\tex\hk_tan_co.paa",
            "\tsp_rhs_weapon\tex\empty.paa",
            "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
            "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
            "\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_d_co.paa"
        };
        class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_smr_tan";};};
    };
    class rhs_weap_HK416D15_smr_kac_tan: rhs_weap_HK416D15_smr_tan {
        baseWeapon = "rhs_weap_HK416D15_smr_kac_tan"; displayName = "HK416D15 (SMR/Tanodized/SOPMOD Stock)"; model = "\rhsusf\addons\rhsusf_weapons3\M4BII\m4a1_blockII_KACSTOCK.p3d"; rhs_grip5_change = "rhs_weap_HK416D15_smr_kac_bcm_tan";
        hiddenSelectionsTextures[] = {"\tsp_rhs_smr\tex\hk_tan_co.paa", "\tsp_rhs_weapon\tex\empty.paa", "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa", "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa", "\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_d_co.paa"};
    };

    class rhs_weap_HK416D15_smr_des: rhs_weap_HK416D15_smr {
        baseWeapon = "rhs_weap_HK416D15_smr_des"; displayName = "HK416D15 (SMR/Desert)"; picture = "\tsp_rhs_smr\gui\hk_des.paa"; rhs_grip5_change = "rhs_weap_HK416D15_smr_bcm_des";	
        hiddenSelectionsTextures[] = {
            "\tsp_rhs_smr\tex\hk_des_co.paa",
            "\tsp_rhs_weapon\tex\empty.paa",
            "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
            "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
            "\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_d_co.paa"
        };
        class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_smr_des";};};
    };
    class rhs_weap_HK416D15_smr_kac_des: rhs_weap_HK416D15_smr_des {
        baseWeapon = "rhs_weap_HK416D15_smr_kac_des"; displayName = "HK416D15 (SMR/Desert/SOPMOD Stock)"; model = "\rhsusf\addons\rhsusf_weapons3\M4BII\m4a1_blockII_KACSTOCK.p3d"; rhs_grip5_change = "rhs_weap_HK416D15_smr_kac_bcm_des";
        hiddenSelectionsTextures[] = {"\tsp_rhs_smr\tex\hk_des_co.paa", "\tsp_rhs_weapon\tex\empty.paa", "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa", "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa", "\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_d_co.paa"};
    };

    class rhs_weap_HK416D15_smr_wdl: rhs_weap_HK416D15_smr {
        baseWeapon = "rhs_weap_HK416D15_smr_wdl"; displayName = "HK416D15 (SMR/Woodland)"; picture = "\tsp_rhs_smr\gui\hk_wdl.paa"; rhs_grip5_change = "rhs_weap_HK416D15_smr_kac_bcm_wdl";		
        hiddenSelectionsTextures[] = {
            "\tsp_rhs_smr\tex\hk_wdl_co.paa",
            "\tsp_rhs_weapon\tex\empty.paa",
            "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
            "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
            "\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_wd_co.paa"
        };
        class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_smr_wdl";};};
    };
    class rhs_weap_HK416D15_smr_kac_wdl: rhs_weap_HK416D15_smr_wdl {
        baseWeapon = "rhs_weap_HK416D15_smr_kac_wdl"; displayName = "HK416D15 (SMR/Woodland/SOPMOD Stock)"; model = "\rhsusf\addons\rhsusf_weapons3\M4BII\m4a1_blockII_KACSTOCK.p3d"; rhs_grip5_change = "rhs_weap_HK416D15_smr_kac_bcm_wdl";
        hiddenSelectionsTextures[] = {"\tsp_rhs_smr\tex\hk_wdl_co.paa", "\tsp_rhs_weapon\tex\empty.paa", "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa", "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa", "\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_wd_co.paa"};
    };

    class rhs_weap_HK416D10_smr: rhs_weap_mk18 {
        baseWeapon = "rhs_weap_HK416D10_smr"; displayName = "HK416D10 (SMR)"; picture = "\tsp_rhs_smr\gui\hk_blk.paa"; rhs_grip5_change = "rhs_weap_HK416D10_smr_bcm";
        handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\clamp_thumb_s.rtm"};
        hiddenSelectionsTextures[] = {
            "\tsp_rhs_smr\tex\hk_blk_co.paa",
            "\tsp_rhs_weapon\tex\empty.paa",
            "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
            "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
            "\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_co.paa"
        };
        hiddenSelectionsMaterials[] = {"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1.rvmat", "\tsp_rhs_weapon\tex\empty.rvmat", "\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.rvmat"};
        class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_smr_s_blk";};};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class gripodSlot {}; 
            class underBarrelSlot {linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL"; class compatibleItems {rhs_acc_smr_s_blk = 1; rhs_acc_smr_s_tan = 1; rhs_acc_smr_s_des = 1; rhs_acc_smr_s_wdl = 1; rhs_acc_smr_s_bcm_blk = 1; rhs_acc_smr_s_bcm_tan = 1; rhs_acc_smr_s_bcm_des = 1; rhs_acc_smr_s_bcm_wdl = 1;};};
        };
    };
    class rhs_weap_HK416D10_smr_kac: rhs_weap_HK416D10_smr {
        baseWeapon = "rhs_weap_HK416D10_smr_kac"; displayName = "HK416D10 (SMR/SOPMOD Stock)"; model = "\rhsusf\addons\rhsusf_weapons3\M4BII\MK18_KACSTOCK.p3d"; rhs_grip5_change = "rhs_weap_HK416D10_smr_kac_bcm";
        hiddenSelectionsTextures[] = {"\tsp_rhs_smr\tex\hk_blk_co.paa", "\tsp_rhs_weapon\tex\empty.paa", "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa", "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa", "\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_co.paa"};
    };

    class rhs_weap_HK416D10_smr_tan: rhs_weap_HK416D10_smr {
        baseWeapon = "rhs_weap_HK416D10_smr_tan"; displayName = "HK416D10 (SMR/Tanodized)"; picture = "\tsp_rhs_smr\gui\hk_tan.paa"; rhs_grip5_change = "rhs_weap_HK416D10_smr_bcm_tan";		
        hiddenSelectionsTextures[] = {
            "\tsp_rhs_smr\tex\hk_tan_co.paa",
            "\tsp_rhs_weapon\tex\empty.paa",
            "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
            "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
            "\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_d_co.paa"
        };
        class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_smr_s_tan";};};
    };
    class rhs_weap_HK416D10_smr_kac_tan: rhs_weap_HK416D10_smr_tan {
        baseWeapon = "rhs_weap_HK416D10_smr_kac_tan"; displayName = "HK416D10 (SMR/Tanodized/SOPMOD Stock)"; model = "\rhsusf\addons\rhsusf_weapons3\M4BII\MK18_KACSTOCK.p3d"; rhs_grip5_change = "rhs_weap_HK416D10_smr_kac_bcm_tan";
        hiddenSelectionsTextures[] = {"\tsp_rhs_smr\tex\hk_tan_co.paa", "\tsp_rhs_weapon\tex\empty.paa", "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa", "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa", "\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_d_co.paa"};
    };

    class rhs_weap_HK416D10_smr_des: rhs_weap_HK416D10_smr {
        baseWeapon = "rhs_weap_HK416D10_smr_des"; displayName = "HK416D10 (SMR/Desert)"; picture = "\tsp_rhs_smr\gui\hk_des.paa"; rhs_grip5_change = "rhs_weap_HK416D10_smr_bcm_des";		
        hiddenSelectionsTextures[] = {
            "\tsp_rhs_smr\tex\hk_des_co.paa",
            "\tsp_rhs_weapon\tex\empty.paa",
            "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
            "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
            "\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_d_co.paa"
        };
        class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_smr_s_des";};};
    };
    class rhs_weap_HK416D10_smr_kac_des: rhs_weap_HK416D10_smr_des {
        baseWeapon = "rhs_weap_HK416D10_smr_kac_des"; displayName = "HK416D10 (SMR/Desert/SOPMOD Stock)"; model = "\rhsusf\addons\rhsusf_weapons3\M4BII\MK18_KACSTOCK.p3d"; rhs_grip5_change = "rhs_weap_HK416D10_smr_kac_bcm_des";
        hiddenSelectionsTextures[] = {"\tsp_rhs_smr\tex\hk_des_co.paa", "\tsp_rhs_weapon\tex\empty.paa", "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa", "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa", "\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_d_co.paa"};
    };

    class rhs_weap_HK416D10_smr_wdl: rhs_weap_HK416D10_smr {
        baseWeapon = "rhs_weap_HK416D10_smr_wdl"; displayName = "HK416D10 (SMR/Woodland)"; picture = "\tsp_rhs_smr\gui\hk_wdl.paa"; rhs_grip5_change = "rhs_weap_HK416D10_smr_kac_bcm_wdl";
        hiddenSelectionsTextures[] = {
            "\tsp_rhs_smr\tex\hk_wdl_co.paa",
            "\tsp_rhs_weapon\tex\empty.paa",
            "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
            "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
            "\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_wd_co.paa"
        };
        class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_smr_s_wdl";};};
    };
    class rhs_weap_HK416D10_smr_kac_wdl: rhs_weap_HK416D10_smr_wdl {
        baseWeapon = "rhs_weap_HK416D10_smr_kac_wdl"; displayName = "HK416D10 (SMR/Woodland/SOPMOD Stock)"; model = "\rhsusf\addons\rhsusf_weapons3\M4BII\MK18_KACSTOCK.p3d"; rhs_grip5_change = "rhs_weap_HK416D10_smr_kac_bcm_wdl";
        hiddenSelectionsTextures[] = {"\tsp_rhs_smr\tex\hk_wdl_co.paa", "\tsp_rhs_weapon\tex\empty.paa", "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa", "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa", "\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_wd_co.paa"};
    };

    class rhs_weap_HK416D15_smr_bcm: rhs_weap_HK416D15_smr {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm.rtm"};};
    class rhs_weap_HK416D15_smr_kac_bcm: rhs_weap_HK416D15_smr_kac {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm.rtm"};};
    class rhs_weap_HK416D15_smr_bcm_tan: rhs_weap_HK416D15_smr_tan {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm.rtm"};};
    class rhs_weap_HK416D15_smr_kac_bcm_tan: rhs_weap_HK416D15_smr_kac_tan {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm.rtm"};};
    class rhs_weap_HK416D15_smr_bcm_des: rhs_weap_HK416D15_smr_des {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm.rtm"};};
    class rhs_weap_HK416D15_smr_kac_bcm_des: rhs_weap_HK416D15_smr_kac_des {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm.rtm"};};
    class rhs_weap_HK416D15_smr_bcm_wdl: rhs_weap_HK416D15_smr_wdl {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm.rtm"};};
    class rhs_weap_HK416D15_smr_kac_bcm_wdl: rhs_weap_HK416D15_smr_kac_wdl {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm.rtm"};};
    class rhs_weap_HK416D10_smr_bcm: rhs_weap_HK416D10_smr {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm_s.rtm"};};
    class rhs_weap_HK416D10_smr_kac_bcm: rhs_weap_HK416D10_smr_kac {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm_s.rtm"};};
    class rhs_weap_HK416D10_smr_bcm_tan: rhs_weap_HK416D10_smr_tan {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm_s.rtm"};};
    class rhs_weap_HK416D10_smr_kac_bcm_tan: rhs_weap_HK416D10_smr_kac_tan {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm_s.rtm"};};
    class rhs_weap_HK416D10_smr_bcm_des: rhs_weap_HK416D10_smr_des {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm_s.rtm"};};
    class rhs_weap_HK416D10_smr_kac_bcm_des: rhs_weap_HK416D10_smr_kac_des {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm_s.rtm"};};
    class rhs_weap_HK416D10_smr_bcm_wdl: rhs_weap_HK416D10_smr_wdl {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm_s.rtm"};};
    class rhs_weap_HK416D10_smr_kac_bcm_wdl: rhs_weap_HK416D10_smr_kac_wdl {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm_s.rtm"};};
};