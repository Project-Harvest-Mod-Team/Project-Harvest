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
		class PHRP_hades_helmets
		{
			label = "Hades Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"phrpmoon","phrpkazhelmet","vanderclutch","wolf","richter"};
				class phrpmoon
				{
					label = "Moon";
				};
				class phrpkazhelmet
				{
					label = "Kaz";
				};
				class vanderclutch
				{
					label = "Vandy";
				};
				class wolf
				{
					label = "Wolf";
				};
				class richter
				{
					label = "Richter";
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
			role = "phrpmoon";
			model = "PHRP_hades_helmets";
		};
		class PHRP_Kaz_Operator_Helmet
		{
			role = "phrpkazhelmet";
			model = "PHRP_hades_helmets";
		};
		class PHRP_Vanderclutch_Recon_Helmet
		{
			role = "vanderclutch";
			model = "PHRP_hades_helmets";
		};
		class PHRP_Wolf_Recon_Helmet
		{
			role = "wolf";
			model = "PHRP_hades_helmets";
		};
		class PHRP_Richter_Recon_Helmet
		{
			role = "richter";
			model = "PHRP_hades_helmets";
		};
	};
};
class CfgWeapons
{
	class PHRP_Base_Recon_Helmet;
	class PHRP_Base_Commando_Helmet;
	class PHRP_Base_Operator_Helmet;
	class PHRP_Moon_Commando_Helmet : PHRP_Base_Commando_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "Mark V/K Helmet (Moon)";
		hiddenSelections[] =  {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_moon_co.paa","PHHelmets\data\helmets\customvisor_moon_co.paa"};
	};
	class PHRP_Vanderclutch_Recon_Helmet : PHRP_Base_Recon_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Recon Helmet (Vanderclutch)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_vanderclutch_co.paa","PHHelmets\data\helmets\customvisor_vanderclutch_co.paa"};
	};	
	class PHRP_Wolf_Recon_Helmet : PHRP_Base_Recon_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Recon Helmet (Wolf)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_wolf_co.paa","PHHelmets\data\helmets\customvisor_wolf_co.paa"};
	};
	class PHRP_Richter_Recon_Helmet : PHRP_Base_Recon_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Enreth";
		displayName = "Recon Helmet (Richter)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_dusk_co.paa","PHHelmets\data\helmets\customvisor_dusk_co.paa"};
	};
	class PHRP_Kaz_Operator_Helmet: PHRP_Base_Operator_Helmet
	{
		author = "MrMicrobe";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Mark V/O Helmet (Kaz)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_kaz_co.paa","OPTRE_UNSC_Units\Army\data\CQC_Visor_co.paa"};
	};
};