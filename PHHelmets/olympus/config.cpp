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
				values[] = {"soldner","moon","tepfer","kaz","pjetrovic","holland"};
				class soldner
				{
					label = "Soldner";
				};
				class kaz
				{
					label = "Kaz";
				};
				class tepfer
				{
					label = "Tepfer";
				};
				class holland
				{
					label = "Holland";
				};
				class moon
				{
					label = "Moon";
				};
				class pjetrovic
				{
					label = "Pjetrovic";
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
		class PHRP_Kaz_Operator_Helmet
		{
			role = "kaz";
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
		class PHRP_Moon_Commando_Helmet
		{
			role = "moon";
			model = "PHRP_olympus_helmets";
		};
		class PHRP_Pjetrovic_Security_Helmet
		{
			role = "pjetrovic";
			model = "PHRP_olympus_helmets";
		};
	};
};
class CfgWeapons
{
	class HeadgearItem;
	class OPTRE_UNSC_CH252D_Helmet;
	class PHRP_Base_Operator_Helmet;
	class PHRP_Base_ODST_Helmet;
	class PHRP_Base_Commando_Helmet;
	class PHRP_Base_Security_Helmet;
	class PHRP_Soldner_Scout_Helmet: OPTRE_UNSC_CH252D_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "Experimental Assault Armor/S (Soldner)";
		model = "TCF_EQUIPMENT\Helmets\Scout\Reach_Scout_Helmet.p3d";
		mass = 6;
		hiddenSelections[] = {"camo1","Visor","Interior"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_soldner_co.paa","PHHelmets\data\helmets\customvisor_soldner_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 6;
			uniformmodel = "TCF_EQUIPMENT\Helmets\Scout\Reach_Scout_Helmet.p3d";
			picture = "\OPTRE_UNSC_Units\Army\icons\odst_recon";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","Visor","Interior"};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 40;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 40;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 40;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	class PHRP_Kaz_Operator_Helmet: PHRP_Base_Operator_Helmet
	{
		author = "MrMicrobe";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Mark V/O Helmet (Kaz)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_kaz_co.paa","OPTRE_UNSC_Units\Army\data\CQC_Visor_co.paa"};
	};
	class PHRP_Tepfer_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "CH252D Helmet (Tepfer)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
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
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_holland_co.paa","PHHelmets\data\helmets\customvisor_holland_co.paa"};
	};
	class PHRP_Moon_Commando_Helmet : PHRP_Base_Commando_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "Mark V/K Helmet (Moon)";
		hiddenSelections[] =  {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_moon_co.paa","PHHelmets\data\helmets\customvisor_moon_co.paa"};
	};
	class PHRP_Pjetrovic_Security_Helmet : PHRP_Base_Security_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Mark V/M Helmet (Pjetrovic)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_pjetrovic_co.paa","OPTRE_UNSC_Units\Army\data\Security_Visor_co.paa"};
	};
};