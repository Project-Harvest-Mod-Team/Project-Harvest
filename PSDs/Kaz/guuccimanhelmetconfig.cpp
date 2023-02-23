////////////////////////////////////////////////////////////////////
//DeRap: C:\Users\Tom\Downloads\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Mon Feb 13 21:18:23 2023 : 'file' last modified on Thu Jan 26 23:17:51 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgWeapons
{
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
	class PHRP_Kaz_Gungnir_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		author = "Soldner";
		scope = 1;
		scopeArsenal = 1;
		mass = 10;
		displayName = "EAA/C Gungnir Helmet (Kaz)";
		model = "TCF_EQUIPMENT\Helmets\Gungnir\Gungnir_Helmet_Bugeye.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_kaz_co.paa"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "TCF_EQUIPMENT\Helmets\Gungnir\Gungnir_Helmet_Bugeye.p3d";
			allowedSlots[] = {"BACKPACK_SLOT","VEST_SLOT","HEADGEAR_SLOT"};
			modelSides[] = {6};
			hiddenSelections[] = {"camo1"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_kaz_co.paa"};
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
	class NVGoggles;
	class PHRP_NVG_BlastShield: NVGoggles
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Kaz's Helmet Attachment";
		visionMode[] = {"Normal","NVG","TI"};
		model = "\TCF_EQUIPMENT\Helmets\Gungnir\BattleshieldBaseplate.p3d";
		class ItemInfo
		{
			type = 616;
			uniformModel = "\TCF_EQUIPMENT\Helmets\Gungnir\BattleshieldBaseplate.p3d";
			modelOff = "\TCF_EQUIPMENT\Helmets\Gungnir\BattleshieldBaseplate.p3d";
			mass = 6;
		};
	};
};
