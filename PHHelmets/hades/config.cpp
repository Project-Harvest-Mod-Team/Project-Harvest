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
		class PHRP_hades_helmets
		{
			label = "Hades Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"Moon","kaz","vanderclutch","wolf","richter"};
				class moon
				{
					label = "Moon";
				};
				class kaz
				{
					label = "Kaz";
				};
				class vanderclutch
				{
					label = "Vandy";
				};
				class wolf
				{
					label = "Wolf";
				};
				class richter
				{
					label = "Richter";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Moon_Commando_Helmet
		{
			role = "moon";
			model = "PHRP_hades_helmets";
		};
		class PHRP_Kaz_Gungnir_Helmet
		{
			role = "kaz";
			model = "PHRP_hades_helmets";
		};
		class PHRP_Vanderclutch_Recon_Helmet
		{
			role = "vanderclutch";
			model = "PHRP_hades_helmets";
		};
		class PHRP_Wolf_Recon_Helmet
		{
			role = "wolf";
			model = "PHRP_hades_helmets";
		};
		class PHRP_Richter_Recon_Helmet
		{
			role = "richter";
			model = "PHRP_hades_helmets";
		};
	};
};
class CfgWeapons
{
	class PHRP_Base_Recon_Helmet;
	class PHRP_Base_Commando_Helmet;
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
	class PHRP_Vanderclutch_Recon_Helmet : PHRP_Base_Recon_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Recon Helmet (Vanderclutch)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_vanderclutch_co.paa","PHHelmets\data\helmets\customvisor_vanderclutch_co.paa"};
	};	
	class PHRP_Wolf_Recon_Helmet : PHRP_Base_Recon_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Recon Helmet (Wolf)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_wolf_co.paa","PHHelmets\data\helmets\customvisor_wolf_co.paa"};
	};
	class PHRP_Richter_Recon_Helmet : PHRP_Base_Recon_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Enreth";
		displayName = "Recon Helmet (Richter)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_dusk_co.paa","PHHelmets\data\helmets\customvisor_dusk_co.paa"};
	};
	class HeadgearItem;
	class OPTRE_UNSC_CH252D_Helmet;
	class PHRP_Kaz_Gungnir_Helmet: OPTRE_UNSC_CH252D_Helmet
	{
		author = "Soldner";
		scope = 2;
		scopeArsenal = 1;
		mass = 10;
		displayName = "EAA/C Gungnir Helmet (Kaz)";
		model = "TCF_EQUIPMENT\Helmets\Gungnir\Gungnir_Helmet_Bugeye.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_kaz_co.paa"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "TCF_EQUIPMENT\Helmets\Gungnir\Gungnir_Helmet_Bugeye.p3d";
			picture = "\OPTRE_UNSC_Units\Army\icons\odst_recon";
			allowedSlots[] = {"BACKPACK_SLOT","VEST_SLOT","HEADGEAR_SLOT"};
			modelSides[] = {6};
			hiddenSelections[] = {"camo1"};
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
	class OPTRE_UNSC_CH252D_Helmet_dp;
	class PHRP_Kaz_Gungnir_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		author = "Soldner";
		scope = 1;
		scopeArsenal = 1;
		mass = 10;
		displayName = "EAA/D Gungnir Helmet (Kaz)";
		model = "TCF_EQUIPMENT\Helmets\Gungnir\Gungnir_Helmet_Bugeye.p3d";
		hiddenSelections[] = {"camo1","Blastshield","Interior"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_kaz_co.paa","PHHelmets\data\helmets\customnvg_kaz_co.paa"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "TCF_EQUIPMENT\Helmets\Gungnir\Gungnir_Helmet_Bugeye.p3d";
			allowedSlots[] = {"BACKPACK_SLOT","VEST_SLOT","HEADGEAR_SLOT"};
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","Blastshield","Interior"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_kaz_co.paa","PHHelmets\data\helmets\customnvg_kaz_co.paa"};
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
	//This is waiting on HiddenSelections from TCF
	/*class NVGoggles;
	class PHRP_NVG_BlastShield: NVGoggles
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "EAA/D Gungnir Blastshield (Kaz)";
		visionMode[] = {"Normal","NVG","TI"};
		model = "\TCF_EQUIPMENT\Helmets\Gungnir\BattleshieldBaseplate.p3d";
		class ItemInfo
		{
			type = 616;
			uniformModel = "\TCF_EQUIPMENT\Helmets\Gungnir\BattleshieldBaseplate.p3d";
			modelOff = "\TCF_EQUIPMENT\Helmets\Gungnir\BattleshieldBaseplate.p3d";
			mass = 6;
		};
	};*/
};