class CfgPatches {class tsp_rhs_afghanka {requiredAddons[] = {"rhs_infantry"}; units[] = {};};};

class CfgWeapons {
    class rhs_uniform_flora; class rhs_uniform_afghanka_winter: rhs_uniform_flora {class itemInfo;};
	class rhs_uniform_afghanka_winter_urban: rhs_uniform_afghanka_winter {picture = "\tsp_rhs_afghanka\m88_urban.paa"; displayName = "M88 Winter (Urban Reed)"; class itemInfo: itemInfo {uniformClass = "rhs_uniform_afghanka_winter_urban_unit";};};
 	class rhs_uniform_afghanka: rhs_uniform_flora {class itemInfo;};
	class rhs_uniform_afghanka_green: rhs_uniform_afghanka {displayName = "M88 Winter (Green)"; class itemInfo: itemInfo {uniformClass = "rhs_uniform_afghanka_green_unit";};};
	class rhs_uniform_afghanka_greenlizard: rhs_uniform_afghanka {displayName = "M88 Winter (Green/Lizard)"; class itemInfo: itemInfo {uniformClass = "rhs_uniform_afghanka_greenlizard_unit";};};
	class rhs_uniform_afghanka_sla: rhs_uniform_afghanka {displayName = "M88 Winter (SLA)"; class itemInfo: itemInfo {uniformClass = "rhs_uniform_afghanka_sla_unit";};};
	class rhs_uniform_afghanka_slan: rhs_uniform_afghanka {displayName = "M88 Winter (SLAN)"; class itemInfo: itemInfo {uniformClass = "rhs_uniform_afghanka_slan_unit";};};
};

class CfgVehicles {
    class rhs_afghanka_winter_base; class rhs_afghanka_base;
	class rhs_uniform_afghanka_winter_urban_unit: rhs_afghanka_winter_base {hiddenSelectionsTextures[] = {"\tsp_rhs_afghanka\tex\afghanka_vest_urban.paa","\tsp_rhs_afghanka\tex\afghanka_pant_urban.paa"};};
	class rhs_uniform_afghanka_green_unit: rhs_afghanka_base {hiddenSelectionsTextures[] = {"\tsp_rhs_afghanka\tex\afghanka_vest_green.paa","\tsp_rhs_afghanka\tex\afghanka_pant_green.paa"};};
	class rhs_uniform_afghanka_greenlizard_unit: rhs_afghanka_base {hiddenSelectionsTextures[] = {"\tsp_rhs_afghanka\tex\afghanka_vest_green.paa","\tsp_rhs_afghanka\tex\afghanka_pant_lizard.paa"};};
	class rhs_uniform_afghanka_sla_unit: rhs_afghanka_base {hiddenSelectionsTextures[] = {"\tsp_rhs_afghanka\tex\afghanka_vest_sla.paa","\tsp_rhs_afghanka\tex\afghanka_pant_sla.paa"};};
	class rhs_uniform_afghanka_slan_unit: rhs_afghanka_base {hiddenSelectionsTextures[] = {"\tsp_rhs_afghanka\tex\afghanka_vest_slan.paa","\tsp_rhs_afghanka\tex\afghanka_pant_slan.paa"};};
};