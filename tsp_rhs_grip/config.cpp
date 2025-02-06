class CfgPatches {class tsp_rhs_grip {requiredAddons[] = {"tsp_rhs_weapon"}; units[] = {};};};

class UnderBarrelSlot;
class rhs_rifle_gripod_slot: UnderBarrelSlot {class compatibleItems {rhsusf_acc_kac_grip_frwd = 1;};};
class CfgWeapons {
	class rhsusf_acc_grip3;
	class rhsusf_acc_rvg_blk: rhsusf_acc_grip3 {rhs_grip_type = "rhs_grip2_change";};
	class rhsusf_acc_rvg_de: rhsusf_acc_rvg_blk {rhs_grip_type = "rhs_grip2_change";};
	class rhsusf_acc_tdstubby_blk: rhsusf_acc_grip3 {rhs_grip_type = "rhs_grip2_change";};
	class rhsusf_acc_tdstubby_tan: rhsusf_acc_tdstubby_blk {rhs_grip_type = "rhs_grip2_change";};
	
	class rhsusf_acc_kac_grip;
	class rhsusf_acc_kac_grip_frwd: rhsusf_acc_kac_grip {displayName = "KAC Vertical Grip (Forward)"; rhs_grip_type = "rhs_grip2_change";};
	
	//class test; class rhs_weap_m4a1_blockII: test {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\clamp.rtm"};};
	//class test; class rhs_weap_mk18: test {handAnim[] = {"OFP2_ManSkeleton","\tsp_rhs_weapon\anim\clamp.rtm"};};
};