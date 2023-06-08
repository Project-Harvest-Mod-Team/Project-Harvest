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
		class PHRP_onethree_helmets
		{
			label = "1-3 Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"default","samson","coleson"};
				class default
				{
					label = "Default";
				};
				class samson
				{
					label = "Samson";
				};
				class coleson
				{
					label = "Coleson";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_onethree_ODST_Helmet
		{
			role = "default";
			model = "PHRP_onethree_helmets";
		};
		class PHRP_Samson_ODST_Helmet
		{
			role = "samson";
			model = "PHRP_onethree_helmets";
		};
		class PHRP_Coleson_CQB_Helmet
		{
			role = "coleson";
			model = "PHRP_onethree_helmets";
		};
	};
};
class CfgWeapons
{
    class PHRP_Base_ODST_Helmet;
	class PHRP_Base_CQB_Helmet;
	class PHRP_onethree_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "CH252D Helmet 1-3";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_onethreebase_co.paa","PHHelmets\data\helmets\customvisor_base_co.paa"};
	};
	class PHRP_Samson_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "CH252D Helmet (Samson)";
		hiddenSelections[] = {"camo","camo2","H_Ghillie"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_samson_co.paa","PHHelmets\data\helmets\customvisor_samson_co.paa"};
	};
	class PHRP_Coleson_CQB_Helmet : PHRP_Base_CQB_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Mark V/C Helmet (Coleson)";
		hiddenSelections[] = {"camo","camo2","H_Ghillie"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_coleson_co.paa","OPTRE_UNSC_Units\Army\data\CQB_Visor_co.paa"};
	};
};