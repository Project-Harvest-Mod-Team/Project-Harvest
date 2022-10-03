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
		class reservist_helmets
		{
			label = "Reservist Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"recruit","collins","angel","ansley","tepfer","raider","carter","wrecker"};
				class recruit
				{
					label = "Recruit";
				};
				class collins
				{
					label = "Collins";
				};
				class angel
				{
					label = "Angel";
				};
				class ansley
				{
					label = "Ansley";
				};
				class tepfer
				{
					label = "Tepfer";
				};
				class raider
				{
					label = "Raider";
				};
				class carter
				{
					label = "Carter";
				};
				class wrecker
				{
					label = "Wrecker";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Recruit_ODST_Helmet
		{
			role = "recruit";
			model = "reservist_helmets";
		};
		class PHRP_Collins_ODST_Helmet
		{
			role = "collins";
			model = "reservist_helmets";
		};
		class PHRP_Angel_ODST_Helmet
		{
			role = "angel";
			model = "reservist_helmets";
		};
		class PHRP_Ansley_ODST_Helmet
		{
			role = "ansley";
			model = "reservist_helmets";
		};
		class PHRP_Tepfer_ODST_Helmet
		{
			role = "tepfer";
			model = "reservist_helmets";
		};
		class PHRP_Raider_Commando_Helmet
		{
			role = "raider";
			model = "reservist_helmets";
		};
		class PHRP_Carter_Commando_Helmet
		{
			role = "carter";
			model = "reservist_helmets";
		};
		class PHRP_Wrecker_Commando_Helmet
		{
			role = "wrecker";
			model = "reservist_helmets";
		};
	};
};
class CfgWeapons
{
    class PHRP_Base_ODST_Helmet;
	class PHRP_Base_Commando_Helmet;
	class PHRP_Recruit_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet - Recruit";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_gladius_co.paa","PHHelmets\data\helmets\customvisor_gladius_co.paa"};
	};
	class PHRP_Collins_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Collins)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_collins_co.paa","PHHelmets\data\helmets\customvisor_collins_co.paa"};
	};
	class PHRP_Angel_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Angel)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_angel_co.paa","PHHelmets\data\helmets\customvisor_base_co.paa"};
	};
	class PHRP_Ansley_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Ansley)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_ansley_co.paa","PHHelmets\data\helmets\customvisor_ansley_co.paa"};
	};
	class PHRP_Tepfer_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Tepfer)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_tepfer_co.paa","PHHelmets\data\helmets\customvisor_base_co.paa"};
	};
	class PHRP_Raider_Commando_Helmet : PHRP_Base_Commando_Helmet
	{
		dlc = "Project Harvest Armory";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Mark V/K Helmet (Raider)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_raider_co.paa","OPTRE_UNSC_Units\Army\data\Commando_Visor_co.paa"};
	};
	class PHRP_Carter_Commando_Helmet : PHRP_Base_Commando_Helmet
	{
		dlc = "PHHelmets";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Mark V/K Helmet (Carter)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_carter_co.paa","OPTRE_UNSC_Units\Army\data\Commando_Visor_co.paa"};
	};
	class PHRP_Wrecker_Commando_Helmet : PHRP_Base_Commando_Helmet
	{
		dlc = "PHHelmets";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Mark V/K Helmet (Wrecker)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_wrecker_co.paa","OPTRE_UNSC_Units\Army\data\Commando_Visor_co.paa"};
	};
};