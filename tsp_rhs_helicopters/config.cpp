class CfgPatches
{
	class tsp_rhs_helicopters
	{
		units[]=
		{
			"rhs_mh60s",
			"rhs_mh60s_d",
			"rhs_mh60s2",
			"rhs_mh60s2_d",
			"rhs_mh60s_ESSS2",
			"rhs_mh60s_ESSS2_d",
		};
		weapons[]={};
		requiredVersion=1.3200001;
		requiredAddons[]=
		{
			"rhsusf_main",
			"rhsusf_c_troops",
			"rhsusf_c_heavyweapons",
			"rhsusf_sounds",
			"rhsusf_c_airweapons",
			"RHS_US_A2_AirImport",
			"rhsusf_a2port_air",
			"rhsusf_a2port_air2"
		};
		author="Goosey";
	};
};
class CfgVehicles
{
	class RHS_UH60M_base;
    class RHS_UH60M_US_base: RHS_UH60M_base {
		class Turrets;
	};
    class RHS_UH60M: RHS_UH60M_US_base {
		class Turrets: Turrets {
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
			class CopilotTurret;
			class MainTurret;
			class RightDoorGun;
		};
	};
	class RHS_UH60M2;
	class RHS_UH60M_ESSS;
	class RHS_UH60M_ESSS2: RHS_UH60M_ESSS {class Components;};
	class rhs_mh60s: RHS_UH60M
	{
		faction="rhs_faction_usmc_wd";
		displayName="MH-60S";
		editorPreview = "tsp_rhs_helicopters\data\preview\rhs_mh60s.paa";
		crew = "rhsusf_usmc_marpat_wd_helipilot";
		hiddenSelectionsTextures[]=
		{
			"tsp_rhs_helicopters\data\mh60s_fuselage_co.paa",
			"tsp_rhs_helicopters\data\mh60s_engine_co.paa",
			"tsp_rhs_helicopters\data\mh60s_default_co.paa",
			"tsp_rhs_helicopters\data\mh60s_dust_filter_co.paa"
		};
		class Turrets: Turrets {
			class CargoTurret_01: CargoTurret_01 {};
			class CargoTurret_02: CargoTurret_02 {};
			class CargoTurret_03: CargoTurret_03 {};
			class CargoTurret_04: CargoTurret_04 {};
			class CopilotTurret: CopilotTurret {gunnerType = "rhsusf_usmc_marpat_wd_helipilot";};
			class MainTurret: MainTurret {gunnerType = "rhsusf_usmc_marpat_wd_helipilot";}; 
			class RightDoorGun: RightDoorGun {gunnerType = "rhsusf_usmc_marpat_wd_helipilot";};
		};
		class textureSources
		{
			class standard
			{
				displayName="Navy";
				textures[]=
				{
					"tsp_rhs_helicopters\data\mh60s_fuselage_co.paa",
					"tsp_rhs_helicopters\data\mh60s_engine_co.paa",
					"tsp_rhs_helicopters\data\mh60s_default_co.paa",
					"tsp_rhs_helicopters\data\mh60s_dust_filter_co.paa"
				};
				factions[]=
				{
					"rhs_faction_usmc_wd",
					"rhs_faction_usmc_d"
				};
			};
		};
	};
	class rhs_mh60s_d: rhs_mh60s
	{
		faction="rhs_faction_usmc_d";
		displayName="MH-60S";
		crew = "rhsusf_usmc_marpat_d_helipilot";
		class Turrets: Turrets {
			class CargoTurret_01: CargoTurret_01 {};
			class CargoTurret_02: CargoTurret_02 {};
			class CargoTurret_03: CargoTurret_03 {};
			class CargoTurret_04: CargoTurret_04 {};
			class CopilotTurret: CopilotTurret {gunnerType = "rhsusf_usmc_marpat_d_helipilot";};
			class MainTurret: MainTurret {gunnerType = "rhsusf_usmc_marpat_d_helipilot";}; 
			class RightDoorGun: RightDoorGun {gunnerType = "rhsusf_usmc_marpat_d_helipilot";};
		};
	};
	class rhs_mh60s2: RHS_UH60M2
	{
		faction="rhs_faction_usmc_wd";
		displayName="MH-60S (Unarmed)";
		editorPreview = "tsp_rhs_helicopters\data\preview\rhs_mh60s2.paa";
		crew = "rhsusf_usmc_marpat_wd_helipilot";
		hiddenSelectionsTextures[]=
		{
			"tsp_rhs_helicopters\data\mh60s_fuselage_co.paa",
			"tsp_rhs_helicopters\data\mh60s_engine_co.paa",
			"tsp_rhs_helicopters\data\mh60s_default_co.paa",
			"tsp_rhs_helicopters\data\mh60s_dust_filter_co.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Navy";
				textures[]=
				{
					"tsp_rhs_helicopters\data\mh60s_fuselage_co.paa",
					"tsp_rhs_helicopters\data\mh60s_engine_co.paa",
					"tsp_rhs_helicopters\data\mh60s_default_co.paa",
					"tsp_rhs_helicopters\data\mh60s_dust_filter_co.paa"
				};
				factions[]=
				{
					"rhs_faction_usmc_wd",
					"rhs_faction_usmc_d"
				};
			};
		};
	};
	class rhs_mh60s2_d: rhs_mh60s2
	{
		faction="rhs_faction_usmc_d";
		displayName="MH-60S (Unarmed)";
		crew = "rhsusf_usmc_marpat_d_helipilot";
	};
	class rhs_mh60s_ESSS2: RHS_UH60M_ESSS2
	{
		faction="rhs_faction_usmc_wd";
		displayName="MH-60S (EWS)";
		editorPreview = "tsp_rhs_helicopters\data\preview\rhs_mh60s_ESSS2.paa";
		crew = "rhsusf_usmc_marpat_wd_helipilot";
		hiddenSelectionsTextures[]=
		{
			"tsp_rhs_helicopters\data\mh60s_fuselage_co.paa",
			"tsp_rhs_helicopters\data\mh60s_engine_co.paa",
			"tsp_rhs_helicopters\data\mh60s_default_co.paa",
			"tsp_rhs_helicopters\data\mh60s_dust_filter_co.paa"
		};
		ace_fastroping_enabled = 2;
		ace_fastroping_friesType = "ACE_friesAnchorBar";
		ace_fastroping_friesAttachmentPoint[] = {0,1.25,-0.65};
		ace_fastroping_onCut = "ace_compat_rhs_usf3_fnc_onCut";
		ace_fastroping_onPrepare = "ace_compat_rhs_usf3_fnc_onPrepare";
		ace_fastroping_ropeOrigins[] = {"ropeOriginLeft","ropeOriginRight"};
		class Attributes
		{
			class ace_fastroping_equipFRIES
			{
				property = "ace_fastroping_equipFRIES";
				control = "Checkbox";
				displayName = "$STR_ace_fastroping_Eden_equipFRIES";
				tooltip = "$STR_ace_fastroping_Eden_equipFRIES_Tooltip";
				expression = "if (_value) then {[_this] call ace_fastroping_fnc_equipFRIES}";
				typeName = "BOOL";
				condition = "objectVehicle";
				defaultValue = "false";
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\rhsusf\addons\rhsusf_a2port_air\data\loadouts\RHS_UH60_EWS_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[] = {"RHS_HP_HELLFIRE_RACK","RHS_HP_FFAR_ARMY","RHS_HP_Fuel_ARMY","RHS_HP_ATAS"};
						priority = 1;
						attachment = "";
						maxweight = 1200;
						UIposition[] = {0.555,0.37};
						bay = -1;
						hitpoint = "HitPylon1";
					};
					class pylon2: pylon1
					{
						UIposition[] = {0.11,0.37};
						mirroredMissilePos = 1;
						hitpoint = "HitPylon2";
					};
					class cmDispenser
					{
						hardpoints[] = {"RHSUSF_cm_M130","RHSUSF_cm_M130_x2"};
						priority = 1;
						attachment = "rhsusf_M130_CMFlare_Chaff_Magazine_x2";
						maxweight = 800;
						UIposition[] = {0.33,0.0};
					};
				};
			};
		};
		class textureSources
		{
			class standard
			{
				displayName="Navy";
				textures[]=
				{
					"tsp_rhs_helicopters\data\mh60s_fuselage_co.paa",
					"tsp_rhs_helicopters\data\mh60s_engine_co.paa",
					"tsp_rhs_helicopters\data\mh60s_default_co.paa",
					"tsp_rhs_helicopters\data\mh60s_dust_filter_co.paa"
				};
				factions[]=
				{
					"rhs_faction_usmc_wd",
					"rhs_faction_usmc_d"
				};
			};
		};
	};
	class rhs_mh60s_ESSS2_d: rhs_mh60s_ESSS2
	{
		faction="rhs_faction_usmc_d";
		displayName="MH-60S (EWS)";
		crew = "rhsusf_usmc_marpat_d_helipilot";
	};
};