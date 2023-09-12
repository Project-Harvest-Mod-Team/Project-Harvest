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
	class PHRP_Base_Recon_Helmet_dp;
	class PHRP_Base_CQB_Helmet_dp;
	class PHRP_Erikson_Recon_Helmet_dp : PHRP_Base_Recon_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "VorpalHotdog";
		displayName = "Recon Helmet 1-1 (Erikson)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_erikson_co.paa","optre_unsc_units\army\data\recon_visor_ca.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
	};
	class PHRP_Coleson_CQB_Helmet_dp : PHRP_Base_CQB_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "MrMicrobe";
		displayName = "Mark V/C Helmet 1-1 (Coleson)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_coleson_co.paa","OPTRE_UNSC_Units\Army\data\CQB_Visor_co.paa"};
	};
};