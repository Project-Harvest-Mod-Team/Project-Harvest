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
		class PHRP_hoplite_helmets
		{
			label = "Hoplite Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"M56SH","M56SR","morningstar"};
				class M56SH
				{
					label = "M56S-H";
				};
				class M56SR
				{
					label = "M56S-R";
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
		class PHRP_hoplite_M56SH_Helmet
		{
			role = "M56SH";
			model = "PHRP_hoplite_helmets";
		};
		class PHRP_hoplite_M56SR_Helmet
		{
			role = "M56SR";
			model = "PHRP_hoplite_helmets";
		};
		class PHRP_Morningstar_Operator_Helmet
		{
			role = "morningstar";
			model = "PHRP_hoplite_helmets";
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class PHRP_M56SH_Helmet_Base;
	class PHRP_M56SR_Helmet_Base;
	class PHRP_M56S_Helmet_Base;
	class PHRP_Base_Recon_Helmet;
	class PHRP_Base_CQB_Helmet;
	class PHRP_Base_Scout_Helmet;
	class PHRP_Base_Operator_Helmet;
	class PHRP_hoplite_M56SH_Helmet: PHRP_M56SH_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[PHRP] M56S-H Helmet 1-1";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\hoplite_H3_Helmet_co.paa","MA_Armor\data\Helmets\H3_ODST\H3_Visor_Blue_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\hoplite_H3_Helmet_co.paa","MA_Armor\data\Helmets\H3_ODST\H3_Visor_Blue_co.paa"};
		};
	};
	class PHRP_hoplite_M56SR_Helmet: PHRP_M56SR_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[PHRP] M56S-R Helmet 1-1";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\hoplite_HR_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\hoplite_HR_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"};
		};
	};
	class PHRP_Morningstar_Operator_Helmet : PHRP_Base_Operator_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Mark V/O Helmet (Morningstar)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_morningstar_co.paa","OPTRE_UNSC_Units\Army\data\Operator_Visor_co.paa"};
	};
};