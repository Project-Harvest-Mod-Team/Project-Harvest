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
	class PHRP_Base_CQB_Helmet_dp;
	class PHRP_Base_Operator_Helmet_dp;
	class PHRP_Base_Scout_Helmet_dp;
	class PHRP_Morningstar_Operator_Helmet_dp : PHRP_Base_Operator_Helmet_dp
	{
		author = "";
		scope = 1;
		scopeArsenal = 1;
		displayName = "Mark V/O Helmet (Morningstar)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_morningstar_co.paa","OPTRE_UNSC_Units\Army\data\Operator_Visor_co.paa"};
	};
};