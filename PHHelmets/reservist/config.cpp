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
		class PHRP_reservist_helmets
		{
			label = "Reservist Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"recruit","owessel","pjetrovic","griffith","kincaid","vasilev","chopper"};
				class recruit
				{
					label = "Recruit";
				};
				class owessel
				{
					label = "Owessel";
				};
				class pjetrovic
				{
					label = "Pjetrovic";
				};
				class griffith
				{
					label = "Griffith";
				};
				class kincaid
				{
					label = "Kincaid";
				};
				class vasilev
				{
					label = "Vasilev";
				};
				class chopper
				{
					label = "Chopper";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Recruit_M56SR_Helmet
		{
			role = "recruit";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Owessel_HRPilot_Helmet
		{
			role = "owessel";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Pjetrovic_Security_Helmet
		{
			role = "pjetrovic";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Griffith_M56SR_Helmet
		{
			role = "griffith";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Kincaid_M56S_Helmet
		{
			role = "kincaid";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Vasilev_HRPilot_Helmet
		{
			role = "vasilev";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Chopper_CQB_Helmet
		{
			role = "chopper";
			model = "PHRP_reservist_helmets";
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class PHRP_M56SR_Helmet_Base;
	class PHRP_Base_HRPilot_Helmet;
	class PHRP_Base_CQC_Helmet;
	class PHRP_Base_Scout_Helmet;
	class PHRP_Base_Recon_Helmet;
	class PHRP_Base_Commando_Helmet;
	class PHRP_Base_Security_Helmet;
	class PHRP_M56S_Helmet_Base;
	class PHRP_Base_CQB_Helmet;

	class PHRP_Recruit_M56SR_Helmet: PHRP_M56SR_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[PHRP] M56S-R Helmet - Recruit";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"};
		};
	};
	class PHRP_Owessel_HRPilot_Helmet : PHRP_Base_HRPilot_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Mark V/P Helmet (Owessel)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_owessel_co.paa","PHHelmets\data\helmets\customvisor_owessel_co.paa"};
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
	class PHRP_Chopper_CQB_Helmet : PHRP_Base_CQB_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Jimbo";
		displayName = "Mark V/C Helmet (Chopper)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_chopper_co.paa","PHHelmets\data\helmets\chopper_CQB_Visor_co.paa"};
	};
};