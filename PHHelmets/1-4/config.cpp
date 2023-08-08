class CfgPatches //class desc.
{
	class Gladius_UNSC_ODST
	{
		author = "Project Harvest Mod Team"; //name of author
		units[] = //attached units (leave blank)
		{
			
		};
		weapons[] = //attached weapons (leave blank)
		{
			
		};
		requiredVersion = 0.1; //artefact of arma, no clue what it is but has to stay 0.1
		requiredAddons[] =
		{
			"A3_Characters_F",
			"OPTRE_Core"
		};
	};
};
class XtdGearModels
{
	class CamoBase;
	class CfgWeapons
	{
		class PHRP_onefour_helmets
		{
			label = "1-4 Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"default","coleson","chopper","kaker"};
				class default
				{
					label = "Default";
				};
				class chopper
				{
					label = "Chopper";
				};
				class coleson
				{
					label = "Coleson";
				};
				class kaker
				{
					label = "Kaker";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_twoone_ODST_Helmet
		{
			role = "default";
			model = "PHRP_onefour_helmets";
		};
		class PHRP_Chopper_CQB_Helmet
		{
			role = "chopper";
			model = "PHRP_onefour_helmets";
		};
		class PHRP_Coleson_EOD_Helmet
		{
			role = "coleson";
			model = "PHRP_onefour_helmets";
		};
		class PHRP_Kaker_HRPilot_Helmet
		{
			role = "kaker";
			model = "PHRP_onefour_helmets";
		};
	};
};
class CfgWeapons
{
    class PHRP_Base_ODST_Helmet;
	class PHRP_Base_HRPilot_Helmet;
	class PHRP_Base_CQB_Helmet;
	class PHRP_Base_EOD_Helmet;
	class PHRP_twoone_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "CH252D Helmet 1-4";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_twoonebase_co.paa","PHHelmets\data\helmets\customvisor_twoonebase_co.paa"};
	};
	class PHRP_Chopper_CQB_Helmet : PHRP_Base_CQB_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Mark V/C Helmet 1-4 (Chopper)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_chopper_co.paa","OPTRE_UNSC_Units\Army\data\CQB_Visor_co.paa"};
	};
	class PHRP_Coleson_EOD_Helmet : PHRP_Base_EOD_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Mark V/C Helmet 1-4 (Coleson)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_coleson_co.paa","OPTRE_UNSC_Units\Army\data\CQB_Visor_co.paa"};
	};
	class PHRP_Kaker_HRPilot_Helmet : PHRP_Base_HRPilot_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Jimbo";
		displayName = "Mark V/P Helmet 1-4 (Kaker)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_kaker_co.paa","PHHelmets\data\helmets\customvisor_kaker_co.paa"};
	};
};