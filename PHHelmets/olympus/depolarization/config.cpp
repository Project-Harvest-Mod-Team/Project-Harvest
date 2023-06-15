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
	class HeadgearItem;
	class OPTRE_UNSC_CH252D_Helmet_dp;
	class PHRP_Base_Operator_Helmet__dp;
	class PHRP_Base_ODST_Helmet_dp;
	class PHRP_Base_Commando_Helmet_dp;
	class PHRP_Base_Security_Helmet_dp;
	class PHRP_Soldner_Scout_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		mass = 6;
		author = "Soldner";
		displayName = "Experimental Assault Helmet/S (Soldner)";
		model = "TCF_EQUIPMENT\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_soldner_co.paa","TCF_EQUIPMENT\Helmets\Scout\Data\DP_Visor_Co.paa"};
		class ItemInfo: HeadgearItem
		{
			uniformmodel = "TCF_EQUIPMENT\Helmets\Scout\Reach_Scout_Helmet.p3d";
			modelSides[] = {6};
			mass = 6;
			hiddenSelections[] = {"camo1","Visor"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_soldner_co.paa","TCF_EQUIPMENT\Helmets\Scout\Data\DP_Visor_Co.paa"};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 30;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 30;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 30;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	class PHRP_Kaz_Operator_Helmet_dp : PHRP_Base_Operator_Helmet__dp
	{
		author = "MrMicrobe";
		scope = 1;
		scopeArsenal = 1;
		displayName = "Mark V/O Helmet (Kaz)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_kaz_co.paa","OPTRE_UNSC_Units\Army\data\CQC_Visor_co.paa"};
	};
	class PHRP_Holland_ODST_Helmet_dp : PHRP_Base_ODST_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "VorpalHotdog";
		displayName = "CH252D Helmet (Holland)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_holland_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
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