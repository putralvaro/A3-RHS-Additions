class CfgPatches {class tsp_rhs_gorka {requiredAddons[] = {"rhs_infantry"}; units[] = {};};};

class CfgWeapons {
	class rhs_uniform_gorka_1_a;
	class rhs_uniform_gorka_1_b: rhs_uniform_gorka_1_a {class itemInfo;};
	class rhs_uniform_gorka_1_klyaksa: rhs_uniform_gorka_1_b {picture = "\tsp_rhs_gorka\gui\gorka1_klyaksa.paa"; displayName = "Gorka 1 (Klyaksa)"; class itemInfo: itemInfo {uniformClass = "rhs_uniform_gorka_1_klyaksa_unit";};};
	class rhs_uniform_gorka_1_green: rhs_uniform_gorka_1_b {picture = "\tsp_rhs_gorka\gui\gorka1_green.paa"; displayName = "Gorka 1 (Green)"; class itemInfo: itemInfo {uniformClass = "rhs_uniform_gorka_1_green_unit";};};
	class rhs_uniform_gorka_1_beryozka: rhs_uniform_gorka_1_b {picture = "\tsp_rhs_gorka\gui\gorka1_beryozka.paa"; displayName = "Gorka 1 (Beryozka)"; class itemInfo: itemInfo {uniformClass = "rhs_uniform_gorka_1_beryozka_unit";};};
	class rhs_uniform_gorka_1_moss: rhs_uniform_gorka_1_b {picture = "\tsp_rhs_gorka\gui\gorka1_moss.paa"; displayName = "Gorka 1 (Moss)"; class itemInfo: itemInfo {uniformClass = "rhs_uniform_gorka_1_moss_unit";};};
	class rhs_uniform_gorka_1_urban: rhs_uniform_gorka_1_b {picture = "\tsp_rhs_gorka\gui\gorka1_urban.paa"; displayName = "Gorka 1 (Urban Reed)"; class itemInfo: itemInfo {uniformClass = "rhs_uniform_gorka_1_urban_unit";};};
	class rhs_uniform_gorka_1_urbanwoodland: rhs_uniform_gorka_1_b {picture = "\tsp_rhs_gorka\gui\gorka1_urbanwoodland.paa"; displayName = "Gorka 1 (Urban/Woodland Reed)"; class itemInfo: itemInfo {uniformClass = "rhs_uniform_gorka_1_urbanwoodland_unit";};};
	class rhs_uniform_gorka_1_woodland: rhs_uniform_gorka_1_b {picture = "\tsp_rhs_gorka\gui\gorka1_woodland.paa"; displayName = "Gorka 1 (Woodland Reed)"; class itemInfo: itemInfo {uniformClass = "rhs_uniform_gorka_1_woodland_unit";};};
	class rhs_uniform_gorka_1_woodlandurban: rhs_uniform_gorka_1_b {picture = "\tsp_rhs_gorka\gui\gorka1_woodlandurban.paa"; displayName = "Gorka 1 (Woodland/Urban Reed)"; class itemInfo: itemInfo {uniformClass = "rhs_uniform_gorka_1_woodlandurban_unit";};};
	class rhs_uniform_gorka_1_woodlandemr: rhs_uniform_gorka_1_b {picture = "\tsp_rhs_gorka\gui\gorka1_woodlandemr.paa"; displayName = "Gorka 1 (Woodland Reed/EMR)"; class itemInfo: itemInfo {uniformClass = "rhs_uniform_gorka_1_woodlandemr_unit";};};
	class rhs_uniform_gorka_1_emr: rhs_uniform_gorka_1_b {picture = "\tsp_rhs_gorka\gui\gorka1_emr.paa"; displayName = "Gorka 1 (EMR)"; class itemInfo: itemInfo {uniformClass = "rhs_uniform_gorka_1_emr_unit";};};
	class rhs_uniform_gorka_1_emrurban: rhs_uniform_gorka_1_b {picture = "\tsp_rhs_gorka\gui\gorka1_emrurban.paa"; displayName = "Gorka 1 (EMR/Urban Reed)"; class itemInfo: itemInfo {uniformClass = "rhs_uniform_gorka_1_emrurban_unit";};};

	class rhs_uniform_flora;
	class rhs_uniform_gorka_r_y: rhs_uniform_flora {class itemInfo;};
	class rhs_uniform_gorka_3_green: rhs_uniform_gorka_r_y {picture = "\tsp_rhs_gorka\gui\gorka3_green.paa"; displayName = "Gorka 3 (Green)"; class itemInfo: itemInfo {uniformClass = "rhs_uniform_gorka_3_green_unit";};};
	class rhs_uniform_gorka_3_partizan: rhs_uniform_gorka_r_y {picture = "\tsp_rhs_gorka\gui\gorka3_partizan.paa"; displayName = "Gorka 3 (Partizan)"; class itemInfo: itemInfo {uniformClass = "rhs_uniform_gorka_3_partizan_unit";};};	
};

class CfgVehicles {
	class rhs_vdv_gorka_1_a_rifleman;
	class rhs_uniform_gorka_1_klyaksa_unit: rhs_vdv_gorka_1_a_rifleman {uniformClass = "rhs_uniform_gorka_1_klyaksa"; hiddenSelectionsTextures[] = {"\tsp_rhs_gorka\tex\gorka1_klyaksa.paa"};};
	class rhs_uniform_gorka_1_green_unit: rhs_vdv_gorka_1_a_rifleman {uniformClass = "rhs_uniform_gorka_1_green"; hiddenSelectionsTextures[] = {"\tsp_rhs_gorka\tex\gorka1_green.paa"};};
	class rhs_uniform_gorka_1_beryozka_unit: rhs_vdv_gorka_1_a_rifleman {uniformClass = "rhs_uniform_gorka_1_beryozka"; hiddenSelectionsTextures[] = {"\tsp_rhs_gorka\tex\gorka1_beryozka.paa"};};
	class rhs_uniform_gorka_1_moss_unit: rhs_vdv_gorka_1_a_rifleman {uniformClass = "rhs_uniform_gorka_1_moss"; hiddenSelectionsTextures[] = {"\tsp_rhs_gorka\tex\gorka1_moss.paa"};};
	class rhs_uniform_gorka_1_urban_unit: rhs_vdv_gorka_1_a_rifleman {uniformClass = "rhs_uniform_gorka_1_urban"; hiddenSelectionsTextures[] = {"\tsp_rhs_gorka\tex\gorka1_urban.paa"};};	
	class rhs_uniform_gorka_1_urbanwoodland_unit: rhs_vdv_gorka_1_a_rifleman {uniformClass = "rhs_uniform_gorka_1_urban"; hiddenSelectionsTextures[] = {"\tsp_rhs_gorka\tex\gorka1_urbanwoodland.paa"};};
	class rhs_uniform_gorka_1_woodland_unit: rhs_vdv_gorka_1_a_rifleman {uniformClass = "rhs_uniform_gorka_1_woodland"; hiddenSelectionsTextures[] = {"\tsp_rhs_gorka\tex\gorka1_woodland.paa"};};
	class rhs_uniform_gorka_1_woodlandurban_unit: rhs_vdv_gorka_1_a_rifleman {uniformClass = "rhs_uniform_gorka_1_woodlandurban"; hiddenSelectionsTextures[] = {"\tsp_rhs_gorka\tex\gorka1_woodlandurban.paa"};};
	class rhs_uniform_gorka_1_woodlandemr_unit: rhs_vdv_gorka_1_a_rifleman {uniformClass = "rhs_uniform_gorka_1_woodlandemr"; hiddenSelectionsTextures[] = {"\tsp_rhs_gorka\tex\gorka1_woodlandemr.paa"};};
	class rhs_uniform_gorka_1_emr_unit: rhs_vdv_gorka_1_a_rifleman {uniformClass = "rhs_uniform_gorka_1_emr"; hiddenSelectionsTextures[] = {"\tsp_rhs_gorka\tex\gorka1_emr.paa"};};
	class rhs_uniform_gorka_1_emrurban_unit: rhs_vdv_gorka_1_a_rifleman {uniformClass = "rhs_uniform_gorka_1_emrurban"; hiddenSelectionsTextures[] = {"\tsp_rhs_gorka\tex\gorka1_emrurban.paa"};};

	class rhs_vdv_gorka_r_g_rifleman;
	class rhs_uniform_gorka_3_green_unit: rhs_vdv_gorka_r_g_rifleman {uniformClass = "rhs_uniform_gorka_3_green"; hiddenSelectionsTextures[] = {"\tsp_rhs_gorka\tex\gorka3_green.paa"};};
	class rhs_uniform_gorka_3_partizan_unit: rhs_vdv_gorka_r_g_rifleman {uniformClass = "rhs_uniform_gorka_3_partizan"; hiddenSelectionsTextures[] = {"\tsp_rhs_gorka\tex\gorka3_partizan.paa"};};
};