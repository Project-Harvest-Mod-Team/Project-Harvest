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
		class bravo_helmets
		{
			label = "Bravo Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"default","riot","stone","wilson"};
				class default
				{
					label = "Default";
				};
				class riot
				{
					label = "Riot";
				};
				class stone
				{
					label = "Stone";
				};
				class wilson
				{
					label = "Wilson";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Bravo_ODST_Helmet
		{
			role = "default";
			model = "bravo_helmets";
		};
		class PHRP_Riot_ODST_Helmet
		{
			role = "riot";
			model = "bravo_helmets";
		};
		class PHRP_Stone_ODST_Helmet
		{
			role = "stone";
			model = "bravo_helmets";
		};
		class PHRP_Wilson_Operator_Helmet
		{
			role = "wilson";
			model = "bravo_helmets";
		};
	};
};
class CfgWeapons
{
    class PHRP_Base_ODST_Helmet;
	class PHRP_Base_Operator_Helmet;
	class PHRP_Bravo_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "CH252D Helmet - Bravo";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_bravobase_co.paa","PHHelmets\data\helmets\customvisor_base_co.paa"};
	};
	class PHRP_Riot_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "CH252D Helmet (Riot)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_riot_co.paa","PHHelmets\data\helmets\customvisor_riot_co.paa"};
	};
	class PHRP_Stone_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "CH252D Helmet (Stone)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_stone_co.paa","PHHelmets\data\helmets\customvisor_stone_co.paa"};
	};
	class PHRP_Wilson_Operator_Helmet : PHRP_Base_Operator_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "CH252D Helmet (Wilson)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_wilson_co.paa","PHHelmets\data\helmets\customvisor_wilson_co.paa"};
	};
	class PHRP_Blackburn_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "VorpalHotdog";
		displayName = "CH252D Helmet (Blackburn)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_blackburn_co.paa","PHHelmets\data\helmets\customvisor_blackburn_co.paa"};
	};
};