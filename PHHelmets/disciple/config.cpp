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
		class disciple_helmets
		{
			label = "Disciple Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"soldner","wrecker","pjetrovic","carter"};
				class soldner
				{
					label = "Soldner";
				};
				class wrecker
				{
					label = "Wrecker";
				};
				class pjetrovic
				{
					label = "Pjetrovic";
				};
				class carter
				{
					label = "Carter";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Soldner_ODST_Helmet
		{
			role = "soldner";
			model = "disciple_helmets";
		};
		class PHRP_Wrecker_Commando_Helmet
		{
			role = "wrecker";
			model = "disciple_helmets";
		};
		class PHRP_Pjetrovic_ODST_Helmet
		{
			role = "pjetrovic";
			model = "disciple_helmets";
		};
		class PHRP_Carter_ODST_Helmet
		{
			role = "carter";
			model = "disciple_helmets";
		};
	};
};
class CfgWeapons
{
    class PHRP_Base_ODST_Helmet;
	class OPTRE_UNSC_Commando_Helmet;
	class PHRP_Soldner_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Soldner)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_soldner_co.paa","PHHelmets\data\helmets\customvisor_soldner_co.paa"};
	};
	class PHRP_Wrecker_Commando_Helmet : OPTRE_UNSC_Commando_Helmet
	{
		dlc = "PHHelmets";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Mark V/K Helmet (Wrecker)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_wrecker_co.paa","PHHelmets\data\helmets\customvisor_moon_co.paa"};
	};
	class PHRP_Pjetrovic_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Pjetrovic)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_pjetrovic_co.paa","PHHelmets\data\helmets\customvisor_pjetrovic_co.paa"};
	};
	class PHRP_Carter_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Carter)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_carter_co.paa","PHHelmets\data\helmets\customvisor_carter_co.paa"};
	};
};