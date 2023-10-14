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
		class PHRP_fleet_helmets
		{
			label = "Fleet Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"soldner","moon","burtovski","pjetrovic"};
				class soldner
				{
					label = "Soldner";
				};
				class moon
				{
					label = "Moon";
				};
				class burtovski
				{
					label = "Burtovski";
				};
				class pjetrovic
				{
					label = "Pjetrovic";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Soldner_M56SR
		{
			role = "soldner";
			model = "PHRP_fleet_helmets";
		};
		class PHRP_Moon_Commando_Helmet
		{
			role = "moon";
			model = "PHRP_fleet_helmets";
		};
		class PHRP_Burtovski_Commando_Helmet
		{
			role = "burtovski";
			model = "PHRP_fleet_helmets";
		};
		class PHRP_Pjetrovic_Security_Helmet
		{
			role = "pjetrovic";
			model = "PHRP_fleet_helmets";
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class HeadgearItem;
	class PHRP_M56SR_Helmet_Base;
	class PHRP_Base_Commando_Helmet;
	class PHRP_Base_Security_Helmet;

	class PHRP_Soldner_M56SR : PHRP_M56SR_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[PHRP] M56S-R Helmet (Soldner)";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"PHHelmets\data\helmets\Soldner_HR_ODST_Helmet_CO.paa",
			"PHHelmets\data\helmets\Soldner_HR_ODST_Visor_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[] = 
			{
				"PHHelmets\data\helmets\Soldner_HR_ODST_Helmet_CO.paa",
				"PHHelmets\data\helmets\Soldner_HR_ODST_Visor_co.paa"
			};
		};
	};
	class PHRP_Burtovski_Commando_Helmet : PHRP_Base_Commando_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "Mark V/K Helmet (Burtovski)";
		hiddenSelections[] =  {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_burtovski_co.paa","PHHelmets\data\helmets\customvisor_burt_co.paa"};
	};
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
	class PHRP_Pjetrovic_Security_Helmet : PHRP_Base_Security_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Mark V/M Helmet (Pjetrovic)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_pjetrovic_co.paa","OPTRE_UNSC_Units\Army\data\Security_Visor_co.paa"};
	};
};
