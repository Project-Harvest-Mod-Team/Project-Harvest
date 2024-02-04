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
		class PHRP_oneone_helmets
		{
			label = "1-1 Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"M56SH","M56SR","ishra","kruber","blackburn","morningstar","riot","kincaid","lancer"};
				class M56SH
				{
					label = "M56S-H";
				};
				class M56SR
				{
					label = "M56S-R";
				};
				class ishra
				{
					label = "Ishra";
				};
				class kruber
				{
					label = "Kruber";
				};
				class blackburn
				{
					label = "Blackburn";
				};
				class morningstar
				{
					label = "Morningstar";
				};
				class riot
				{
					label = "Riot";
				};
				class kincaid
				{
					label = "Kincaid";
				};
				class lancer
				{
					label = "Lancer";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_oneone_M56SH_Helmet
		{
			role = "M56SH";
			model = "PHRP_oneone_helmets";
		};
		class PHRP_oneone_M56SR_Helmet
		{
			role = "M56SR";
			model = "PHRP_oneone_helmets";
		};
		class PHRP_Ishra_M56SH_Helmet
		{
			role = "ishra";
			model = "PHRP_oneone_helmets";
		};
		class PHRP_Kruber_M56SH_Helmet
		{
			role = "kruber";
			model = "PHRP_oneone_helmets";
		};
		class PHRP_Blackburn_Recon_Helmet
		{
			role = "blackburn";
			model = "PHRP_oneone_helmets";
		};
		class PHRP_Morningstar_Operator_Helmet
		{
			role = "morningstar";
			model = "PHRP_oneone_helmets";
		};
		class PHRP_Riot_ODST_Helmet
		{
			role = "riot";
			model = "PHRP_oneone_helmets";
		};
		class PHRP_Kincaid_M56S_Helmet
		{
			role = "kincaid";
			model = "PHRP_oneone_helmets";
		};
		class PHRP_Coleson_CQB_Helmet
		{
			role = "coleson";
			model = "PHRP_oneone_helmets";
		};
		class PHRP_Lancer_CQB_Helmet
		{
			role = "lancer";
			model = "PHRP_oneone_helmets";
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
	class PHRP_oneone_M56SH_Helmet: PHRP_M56SH_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[PHRP] M56S-H Helmet 1-1";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\oneone_H3_Helmet_co.paa","MA_Armor\data\Helmets\H3_ODST\H3_Visor_Blue_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\oneone_H3_Helmet_co.paa","MA_Armor\data\Helmets\H3_ODST\H3_Visor_Blue_co.paa"};
		};
	};
	class PHRP_oneone_M56SR_Helmet: PHRP_M56SR_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[PHRP] M56S-R Helmet 1-1";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\oneone_HR_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\oneone_HR_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"};
		};
	};
	class PHRP_Ishra_M56SH_Helmet : PHRP_M56SH_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[PHRP] M56S-H Helmet 1-1 (Ishra)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\Ishra_H3_Helmet_co.paa","MA_Armor\data\Helmets\H3_ODST\H3_Visor_Gold_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\oneone_H3_Helmet_co.paa","MA_Armor\data\Helmets\H3_ODST\H3_Visor_Blue_co.paa"};
		};
	};
	class PHRP_Blackburn_Recon_Helmet : PHRP_Base_Recon_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Jimbo";
		displayName = "Recon Helmet (Blackburn)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_blackburn_co.paa","PHHelmets\data\helmets\customvisor_blackburn_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
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
	class PHRP_Kincaid_M56S_Helmet : PHRP_M56S_Helmet_Base
	{
       	scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Kaker";
		displayName = "Mark VI/S Helmet (Kincaid)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_Kincaid_co.paa","OPTRE_UNSC_Units\Army\data\CQB_Visor_co.paa"};
	};
	class PHRP_Lancer_CQB_Helmet : PHRP_Base_CQB_Helmet 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "";
		displayName = "Mark V/C Helmet (Lancer)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_lancer_co.paa","OPTRE_UNSC_Units\Army\data\CQB_Visor_co.paa"};
	};
};