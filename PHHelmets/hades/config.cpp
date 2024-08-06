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
				values[] = {"moon","kaz","buckley","wolf","payne","ramirez"};
				class moon
				{
					label = "Moon";
				};
				class kaz
				{
					label = "Kaz";
				};
				class buckley
				{
					label = "Buckley";
				};
				class wolf
				{
					label = "Wolf";
				};
				class payne
				{
					label = "Payne";
				};
				class ramirez
				{
					label = "Ramirez";
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
			model = "PHRP_hades_helmets";
		};
		class PHRP_Kaz_M56G
		{
			role = "kaz";
			model = "PHRP_hades_helmets";
		};
		class PHRP_Buckley_Recon_Helmet
		{
			role = "buckley";
			model = "PHRP_hades_helmets";
		};
		class PHRP_Wolf_Recon_Helmet
		{
			role = "wolf";
			model = "PHRP_hades_helmets";
		};
		class PHRP_Payne_Commando_Helmet
		{
			role = "payne";
			model = "PHRP_hades_helmets";
		};
		class PHRP_Ramirez_Recon_Helmet
		{
			role = "ramirez";
			model = "PHRP_hades_helmets";
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
	class PHRP_M56G_Helmet_Base;
	class PHRP_Base_Recon_Helmet;

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
	class PHRP_Buckley_Recon_Helmet : PHRP_Base_Recon_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "VibingVampire";
		displayName = "Recon Helmet (Buckley)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_buckley_co.paa","PHHelmets\data\helmets\customvisor_buckley_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
	};
	class PHRP_Wolf_Recon_Helmet : PHRP_Base_Recon_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Recon Helmet (Wolf)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_wolf_co.paa","PHHelmets\data\helmets\customvisor_wolf_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
	};
	class PHRP_Payne_Commando_Helmet : PHRP_Base_Commando_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Mark V/K Helmet (Payne)";
		hiddenSelections[] =  {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_payne_co.paa","PHHelmets\data\helmets\customvisor_payne_co.paa"};
		hiddenSelectionsMaterials[] = {"", "MA_Armor\data\Helmets\hr_odst\hr_odst_visor.rvmat"};
	};
	class PHRP_Ramirez_Recon_Helmet : PHRP_Base_Recon_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "SirChungus";
		displayName = "Recon Helmet (Ramirez)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_ramirez_co.paa","PHHelmets\data\helmets\customvisor_ramirez_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
	};
};
