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
		class hades_helmets
		{
			label = "Hades Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"kaz","vanderclutch","vale"};
				class kaz
				{
					label = "Kaz";
				};
				class vanderclutch
				{
					label = "Vanderclutch";
				};
				class vale
				{
					label = "Vale";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Kaz_Recon_Helmet
		{
			role = "kaz";
			model = "hades_helmets";
		};
		class PHRP_Vanderclutch_Recon_Helmet
		{
			role = "vanderclutch";
			model = "hades_helmets";
		};
		class PHRP_Vale_Recon_Helmet
		{
			role = "vale";
			model = "hades_helmets";
		};
	};
};
class CfgWeapons
{
	class PHRP_Base_Recon_Helmet;
	class PHRP_Kaz_Recon_Helmet : PHRP_Base_Recon_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Luna";
		displayName = "Recon Helmet (Kaz)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customrecon_kaz_co.paa","PHHelmets\data\helmets\customvisor_kaz_co.paa"};
	};
	class PHRP_Vanderclutch_Recon_Helmet : PHRP_Base_Recon_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Recon Helmet (Vanderclutch)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customrecon_vanderclutch_co.paa","PHHelmets\data\helmets\customvisor_vanderclutch_co.paa"};
	};
	class PHRP_Vale_Recon_Helmet : PHRP_Base_Recon_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Vale";
		displayName = "Recon Helmet (Vale)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customrecon_vale_co.paa","PHHelmets\data\helmets\customvisor_vale_co.paa"};
	};
};