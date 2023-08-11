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
	class PHRP_Payne_Operator_Helmet_dp : PHRP_Base_ODST_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Soldner";
		displayName = "CH252D Helmet 1-3 (Payne)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_payne_co.paa","PHHelmets\data\helmets\customvisor_payne_co.paa"};
	};
	class PHRP_Graves_ODST_Helmet_dp : PHRP_Base_ODST_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "SirChungus";
		displayName = "CH252D Helmet 1-2 (Graves)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_graves_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
	};
	class PHRP_Blackburn_Recon_Helmet_dp : PHRP_Base_Recon_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Jimbo";
		displayName = "Recon Helmet (Blackburn)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_blackburn_co.paa","optre_unsc_units\army\data\recon_visor_ca.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
	};
};