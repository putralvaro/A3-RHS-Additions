class CfgPatches {class tsp_rhs_head {requiredAddons[] = {"rhs_infantry"}; units[] = {};};};

class CfgWeapons {	
	class HeadgearItem; class rhs_beanie; class rhs_fieldcap_m88: rhs_beanie {class itemInfo: HeadgearItem {allowedSlots[] = {801,901,701,605};};};

	class rhsusf_opscore_mar_fg;
	class rhs_lshz: rhsusf_opscore_mar_fg {displayName = "LShZ"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\lshz.paa","rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\od2_co.paa",""};};
	class rhs_lshz_camo: rhsusf_opscore_mar_fg {displayName = "LShZ (Painted)"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\lshz_camo.paa","rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\od2_co.paa",""};};
	
	class rhs_altyn; class rhs_altyn_novisor: rhs_altyn {class itemInfo;};
	class rhs_zsh: rhs_altyn_novisor {
		displayName = "ZSh-12"; model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_zsh12.p3d"; 
		hiddenSelections[] = {"camo1"}; hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_zsh12_co.paa";};
		class itemInfo: itemInfo {uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_zsh12.p3d";};
	};
	class rhs_zsh_bala: rhs_zsh {displayName = "ZSh-12 (Balaclava)"; class itemInfo: itemInfo {uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_zsh12_bala.p3d";};};
	class rhs_zsh_blk: rhs_zsh {displayName = "ZSh-12 (Black)"; hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_zsh12_b_co.paa"};};
	class rhs_zsh_blk_bala: rhs_zsh_bala {displayName = "ZSh-12 (Black, Balaclava)"; hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_zsh12_b_co.paa"};};
	
	class rhs_stsh81;
	class rhs_stsh81_black: rhs_stsh81 {picture = "\tsp_rhs_head\gui\stsh81_black.paa"; displayName = "STSh-81 (Black)"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\stsh81_black.paa"};};
	class rhsgref_ssh68;
	class rhsgref_ssh68_lizzard: rhsgref_ssh68 {scope = 2; displayName = "SSh-68 Lizzard"; hiddenSelections[] = {"Camo2"}; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\ssh68_lizard.paa"};};
	class rhs_ssh60;
	class rhs_ssh60_sla: rhs_ssh60 {displayName = "SSh-68 SLA"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\ssh60_sla.paa"};};
	class rhs_ssh60_slan: rhs_ssh60 {displayName = "SSh-68 SLAN";  hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\ssh60_slan.paa"};};
	
	class rhsgref_hat_M1951; class rhsgref_hat_M1951_slan: rhsgref_hat_M1951 {displayName = "Patrol Cap (SLAN)"; hiddenSelectionsTextures[] = {"\tsp_rhs_head\tex\m1951fieldcap_slan.paa";};};
};