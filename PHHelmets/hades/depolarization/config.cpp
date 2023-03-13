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
    class PHRP_Base_Recon_Helmet_dp;
	class PHRP_Base_Commando_Helmet_dp;
	class PHRP_Moon_Commando_Helmet_dp : PHRP_Base_Commando_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Soldner";
		displayName = "Mark V/K Helmet (Moon)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_Moon_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
	};
	class PHRP_Vanderclutch_Recon_Helmet_dp : PHRP_Base_Recon_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "MrMicrobe";
		displayName = "Recon Helmet (Vanderclutch)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_vanderclutch_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
	};
	class PHRP_Wolf_Recon_Helmet_dp : PHRP_Base_Recon_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "MrMicrobe";
		displayName = "Recon Helmet (Wolf)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_wolf_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
	};
	class PHRP_Richter_Recon_Helmet_dp : PHRP_Base_Recon_Helmet_dp
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Enreth";
		displayName = "Recon Helmet (Richter)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_dusk_co.paa","PHHelmets\data\helmets\ODST_Helmet_Visor_ca.paa"};
	};
	class HeadgearItem;
	class TCF_Gungnir_Helmet_Bugeye_Baseplate_dp;
	class PHRP_Kaz_Gungnir_Helmet_dp: TCF_Gungnir_Helmet_Bugeye_Baseplate_dp
	{
		author = "Soldner";
		scope = 1;
		scopeArsenal = 1;
		displayName = "EAA/D Gungnir Helmet (Kaz)";
		model = "TCF_EQUIPMENT\Helmets\Gungnir\Gungnir_Helmet_Bugeye.p3d";
		hiddenSelections[] = {"camo1","Blastshield","Interior"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_kaz_co.paa"};
		class ItemInfo: HeadgearItem
		{
			hiddenSelections[] = {"camo1","Blastshield","Interior"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_kaz_co.paa"};
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
};