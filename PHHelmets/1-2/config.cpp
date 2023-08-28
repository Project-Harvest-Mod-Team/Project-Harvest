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
		class PHRP_onetwo_helmets
		{
			label = "1-2 Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"M56SH","M56SR","payne","blackburn","hazard"};
				class M56SH
				{
					label = "M56S-H";
				};
				class M56SR
				{
					label = "M56S-R";
				};
				class payne
				{
					label = "Payne";
				};
				class blackburn
				{
					label = "Blackburn";
				};
				class hazard
				{
					label = "Hazard";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_onetwo_M56SH_Helmet
		{
			role = "M56SH";
			model = "PHRP_onetwo_helmets";
		};
		class PHRP_onetwo_M56SR_Helmet
		{
			role = "M56SR";
			model = "PHRP_onetwo_helmets";
		};
		class PHRP_Payne_Operator_Helmet
		{
			role = "payne";
			model = "PHRP_onetwo_helmets";
		};
		class PHRP_Blackburn_Recon_Helmet
		{
			role = "blackburn";
			model = "PHRP_onetwo_helmets";
		};
		class PHRP_Hazard_EOD_Helmet
		{
			role = "hazard";
			model = "PHRP_onetwo_helmets";
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
    class PHRP_Base_ODST_Helmet;
	class PHRP_Base_Operator_Helmet;
	class PHRP_Base_Recon_Helmet;
	class PHRP_Base_EOD_Helmet;
	class PHRP_M56SH_Helmet_Base;
	class PHRP_M56SR_Helmet_Base;

	class PHRP_onetwo_M56SH_Helmet: PHRP_M56SH_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[PHRP] M56S-H Helmet 1-2";
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\onetwo_H3_Helmet_co.paa","MA_Armor\data\Helmets\H3_ODST\H3_Visor_Blue_co.paa"};
		hiddenSelections[] = {"camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\onetwo_H3_Helmet_co.paa","MA_Armor\data\Helmets\H3_ODST\H3_Visor_Blue_co.paa"};
		};
	};
	class PHRP_onetwo_M56SR_Helmet: PHRP_M56SR_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[PHRP] M56S-R Helmet 1-2";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\onetwo_HR_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\onetwo_HR_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"};
		};
	};
	class PHRP_Payne_Operator_Helmet : PHRP_Base_Operator_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "Mark V/O Helmet (Payne)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_payne_co.paa","PHHelmets\data\helmets\customvisor_payne_co.paa"};
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
	class PHRP_Hazard_EOD_Helmet : PHRP_Base_EOD_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Mark V/EOD Helmet (Hazard)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_hazard_co.paa","PHHelmets\data\helmets\customvisor_hazard_co.paa"};
	};
};