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
		class PHRP_olympus_helmets
		{
			label = "Olympus Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"raider","kaz","aturr","holland"};
				class raider
				{
					label = "Raider";
				};
				class kaz
				{
					label = "Kaz";
				};
				class aturr
				{
					label = "Aturr";
				};
				class holland
				{
					label = "Holland";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Raider_M56SR_Helmet
		{
			role = "raider";
			model = "PHRP_olympus_helmets";
		};
		class PHRP_Kaz_M56G
		{
			role = "kaz";
			model = "PHRP_olympus_helmets";
		};
		class PHRP_Aturr_Recon_Helmet
		{
			role = "aturr";
			model = "PHRP_olympus_helmets";
		};
		class PHRP_Holland_ODST_Helmet
		{
			role = "holland";
			model = "PHRP_olympus_helmets";
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class HeadgearItem;
	class PHRP_Base_Recon_Helmet;
	class PHRP_M56SR_Helmet_Base;
	class PHRP_M56G_Helmet_Base;
	class MA_M56G_Faceplate_NVG;

	class PHRP_Raider_M56SR_Helmet: PHRP_M56SR_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[PHRP] M56S-R Helmet (Raider)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\raider_HR_ODST_Helmet_CO.paa","PHHelmets\data\helmets\raider_HR_ODST_Visor_Blue_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\raider_HR_ODST_Helmet_CO.paa","PHHelmets\data\helmets\raider_HR_ODST_Visor_Blue_co.paa"};
		};
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
	class PHRP_Aturr_Recon_Helmet : PHRP_Base_Recon_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "Recon Helmet 1-A (Aturr)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_aturr_co.paa","PHHelmets\data\helmets\customvisor_aturr_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
	};
	class PHRP_Kaz_M56G_Faceplate: MA_M56G_Faceplate_NVG
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[PHRP] Kaz's M56G Faceplate (NVG)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\Kaz_Gungnir_Faceplate_CO.paa"};
		class ItemInfo
		{
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\Kaz_Gungnir_Faceplate_CO.paa"};
		};
	};
};