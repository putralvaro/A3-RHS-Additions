class CfgPatches {class tsp_rhs_urgi {requiredAddons[] = {"tsp_rhs_weapon"}; units[] = {};};};

class WeaponSlotsInfo;
class CfgWeapons {
    class rhs_acc_bipod;
    class rhs_weap_m4a1_blockII;
    class rhs_weap_mk18;

    class rhs_acc_urgi_blk: rhs_acc_bipod {displayName = "URGI Handguard (Black)"; model = "\tsp_rhs_urgi\urgi_blk.p3d";};
    class rhs_acc_urgi_coy: rhs_acc_urgi_blk {displayName = "URGI Handguard (Coyote)"; model = "\tsp_rhs_urgi\urgi_coy.p3d";};
    class rhs_acc_urgi_des: rhs_acc_urgi_blk {displayName = "URGI Handguard (Desert)"; model = "\tsp_rhs_urgi\urgi_des.p3d";};
    class rhs_acc_urgi_wdl: rhs_acc_urgi_blk {displayName = "URGI Handguard (Woodland)"; model = "\tsp_rhs_urgi\urgi_wdl.p3d";};    
    class rhs_acc_urgi_bcm_blk: rhs_acc_urgi_blk {displayName = "URGI Handguard (BCM, Black)"; model = "\tsp_rhs_urgi\urgi_bcm_blk.p3d"; weaponInfoType = "RHS_Gripod1"; rhs_grip_type = "rhs_grip5_change";};
    class rhs_acc_urgi_bcm_coy: rhs_acc_urgi_bcm_blk {displayName = "URGI Handguard (BCM, Coyote)"; model = "\tsp_rhs_urgi\urgi_bcm_coy.p3d";};
    class rhs_acc_urgi_bcm_des: rhs_acc_urgi_bcm_blk {displayName = "URGI Handguard (BCM, Desert)"; model = "\tsp_rhs_urgi\urgi_bcm_des.p3d";};
    class rhs_acc_urgi_bcm_wdl: rhs_acc_urgi_bcm_blk {displayName = "URGI Handguard (BCM, Woodland)"; model = "\tsp_rhs_urgi\urgi_bcm_wdl.p3d";};

    class rhs_acc_urgi_s_blk: rhs_acc_urgi_blk {displayName = "URGI Handguard (Black)"; model = "\tsp_rhs_urgi\urgi_s_blk.p3d";};
    class rhs_acc_urgi_s_coy: rhs_acc_urgi_s_blk {displayName = "URGI Handguard (Coyote)"; model = "\tsp_rhs_urgi\urgi_s_coy.p3d";};
    class rhs_acc_urgi_s_des: rhs_acc_urgi_s_blk {displayName = "URGI Handguard (Desert)"; model = "\tsp_rhs_urgi\urgi_s_des.p3d";};
    class rhs_acc_urgi_s_wdl: rhs_acc_urgi_s_blk {displayName = "URGI Handguard (Woodland)"; model = "\tsp_rhs_urgi\urgi_s_wdl.p3d";};
    class rhs_acc_urgi_s_bcm_blk: rhs_acc_urgi_s_blk {displayName = "URGI Handguard (BCM, Black)"; model = "\tsp_rhs_urgi\urgi_s_bcm_blk.p3d"; weaponInfoType = "RHS_Gripod1"; rhs_grip_type = "rhs_grip5_change";};
    class rhs_acc_urgi_s_bcm_coy: rhs_acc_urgi_s_bcm_blk {displayName = "URGI Handguard (BCM, Coyote)"; model = "\tsp_rhs_urgi\urgi_s_bcm_coy.p3d";};
    class rhs_acc_urgi_s_bcm_des: rhs_acc_urgi_s_bcm_blk {displayName = "URGI Handguard (BCM, Desert)"; model = "\tsp_rhs_urgi\urgi_s_bcm_des.p3d";};
    class rhs_acc_urgi_s_bcm_wdl: rhs_acc_urgi_s_bcm_blk {displayName = "URGI Handguard (BCM, Woodland)"; model = "\tsp_rhs_urgi\urgi_s_bcm_wdl.p3d";};

    class rhs_weap_m4a1_urgi: rhs_weap_m4a1_blockII {
        baseWeapon = "rhs_weap_m4a1_urgi"; displayName = "M4A1 (URGI)"; picture = "\tsp_rhs_urgi\gui\urgi_coy.paa"; rhs_grip5_change = "rhs_weap_m4a1_urgi_bcm";
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG"}; handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\clamp_thumb.rtm"};
        hiddenSelectionsTextures[] = {
            "\tsp_rhs_weapon\tex\m4_noris_noring_nocharge.paa",
            "\tsp_rhs_weapon\tex\empty.paa",
            "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
            "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
            "\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_co.paa"
        };
        hiddenSelectionsMaterials[] = {"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1.rvmat", "\tsp_rhs_weapon\tex\empty.rvmat", "\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.rvmat"};
        class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_urgi_coy";}; class linkedItemsMuzzle {slot = "MuzzleSlot"; item = "rhsusf_acc_SF3P556";};};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class gripodSlot {}; 
            class underBarrelSlot {linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL"; class compatibleItems {rhs_acc_urgi_blk = 1; rhs_acc_urgi_coy = 1; rhs_acc_urgi_des = 1; rhs_acc_urgi_wdl = 1; rhs_acc_urgi_bcm_blk = 1; rhs_acc_urgi_bcm_coy = 1; rhs_acc_urgi_bcm_des = 1; rhs_acc_urgi_bcm_wdl = 1;};};
        };
    };
    class rhs_weap_m4a1_urgi_kac: rhs_weap_m4a1_urgi {
        baseWeapon = "rhs_weap_m4a1_urgi_kac"; displayName = "M4A1 (URGI/SOPMOD Stock)"; model = "\rhsusf\addons\rhsusf_weapons3\M4BII\m4a1_blockII_KACSTOCK.p3d"; rhs_grip5_change = "rhs_weap_m4a1_urgi_kac_bcm";
        hiddenSelectionsTextures[] = {"\tsp_rhs_weapon\tex\m4_noris_noring_nocharge.paa", "\tsp_rhs_weapon\tex\empty.paa", "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa", "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa", "\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_co.paa"};
    };

    class rhs_weap_m4a1_urgi_des: rhs_weap_m4a1_urgi {
        baseWeapon = "rhs_weap_m4a1_urgi_des"; displayName = "M4A1 (URGI/Desert)"; picture = "\tsp_rhs_urgi\gui\urgi_des.paa"; rhs_grip5_change = "rhs_weap_m4a1_urgi_bcm_des";	
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan"};
        hiddenSelectionsTextures[] = {
            "\tsp_rhs_weapon\tex\m4_noris_noring_nocharge_des.paa",
            "\tsp_rhs_weapon\tex\empty.paa",
            "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
            "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
            "\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_d_co.paa"
        };
        class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_urgi_des";}; class linkedItemsMuzzle {slot = "MuzzleSlot"; item = "rhsusf_acc_SF3P556";};};
    };
    class rhs_weap_m4a1_urgi_kac_des: rhs_weap_m4a1_urgi_des {
        baseWeapon = "rhs_weap_m4a1_urgi_kac_des"; displayName = "M4A1 (URGI/Desert/SOPMOD Stock)"; model = "\rhsusf\addons\rhsusf_weapons3\M4BII\m4a1_blockII_KACSTOCK.p3d"; rhs_grip5_change = "rhs_weap_m4a1_urgi_kac_bcm_des";
        hiddenSelectionsTextures[] = {"\tsp_rhs_weapon\tex\m4_noris_noring_nocharge_des.paa", "\tsp_rhs_weapon\tex\empty.paa", "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa", "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa", "\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_d_co.paa"};
    };

    class rhs_weap_m4a1_urgi_wdl: rhs_weap_m4a1_urgi {
        baseWeapon = "rhs_weap_m4a1_urgi_wdl"; displayName = "M4A1 (URGI/Woodland)"; picture = "\tsp_rhs_urgi\gui\urgi_wdl.paa"; rhs_grip5_change = "rhs_weap_m4a1_urgi_kac_bcm_wdl";		
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG"};
        hiddenSelectionsTextures[] = {
            "\tsp_rhs_weapon\tex\m4_noris_noring_nocharge_wdl.paa",
            "\tsp_rhs_weapon\tex\empty.paa",
            "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
            "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
            "\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_wd_co.paa"
        };
        class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_urgi_wdl";}; class linkedItemsMuzzle {slot = "MuzzleSlot"; item = "rhsusf_acc_SF3P556";};};
    };
    class rhs_weap_m4a1_urgi_kac_wdl: rhs_weap_m4a1_urgi_wdl {
        baseWeapon = "rhs_weap_m4a1_urgi_kac_wdl"; displayName = "M4A1 (URGI/Woodland/SOPMOD Stock)"; model = "\rhsusf\addons\rhsusf_weapons3\M4BII\m4a1_blockII_KACSTOCK.p3d"; rhs_grip5_change = "rhs_weap_m4a1_urgi_kac_bcm_wdl";
        hiddenSelectionsTextures[] = {"\tsp_rhs_weapon\tex\m4_noris_noring_nocharge_wdl.paa", "\tsp_rhs_weapon\tex\empty.paa", "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa", "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa", "\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_wd_co.paa"};
    };

    class rhs_weap_mk18_urgi: rhs_weap_mk18 {
        baseWeapon = "rhs_weap_mk18_urgi"; displayName = "MK18 (URGI)"; picture = "\tsp_rhs_urgi\gui\urgi_coy.paa"; rhs_grip5_change = "rhs_weap_mk18_urgi_bcm";
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG"}; handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\clamp_thumb_s.rtm"};
        hiddenSelectionsTextures[] = {
            "\tsp_rhs_weapon\tex\m4_noris_noring_nocharge.paa",
            "\tsp_rhs_weapon\tex\empty.paa",
            "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
            "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
            "\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_co.paa"
        };
        hiddenSelectionsMaterials[] = {"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1.rvmat", "\tsp_rhs_weapon\tex\empty.rvmat", "\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.rvmat"};
        class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_urgi_s_coy";}; class linkedItemsMuzzle {slot = "MuzzleSlot"; item = "rhsusf_acc_SF3P556";};};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class gripodSlot {}; 
            class underBarrelSlot {linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL"; class compatibleItems {rhs_acc_urgi_s_blk = 1; rhs_acc_urgi_s_coy = 1; rhs_acc_urgi_s_des = 1; rhs_acc_urgi_s_wdl = 1; rhs_acc_urgi_s_bcm_blk = 1; rhs_acc_urgi_s_bcm_coy = 1; rhs_acc_urgi_s_bcm_des = 1; rhs_acc_urgi_s_bcm_wdl = 1;};};
        };
    };
    class rhs_weap_mk18_urgi_kac: rhs_weap_mk18_urgi {
        baseWeapon = "rhs_weap_mk18_urgi_kac"; displayName = "MK18 (URGI/SOPMOD Stock)"; model = "\rhsusf\addons\rhsusf_weapons3\M4BII\MK18_KACSTOCK.p3d"; rhs_grip5_change = "rhs_weap_mk18_urgi_kac_bcm";
        hiddenSelectionsTextures[] = {"\tsp_rhs_weapon\tex\m4_noris_noring_nocharge.paa", "\tsp_rhs_weapon\tex\empty.paa", "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa", "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa", "\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_co.paa"};
    };

    class rhs_weap_mk18_urgi_des: rhs_weap_mk18_urgi {
        baseWeapon = "rhs_weap_mk18_urgi_des"; displayName = "MK18 (URGI/Desert)"; picture = "\tsp_rhs_urgi\gui\urgi_des.paa"; rhs_grip5_change = "rhs_weap_mk18_urgi_bcm_des";	
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan"};
        hiddenSelectionsTextures[] = {
            "\tsp_rhs_weapon\tex\m4_noris_noring_nocharge_des.paa",
            "\tsp_rhs_weapon\tex\empty.paa",
            "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
            "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
            "\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_d_co.paa"
        };
        class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_urgi_s_des";}; class linkedItemsMuzzle {slot = "MuzzleSlot"; item = "rhsusf_acc_SF3P556";};};
    };
    class rhs_weap_mk18_urgi_kac_des: rhs_weap_mk18_urgi_des {
        baseWeapon = "rhs_weap_mk18_urgi_kac_des"; displayName = "MK18 (URGI/Desert/SOPMOD Stock)"; model = "\rhsusf\addons\rhsusf_weapons3\M4BII\MK18_KACSTOCK.p3d"; rhs_grip5_change = "rhs_weap_mk18_urgi_kac_bcm_des";
        hiddenSelectionsTextures[] = {"\tsp_rhs_weapon\tex\m4_noris_noring_nocharge_des.paa", "\tsp_rhs_weapon\tex\empty.paa", "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa", "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa", "\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_d_co.paa"};
    };

    class rhs_weap_mk18_urgi_wdl: rhs_weap_mk18_urgi {
        baseWeapon = "rhs_weap_mk18_urgi_wdl"; displayName = "MK18 (URGI/Woodland)"; picture = "\tsp_rhs_urgi\gui\urgi_wdl.paa"; rhs_grip5_change = "rhs_weap_mk18_urgi_kac_bcm_wdl";		
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG"};
        hiddenSelectionsTextures[] = {
            "\tsp_rhs_weapon\tex\m4_noris_noring_nocharge_wdl.paa",
            "\tsp_rhs_weapon\tex\empty.paa",
            "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
            "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
            "\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_wd_co.paa"
        };
        class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_urgi_s_wdl";}; class linkedItemsMuzzle {slot = "MuzzleSlot"; item = "rhsusf_acc_SF3P556";};};
    };
    class rhs_weap_mk18_urgi_kac_wdl: rhs_weap_mk18_urgi_wdl {
        baseWeapon = "rhs_weap_mk18_urgi_kac_wdl"; displayName = "MK18 (URGI/Woodland/SOPMOD Stock)"; model = "\rhsusf\addons\rhsusf_weapons3\M4BII\MK18_KACSTOCK.p3d"; rhs_grip5_change = "rhs_weap_mk18_urgi_kac_bcm_wdl";
        hiddenSelectionsTextures[] = {"\tsp_rhs_weapon\tex\m4_noris_noring_nocharge_wdl.paa", "\tsp_rhs_weapon\tex\empty.paa", "rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa", "rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa", "\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_wd_co.paa"};
    };

    class rhs_weap_m4a1_urgi_bcm: rhs_weap_m4a1_urgi {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm.rtm"};};
    class rhs_weap_m4a1_urgi_kac_bcm: rhs_weap_m4a1_urgi_kac {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm.rtm"};};
    class rhs_weap_m4a1_urgi_bcm_des: rhs_weap_m4a1_urgi_des {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm.rtm"};};
    class rhs_weap_m4a1_urgi_kac_bcm_des: rhs_weap_m4a1_urgi_kac_des {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm.rtm"};};
    class rhs_weap_m4a1_urgi_bcm_wdl: rhs_weap_m4a1_urgi_wdl {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm.rtm"};};
    class rhs_weap_m4a1_urgi_kac_bcm_wdl: rhs_weap_m4a1_urgi_kac_wdl {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm.rtm"};};
    class rhs_weap_mk18_urgi_bcm: rhs_weap_mk18_urgi {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm_s.rtm"};};
    class rhs_weap_mk18_urgi_kac_bcm: rhs_weap_mk18_urgi_kac {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm_s.rtm"};};
    class rhs_weap_mk18_urgi_bcm_des: rhs_weap_mk18_urgi_des {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm_s.rtm"};};
    class rhs_weap_mk18_urgi_kac_bcm_des: rhs_weap_mk18_urgi_kac_des {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm_s.rtm"};};
    class rhs_weap_mk18_urgi_bcm_wdl: rhs_weap_mk18_urgi_wdl {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm_s.rtm"};};
    class rhs_weap_mk18_urgi_kac_bcm_wdl: rhs_weap_mk18_urgi_kac_wdl {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\bcm_s.rtm"};};
};