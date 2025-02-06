class CfgPatches {class tsp_rhs_ergo {requiredAddons[] = {"tsp_rhs_weapon"}; units[] = {};};};

class WeaponSlotsInfo;
class UnderBarrelSlot;
class rhs_rifle_gripod_slot: UnderBarrelSlot {class compatibleItems;};
class rhs_western_rifle_gripod_slot: rhs_rifle_gripod_slot {class compatibleItems: compatibleItems {rhs_acc_ergo_blk = 1;};};
class CfgWeapons {
	class rhsusf_acc_grip1;
	class rhs_acc_ergo_blk: rhsusf_acc_grip1 {rhs_grip_type = "rhs_grip4_change"; displayName = "Ergo Rail Extender (Black)"; model = "\tsp_rhs_ergo\ergo_blk.p3d";};

	//-- M4
	class rhs_weap_m4_Base;
	class rhs_weap_m4: rhs_weap_m4_Base {rhs_grip4_change = "rhs_weap_m4_grip4";};
	class rhs_weap_m4_grip4: rhs_weap_m4 {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\clamp.rtm"};};
	class rhs_weap_m4_mstock: rhs_weap_m4 {rhs_grip4_change = "rhs_weap_m4_mstock_grip4";};
	class rhs_weap_m4_mstock_grip4: rhs_weap_m4_mstock {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\clamp.rtm"};};
	class rhs_weap_m4_carryhandle: rhs_weap_m4 {rhs_grip4_change = "rhs_weap_m4_carryhandle_grip4";};
	class rhs_weap_m4_carryhandle_grip4: rhs_weap_m4_carryhandle {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\clamp.rtm"};};
	class rhs_weap_m4_carryhandle_mstock: rhs_weap_m4_carryhandle {rhs_grip4_change = "rhs_weap_m4_carryhandle_mstock_grip4";};
	class rhs_weap_m4_carryhandle_mstock_grip4: rhs_weap_m4_carryhandle_mstock {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\clamp.rtm"};};

	//-- M4A1
	class rhs_weap_m4a1: rhs_weap_m4_Base {rhs_grip4_change = "rhs_weap_m4a1_grip4";};
	class rhs_weap_m4a1_grip4: rhs_weap_m4a1 {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\clamp.rtm"};};
	class rhs_weap_m4a1_mstock: rhs_weap_m4a1 {rhs_grip4_change = "rhs_weap_m4a1_mstock_grip4";};
	class rhs_weap_m4a1_mstock_grip4: rhs_weap_m4a1_mstock {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\clamp.rtm"};};
	class rhs_weap_m4a1_carryhandle: rhs_weap_m4a1 {rhs_grip4_change = "rhs_weap_m4a1_carryhandle_grip4";};
	class rhs_weap_m4a1_carryhandle_grip4: rhs_weap_m4a1_carryhandle {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\clamp.rtm"};};
	class rhs_weap_m4a1_carryhandle_mstock: rhs_weap_m4a1_carryhandle {rhs_grip4_change = "rhs_weap_m4a1_carryhandle_mstock_grip4";};
	class rhs_weap_m4a1_carryhandle_mstock_grip4: rhs_weap_m4a1_carryhandle_mstock {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\clamp.rtm"};};

	//-- M4A1 DES
	class rhs_weap_m4a1_d: rhs_weap_m4a1 {rhs_grip4_change = "rhs_weap_m4a1_d_grip4";};
	class rhs_weap_m4a1_d_grip4: rhs_weap_m4a1_d {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\clamp.rtm"};};
	class rhs_weap_m4a1_d_mstock: rhs_weap_m4a1_d {rhs_grip4_change = "rhs_weap_m4a1_d_mstock_grip4";};
	class rhs_weap_m4a1_d_mstock_grip4: rhs_weap_m4a1_d_mstock {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\clamp.rtm"};};

	//-- DINO
	class rhs_acc_bipod;
	class rhs_acc_m4_dino: rhs_acc_bipod {displayName = "SLS + Ergo"; model = "\tsp_rhs_ergo\dino.p3d"; descriptionShort = "SLS + Ergo";};
	class rhs_weap_m4_dino: rhs_weap_m4_carryhandle {
		displayName = "M4 (Dino)";
		baseWeapon = "rhs_weap_m4_dino";
		hiddenSelectionsTextures[] = {"\tsp_rhs_ergo\tex\m4_dino.paa"};
		hiddenSelectionsMaterials[] = {"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1.rvmat", "\rhsusf\addons\rhsusf_weapons\m4\data\magazine.rvmat", "\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.rvmat", "\tsp_rhs_weapon\tex\empty.rvmat"};
		handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\clamp.rtm"};
		class linkedItems {class linkedItemsUnder {slot = "underBarrelSlot"; item = "rhs_acc_m4_dino";};};
		class WeaponSlotsInfo: WeaponSlotsInfo {class underBarrelSlot {linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL"; class compatibleItems {rhs_acc_m4_dino = 1;};};};
	};

	//-- GOOSEY
	class rhs_weap_m4a1_goose: rhs_weap_m4a1_d {
        displayName = "M4A1 (Goosey)";
    	baseWeapon = "rhs_weap_m4a1_goose";
        hiddenSelectionsTextures[] = {"\tsp_rhs_ergo\tex\m4_goose.paa", "\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa", "", "", "\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa", "\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_d_co.paa", "\rhsusf\addons\rhsusf_weapons\m4\data\m203s_d_co.paa", "\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_d_co.paa", "\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa", "\tsp_rhs_ergo\tex\m4_goose.paa"};
        rhs_grip1_change = "rhs_weap_m4a1_goose_grip"; rhs_grip2_change = "rhs_weap_m4a1_goose_grip2"; rhs_grip3_change = "rhs_weap_m4a1_goose_grip3"; rhs_grip4_change = "rhs_weap_m4a1_goose_grip4";
    };
    class rhs_weap_m4a1_goose_grip: rhs_weap_m4a1_goose {
        picture="\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_m4a1_d_grip_ca.paa";
        class WeaponSlotsInfo: WeaponSlotsInfo {mass = 65; class UnderBarrelSlot {};};
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m16a4.rtm"};
        class LinkedItems {class LinkedItemsUnder {item = "rhsusf_acc_grip1"; slot = "UnderBarrelSlot";};};
    };
    class rhs_weap_m4a1_goose_grip2: rhs_weap_m4a1_goose_grip {
        picture = "\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_m4a1_d_grip2_ca.paa";
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1_afg.rtm"};
        class LinkedItems {class LinkedItemsUnder {item = "rhsusf_acc_grip2"; slot = "UnderBarrelSlot";};};
    };
    class rhs_weap_m4a1_goose_grip3: rhs_weap_m4a1_goose_grip {
        picture = "\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_m4a1_d_grip3_ca.paa";
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m16a4.rtm"};
        class LinkedItems {class LinkedItemsUnder {item = "rhsusf_acc_grip3"; slot = "UnderBarrelSlot";};};
    };
	class rhs_weap_m4a1_goose_grip4: rhs_weap_m4a1_goose {handAnim[] = {"OFP2_ManSkeleton", "\tsp_rhs_weapon\anim\clamp.rtm"};};
};