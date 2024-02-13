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
				values[] = {"moon","kaz"};
				class moon
				{
					label = "Moon";
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
			model = "PHRP_fleet_helmets";
		};
		class PHRP_Kaz_M56G
		{
			role = "kaz";
			model = "PHRP_fleet_helmets";
		}
	};
};
class CfgWeapons
{
	class ItemInfo;
	class HeadgearItem;
	class PHRP_M56SR_Helmet_Base;
	class PHRP_Base_Commando_Helmet;
	class PHRP_Base_Security_Helmet;
	class PHRP_M56G_Helmet_Base;

	class PHRP_Moon_Commando_Helmet : PHRP_Base_Commando_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "Mark V/K Helmet (Moon)";
		hiddenSelections[] =  {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_moon_co.paa","PHHelmets\data\helmets\customvisor_moon_co.paa"};
		hiddenSelectionsMaterials[] = {"", "MA_Armor\data\Helmets\hr_odst\hr_odst_visor.rvmat"};
	};
	class PHRP_Kaz_M56G : PHRP_M56G_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[PHRP] M56G Helmet (Kaz)";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"PHHelmets\data\helmets\Kaz_Gungnir_Helmet_CO.paa",
			"MA_Armor\data\Helmets\Gungnir\Gungnir_Visor_Blue_co.paa"
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
				"PHHelmets\data\helmets\Kaz_Gungnir_Helmet_CO.paa",
				"MA_Armor\data\Helmets\Gungnir\Gungnir_Visor_Blue_co.paa"
			};
		};	
	};
};
