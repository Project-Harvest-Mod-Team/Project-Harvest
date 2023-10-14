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
	class PHRP_Base_Commando_Helmet_dp;
	class PHRP_Base_Security_Helmet_dp;
	class PHRP_Burtovski_Commando_Helmet_dp : PHRP_Base_Commando_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Soldner";
		displayName = "Mark V/K Helmet (Burtovski)";
		hiddenSelections[] =  {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_burtovski_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
	};
	class PHRP_Moon_Commando_Helmet_dp : PHRP_Base_Commando_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Soldner";
		displayName = "Mark V/K Helmet (Moon)";
		hiddenSelections[] =  {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_Moon_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
	};
	class PHRP_Pjetrovic_Security_Helmet_dp : PHRP_Base_Security_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "MrMicrobe";
		displayName = "Mark V/M Helmet (Pjetrovic)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_pjetrovic_co.paa","OPTRE_UNSC_Units\Army\data\Security_Visor_co.paa"};
	};
};
