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
		class PHRP_bravo_helmets
		{
			label = "Bravo Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"default","blackburn","riot","craven","aturr","griffith","kincaid"};
				class default
				{
					label = "Default";
				};
				class blackburn
				{
					label = "Blackburn";
				};
				class riot
				{
					label = "Riot";
				};
				class craven
				{
					label = "Craven";
				};
				class aturr
				{
					label = "Aturr";
				};
				class griffith
				{
					label = "Griffith";
				};
				class kincaid
				{
					label = "Kincaid";
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
			model = "PHRP_bravo_helmets";
		};
		class PHRP_Blackburn_ODST_Helmet
		{
			role = "blackburn";
			model = "PHRP_bravo_helmets";
		};
		class PHRP_Riot_ODST_Helmet
		{
			role = "riot";
			model = "PHRP_bravo_helmets";
		};
		class PHRP_Craven_Scout_Helmet
		{
			role = "craven";
			model = "PHRP_bravo_helmets";
		};
		class PHRP_Aturr_ODST_Helmet
		{
			role = "aturr";
			model = "PHRP_bravo_helmets";
		};
		class PHRP_Griffith_ODST_Helmet
		{
			role = "griffith";
			model = "PHRP_bravo_helmets";
		};
		class PHRP_Kincaid_Scout_Helmet
		{
			role = "kincaid";
			model = "PHRP_bravo_helmets";
		};
	};
};
class CfgWeapons
{
    class PHRP_Base_ODST_Helmet;
	class PHRP_Base_Scout_Helmet;
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
	class PHRP_Craven_Scout_Helmet : PHRP_Base_Scout_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Jimbo";
		displayName = "Mark VI/S Helmet (Craven)";
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_craven_co.paa","OPTRE_UNSC_Units\Army\data\Scout_Visor_co.paa"};
	};
	class PHRP_Aturr_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "CH252D Helmet (Aturr)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_aturr_co.paa","PHHelmets\data\helmets\customvisor_aturr_co.paa"};
	};
	class PHRP_Griffith_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "VibingVampire";
		displayName = "CH252D Helmet (Griffith)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_griffith_co.paa","PHHelmets\data\helmets\customvisor_griffith_co.paa"};
	};
	class PHRP_Kincaid_Scout_Helmet : PHRP_Base_Scout_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "VibingVampire";
		displayName = "Mark VI/S Helmet (Kincaid)";
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_kincaid_co.paa","OPTRE_UNSC_Units\Army\data\Scout_Visor_co.paa"};
	};
};