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
    class PHRP_Base_ODST_Helmet_dp;
	class OPTRE_UNSC_CH252D_Helmet_dp;
	class PHRP_Soldner_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Soldner";
		displayName = "Experimental Assault Helmet/S (Soldner)";
		model = "TCF_EQUIPMENT\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_soldner_co.paa","TCF_EQUIPMENT\Helmets\Scout\Data\DP_Visor_Co.paa"};
		class ItemInfo: HeadgearItem
		{
			uniformmodel = "TCF_EQUIPMENT\Helmets\Scout\Reach_Scout_Helmet.p3d";
			allowedSlots[] = {"BACKPACK_SLOT","VEST_SLOT","HEADGEAR_SLOT"};
			modelSides[] = {6};
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
	class PHRP_Burtovski_ODST_Helmet_dp : PHRP_Base_ODST_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Soldner";
		displayName = "CH252D Helmet (Burtovski)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_burtovski_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
	};
    class PHRP_Pjetrovic_ODST_Helmet_dp : PHRP_Base_ODST_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Soldner";
		displayName = "CH252D Helmet (Pjetrovic)";
		hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_pjetrovic_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
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
	class PHRP_Holland_ODST_Helmet_dp : PHRP_Base_ODST_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "VorpalHotdog";
		displayName = "CH252D Helmet (Holland)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_holland_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
	};
};