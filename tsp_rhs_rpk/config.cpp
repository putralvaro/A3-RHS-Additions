class CfgPatches {class tsp_rhs_rpk {requiredAddons[] = {"tsp_rhs_weapon"}; units[] = {};};};

class WeaponSlotsInfo;
class CfgWeapons {
	class rhs_acc_pointer;
	class rhs_weap_rpk74n; class rhs_weap_rpk74m: rhs_weap_rpk74n {class WeaponSlotsInfo;};

	class rhs_acc_rpk: rhs_acc_pointer {displayName = "RPK Wooden Furniture"; model = "\tsp_rhs_rpk\rpk.p3d"; descriptionShort = "Old school RPK wooden furniture";};
	class rhs_weap_rpk74_wood: rhs_weap_rpk74m {
		baseWeapon = "rhs_weap_rpk74_wood";	displayName = "RPK-74";	magazines[] = {"rhs_45Rnd_545x39_7N6M_AK"};
		hiddenSelections[] = {"camo2"};	hiddenSelectionsTextures[] = {"\tsp_rhs_rpk\tex\rpk_nofurniture_ca.paa"}; hiddenSelectionsMaterials[] = {"\tsp_rhs_weapon\tex\empty.rvmat"};
		rhs_fold = ""; rhs_fold_anim = "";
		class linkedItems {class linkedItemsPointer {slot = "pointerSlot"; item = "rhs_acc_rpk";};};	
		class WeaponSlotsInfo: WeaponSlotsInfo {class pointerSlot {linkProxy = "\a3\data_f\proxies\weapon_slots\SIDE"; class compatibleItems {rhs_acc_rpk = 1;};};};
	};
	class rhs_weap_rpk_wood: rhs_weap_rpk74_wood {
		baseWeapon = "rhs_weap_rpk_wood"; displayName = "RPK"; magazineWell[] = {"AK_762x39", "CBA_762x39_AK", "CBA_762x39_RPK"};
		magazines[] = {"rhs_75Rnd_762x39mm", "rhs_75Rnd_762x39mm_89", "rhs_75Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_U"};
	};
};