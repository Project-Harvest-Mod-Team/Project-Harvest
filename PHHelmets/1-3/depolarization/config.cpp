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
	class PHRP_Base_Recon_Helmet_dp;
	class PHRP_Base_EOD_Helmet_dp;
	class PHRP_Base_Operator_Helmet_dp;
	class PHRP_Buckley_Recon_Helmet_dp : PHRP_Base_Recon_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "VibingVampire";
		displayName = "Recon Helmet 1-3 (Buckley)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_buckley_co.paa","optre_unsc_units\army\data\recon_visor_ca.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
	};
	class PHRP_Morningstar_Operator_Helmet_dp : PHRP_Base_Operator_Helmet_dp
	{
		author = "";
		scope = 1;
		scopeArsenal = 1;
		displayName = "Mark V/O Helmet 1-3 (Morningstar)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_morningstar_co.paa","OPTRE_UNSC_Units\Army\data\Operator_Visor_co.paa"};
	};
	class PHRP_Hazard_EOD_Helmet_dp : PHRP_Base_EOD_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "MrMicrobe";
		displayName = "Mark V/EOD Helmet 1-3 (Hazard)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_hazard_co.paa","PHHelmets\data\helmets\customvisor_hazard_co.paa"};
	};
	class PHRP_Griffith_ODST_Helmet_dp : PHRP_Base_ODST_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "VibingVampire";
		displayName = "CH252D Helmet 1-3 (Griffith)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_griffith_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
	};
};