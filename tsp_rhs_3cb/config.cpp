class CfgPatches {class tsp_rhs_3cb {requiredAddons[] = {"rhs_infantry"}; units[] = {};};};

class CfgWeapons {
    class rhsusf_lwh_helmet_marpatd;
    class rhsusf_lwh_helmet_marpatd_ess;
    class rhsusf_lwh_helmet_marpatd_headset;
    class rhsusf_lwh_helmet_marpat_racs: rhsusf_lwh_helmet_marpatd {displayName = "LWH RACS"; hiddenSelectionsTextures[] = {"\tsp_rhs_3cb\tex\lwh_racs.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_acc_d_co.paa"};}
    class rhsusf_lwh_helmet_marpat_racs_ess: rhsusf_lwh_helmet_marpatd_ess {displayName = "LWH RACS (ESS)"; hiddenSelectionsTextures[] = {"\tsp_rhs_3cb\tex\lwh_racs.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_acc_d_co.paa"};}
    class rhsusf_lwh_helmet_marpat_racs_headset: rhsusf_lwh_helmet_marpatd_headset {displayName = "LWH RACS (Headset/ESS)"; hiddenSelectionsTextures[] = {"\tsp_rhs_3cb\tex\lwh_racs.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_acc_d_co.paa"};}

    class UK3CB_V_PASGT_RIF_Vest;
    class UK3CB_V_PASGT_MG_Vest;
    class UK3CB_V_PASGT_Crew_Vest;
    class UK3CB_V_PASGT_Medic_Vest;
    class UK3CB_V_PASGT_Vest_RACS: UK3CB_V_PASGT_RIF_Vest {displayName = "PASGT Plain Vest (Tan)"; hiddenSelectionsTextures[] = {"\tsp_rhs_3cb\tex\pasgt_racs.paa"};};
    class UK3CB_V_PASGT_RIF_Vest_RACS: UK3CB_V_PASGT_RIF_Vest {displayName = "PASGT Vest (Tan)"; hiddenSelectionsTextures[] = {"\tsp_rhs_3cb\tex\pasgt_racs.paa","\uk3cb_factions\addons\uk3cb_factions_equipment\vest\data\pasgt\sf_gear_khaky_co.paa","\uk3cb_factions\addons\uk3cb_factions_equipment\vest\data\pasgt\webbing_p58_full_co.paa"};};
    class UK3CB_V_PASGT_MG_Vest_RACS: UK3CB_V_PASGT_MG_Vest {displayName = "PASGT Machine Gunner Vest (Tan)"; hiddenSelectionsTextures[] = {"\tsp_rhs_3cb\tex\pasgt_racs.paa","\uk3cb_factions\addons\uk3cb_factions_equipment\vest\data\pasgt\sf_gear_khaky_co.paa","\uk3cb_factions\addons\uk3cb_factions_equipment\vest\data\pasgt\webbing_p58_full_co.paa"};};
    class UK3CB_V_PASGT_Crew_Vest_RACS: UK3CB_V_PASGT_Crew_Vest {displayName = "PASGT Crew Vest (Tan)"; hiddenSelectionsTextures[] = {"\tsp_rhs_3cb\tex\pasgt_racs.paa","\uk3cb_factions\addons\uk3cb_factions_equipment\vest\data\pasgt\sf_gear_khaky_co.paa","\uk3cb_factions\addons\uk3cb_factions_equipment\vest\data\pasgt\webbing_p58_full_co.paa"};};
    class UK3CB_V_PASGT_Medic_Vest_RACS: UK3CB_V_PASGT_Medic_Vest {displayName = "PASGT Medic Vest (Tan)"; hiddenSelectionsTextures[] = {"\tsp_rhs_3cb\tex\pasgt_racs.paa","\uk3cb_factions\addons\uk3cb_factions_equipment\vest\data\pasgt\sf_gear_khaky_co.paa","\uk3cb_factions\addons\uk3cb_factions_equipment\vest\data\pasgt\webbing_p58_full_co.paa"};};

    class Uniform_Base;
	class U_I_C_Soldier_Bandit_2_F: Uniform_Base {class itemInfo;};
	class a3_soldier_2_6des: U_I_C_Soldier_Bandit_2_F {displayName = "BDU (Shirt, RACS)"; class itemInfo: itemInfo {uniformClass = "a3_soldier_2_6des_unit";};};

	class UK3CB_U_KZS_DOWN_WIN: Uniform_Base {class itemInfo;};
    class UK3CB_U_KZS_DOWN_MARPATWDDNC: UK3CB_U_KZS_DOWN_WIN {displayName = "ECWCS Parka (MARPAT WD/DNC)"; hiddenSelectionsTextures[] = {"\tsp_rhs_3cb\tex\kzs_marpatwddnc.paa"}; class itemInfo: itemInfo {uniformClass = "UK3CB_KZS_MARPATWDDNC";};};
    class UK3CB_U_KZS_DOWN_MARPATWDSNOW: UK3CB_U_KZS_DOWN_WIN {displayName = "ECWCS Parka (MARPAT WD/SNOW)"; hiddenSelectionsTextures[] = {"\tsp_rhs_3cb\tex\kzs_marpatwdsnow.paa"}; class itemInfo: itemInfo {uniformClass = "UK3CB_KZS_MARPATWDSNOW";};};
    class UK3CB_U_KZS_DOWN_MCBDNC: UK3CB_U_KZS_DOWN_WIN {displayName = "ECWCS Parka (MCB/DNC)"; hiddenSelectionsTextures[] = {"\tsp_rhs_3cb\tex\kzs_mcbdnc.paa"}; class itemInfo: itemInfo {uniformClass = "UK3CB_KZS_MCBDNC";};};
};

class CfgVehicles {  //-- Uniform stuff
    class I_C_Soldier_Bandit_2_F;
	class a3_soldier_2_6des_unit: I_C_Soldier_Bandit_2_F {uniformClass = "a3_soldier_2_6des"; hiddenSelectionsTextures[] = {"tsp_rhs_3cb\tex\uniform_racs.paa"};};
    class UK3CB_CW_SOV_SF_Infantry_U_04;
	class UK3CB_KZS_MARPATWDDNC: UK3CB_CW_SOV_SF_Infantry_U_04 {uniformClass = "UK3CB_U_KZS_DOWN_MARPATWDDNC"; hiddenSelectionsTextures[] = {"tsp_rhs_3cb\tex\kzs_marpatwddnc.paa"};};
	class UK3CB_KZS_MARPATWDSNOW: UK3CB_CW_SOV_SF_Infantry_U_04 {uniformClass = "UK3CB_U_KZS_DOWN_MARPATWDSNOW"; hiddenSelectionsTextures[] = {"tsp_rhs_3cb\tex\kzs_marpatwdsnow.paa"};};
	class UK3CB_KZS_MCBDNC: UK3CB_CW_SOV_SF_Infantry_U_04 {uniformClass = "UK3CB_U_KZS_DOWN_MCBDNC"; hiddenSelectionsTextures[] = {"tsp_rhs_3cb\tex\kzs_mcbdnc.paa"};};
};