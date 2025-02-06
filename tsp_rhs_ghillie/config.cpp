class CfgPatches {class tsp_rhs_ghillie {requiredAddons[] = {"tsp_rhs_weapon"}; units[] = {};};};

class SlotInfo;
class WeaponSlotsInfo;
class rhs_western_rifle_laser_slot_top; 
class rhs_western_rifle_laser_slot: rhs_western_rifle_laser_slot_top {class compatibleItems;};
class asdg_MuzzleSlot; 
class rhs_western_m24_muzzle_slot: asdg_MuzzleSlot {class compatibleItems;};
class CfgWeapons {
	class rhs_acc_pointer;
	class rhs_acc_bipod;
	class rhs_weap_XM2010_Base_F;
	
	class rhs_acc_ghillie_m40: rhs_acc_pointer {picture = "\tsp_rhs_ghillie\ghillie.paa"; displayName = "Ghillie Wrap"; model = "\tsp_rhs_ghillie\ghillie_m40.p3d"; descriptionShort = "For the M40";};
	class rhs_acc_ghillie_m24: rhs_acc_bipod {picture = "\tsp_rhs_ghillie\ghillie.paa"; displayName = "Ghillie Wrap"; model = "\tsp_rhs_ghillie\ghillie_m24.p3d"; descriptionShort = "For the M24";};

	class rhs_weap_m40a5: rhs_weap_XM2010_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class PointerSlot: rhs_western_rifle_laser_slot {
				class compatibleItems: compatibleItems {rhs_acc_ghillie_m40 = 1};
			};
		};
	};

	class rhs_weap_m24sws: rhs_weap_XM2010_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot: rhs_western_m24_muzzle_slot {class compatibleItems: compatibleItems {rhsgref_sdn6_suppressor = 1;};};
			class UnderBarrelSlot: SlotInfo {compatibleItems[] = {"rhsusf_acc_harris_swivel", "rhs_acc_ghillie_m24"};};
		};
	};
};