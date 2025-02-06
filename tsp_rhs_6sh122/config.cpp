class CfgPatches {class tsp_rhs_6sh122 {requiredAddons[] = {"rhs_infantry"}; units[] = {};};};

class CfgWeapons {
	class rhs_uniform_vkpo; class rhs_uniform_6sh122_v1: rhs_uniform_vkpo {class itemInfo;}; class rhs_uniform_6sh122_gloves_v1: rhs_uniform_6sh122_v1 {class itemInfo;};
	class rhs_uniform_6sh122_moss: rhs_uniform_6sh122_v1 {picture = "\tsp_rhs_6sh122\gui\6sh122_moss.paa"; displayName = "6Sh122 (Moss)"; class itemInfo: itemInfo {uniformClass = "rhs_6sh122_moss_unit";};};
	class rhs_uniform_6sh122_gloves_moss: rhs_uniform_6sh122_gloves_v1 {picture = "\tsp_rhs_6sh122\gui\6sh122_moss.paa"; displayName = "6Sh122 (Moss, Gloves)"; class itemInfo: itemInfo {uniformClass = "rhs_6sh122_gloves_moss_unit";};};
	class rhs_uniform_6sh122_mossspring: rhs_uniform_6sh122_v1 {picture = "\tsp_rhs_6sh122\gui\6sh122_mossspring.paa"; displayName = "6Sh122 (Moss/Spring)"; class itemInfo: itemInfo {uniformClass = "rhs_6sh122_mossspring_unit";};};
	class rhs_uniform_6sh122_springmoss: rhs_uniform_6sh122_v1 {picture = "\tsp_rhs_6sh122\gui\6sh122_springmoss.paa"; displayName = "6Sh122 (Spring/Moss)"; class itemInfo: itemInfo {uniformClass = "rhs_6sh122_springmoss_unit";};};
};

class CfgVehicles {
	class rhs_6sh122_v1_base; class rhs_6sh122_gloves_v1_base;
	class rhs_6sh122_moss_unit: rhs_6sh122_v1_base {uniformClass = "rhs_uniform_6sh122_moss"; hiddenSelectionsTextures[] = {"\tsp_rhs_6sh122\tex\6sh122_vest_moss.paa","\tsp_rhs_6sh122\tex\6sh122_pant_moss.paa"};};
	class rhs_6sh122_gloves_moss_unit: rhs_6sh122_gloves_v1_base {uniformClass = "rhs_uniform_6sh122_gloves_moss"; hiddenSelectionsTextures[] = {"\tsp_rhs_6sh122\tex\6sh122_vest_moss.paa","\tsp_rhs_6sh122\tex\6sh122_pant_moss.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"};};
	class rhs_6sh122_mossspring_unit: rhs_6sh122_v1_base {uniformClass = "rhs_uniform_6sh122_mossspring"; hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\ratnik\data\122_vest_co.paa","\tsp_rhs_6sh122\tex\6sh122_pant_moss.paa"};};
	class rhs_6sh122_springmoss_unit: rhs_6sh122_v1_base {uniformClass = "rhs_uniform_6sh122_springmoss"; hiddenSelectionsTextures[] = {"\tsp_rhs_6sh122\tex\6sh122_vest_moss.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\122_pant_co.paa"};};
};