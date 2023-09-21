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
		class PHRP_onethree_helmets
		{
			label = "1-3 Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"M56SH","M56SR","buckley","morningstar","lancer","griffith"};
				class M56SH
				{
					label = "M56S-H";
				};
				class M56SR
				{
					label = "M56S-R";
				};
				class buckley
				{
					label = "Buckley";
				};
				class morningstar
				{
					label = "Morningstar";
				};
				class lancer
				{
					label = "Lancer";
				};
				class griffith
				{
					label = "Griffith";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_onethree_M56SH_Helmet
		{
			role = "M56SH";
			model = "PHRP_onethree_helmets";
		};
		class PHRP_onethree_M56SR_Helmet
		{
			role = "M56SR";
			model = "PHRP_onethree_helmets";
		};
		class PHRP_Buckley_Recon_Helmet
		{
			role = "buckley";
			model = "PHRP_onethree_helmets";
		};
		class PHRP_Morningstar_Operator_Helmet
		{
			role = "morningstar";
			model = "PHRP_onethree_helmets";
		};
		class PHRP_Lancer_CQB_Helmet
		{
			role = "lancer";
			model = "PHRP_onethree_helmets";
		};
		class PHRP_Griffith_M56SR_Helmet
		{
			role = "griffith";
			model = "PHRP_onethree_helmets";
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class PHRP_M56SH_Helmet_Base;
	class PHRP_M56SR_Helmet_Base;
	class PHRP_Base_Recon_Helmet;
	class PHRP_Base_Operator_Helmet;
	class PHRP_M56S_Helmet_Base;
	class PHRP_Base_CQB_Helmet;

	class PHRP_onethree_M56SH_Helmet: PHRP_M56SH_Helmet_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "[PHRP] M56S-H Helmet 1-3";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\onethree_H3_Helmet_co.paa","MA_Armor\data\Helmets\H3_ODST\H3_Visor_Blue_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\onethree_H3_Helmet_co.paa","MA_Armor\data\Helmets\H3_ODST\H3_Visor_Blue_co.paa"};
		};
	};
	class PHRP_onethree_M56SR_Helmet: PHRP_M56SR_Helmet_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "[PHRP] M56S-R Helmet 1-3";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\onethree_HR_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\onethree_HR_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"};
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
	class PHRP_Lancer_CQB_Helmet: PHRP_Base_CQB_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "";
		displayName = "Mark V/C Helmet (Lancer)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_lancer_co.paa","OPTRE_UNSC_Units\Army\data\CQB_Visor_co.paa"};
	};
	class PHRP_Griffith_M56SR_Helmet: PHRP_M56SR_Helmet_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "VibingVampire";
		displayName = "[PHRP] M56S-R Helmet (Griffith)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\griffith_HR_ODST_Helmet_CO.paa","PHHelmets\data\helmets\griffith_HR_ODST_Visor_Blue_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\griffith_HR_ODST_Helmet_CO.paa","PHHelmets\data\helmets\griffith_HR_ODST_Visor_Blue_co.paa"};
		};
	};
};