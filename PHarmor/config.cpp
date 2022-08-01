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
class CfgMods
{
	class Mod_Base;
	class PHarmor : Mod_Base
	{
		name = "Project Harvest Armory";
		picture = "PHarmor\data\PHarmor_CA.paa";
		logoSmall = "PHarmor\data\Gladius_Logo_64x_CA.paa";
		logo = "PHarmor\data\Gladius_Logo_128x_CA.paa";
		logoOver = "PHarmor\data\Gladius_Logo_128x_CA.paa";
		action = "https://discord.gg/MTSJ2pY2tV";
		tooltipOwned = "Project Harvest Armory";
		// Color used for DLC stripes and backgrounds (RGBA)
		dlcColor[] =
		{
			0.23,
			0.39,
			0.30,
			1
		};
		// Overview text, displayed from the extension menu
		overview = "Project Harvest Armory is a retexture mod for Project Harvest to assist in player customization and roleplay.";
		hideName	= 0;	// Hide the extension name
		hidePicture	= 0;	// Hide the extension menu
	};
};
class CfgWeapons
{
	class OPTRE_UNSC_M52D_Armor_Demolitions;
	class OPTRE_UNSC_M52D_Armor;
	class OPTRE_UNSC_M52D_Armor_Rifleman;
	class OPTRE_UNSC_M52D_Armor_Sniper;
	class OPTRE_UNSC_CH252D_Helmet_dp;
	class ItemInfo;
	class U_B_CombatUniform_mcam;
	class UniformItem;
	class V_PlateCarrier1_rgr;
	class VestItem;
	class HeadgearItem;
	class H_HelmetB;
	class H_Cap_oli;
	class NVGoggles;
	class OPTRE_UNSC_Army_Uniform_WDL;
	class OPTRE_UNSC_M52D_Armor_Medic;
	class OPTRE_UNSC_CH252D_Helmet;
	class OPTRE_UNSC_VX16_Helmet;
	class VES_CH252_MAR_Crew;
	class OPTRE_UNSC_Recon_Helmet;
	class OPTRE_UNSC_Recon_Helmet_dp;
	class OPTRE_UNSC_Commando_Helmet;
	class OPTRE_UNSC_Commando_Helmet_dp;
	//class OPTRE_UNSC_M52A_Armor_Base;
	//class OPTRE_UNSC_CH252_Helmet_WDL;

	//CH252D Helmets

	class PHRP_Alpha_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet - Alpha";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_alphabase_co.paa",
			"PHarmor\data\helmets\customvisor_base_co.paa"
		};
	};
	class PHRP_Alpha_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet - Alpha";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_alphabase_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class PHRP_Bravo_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet - Bravo";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_bravobase_co.paa",
			"PHarmor\data\helmets\customvisor_base_co.paa"
		};
	};
	class PHRP_Bravo_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet - Bravo";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_bravobase_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class PHRP_Charlie_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet - Charlie";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_charliebase_co.paa",
			"PHarmor\data\helmets\customvisor_base_co.paa"
		};
	};
	class PHRP_Charlie_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet - Charlie";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_charliebase_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class PHRP_Collins_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Collins)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_collins_co.paa",
			"PHarmor\data\helmets\customvisor_collins_co.paa"
		};
	};
	class PHRP_Collins_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Collins)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_collins_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class PHRP_Holland_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Holland)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_holland_co.paa",
			"PHarmor\data\helmets\customvisor_holland_co.paa"
		};
	};
	class PHRP_Holland_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Holland)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_holland_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class PHRP_Raider_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Raider)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_raider_co.paa",
			"PHarmor\data\helmets\customvisor_raider_co.paa"
		};
	};
	class PHRP_Raider_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Raider)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_raider_co.paa",
			"PHarmor\data\helmets\customvisor_raider_co.paa"
		};
	};
	class PHRP_Owessel_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Owessel)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_owessel_co.paa",
			"PHarmor\data\helmets\customvisor_owessel_co.paa"
		};
	};
	class PHRP_Owessel_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Owessel)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_owessel_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class PHRP_Burtovski_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Burtovski)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_burtovski_co.paa",
			"PHarmor\data\helmets\customvisor_base_co.paa"
		};
	};
	class PHRP_Burtovski_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Burtovski)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_burtovski_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class PHRP_Pjetrovic_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Pjetrovic)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_pjetrovic_co.paa",
			"PHarmor\data\helmets\customvisor_pjetrovic_co.paa"
		};
	};
	class PHRP_Pjetrovic_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Pjetrovic)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_pjetrovic_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class PHRP_Riot_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Riot)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_riot_co.paa",
			"PHarmor\data\helmets\customvisor_riot_co.paa"
		};
	};
	class PHRP_Riot_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Riot)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_riot_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class PHRP_Wrecker_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Wrecker)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_wrecker_co.paa",
			"PHarmor\data\helmets\customvisor_wrecker_co.paa"
		};
	};
	class PHRP_Wrecker_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Wrecker)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_Wrecker_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class PHRP_Dusk_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Dusk)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_dusk_co.paa",
			"PHarmor\data\helmets\customvisor_dusk_co.paa"
		};
	};
	class PHRP_Dusk_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Dusk)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_dusk_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class PHRP_Atlas_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 1;
		scopeArsenal = 1;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet - Atlas";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_atlasbase_co.paa",
			"PHarmor\data\helmets\customvisor_base_co.paa"
		};
	};
	class PHRP_Atlas_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet - Atlas";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_atlasbase_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class PHRP_Stratos_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 1;
		scopeArsenal = 1;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet - Stratos";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_stratosbase_co.paa",
			"PHarmor\data\helmets\customvisor_base_co.paa"
		};
	};
	class PHRP_Stratos_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet - Stratos";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_stratosbase_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class PHRP_Carter_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Carter)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_carter_co.paa",
			"PHarmor\data\helmets\customvisor_carter_co.paa"
		};
	};
	class PHRP_Carter_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Carter)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_carter_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class PHRP_Soldner_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Soldner)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_soldner_co.paa",
			"PHarmor\data\helmets\customvisor_soldner_co.paa"
		};
	};
	class PHRP_Soldner_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Soldner)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_soldner_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class PHRP_Chopper_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Chopper)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_chopper_co.paa",
			"PHarmor\data\helmets\customvisor_base_co.paa"
		};
	};
	class PHRP_Chopper_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Chopper)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_chopper_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class PHRP_Mischa_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Mischa)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_mischa_co.paa",
			"PHarmor\data\helmets\customvisor_base_co.paa"
		};
	};
	class PHRP_Mischa_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Mischa)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_mischa_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class PHRP_Angel_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Angel)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_angel_co.paa",
			"PHarmor\data\helmets\customvisor_base_co.paa"
		};
	};
	class PHRP_Angel_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Angel)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_angel_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class PHRP_Wolf_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Wolf)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_wolf_co.paa",
			"PHarmor\data\helmets\customvisor_wolf_co.paa"
		};
	};
	class PHRP_Wolf_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Wolf)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_wolf_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	/*class PHRP_Ansley_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Ansley)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_ansley_co.paa",
			"PHarmor\data\helmets\customvisor_ansley_co.paa"
		};
	};
	class PHRP_Ansley_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Ansley)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_ansley_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class PHRP_Tepfer_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Tepfer)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_tepfer_co.paa",
			"PHarmor\data\helmets\customvisor_base_co.paa"
		};
	};
	class PHRP_Tepfer_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Tepfer)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_tepfer_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};*/
	//Recon Helmets

	class PHRP_Kaz_Recon_Helmet : OPTRE_UNSC_Recon_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "Recon Helmet (Kaz)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customrecon_kaz_co.paa",
			"PHarmor\data\helmets\customvisor_kaz_co.paa"
		};
	};
	class PHRP_Kaz_Recon_Helmet_dp : OPTRE_UNSC_Recon_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "Recon Helmet (Kaz)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customrecon_kaz_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class PHRP_Vale_Recon_Helmet : OPTRE_UNSC_Recon_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "Recon Helmet (Vale)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customrecon_vale_co.paa",
			"PHarmor\data\helmets\customvisor_vale_co.paa"
		};
	};
	class PHRP_Vale_Recon_Helmet_dp : OPTRE_UNSC_Recon_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "Recon Helmet (Vale)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customrecon_vale_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class PHRP_Vanderclutch_Recon_Helmet : OPTRE_UNSC_Recon_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "Recon Helmet (Vanderclutch)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customrecon_vanderclutch_co.paa",
			"PHarmor\data\helmets\customvisor_vanderclutch_co.paa"
		};
	};
	class PHRP_Vanderclutch_Recon_Helmet_dp : OPTRE_UNSC_Recon_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "Recon Helmet (Vanderclutch)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customrecon_vanderclutch_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};

	//Commando Helmet

	class PHRP_Moon_Commando_Helmet : OPTRE_UNSC_Commando_Helmet
	{
		dlc = "PHarmor";
		displayName = "Mark V/K Helmet (Moon)";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"PHarmor\data\helmets\customhelmet_moon_co.paa",
			"PHarmor\data\helmets\customvisor_moon_co.paa"
		};
	};
	class PHRP_Moon_Commando_Helmet_dp : OPTRE_UNSC_Commando_Helmet_dp
	{
		dlc = "PHarmor";
		scope = 1;
		scopeArsenal = 1;
		author = "Project Harvest Mod Team";
		displayName = "Mark V/K Helmet (Moon)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_Moon_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};

	//M52D armor

	class PHRP_Alpha_Armor : OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor - Alpha";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			//"AS_ODSTLeft", 
			//"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			"AP_Canteen", 
			"AP_GL", 
			"AP_Knife", 
			"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			"AP_Thigh", 
			"AP_Frag", 
			"AP_Smoke", 
			"APO_AR", 
			"APO_BR", 
			"APO_Knife", 
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\legs_base_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_alphabase_CO.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				//"AS_ODSTLeft", 
				//"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				"AP_Frag", 
				"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\legs_base_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_alphabase_CO.paa"
			};
		};
	};
	class PHRP_Alpha_Medic_Armor : OPTRE_UNSC_M52D_Armor_Medic
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor - Alpha Medic";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			//"AS_ODSTLeft", 
			//"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			"AP_Canteen", 
			"AP_GL", 
			"AP_Knife", 
			"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			"AP_Thigh", 
			"AP_Frag", 
			"AP_Smoke", 
			"APO_AR", 
			"APO_BR", 
			"APO_Knife", 
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\legs_base_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_alphamedic_CO.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				//"AS_ODSTLeft", 
				//"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				"AP_Frag", 
				"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\legs_base_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_alphamedic_CO.paa"
			};
		};	
	};
	class PHRP_Bravo_Armor : OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor - Bravo";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			//"AS_ODSTLeft", 
			//"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			"AP_Canteen", 
			"AP_GL", 
			"AP_Knife", 
			"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			"AP_Thigh", 
			"AP_Frag", 
			"AP_Smoke", 
			"APO_AR", 
			"APO_BR", 
			"APO_Knife", 
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\legs_base_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_bravobase_CO.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				//"AS_ODSTLeft", 
				//"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				"AP_Frag", 
				"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\legs_base_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_bravobase_CO.paa"
			};
		};
	};
	class PHRP_Bravo_Medic_Armor : OPTRE_UNSC_M52D_Armor_Medic
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor - Bravo Medic";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			//"AS_ODSTLeft", 
			//"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			"AP_Canteen", 
			"AP_GL", 
			"AP_Knife", 
			"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			"AP_Thigh", 
			"AP_Frag", 
			"AP_Smoke", 
			"APO_AR", 
			"APO_BR", 
			"APO_Knife", 
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\legs_base_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_bravomedic_CO.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				//"AS_ODSTLeft", 
				//"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				"AP_Frag", 
				"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\legs_base_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_bravomedic_CO.paa"
			};
		};
	};
	class PHRP_Charlie_Armor : OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor - Charlie";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			//"AS_ODSTLeft", 
			//"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			"AP_Canteen", 
			"AP_GL", 
			"AP_Knife", 
			"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			"AP_Thigh", 
			"AP_Frag", 
			"AP_Smoke", 
			"APO_AR", 
			"APO_BR", 
			"APO_Knife", 
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\legs_base_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_charliebase_CO.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				//"AS_ODSTLeft", 
				//"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				"AP_Frag", 
				"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\legs_base_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_charliebase_CO.paa"
			};
		};
	};
	class PHRP_Charlie_Medic_Armor : OPTRE_UNSC_M52D_Armor_Medic
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor - Charlie Medic";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			//"AS_ODSTLeft", 
			//"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			"AP_Canteen", 
			"AP_GL", 
			"AP_Knife", 
			"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			"AP_Thigh", 
			"AP_Frag", 
			"AP_Smoke", 
			"APO_AR", 
			"APO_BR", 
			"APO_Knife", 
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\legs_base_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_charliemedic_CO.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				//"AS_ODSTLeft", 
				//"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				"AP_Frag", 
				"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\legs_base_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_charliemedic_CO.paa"
			};
		};
	};
	class PHRP_Moon_Armor : OPTRE_UNSC_M52D_Armor
	{
		dlc = "PHarmor";
		sscope = 2;
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Moon)";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			"AS_ODSTLeft", 
			//"AS_ODSTRight", 
			//"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			"AP_Canteen", 
			//"AP_GL", 
			//"AP_Knife", 
			"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			"AP_Thigh", 
			//"AP_Frag", 
			"AP_Smoke", 
			"APO_AR", 
			//"APO_BR", 
			"APO_Knife", 
			//"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\customlegs_moon_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_moon_co.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", 
				//"AS_ODSTRight", 
				//"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				//"AP_GL", 
				//"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				//"AP_Frag", 
				"AP_Smoke", 
				"APO_AR", 
				//"APO_BR", 
				"APO_Knife", 
				//"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\excaliburlegs_base_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_vanderclutch_co.paa"
			};
		};
	};
	class PHRP_Collins_Armor : OPTRE_UNSC_M52D_Armor
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Collins)";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			//"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			//"AS_ODSTLeft", 
			//"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			"AP_Canteen", 
			"AP_GL", 
			"AP_Knife", 
			//"AP_MGThigh", 
			//"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			//"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			//"AP_Thigh", 
			"AP_Frag", 
			"AP_Smoke", 
			"APO_AR", 
			"APO_BR", 
			//"APO_Knife", 
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\customlegs_collins_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_collins_co.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				//"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				//"AS_ODSTLeft", 
				//"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				"AP_Knife", 
				//"AP_MGThigh", 
				//"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				//"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				//"AP_Thigh", 
				"AP_Frag", 
				"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				//"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\customlegs_collins_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_collins_co.paa"
			};
		};
	};
	class PHRP_Kaz_Armor : OPTRE_UNSC_M52D_Armor
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Kaz)";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			//"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			"AS_ODSTLeft", 
			//"AS_ODSTRight", 
			//"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			"AP_Canteen", 
			"AP_GL", 
			//"AP_Knife", 
			"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			"AP_Thigh", 
			"AP_Frag", 
			"AP_Smoke", 
			"APO_AR", 
			"APO_BR", 
			"APO_Knife", 
			"APO_SMG", 
			//"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\legs_base_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_kaz_co.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				//"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", 
				//"AS_ODSTRight", 
				//"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				//"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				"AP_Frag", 
				"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				//"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\legs_base_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_kaz_co.paa"
			};
		};
	};
	class PHRP_Vale_Armor : OPTRE_UNSC_M52D_Armor
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Vale)";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			//"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			//"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			"AS_ODSTLeft", 
			//"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			"AP_Canteen", 
			"AP_GL", 
			//"AP_Knife", 
			"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			//"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			//"AP_Thigh", 
			"AP_Frag", 
			"AP_Smoke", 
			//"APO_AR", 
			"APO_BR", 
			"APO_Knife", 
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\customlegs_vale_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_vale_co.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				//"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				//"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", 
				//"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				//"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				//"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				//"AP_Thigh", 
				"AP_Frag", 
				"AP_Smoke", 
				//"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\customlegs_vale_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_vale_co.paa"
			};
		};
	};
	class PHRP_Vanderclutch_Armor : OPTRE_UNSC_M52D_Armor
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Vanderclutch)";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			//"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			"AS_ODSTLeft", 
			//"AS_ODSTRight", 
			//"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			//"AP_Canteen", 
			"AP_GL", 
			//"AP_Knife", 
			"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			"AP_Pistol", 
			//"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			//"AP_Thigh", 
			//"AP_Frag", 
			"AP_Smoke", 
			"APO_AR", 
			"APO_BR", 
			"APO_Knife", 
			"APO_SMG", 
			//"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\legs_base_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_vanderclutch_co.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				//"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", 
				//"AS_ODSTRight", 
				//"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				//"AP_Canteen", 
				"AP_GL", 
				//"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				//"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				//"AP_Thigh", 
				//"AP_Frag", 
				"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				//"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\legs_base_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_vanderclutch_co.paa"
			};
		};
	};
	class PHRP_Holland_Armor : OPTRE_UNSC_M52D_Armor
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Holland)";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			//"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			//"AS_ODSTCQBRight", 
			//"AS_ODSTLeft", 
			"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			"AP_Canteen", 
			"AP_GL", 
			//"AP_Knife", 
			//"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			//"AP_Pistol", 
			"AP_Rounds", 
			//"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			//"AP_Thigh", 
			"AP_Frag", 
			"AP_Smoke", 
			"APO_AR", 
			"APO_BR", 
			//"APO_Knife", 
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\legs_base_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_holland_co.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				//"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				//"AS_ODSTCQBRight", 
				//"AS_ODSTLeft", 
				"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				//"AP_Knife", 
				//"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				//"AP_Pistol", 
				"AP_Rounds", 
				//"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				//"AP_Thigh", 
				"AP_Frag", 
				"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				//"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\legs_base_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_holland_co.paa"
			};
		};
	};
	class PHRP_Raider_Armor : OPTRE_UNSC_M52D_Armor
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Raider)";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			//"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			//"AS_ODSTLeft", 
			//"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			"AP_Canteen", 
			"AP_GL", 
			//"AP_Knife", 
			//"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			"AP_Thigh", 
			//"AP_Frag", 
			//"AP_Smoke", 
			"APO_AR", 
			"APO_BR", 
			"APO_Knife", 
			"APO_SMG", 
			//"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\legs_base_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_raider_co.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				//"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				//"AS_ODSTLeft", 
				//"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				//"AP_Knife", 
				//"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				//"AP_Frag", 
				//"AP_Smoke", 
				"APO_AR", 
				//"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\legs_base_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_raider_co.paa"
			};
		};
	};
	class PHRP_Owessel_Armor : OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Owessel)";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			//"AS_ODSTCQBLeft", 
			//"AS_ODSTCQBRight", 
			"AS_ODSTLeft", 
			"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			//"AP_Canteen", 
			"AP_GL", 
			"AP_Knife", 
			//"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			//"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			//"AP_Thigh", 
			"AP_Frag", 
			"AP_Smoke", 
			"APO_AR", 
			"APO_BR", 
			"APO_Knife", 
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\customlegs_owessel_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_owessel_co.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				//"AS_ODSTCQBLeft", 
				//"AS_ODSTCQBRight", 
				"AS_ODSTLeft", 
				"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				//"AP_Canteen", 
				"AP_GL", 
				"AP_Knife", 
				//"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				//"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				//"AP_Thigh", 
				"AP_Frag", 
				"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\customlegs_owessel_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_owessel_co.paa"
			};
		};
	};
	class PHRP_Burtovski_Armor : OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Burtovski)";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			//"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			//"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			"AS_ODSTLeft", 
			//"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			"AP_Canteen", 
			"AP_GL", 
			"AP_Knife", 
			//"AP_MGThigh", 
			//"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			"AP_Thigh", 
			//"AP_Frag", 
			//"AP_Smoke", 
			"APO_AR", 
			"APO_BR", 
			"APO_Knife", 
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\customlegs_burtovski_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_burtovski_co.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				//"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				//"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", 
				//"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				"AP_Knife", 
				//"AP_MGThigh", 
				//"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				//"AP_Frag", 
				//"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\customlegs_burtovski_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_burtovski_co.paa"
			};
		};
	};
	class PHRP_Pjetrovic_Armor : OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Pjetrovic)";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			//"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			"AS_ODSTLeft", 
			//"AS_ODSTRight", 
			//"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			"AP_Canteen", 
			"AP_GL", 
			"AP_Knife", 
			"AP_MGThigh", 
			//"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			"AP_Thigh", 
			"AP_Frag", 
			"AP_Smoke", 
			"APO_AR", 
			"APO_BR", 
			//"APO_Knife", 
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\customlegs_pjetrovic_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_pjetrovic_co.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				//"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", 
				//"AS_ODSTRight", 
				//"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				"AP_Knife", 
				"AP_MGThigh", 
				//"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				"AP_Frag", 
				"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				//"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\customlegs_pjetrovic_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_pjetrovic_co.paa"
			};
		};
	};
	class PHRP_Wrecker_Armor : OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Wrecker)";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			//"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			//"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			"AS_ODSTLeft", 
			//"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			"AP_Canteen", 
			"AP_GL", 
			//"AP_Knife", 
			"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			"AP_Pistol", 
			"AP_Rounds", 
			//"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			//"AP_Thigh", 
			"AP_Frag", 
			"AP_Smoke", 
			"APO_AR", 
			"APO_BR", 
			"APO_Knife", 
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\customlegs_wrecker_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_wrecker_co.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				//"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				//"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", 
				//"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				//"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				//"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				//"AP_Thigh", 
				"AP_Frag", 
				"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\customlegs_wrecker_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_wrecker_co.paa"
			};
		};
	};
	class PHRP_Dusk_Armor : OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Dusk)";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			//"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			"AS_ODSTLeft", 
			//"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			"AP_Canteen", 
			"AP_GL", 
			"AP_Knife", 
			"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			"AP_Thigh", 
			//"AP_Frag", 
			//"AP_Smoke", 
			"APO_AR", 
			"APO_BR", 
			//"APO_Knife", 
			//"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\customlegs_dusk_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_dusk_co.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				//"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", 
				//"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				//"AP_Frag", 
				//"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				//"APO_Knife", 
				//"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\customlegs_dusk_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_dusk_co.paa"
			};
		};
	};
	class PHRP_Atlas_Armor : OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc = "PHarmor";
		scope = 1;
		scopeArsenal = 1;
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor - Atlas";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			//"AS_ODSTLeft", 
			//"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			"AP_Canteen", 
			"AP_GL", 
			"AP_Knife", 
			"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			"AP_Thigh", 
			"AP_Frag", 
			"AP_Smoke", 
			"APO_AR", 
			"APO_BR", 
			"APO_Knife", 
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\legs_base_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_atlasbase_CO.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				//"AS_ODSTLeft", 
				//"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				"AP_Frag", 
				"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\legs_base_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_atlasbase_CO.paa"
			};
		};
	};
	class PHRP_Stratos_Armor : OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc = "PHarmor";
		scope = 1;
		scopeArsenal = 1;
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor - Stratos";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			//"AS_ODSTLeft", 
			//"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			"AP_Canteen", 
			"AP_GL", 
			"AP_Knife", 
			"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			"AP_Thigh", 
			"AP_Frag", 
			"AP_Smoke", 
			"APO_AR", 
			"APO_BR", 
			"APO_Knife", 
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\legs_base_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_stratosbase_CO.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				//"AS_ODSTLeft", 
				//"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				"AP_Frag", 
				"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\legs_base_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_stratosbase_CO.paa"
			};
		};
	};
	class PHRP_Carter_Armor : OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Carter)";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			//"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			//"AS_ODSTLeft", 
			"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
			//"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			"AP_Canteen", 
			"AP_GL", 
			"AP_Knife", 
			//"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			//"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			"AP_Thigh", 
			"AP_Frag", 
			"AP_Smoke", 
			"APO_AR", 
			//"APO_BR", 
			//"APO_Knife", 
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\legs_base_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_Carter_CO.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				//"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				//"AS_ODSTLeft", 
				"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				//"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				"AP_Knife", 
				//"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				//"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				"AP_Frag", 
				"AP_Smoke", 
				"APO_AR", 
				//"APO_BR", 
				//"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\legs_base_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_Carter_CO.paa"
			};
		};
	};
	class PHRP_Soldner_Armor : OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Soldner)";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			//"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			//"AS_ODSTCQBRight", 
			//"AS_ODSTLeft", 
			"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			//"AP_Canteen", 
			"AP_GL", 
			"AP_Knife", 
			"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			"AP_Thigh", 
			//"AP_Frag", 
			"AP_Smoke", 
			//"APO_AR", 
			"APO_BR", 
			//"APO_Knife", 
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\customlegs_soldner_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_soldner_CO.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				//"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				//"AS_ODSTCQBRight", 
				//"AS_ODSTLeft", 
				"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				//"AP_Canteen", 
				"AP_GL", 
				"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				//"AP_Frag", 
				"AP_Smoke", 
				//"APO_AR", 
				"APO_BR", 
				//"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\customlegs_soldner_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_soldner_CO.paa"
			};
		};
	};
	class PHRP_Riot_Armor : OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Riot)";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			//"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			"AS_ODSTLeft", 
			//"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			"AP_Canteen", 
			"AP_GL", 
			"AP_Knife", 
			"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			//"AP_Thigh", 
			"AP_Frag", 
			"AP_Smoke", 
			//"APO_AR", 
			"APO_BR", 
			//"APO_Knife", 
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\customlegs_riot_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_riot_CO.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				//"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", 
				//"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				//"AP_Thigh", 
				"AP_Frag", 
				"AP_Smoke", 
				//"APO_AR", 
				"APO_BR", 
				//"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\customlegs_riot_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_riot_CO.paa"
			};
		};
	};
	class PHRP_Angel_Armor : OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Angel)";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			"AS_ODSTLeft", 
			"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			"AP_Canteen", 
			//"AP_GL", 
			"AP_Knife", 
			//"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			"AP_Thigh", 
			"AP_Frag", 
			"AP_Smoke", 
			//"APO_AR", 
			"APO_BR", 
			"APO_Knife", 
			//"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\legs_base_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_angel_CO.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", 
				"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				//"AP_GL", 
				"AP_Knife", 
				//"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				"AP_Frag", 
				"AP_Smoke", 
				//"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				//"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\legs_base_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_angel_CO.paa"
			};
		};
	};
	/*class PHRP_Ansley_Armor : OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Ansley)";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			//"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			//"AS_ODSTLeft", 
			"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
			//"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			"AP_Canteen", 
			"AP_GL", 
			//"AP_Knife", 
			//"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			"AP_Pistol", 
			//"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			"AP_Thigh", 
			"AP_Frag", 
			"AP_Smoke", 
			"APO_AR", 
			"APO_BR", 
			"APO_Knife", 
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\legs_base_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_ansley_CO.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				//"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				//"AS_ODSTLeft", 
				"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				//"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				"AP_Canteen", 
				"AP_GL", 
				//"AP_Knife", 
				//"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				//"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				"AP_Frag", 
				"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\legs_base_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_ansley_CO.paa"
			};
		};
	};
	class PHRP_Tepfer_Armor : OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Tepfer)";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			//"A_Base",
			"A_Ghillie",
			//"A_ChestArmor", 
			//"A_KneesLeft", 
			//"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			//"A_ShinArmorLeft", 
			//"A_ShinArmorRight", 
			//"A_TacPad", 
			//"A_ThighArmorLeft", 
			//"A_ThighArmorRight", 
			//"AS_BaseLeft", 
			//"AS_BaseRight", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			//"AS_ODSTLeft", 
			//"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft",  
			"AS_SmallRight", 
			//"AP_Canteen", 
			"AP_GL", 
			"AP_Knife", 
			"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			"AP_Thigh", 
			//"AP_Frag", 
			"AP_Smoke", 
			//"APO_AR", 
			"APO_BR", 
			"APO_Knife", 
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\Army\data\vest_odst_co.paa",
			"PHarmor\data\army\data\armor_odst_co.paa",
			"PHarmor\data\armor\legs_base_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_tepfer_co.paa"
		};
		class ItemInfo :ItemInfo
		{
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				"A_Ghillie",
				//"A_ChestArmor", 
				//"A_KneesLeft", 
				//"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				//"A_ShinArmorLeft", 
				//"A_ShinArmorRight", 
				//"A_TacPad", 
				//"A_ThighArmorLeft", 
				//"A_ThighArmorRight", 
				//"AS_BaseLeft", 
				//"AS_BaseRight", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				//"AS_ODSTLeft", 
				//"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft",  
				"AS_SmallRight", 
				//"AP_Canteen", 
				"AP_GL", 
				"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				//"AP_Frag", 
				"AP_Smoke", 
				//"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[] =
			{
				"PHarmor\data\Army\data\vest_odst_co.paa",
				"PHarmor\data\army\data\armor_odst_co.paa",
				"PHarmor\data\armor\legs_base_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_tepfer_co.paa"
			};
		};
	};*/
};