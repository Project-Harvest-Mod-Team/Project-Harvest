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
		class PHRP_twotwo_helmets
		{
			label = "2-2 Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"default"};
				class default
				{
					label = "Default";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_twotwo_ODST_Helmet
		{
			role = "default";
			model = "PHRP_twotwo_helmets";
		};
	};
};
class CfgWeapons
{
    class PHRP_Base_ODST_Helmet;
	class PHRP_Base_HRPilot_Helmet;
	class PHRP_Base_Recon_Helmet;
	class PHRP_Base_EOD_Helmet;
	class PHRP_twotwo_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "CH252D Helmet 2-2";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_twotwobase_co.paa","PHHelmets\data\helmets\customvisor_base_co.paa"};
	};
};