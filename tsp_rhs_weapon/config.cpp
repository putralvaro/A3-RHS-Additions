class CfgPatches {
	class tsp_rhs_weapon {
		requiredAddons[] = {
			"rhs_c_weapons", "rhsusf_weapons", "rhsusf_weapons2", "rhsusf_weapons3", 
			"rhsusf_c_weapons", "rhs_weapons", "rhs_weapons2", "rhs_weapons3",
			"asdg_jointmuzzles", "asdg_jointrails",
			"cba_main", "cba_main_a3",
			"rhsusf_muzzleflash"
		};
		units[] = {};
	};
};

//-- FUNCTIONS
class CfgFunctions {class tsp_rhs_weapon {class functions {class init {file = "\tsp_rhs_weapon\init.sqf"; postInit = true;};};};};

class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556: asdg_MuzzleSlot {class compatibleItems {rhsgref_sdn6_suppressor = 1;};}; 
class rhs_western_rifle_muzzle_slot: asdg_MuzzleSlot_556 {class compatibleItems {rhsgref_sdn6_suppressor = 1;};};

class CfgWeapons {
	class acc_flashlight;
	class bipod_01_F_snd;
	class inventoryFlashLightItem_Base_F;

	class rhs_acc_bipod: bipod_01_F_snd {permenant = true; displayName = "Base"; descriptionShort = ""; picture = "\tsp_rhs_weapon\tex\icon.paa"; class itemInfo {hasBipod = false; type = 302; mass = 10;};};		
	class rhs_acc_pointer: acc_flashlight {permenant = true; displayName = "Base"; descriptionShort = ""; picture = "\tsp_rhs_weapon\tex\icon.paa"; class itemInfo: inventoryFlashLightItem_Base_F {class Pointer {}; class FlashLight {};};};
	
	class rhs_weap_XM2010_Base_F; 
	class rhs_weap_dsr1: rhs_weap_XM2010_Base_F {baseWeapon = "rhs_weap_dsr1"; scope = 2;};
	
	class Rifle_Base_F; 
	class rhs_weap_M590_5RD: Rifle_Base_F {cursor = "sgun";};
	class rhs_weap_M590_8RD: rhs_weap_M590_5RD {cursor = "sgun";};
};

class CfgAmmo {class rhs_ammo_762x51_M80_Ball; class rhs_ammo_762x51_M993_Ball: rhs_ammo_762x51_M80_Ball {hit = 30;};};  //-- More AP please
class CfgMagazineWells {  //-- 3Rnd HE for WhiskyNova
	class CBA_40mm_M203 {
		BI_grenades_all[] = {"1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","3Rnd_HE_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F"};
	};
};