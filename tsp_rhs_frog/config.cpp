class CfgPatches {class tsp_rhs_frog {requiredAddons[] = {"rhs_infantry"}; units[] = {};};};

class CfgWeapons {
	class rhs_uniform_cu_ocp; class rhs_uniform_FROG01_wd: rhs_uniform_cu_ocp {class itemInfo;};
	class rhs_uniform_FROG_dwd: rhs_uniform_FROG01_wd {displayName = "FROG MARPAT-D/WD"; picture = "\tsp_rhs_frog\gui\frog_dwd.paa"; class itemInfo: itemInfo {uniformClass = "rhs_uniform_FROG_dwd_unit";};};
	class rhs_uniform_FROG_wdd: rhs_uniform_FROG01_wd {displayName = "FROG MARPAT-WD/D"; picture = "\tsp_rhs_frog\gui\frog_wdd.paa"; class itemInfo: itemInfo {uniformClass = "rhs_uniform_FROG_wdd_unit";};};
};

class CfgVehicles {
	class rhsusf_usmc_marpat_d_crewman;
	class rhs_uniform_FROG_dwd_unit: rhsusf_usmc_marpat_d_crewman {uniformClass = "rhs_uniform_FROG_dwd"; hiddenSelectionsTextures[] = {"\tsp_rhs_frog\tex\frog_dwd_co.paa"};};
	class rhs_uniform_FROG_wdd_unit: rhsusf_usmc_marpat_d_crewman {uniformClass = "rhs_uniform_FROG_wdd"; hiddenSelectionsTextures[] = {"\tsp_rhs_frog\tex\frog_wdd_co.paa"};};
};