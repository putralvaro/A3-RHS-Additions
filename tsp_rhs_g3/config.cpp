class CfgPatches {class tsp_rhs_g3 {requiredAddons[] = {"rhs_infantry"}; units[] = {};};};

class CfgWeapons {
	class Uniform_Base; class rhs_uniform_g3_aor2: Uniform_Base {class itemInfo;};
	class rhs_uniform_g3_aor1: rhs_uniform_g3_aor2 {displayName = "G3 Uniform (AOR1)"; picture = "\tsp_rhs_g3\gui\g3_aor1.paa"; class itemInfo: itemInfo {uniformClass = "rhsusf_socom_g3_aor1_unit";};};;
	class rhs_uniform_g3_aor1aor2: rhs_uniform_g3_aor2 {displayName = "G3 Uniform (AOR1/AOR2)"; picture = "\tsp_rhs_g3\gui\g3_aor1aor2.paa"; class itemInfo: itemInfo {uniformClass = "rhsusf_socom_g3_aor1aor2_unit";};};
	class rhs_uniform_g3_mcm81: rhs_uniform_g3_aor2 {displayName = "G3 Uniform (MC/M81)"; picture = "\tsp_rhs_g3\gui\g3_mcm81.paa"; class itemInfo: itemInfo {uniformClass = "rhsusf_socom_g3_mcm81_unit";};};
	class rhs_uniform_g3_m81mc: rhs_uniform_g3_aor2 {displayName = "G3 Uniform (M81/MC)"; picture = "\tsp_rhs_g3\gui\g3_m81mc.paa"; class itemInfo: itemInfo {uniformClass = "rhsusf_socom_g3_m81mc_unit";};};
	class rhs_uniform_g3_mcb: rhs_uniform_g3_aor2 {displayName = "G3 Uniform (MCB)"; picture = "\tsp_rhs_g3\gui\g3_mcb.paa"; class itemInfo: itemInfo {uniformClass = "rhsusf_socom_g3_mcb_unit";};};
	class rhs_uniform_g3_mcbmc: rhs_uniform_g3_aor2 {displayName = "G3 Uniform (MCB/MC)"; picture = "\tsp_rhs_g3\gui\g3_mcbmc.paa"; class itemInfo: itemInfo {uniformClass = "rhsusf_socom_g3_mcbmc_unit";};};
	class rhs_uniform_g3_mcmcb: rhs_uniform_g3_aor2 {displayName = "G3 Uniform (MC/MCB)"; picture = "\tsp_rhs_g3\gui\g3_mcmcb.paa"; class itemInfo: itemInfo {uniformClass = "rhsusf_socom_g3_mcmcb_unit";};};
};

class CfgVehicles {
	class rhsusf_socom_g3_aor2_uniform;
	class rhsusf_socom_g3_aor1_unit: rhsusf_socom_g3_aor2_uniform {uniformClass = "rhs_uniform_g3_aor1"; hiddenSelectionsTextures[] = {"\tsp_rhs_g3\tex\g3_aor1.paa","rhsusf\addons\rhsusf_infantry2\data\merrells_co.paa","rhsusf\addons\rhsusf_infantry2\data\Mechanix_tan2_co.paa"};};
	class rhsusf_socom_g3_aor1aor2_unit: rhsusf_socom_g3_aor2_uniform {uniformClass = "rhs_uniform_g3_aor1aor2"; hiddenSelectionsTextures[] = {"\tsp_rhs_g3\tex\g3_aor3.paa","rhsusf\addons\rhsusf_infantry2\data\merrells_co.paa","rhsusf\addons\rhsusf_infantry2\data\Mechanix_green_co.paa"};};
	class rhsusf_socom_g3_mcm81_unit: rhsusf_socom_g3_aor2_uniform {uniformClass = "rhs_uniform_g3_mcm81"; hiddenSelectionsTextures[] = {"\tsp_rhs_g3\tex\g3_mcm81.paa","rhsusf\addons\rhsusf_infantry2\data\merrells_co.paa","rhsusf\addons\rhsusf_infantry2\data\Mechanix_green_co.paa"};};
	class rhsusf_socom_g3_m81mc_unit: rhsusf_socom_g3_aor2_uniform {uniformClass = "rhs_uniform_g3_m81mc"; hiddenSelectionsTextures[] = {"\tsp_rhs_g3\tex\g3_m81mc.paa","rhsusf\addons\rhsusf_infantry2\data\merrells_blk_co.paa","rhsusf\addons\rhsusf_infantry2\data\Mechanix_tan2_co.paa"};};
	class rhsusf_socom_g3_mcb_unit: rhsusf_socom_g3_aor2_uniform {uniformClass = "rhs_uniform_g3_mcb"; hiddenSelectionsTextures[] = {"\tsp_rhs_g3\tex\g3_mcb.paa","rhsusf\addons\rhsusf_infantry2\data\merrells_blk_co.paa","rhsusf\addons\rhsusf_infantry2\data\Mechanix_tan2_co.paa"};};
	class rhsusf_socom_g3_mcbmc_unit: rhsusf_socom_g3_aor2_uniform {uniformClass = "rhs_uniform_g3_mcbmc"; hiddenSelectionsTextures[] = {"\tsp_rhs_g3\tex\g3_mcbmc.paa","rhsusf\addons\rhsusf_infantry2\data\merrells_blk_co.paa","rhsusf\addons\rhsusf_infantry2\data\Mechanix_tan2_co.paa"};};
	class rhsusf_socom_g3_mcmcb_unit: rhsusf_socom_g3_aor2_uniform {uniformClass = "rhs_uniform_g3_mcmcb"; hiddenSelectionsTextures[] = {"\tsp_rhs_g3\tex\g3_mcmcb.paa","rhsusf\addons\rhsusf_infantry2\data\merrells_blk_co.paa","rhsusf\addons\rhsusf_infantry2\data\Mechanix_tan2_co.paa"};};
};