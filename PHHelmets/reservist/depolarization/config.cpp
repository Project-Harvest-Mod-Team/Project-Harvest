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
	class PHRP_Base_Security_Helmet_dp;
	class PHRP_Base_CQB_Helmet_dp;

	class PHRP_Owessel_HRPilot_Helmet_dp : PHRP_Base_HRPilot_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "MrMicrobe";
		displayName = "Mark V/P Helmet (Owessel)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_owessel_co.paa","PHHelmets\data\helmets\customvisor_owessel_co.paa"};
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
	class PHRP_Kincaid_Scout_Helmet_dp : PHRP_Base_Scout_Helmet_dp
	{
		class ItemInfo;
        author = "Kaker";
		scope = 1;
		scopeArsenal = 1;
		displayName = "Mark VI/S Helmet (Kincaid)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_customvisor_co.paa","OPTRE_UNSC_Units\Army\data\Operator_Visor_co.paa"};
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
	class PHRP_Chopper_CQB_Helmet_dp : PHRP_Base_CQB_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Jimbo";
		displayName = "Mark V/C Helmet 1-A (Chopper)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_chopper_co.paa","PHHelmets\data\helmets\chopper_CQB_Visor_co.paa"};
	};
};