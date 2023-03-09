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
class XtdGearModels
{
	class CamoBase;
	class CfgWeapons
	{
		class PHRP_olympus_helmets
		{
			label = "Olympus Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"soldner","burtovski","pjetrovic","tepfer","holland"};
				class soldner
				{
					label = "Soldner";
				};
				class burtovski
				{
					label = "Burtovski";
				};
				class pjetrovic
				{
					label = "Pjetrovic";
				};
				class tepfer
				{
					label = "Tepfer";
				};
				class holland
				{
					label = "Holland";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Soldner_Scout_Helmet
		{
			role = "soldner";
			model = "PHRP_olympus_helmets";
		};
		class PHRP_Burtovski_ODST_Helmet
		{
			role = "burtovski";
			model = "PHRP_olympus_helmets";
		};
		class PHRP_Pjetrovic_ODST_Helmet
		{
			role = "pjetrovic";
			model = "PHRP_olympus_helmets";
		};
		class PHRP_Tepfer_ODST_Helmet
		{
			role = "tepfer";
			model = "PHRP_olympus_helmets";
		};
		class PHRP_Holland_ODST_Helmet
		{
			role = "holland";
			model = "PHRP_olympus_helmets";
		};
	};
};
class CfgWeapons
{
	class HeadgearItem;
    class PHRP_Base_ODST_Helmet;
	class OPTRE_UNSC_CH252D_Helmet;
	class PHRP_Soldner_Scout_Helmet: OPTRE_UNSC_CH252D_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "Experimental Assault Armor/S (Soldner)";
		model = "TCF_EQUIPMENT\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelections[] = {"camo1","Visor","Interior"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_soldner_co.paa","PHHelmets\data\helmets\customvisor_soldner_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 0.1;
			uniformmodel = "TCF_EQUIPMENT\Helmets\Scout\Reach_Scout_Helmet.p3d";
			picture = "\OPTRE_UNSC_Units\Army\icons\odst_recon";
			allowedSlots[] = {"BACKPACK_SLOT","VEST_SLOT","HEADGEAR_SLOT"};
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","Visor","Interior"};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 35;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 35;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 35;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	class PHRP_Burtovski_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "CH252D Helmet (Burtovski)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_burtovski_co.paa","PHHelmets\data\helmets\customvisor_burtovski_co.paa"};
	};
	class PHRP_Pjetrovic_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "CH252D Helmet (Pjetrovic)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_pjetrovic_co.paa","PHHelmets\data\helmets\customvisor_pjetrovic_co.paa"};
	};
	class PHRP_Tepfer_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "CH252D Helmet (Tepfer)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_tepfer_co.paa","PHHelmets\data\helmets\customvisor_tepfer_co.paa"};
	};
	class PHRP_Holland_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "VorpalHotdog";
		displayName = "CH252D Helmet (Holland)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_holland_co.paa","PHHelmets\data\helmets\customvisor_holland_co.paa"};
	};
};