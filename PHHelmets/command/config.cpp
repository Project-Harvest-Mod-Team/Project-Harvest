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
		class command_helmets
		{
			label = "Command Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"moon","burtovski","cassidy"};
				class moon
				{
					label = "Moon";
				};
				class burtovski
				{
					label = "Burtovski";
				};
				class cassidy
				{
					label = "Cassidy";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Moon_Commando_Helmet
		{
			role = "moon";
			model = "command_helmets";
		};
		class PHRP_Burtovski_ODST_Helmet
		{
			role = "burtovski";
			model = "command_helmets";
		};
		class PHRP_Cassidy_ODST_Helmet
		{
			role = "cassidy";
			model = "command_helmets";
		};
	};
};
class CfgWeapons
{
	class PHRP_Base_ODST_Helmet;
	class OPTRE_UNSC_Commando_Helmet;
	class PHRP_Moon_Commando_Helmet : OPTRE_UNSC_Commando_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Mark V/K Helmet (Moon)";
		hiddenSelections[] =  {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_moon_co.paa","PHHelmets\data\helmets\customvisor_moon_co.paa"};
	};
	class PHRP_Burtovski_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Burtovski)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_burtovski_co.paa","PHHelmets\data\helmets\customvisor_base_co.paa"};
	};
	class PHRP_Cassidy_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Cassidy)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_cassidy_co.paa","PHHelmets\data\helmets\customvisor_cassidy_co.paa"};
	};
};