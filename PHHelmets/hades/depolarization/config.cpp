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
    class OPTRE_UNSC_Recon_Helmet_dp;
	class PHRP_Kaz_Recon_Helmet_dp : OPTRE_UNSC_Recon_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Project Harvest Mod Team";
		displayName = "Recon Helmet (Kaz)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customrecon_kaz_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
	};
	class PHRP_Vanderclutch_Recon_Helmet_dp : OPTRE_UNSC_Recon_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Project Harvest Mod Team";
		displayName = "Recon Helmet (Vanderclutch)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customrecon_vanderclutch_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
	};
	class PHRP_Vale_Recon_Helmet_dp : OPTRE_UNSC_Recon_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Project Harvest Mod Team";
		displayName = "Recon Helmet (Vale)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customrecon_vale_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
	};
};