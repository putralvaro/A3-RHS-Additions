class CfgPatches {class tsp_rhs_fal {requiredAddons[] = {"tsp_rhs_weapon"}; units[] = {};};};

class CfgWeapons {
	class rhs_weap_l1a1_wood;
	class rhs_weap_l1a1_wood_para: rhs_weap_l1a1_wood {
		baseWeapon = "rhs_weap_l1a1_wood_para"; 
		displayName = "L1A1 (Wood, Para)"; 
		model = "\rhsgref\addons\rhsgref_weapons3\fnfal\rhs_l1a1_commando.p3d"; 
		weaponInfoType = "rhs_rscOptics_falHandler";
		rhs_fold = "rhs_weap_l1a1_wood_para_fold"; 
		rhs_fold_anim = "RHS_GestureFoldAK74M"; 
		rhs_fold_sound[] = {"rhsafrf\addons\rhs_c_weapons\sounds\stock_folding.wss",1.42,1,20};
	};
	class rhs_weap_l1a1_wood_para_fold: rhs_weap_l1a1_wood_para {
		model = "\rhsgref\addons\rhsgref_weapons3\fnfal\rhs_l1a1_commando_folded.p3d"; 
		rhs_fold = "rhs_weap_l1a1_wood_para";
	};
};

class RscPicture;
class RscInGameUI {
	class RscWeaponZeroing;
	class rhs_rscOptics_falHandler: RscWeaponZeroing {
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_fold_AK";
		class RHS_fal_fold_handler: RscPicture {idc = 9899;}; controls[] = {"CA_Zeroing", "RHS_fal_fold_handler"};
	};
};