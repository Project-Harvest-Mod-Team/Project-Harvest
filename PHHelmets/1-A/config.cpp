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
		class PHRP_oneA_helmets
		{
			label = "1-A Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"burtovski","chopper","aturr","buckley"};
				class burtovski
				{
					label = "Burtovski";
				};
				class chopper
				{
					label = "Chopper";
				};
				class aturr
				{
					label = "Aturr";
				};
				class buckley
				{
					label = "Buckley";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		
		class PHRP_Burtovski_Commando_Helmet
		{
			role = "burtovski";
			model = "PHRP_oneA_helmets";
		};
		class PHRP_Chopper_CQB_Helmet
		{
			role = "chopper";
			model = "PHRP_oneA_helmets";
		};
		class PHRP_Aturr_Recon_Helmet
		{
			role = "aturr";
			model = "PHRP_oneA_helmets";
		};
		class PHRP_Buckley_Recon_Helmet
		{
			role = "buckley";
			model = "PHRP_oneA_helmets";
		};
	};
};
class CfgWeapons
{
	class PHRP_Base_Recon_Helmet;
	class PHRP_Base_ODST_Helmet;
	class PHRP_Base_CQB_Helmet;
	class PHRP_Base_Commando_Helmet;
	class PHRP_Burtovski_Commando_Helmet : PHRP_Base_Commando_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "Mark V/K Helmet 1-A (Burtovski)";
		hiddenSelections[] =  {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_burtovski_co.paa","PHHelmets\data\helmets\customvisor_moon_co.paa"};
	};
	class PHRP_Chopper_CQB_Helmet : PHRP_Base_CQB_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Mark V/C Helmet  1-A (Chopper)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_chopper_co.paa","OPTRE_UNSC_Units\Army\data\CQB_Visor_co.paa"};
	};
	class PHRP_Aturr_Recon_Helmet : PHRP_Base_Recon_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "Recon Helmet 1-A (Aturr)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_aturr_co.paa","PHHelmets\data\helmets\customvisor_aturr_co.paa"};
	};
	/*class PHRP_Aturr_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "SirChungus";
		displayName = "CH252D Helmet 1-A (Aturr)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_aturr_co.paa","PHHelmets\data\helmets\customvisor_aturr_co.paa"};
	};*/
	class PHRP_Buckley_Recon_Helmet : PHRP_Base_Recon_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "VibingVampire";
		displayName = "Recon Helmet 1-A (Buckley)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_buckley_co.paa","PHHelmets\data\helmets\customvisor_buckley_co.paa"};
	};
};