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
class CfgWeapons
{
    class PHRP_Base_ODST_Helmet_dp;
	class PHRP_Base_HRPilot_Helmet__dp;
	class PHRP_Base_Commando_Helmet_dp;
	class PHRP_Base_CQC_Helmet__dp;
	class PHRP_Base_Scout_Helmet_dp;
	class PHRP_Base_HRPilot_Helmet_dp;
	class PHRP_Base_Recon_Helmet_dp;
	class PHRP_Wilson_CQC_Helmet_dp : PHRP_Base_CQC_Helmet__dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "MrMicrobe";
		displayName = "Mark V/CQC Helmet (Wilson)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_wilson_co.paa","OPTRE_UNSC_Units\Army\data\CQC_Visor_co.paa"};
	};
	class PHRP_Miller_Scout_Helmet_dp : PHRP_Base_Scout_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "MrMicrobe";
		displayName = "Mark VI/S Helmet (Miller)";
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_miller_co.paa","OPTRE_UNSC_Units\Army\data\Scout_Visor_co.paa"};
	};
	class PHRP_Craven_Scout_Helmet_dp : PHRP_Base_Scout_Helmet_dp
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		author = "Jimbo";
		displayName = "Mark VI/S Helmet (Craven)";
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_craven_co.paa","OPTRE_UNSC_Units\Army\data\Scout_Visor_co.paa"};
	};
	class PHRP_Owessel_HRPilot_Helmet_dp : PHRP_Base_HRPilot_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "MrMicrobe";
		displayName = "Mark V/P Helmet (Owessel)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_owessel_co.paa","PHHelmets\data\helmets\customvisor_owessel_co.paa"};
	};
	class PHRP_Wolf_Recon_Helmet_dp : PHRP_Base_Recon_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "MrMicrobe";
		displayName = "Recon Helmet (Wolf)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_wolf_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
	};
	class PHRP_Kincaid_HRPilot_Helmet_dp : PHRP_Base_HRPilot_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Jimbo";
		displayName = "Mark V/P Helmet (Kincaid)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_kincaid_co.paa","PHHelmets\data\helmets\customvisor_kincaid_co.paa"};
	};
};