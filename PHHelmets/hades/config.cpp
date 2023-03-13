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
				values[] = {"phrpmoon","phrpkazhelmet","vanderclutch","wolf","richter"};
				class phrpmoon
				{
					label = "Moon";
				};
				class phrpkazhelmet
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
			role = "phrpmoon";
			model = "PHRP_hades_helmets";
		};
		class PHRP_Kaz_Gungnir_Helmet
		{
			role = "phrpkazhelmet";
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
	class TCF_Gungnir_Helmet_Bugeye;
	class PHRP_Kaz_Gungnir_Helmet: TCF_Gungnir_Helmet_Bugeye
	{
		author = "Soldner";
		scope = 2;
		scopeArsenal = 2;
		model = "TCF_EQUIPMENT\Helmets\Gungnir\Gungnir_Helmet_Bugeye.p3d";
		displayName = "EAA/K Gungnir Helmet (Kaz)";
		hiddenSelections[] = {"camo1","Blastshield","Interior"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_kaz_co.paa","PHHelmets\data\helmets\faceplate_kaz_co.paa"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "TCF_EQUIPMENT\Helmets\Gungnir\Gungnir_Helmet_Bugeye.p3d";
			picture = "\OPTRE_UNSC_Units\Army\icons\odst_recon";
			allowedSlots[] = {"BACKPACK_SLOT","VEST_SLOT","HEADGEAR_SLOT"};
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","Blastshield","Interior"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_kaz_co.paa","PHHelmets\data\helmets\faceplate_kaz_co.paa"};
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
	
	//This is waiting on HiddenSelections from TCF
	/*class NVGoggles;
	class PHRP_NVG_BlastShield: NVGoggles
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "EAA/K Gungnir Blastshield (Kaz)";
		visionMode[] = {"Normal","NVG","TI"};
		model = "\TCF_EQUIPMENT\Helmets\Gungnir\BattleshieldBaseplate.p3d";	
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customnvg_kaz_co.paa"};
		class ItemInfo
		{
			type = 616;
			uniformModel = "\TCF_EQUIPMENT\Helmets\Gungnir\BattleshieldBaseplate.p3d";
			modelOff = "\TCF_EQUIPMENT\Helmets\Gungnir\BattleshieldBaseplate.p3d";
			mass = 6;	
			hiddenSelections[] = {"camo1"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customnvg_kaz_co.paa"};
		};
	};*/
};