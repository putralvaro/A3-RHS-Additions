class CfgPatches {class tsp_rhs_nvg {requiredAddons[] = {"rhs_infantry"}; units[] = {};};};

class CfgWeapons {
	class NVGoggles;
	class rhsusf_ANPVS_14: NVGoggles {class ItemInfo;};
	class rhsusf_ANPVS_15: NVGoggles {class ItemInfo;};	
	class rhs_1PN138: NVGoggles {class ItemInfo;};	
	class rhsusf_Rhino: rhsusf_ANPVS_14 {class ItemInfo;};

    class rhsusf_Rhino_alt: rhsusf_Rhino {displayName = "Rhino mount (Alt)"; class ItemInfo: ItemInfo {modelOff = "\rhsusf\addons\rhsusf_infantry\gear\nvg\Rhino_DOWN";};};

    class rhsusf_ANPVS_14_alt: rhsusf_ANPVS_14 {displayName = "AN/PVS-14 (Alt)"; class ItemInfo: ItemInfo {modelOff = "\rhsusf\addons\rhsusf_infantry\gear\nvg\Rhino_UP";};};
    class rhsusf_ANPVS_14_alt2: rhsusf_ANPVS_14 {displayName = "AN/PVS-14 (Alt 2)"; class ItemInfo: ItemInfo {modelOff = "\rhsusf\addons\rhsusf_infantry\gear\nvg\Rhino_DOWN";};};
    class rhsusf_ANPVS_14_hide: rhsusf_ANPVS_14 {displayName = "AN/PVS-14 (Hidden)"; class ItemInfo: ItemInfo {modelOff = "";};};

    class rhsusf_ANPVS_15_alt: rhsusf_ANPVS_15 {displayName = "AN/PVS-15 (Alt)"; class ItemInfo: ItemInfo {modelOff = "\rhsusf\addons\rhsusf_infantry\gear\nvg\Rhino_UP";};};
    class rhsusf_ANPVS_15_alt2: rhsusf_ANPVS_15 {displayName = "AN/PVS-15 (Alt 2)"; class ItemInfo: ItemInfo {modelOff = "\rhsusf\addons\rhsusf_infantry\gear\nvg\Rhino_DOWN";};};
    class rhsusf_ANPVS_15_hide: rhsusf_ANPVS_15 {displayName = "AN/PVS-15 (Hidden)"; class ItemInfo: ItemInfo {modelOff = "";};};

	class rhsusf_ANVIS: NVGoggles {scope = 2;};
	class rhsusf_anvis_nvg_bc_caps: NVGoggles {scope = 2; class itemInfo;};
	class rhsusf_anvis_nvg_bc_caps_alt: rhsusf_anvis_nvg_bc_caps {displayName = "ANVIS 9 (Alt 2)"; class ItemInfo: ItemInfo {modelOff = "\rhsusf\addons\rhsusf_infantry\gear\nvg\Rhino_UP";};};
    class rhsusf_anvis_nvg_bc_caps_alt2: rhsusf_anvis_nvg_bc_caps {displayName = "ANVIS 9 (Alt 2)"; class ItemInfo: ItemInfo {modelOff = "\rhsusf\addons\rhsusf_infantry\gear\nvg\Rhino_DOWN";};};

	class rhs_1PN138_hide: rhs_1PN138 {displayname="1PN138 (Hidden)"; class ItemInfo: ItemInfo {modelOff = "";};};
};