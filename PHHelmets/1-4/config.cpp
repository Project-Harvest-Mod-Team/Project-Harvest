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
		class PHRP_onefour_helmets
		{
			label = "1-4 Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"M56SH","M56SR","chopper","kaker","weiss","stoll","vasilev","ksiazek"};
				class M56SH
				{
					label = "M56S-H";
				};
				class M56SR
				{
					label = "M56S-R";
				};
				class chopper
				{
					label = "Chopper";
				};
				class kaker
				{
					label = "Kaker";
				};
				class weiss
				{
					label = "Weiss";
				};
				class stoll
				{
					label = "Stoll";
				};
				class vasilev
				{
					label = "Vasilev";
				};
				class ksiazek
				{
					label = "Ksiazek";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_onefour_M56SH_Helmet
		{
			role = "M56SH";
			model = "PHRP_onefour_helmets";
		};
		class PHRP_onefour_M56SR_Helmet
		{
			role = "M56SR";
			model = "PHRP_onefour_helmets";
		};
		class PHRP_Chopper_CQB_Helmet
		{
			role = "chopper";
			model = "PHRP_onefour_helmets";
		};
		class PHRP_Kaker_HRPilot_Helmet
		{
			role = "kaker";
			model = "PHRP_onefour_helmets";
		};
		class PHRP_Weiss_HRPilot_Helmet
		{
			role = "weiss";
			model = "PHRP_onefour_helmets";
		};
		class PHRP_Stoll_HRPilot_Helmet
		{
			role = "stoll";
			model = "PHRP_onefour_helmets";
		};
		class PHRP_Vasilev_HRPilot_Helmet
		{
			role = "vasilev";
			model = "PHRP_onefour_helmets";
		};
		class PHRP_Ksiazek_Security_Helmet
		{
			role = "ksiazek";
			model = "PHRP_onefour_helmets";
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class PHRP_Base_HRPilot_Helmet;
	class PHRP_Base_CQB_Helmet;
	class PHRP_Base_EOD_Helmet;
	class PHRP_M56SH_Helmet_Base;
	class PHRP_M56SR_Helmet_Base;
	class PHRP_Base_Security_Helmet;

	class PHRP_onefour_M56SH_Helmet: PHRP_M56SH_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[PHRP] M56S-H Helmet 1-4";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\onefour_H3_Helmet_co.paa","MA_Armor\data\Helmets\H3_ODST\H3_Visor_Blue_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\onefour_H3_Helmet_co.paa","MA_Armor\data\Helmets\H3_ODST\H3_Visor_Blue_co.paa"};
		};
	};
	class PHRP_onefour_M56SR_Helmet: PHRP_M56SR_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[PHRP] M56S-R Helmet 1-4";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\onefour_HR_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\onefour_HR_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"};
		};
	};
	class PHRP_Chopper_CQB_Helmet : PHRP_Base_CQB_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Jimbo";
		displayName = "Mark V/C Helmet (Chopper)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_chopper_co.paa","OPTRE_UNSC_Units\Army\data\CQB_Visor_co.paa"};
	};
	class PHRP_Kaker_HRPilot_Helmet : PHRP_Base_HRPilot_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Jimbo";
		displayName = "Mark V/P Helmet (Kaker)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_kaker_co.paa","PHHelmets\data\helmets\customvisor_kaker_co.paa"};
	};
	class PHRP_Weiss_HRPilot_Helmet : PHRP_Base_HRPilot_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Jimbo";
		displayName = "Mark V/P Helmet (Weiss)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_weiss_co.paa","PHHelmets\data\helmets\customvisor_weiss_co.paa"};
	};
	class PHRP_Stoll_HRPilot_Helmet : PHRP_Base_HRPilot_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Jimbo";
		displayName = "Mark V/P Helmet (Stoll)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_stoll_co.paa","PHHelmets\data\helmets\customvisor_stoll_co.paa"};
	};
	class PHRP_Vasilev_HRPilot_Helmet : PHRP_Base_HRPilot_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Jimbo";
		displayName = "Mark V/P Helmet (Vasilev)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_vasilev_co.paa","PHHelmets\data\helmets\customvisor_vasilev_co.paa"};
	};
	class PHRP_Ksiazek_Security_Helmet : PHRP_Base_Security_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Jimbo";
		displayName = "Mark V/M Helmet (Ksiazek)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_ksiazek_co.paa","PHHelmets\data\helmets\ksiazek_Security_Visor_co.paa"};
	};
};