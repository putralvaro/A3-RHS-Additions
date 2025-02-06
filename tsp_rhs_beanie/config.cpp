class CfgPatches {
	class tsp_rhs_beanie {
		units[] = {};
		weapons[] = {"rhs_beanie_coyote"};
		requiredAddons[] = {"rhs_c_troops"};
	};
};
class CfgWeapons {
	class rhs_beanie;
	class rhs_beanie_coyote: rhs_beanie	{
		picture = "\tsp_rhs_beanie\rhs_beanie_coyote_ca.paa";
		displayName = "Fleece Watch Cap (Coyote)";
		hiddenSelectionsTextures[] = {"tsp_rhs_beanie\beanie_coyote_co.paa"};
	};
};
