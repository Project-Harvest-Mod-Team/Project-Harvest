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
	class PHRP_Base_HRPilot_Helmet_dp;
	class PHRP_Base_CQB_Helmet_dp;
	class PHRP_Base_Security_Helmet_dp;
	class PHRP_Chopper_CQB_Helmet_dp : PHRP_Base_CQB_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Jimbo";
		displayName = "Mark V/C Helmet 1-A (Chopper)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_chopper_co.paa","OPTRE_UNSC_Units\Army\data\CQB_Visor_co.paa"};
	};
	class PHRP_Kaker_HRPilot_Helmet_dp : PHRP_Base_HRPilot_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Jimbo";
		displayName = "Mark V/P Helmet (Kaker)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_kaker_co.paa","PHHelmets\data\helmets\customvisor_kaker_co.paa"};
	};
	class PHRP_Weiss_HRPilot_Helmet_dp : PHRP_Base_HRPilot_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Jimbo";
		displayName = "Mark V/P Helmet (Weiss)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_weiss_co.paa","PHHelmets\data\helmets\customvisor_weiss_co.paa"};
	};
	class PHRP_Stoll_HRPilot_Helmet_dp : PHRP_Base_HRPilot_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Jimbo";
		displayName = "Mark V/P Helmet (Stoll)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_stoll_co.paa","PHHelmets\data\helmets\customvisor_stoll_co.paa"};
	};
	class PHRP_Vasilev_HRPilot_Helmet_dp : PHRP_Base_HRPilot_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Jimbo";
		displayName = "Mark V/P Helmet (Vasilev)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_vasilev_co.paa","PHHelmets\data\helmets\customvisor_vasilev_co.paa"};
	};
	class PHRP_Ksiazek_Security_Helmet_dp : PHRP_Base_Security_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Jimbo";
		displayName = "Mark V/M Helmet (Ksiazek)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_ksiazek_co.paa","PHHelmets\data\helmets\ksiazek_Security_Visor_co.paa"};
	};
};