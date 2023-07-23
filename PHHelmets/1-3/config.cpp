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
				values[] = {"default","morningstar","hazard","griffith","payne"};
				class default
				{
					label = "Default";
				};
				class hazard
				{
					label = "Hazard";
				};
				class griffith
				{
					label = "Griffith";
				};
				class payne
				{
					label = "Payne";
				};
				class morningstar
				{
					label = "Morningstar";
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
		class PHRP_Morningstar_Operator_Helmet
		{
			role = "morningstar";
			model = "PHRP_onethree_helmets";
		};
		class PHRP_Hazard_EOD_Helmet
		{
			role = "hazard";
			model = "PHRP_onethree_helmets";
		};
		class PHRP_Griffith_ODST_Helmet
		{
			role = "griffith";
			model = "PHRP_onethree_helmets";
		};
		class PHRP_Payne_Operator_Helmet
		{
			role = "payne";
			model = "PHRP_onethree_helmets";
		};
	};
};
class CfgWeapons
{
    class PHRP_Base_ODST_Helmet;
	class PHRP_Base_CQB_Helmet;
	class PHRP_Base_EOD_Helmet;
	class PHRP_Base_Operator_Helmet;
	class PHRP_onethree_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "CH252D Helmet 1-3";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_onethreebase_co.paa","PHHelmets\data\helmets\customvisor_base_co.paa"};
	};
	class PHRP_Morningstar_Operator_Helmet : PHRP_Base_Operator_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "";
		displayName = "Mark V/O Helmet 1-3 (Morningstar)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_morningstar_co.paa","OPTRE_UNSC_Units\Army\data\Operator_Visor_co.paa"};
	};
	class PHRP_Hazard_EOD_Helmet : PHRP_Base_EOD_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Mark V/EOD Helmet 1-3 (Hazard)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_hazard_co.paa","PHHelmets\data\helmets\customvisor_hazard_co.paa"};
	};
	class PHRP_Griffith_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "VibingVampire";
		displayName = "CH252D Helmet 1-3 (Griffith)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_griffith_co.paa","PHHelmets\data\helmets\customvisor_griffith_co.paa"};
	};
	class PHRP_Payne_Operator_Helmet : PHRP_Base_Operator_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "Mark V/O Helmet 1-3 (Payne)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_payne_co.paa","PHHelmets\data\helmets\customvisor_payne_co.paa"};
	};
};