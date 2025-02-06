class CfgPatches {
	class tsp_flashlight {
		requiredAddons[] = {"cba_common", "A3_Weapons_F_Acc", "Tier1_Weapons_cfg"};
		weapons[] = {"acc_flashlight", "rhsusf_acc_anpeq15_light", "rhs_acc_2dpZenit", "rhs_acc_perst3_2dp_light"};
		units[] = {};
	};
};

class CfgWeapons {
	//-- Vanilla
		class ItemCore;
		class InventoryFlashlightItem_Base_F;
		class acc_flashlight: ItemCore {
			class ItemInfo: InventoryFlashlightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light.hpp"
			};};
		};
		class acc_flashlight_pistol: ItemCore {
			class ItemInfo: InventoryFlashlightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light.hpp"
			};};
		};

	//-- RHS
		class rhsusf_acc_anpeq15;
		class rhsusf_acc_anpeq15_light: rhsusf_acc_anpeq15 {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light.hpp"
			};};
		};		
		class rhs_acc_2dpZenit: acc_flashlight {
			class ItemInfo: ItemInfo {class FlashLight {
				#include "\tsp_flashlight\light_2dp.hpp"
			};};
		};
		class rhs_acc_perst3;
		class rhs_acc_perst3_2dp: rhs_acc_perst3 {class ItemInfo;};
		class rhs_acc_perst3_2dp_light: rhs_acc_perst3_2dp {
			class ItemInfo: ItemInfo {class FlashLight {
				#include "\tsp_flashlight\light_2dp.hpp"
			};};
		};

	//-- Tier 1
		class acc_pointer_IR;
		class Tier1_URX4_LA5_M300C_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MW_LA5_M300C_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MCX_LA5_M300C_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_RAHG_LA5_M300C_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_416_LA5_M300C_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_URX4_LA5_M300C_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_416_LA5_M300C_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MW_LA5_M300C_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_145_LA5_M300C_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MCX_LA5_M300C_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_10_LA5_M300C_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_RAHG_LA5_M300C_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_URX4_LA5_M600V_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_416_LA5_M600V_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MW_LA5_M600V_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MCX_LA5_M600V_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_Mk48Mod0_LA5_M600V_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_RAHG_LA5_M600V_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_Mk46Mod1_LA5_M600V_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_Mk48Mod1_LA5_M600V_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_Mk46Mod0_LA5_M600V_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MW_LA5_M600V_alt_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_416_LA5_M600V_alt_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_URX4_LA5_M600V_alt_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_RAHG_LA5_M600V_alt_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_URX4_LA5_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_Mk46Mod1_LA5_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_Mk46Mod0_LA5_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_10_LA5_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_RAHG_LA5_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_Mk48Mod0_LA5_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MCX_LA5_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_145_LA5_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MW_LA5_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_416_LA5_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_Mk48Mod1_LA5_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_10_LA5_M600V_alt_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_RAHG_LA5_M600V_alt_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_145_LA5_M600V_alt_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_416_LA5_M600V_alt_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MW_LA5_M600V_alt_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_URX4_LA5_M600V_alt_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_Mk46Mod0_LA5_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_10_LA5_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_Mk46Mod1_LA5_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_RAHG_LA5_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MCX_LA5_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_145_LA5_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_Mk48Mod1_LA5_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_URX4_LA5_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_416_LA5_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MW_LA5_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_Mk48Mod0_LA5_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_M249_LA5_M600V_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_M249_LA5_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_M249_LA5_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_M4BII_LA5_M300C_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_M4BII_LA5_M300C_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_M4BII_LA5_M600V_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_M4BII_LA5_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_M4BII_LA5_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_M4BII_NGAL_M300C_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_M4BII_NGAL_M300C_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_M4BII_NGAL_M600V_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_M4BII_NGAL_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_M4BII_NGAL_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_Mk18_LA5_M300C_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_Mk18_LA5_M300C_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_Mk18_LA5_M600V_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_Mk18_LA5_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_Mk18_LA5_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_Mk18_NGAL_M300C_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_Mk18_NGAL_M600V_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_Mk18_NGAL_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_Mk18_NGAL_M300C_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_Mk18_NGAL_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MP7_LA5_M300C_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MP7_LA5_M300C_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MP7_NGAL_M300C_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MP7_NGAL_M300C_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MW_NGAL_M300C_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_URX4_NGAL_M300C_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_RAHG_NGAL_M300C_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MCX_NGAL_M300C_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MW_NGAL_M300C_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_10_NGAL_M300C_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_URX4_NGAL_M300C_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_145_NGAL_M300C_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_RAHG_NGAL_M300C_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MCX_NGAL_M300C_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MCX_NGAL_M600V_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MW_NGAL_M600V_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_URX4_NGAL_M600V_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_RAHG_NGAL_M600V_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MW_NGAL_M600V_alt_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_RAHG_NGAL_M600V_alt_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_URX4_NGAL_M600V_alt_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MCX_NGAL_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MW_NGAL_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_10_NGAL_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_RAHG_NGAL_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_URX4_NGAL_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_145_NGAL_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MW_NGAL_M600V_alt_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_10_NGAL_M600V_alt_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_145_NGAL_M600V_alt_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_RAHG_NGAL_M600V_alt_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_URX4_NGAL_M600V_alt_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MCX_NGAL_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_MW_NGAL_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_10_NGAL_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_RAHG_NGAL_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_145_NGAL_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_URX4_NGAL_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_SCAR_LA5_M300C_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_SCAR_LA5_M300C_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_SCAR_LA5_M600V_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_SCAR_LA5_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_SCAR_LA5_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_SCAR_NGAL_M300C_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_SCAR_NGAL_M300C_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_SCAR_NGAL_M600V_Black_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_SCAR_NGAL_M600V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_SCAR_NGAL_M603V_FL: acc_pointer_IR {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_DBALPL_FL: ItemCore {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
		class Tier1_TLR1: ItemCore {
			class ItemInfo: InventoryFlashLightItem_Base_F {class FlashLight {
				#include "\tsp_flashlight\light_t1.hpp"
			};};
		};
};