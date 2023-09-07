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
				values[] = {"recruit","wilson","miller","craven","owessel","wolf"};
				class recruit
				{
					label = "Recruit";
				};
				class wilson
				{
					label = "Wilson";
				};
				class drip
				{
					label = "DripDST";
				};
				class miller
				{
					label = "Miller";
				};
				class craven
				{
					label = "Craven";
				};
				class owessel
				{
					label = "Owessel";
				};
				class wolf
				{
					label = "Wolf";
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
		class PHRP_Wilson_CQC_Helmet
		{
			role = "wilson";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Miller_Scout_Helmet
		{
			role = "miller";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Craven_Scout_Helmet
		{
			role = "craven";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Owessel_HRPilot_Helmet
		{
			role = "owessel";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Wolf_Recon_Helmet
		{
			role = "wolf";
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
	class PHRP_Wilson_CQC_Helmet : PHRP_Base_CQC_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Mark V/CQC Helmet (Wilson)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_wilson_co.paa","OPTRE_UNSC_Units\Army\data\CQC_Visor_co.paa"};
	};
	class PHRP_Miller_Scout_Helmet : PHRP_Base_Scout_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Mark VI/S Helmet (Miller)";
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_miller_co.paa","OPTRE_UNSC_Units\Army\data\Scout_Visor_co.paa"};
	};
	class PHRP_Craven_Scout_Helmet : PHRP_Base_Scout_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Jimbo";
		displayName = "Mark VI/S Helmet (Craven)";
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_craven_co.paa","OPTRE_UNSC_Units\Army\data\Scout_Visor_co.paa"};
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
};