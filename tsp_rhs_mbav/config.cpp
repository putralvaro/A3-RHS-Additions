class CfgPatches {class tsp_rhs_mbav {requiredAddons[] = {"rhs_infantry"}; units[] = {};};};

class CfgWeapons {
    class rhsusf_mbav; class rhsusf_mbav_light; class rhsusf_mbav_rifleman;	class rhsusf_mbav_mg; class rhsusf_mbav_grenadier; class rhsusf_mbav_medic;
	#define mbav_green hiddenSelections[] = {"camo", "camo2"}; hiddenSelectionsTextures[] = {"tsp_rhs_mbav\tex\mbav_rgr_co.paa", "tsp_rhs_mbav\tex\gear_rgr_co.paa"};
	#define mbav_multicam hiddenSelections[] = {"camo", "camo2"}; hiddenSelectionsTextures[] = {"tsp_rhs_mbav\tex\mbav_mc_co.paa", "tsp_rhs_mbav\tex\gear_mc_co.paa"};
	class mbavr: rhsusf_mbav {displayName = "MBAV Ranger"; model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader"; mbav_green};
	class mbavr_l: rhsusf_mbav_light {displayName = "MBAV Ranger (Light)"; model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader"; mbav_green};
	class mbavr_r: rhsusf_mbav_rifleman	{displayName = "MBAV Ranger (Rifleman)"; model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader"; mbav_green};
	class mbavr_mg: rhsusf_mbav_mg {displayName = "MBAV Ranger (Machinegunner)"; model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader"; mbav_green};
	class mbavr_gl: rhsusf_mbav_grenadier {displayName = "MBAV Ranger (Grenadier)"; model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader"; mbav_green};
	class mbavr_m: rhsusf_mbav_medic {displayName = "MBAV Ranger (Medic)"; model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader"; mbav_green};
	class mbavmc: rhsusf_mbav {displayName = "MBAV Multicam"; model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader"; mbav_multicam};
	class mbavmc_l: rhsusf_mbav_light {displayName = "MBAV Multicam (Light)"; model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader"; mbav_multicam};
	class mbavmc_r: rhsusf_mbav_rifleman {displayName = "MBAV Multicam (Rifleman)"; model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader"; mbav_multicam};
	class mbavmc_mg: rhsusf_mbav_mg	{displayName = "MBAV Multicam (Machinegunner)"; model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";	mbav_multicam};
	class mbavmc_gl: rhsusf_mbav_grenadier {displayName = "MBAV Multicam (Grenadier)"; model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";	mbav_multicam};
	class mbavmc_m: rhsusf_mbav_medic {displayName = "MBAV Multicam (Medic)"; model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader"; mbav_multicam};
};