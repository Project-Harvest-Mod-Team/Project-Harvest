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
				values[] = {"raider","burtovski","holland"};
				class raider
				{
					label = "Raider";
				};
				class burtovski
				{
					label = "Burtovski";
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
		class PHRP_Burtovski_M56SR_Helmet
		{
			role = "burtovski";
			model = "PHRP_olympus_helmets";
		};
		class PHRP_Holland_M56SR_Helmet
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
	class PHRP_M56SR_Helmet_Base;

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
	class PHRP_Burtovski_M56SR_Helmet : PHRP_M56SR_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "vibingvampire";
		displayName = "[PHRP] M56S-R Helmet (Burtovski)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\burtovski_HR_ODST_Helmet_CO.paa","PHHelmets\data\helmets\burtovski_HR_ODST_Visor_Blue_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\burtovski_HR_ODST_Helmet_CO.paa","PHHelmets\data\helmets\burtovski_HR_ODST_Visor_Blue_co.paa"};
		};
	};
	class PHRP_Holland_M56SR_Helmet: PHRP_M56SR_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[PHRP] M56S-R Helmet (Holland)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\holland_HR_ODST_Helmet_CO.paa","PHHelmets\data\helmets\holland_HR_ODST_Visor_Blue_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\raider_HR_ODST_Helmet_CO.paa","PHHelmets\data\helmets\raider_HR_ODST_Visor_Blue_co.paa"};
		};
	};
};