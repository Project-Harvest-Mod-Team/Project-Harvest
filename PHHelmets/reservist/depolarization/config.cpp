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
	class PHRP_Base_HRPilot_Helmet__dp;
	class PHRP_Recruit_ODST_Helmet_dp : PHRP_Base_ODST_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "VibingVampire";
		displayName = "CH252D Helmet - Recruit";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_gladius_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
	};
	class PHRP_Reserve_ODST_Helmet_dp : PHRP_Base_ODST_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "VibingVampire";
		displayName = "CH252D Helmet - Reserve";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_gladiusred_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
	};
	class PHRP_Collins_ODST_Helmet_dp : PHRP_Base_ODST_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Luna";
		displayName = "CH252D Helmet (Collins)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_collins_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
	};
	class PHRP_Ansley_ODST_Helmet_dp : PHRP_Base_ODST_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Ansley)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_ansley_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
	};
    class PHRP_Carter_ODST_Helmet_dp : PHRP_Base_ODST_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Luna";
		displayName = "CH252D Helmet (Carter)";
		hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_carter_co.paa","OPTRE_UNSC_Units\Army\data\Commando_Visor_co.paa"};
	};
	class PHRP_Tinoco_ODST_Helmet_dp : PHRP_Base_ODST_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "MrMicrobe";
		displayName = "CH252D Helmet (Tinoco)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_tinoco_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
	};
	class PHRP_Carsten_ODST_Helmet_dp : PHRP_Base_ODST_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Soldner";
		displayName = "CH252D Helmet (Carsten)";
		hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_carsten_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
	};
	class PHRP_Mischa_ODST_Helmet_dp : PHRP_Base_ODST_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Mischa)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_mischa_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
	};
	class PHRP_Wilson_CQC_Helmet_dp : PHRP_Base_CQC_Helmet__dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "MrMicrobe";
		displayName = "Mark V/CQC Helmet (Wilson)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_wilson_co.paa","OPTRE_UNSC_Units\Army\data\CQC_Visor_co.paa"};
	};
	class PHRP_Raider_Commando_Helmet_dp : PHRP_Base_Commando_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Soldner";
		displayName = "Mark V/K Helmet (Raider)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_Raider_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
	};
	class PHRP_Drip_ODST_Helmet_dp : PHRP_Base_ODST_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "VorpalHotdog";
		displayName = "CH252D Helmet(Drip)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_dripdst_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
	};
	class PHRP_Tepfer_ODST_Helmet_dp : PHRP_Base_ODST_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Soldner";
		displayName = "CH252D Helmet (Tepfer)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_tepfer_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
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
	class PHRP_Jaeger_ODST_Helmet_dp : PHRP_Base_ODST_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Jimbo";
		displayName = "CH252D Helmet (Jaeger)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_jaeger_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
	};
	class PHRP_Owessel_HRPilot_Helmet_dp : PHRP_Base_HRPilot_Helmet__dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "MrMicrobe";
		displayName = "Mark V/P Helmet (Owessel)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_owessel_co.paa","PHHelmets\data\helmets\customvisor_owessel_co.paa"};
	};
};