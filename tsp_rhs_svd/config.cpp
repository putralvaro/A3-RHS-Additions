class CfgPatches {class tsp_rhs_svd {requiredAddons[] = {"tsp_rhs_weapon"}; units[] = {};};};

class WeaponSlotsInfo;
class asdg_MuzzleSlot_762R_SVD; 
class rhs_russian_svd_muzzle_slot: asdg_MuzzleSlot_762R_SVD {class compatibleItems {rhs_acc_tgpv = 1; rhs_acc_tgpv2 = 1; rhsgref_sdn6_suppressor = 1;};};
class CfgWeapons {
	class rhs_acc_bipod;
	class rhs_acc_ak5;
	class rhs_weap_svdp;
	class rhs_acc_svd: rhs_acc_bipod {displayName = "SVD Wooden Stock"; model = "\tsp_rhs_svd\svd.p3d"; descriptionShort = "SVD stock";};
	class rhs_acc_svd_muzzle: rhs_acc_ak5 {displayName = "SVD Wooden Stock"; model = "\tsp_rhs_svd\svd_muzzle.p3d"; descriptionShort = "SVD stock";};
	
	class rhs_weap_svdo: rhs_weap_svdp {
		baseWeapon = "rhs_weap_svdo"; displayName = "SVD"; picture = "\tsp_rhs_svd\svd.paa";
		hiddenSelections[] = {"camo1", "camo3"}; hiddenSelectionsTextures[] = {"\tsp_rhs_svd\tex\svd_ca.paa", "\tsp_rhs_weapon\tex\empty.paa"};
		class linkedItems {class linkedItemsPointer {slot = "MuzzleSlot"; item = "rhs_acc_svd_muzzle";};};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot: rhs_russian_svd_muzzle_slot {class compatibleItems {rhs_acc_svd_muzzle = 1;};};	
		};
	};
};