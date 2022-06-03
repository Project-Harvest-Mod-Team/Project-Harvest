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
	class OPTRE_FC_VX19_Helmet;
	class VES_CH252_MAR_Crew;
	class OPTRE_UNSC_Recon_Helmet;
	class OPTRE_UNSC_Recon_Helmet_dp;
	class OPTRE_UNSC_M52A_Armor_Base;
	class OPTRE_UNSC_CH252_Helmet_WDL;

	//CH252D Helmets

	class Alpha_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
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
	class Alpha_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
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
	class Bravo_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
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
	class Bravo_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
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
	class Charlie_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
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
	class Charlie_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
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
	/*class Tepfer_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
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
	class Tepfer_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
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
	class Collins_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
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
	class Collins_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
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
	class Holland_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
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
	class Holland_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
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
	class Raider_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
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
	class Raider_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
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
	/*class Soldner_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
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
	class Soldner_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
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
	};*/
	class Owessel_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
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
	class Owessel_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
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
	class Slice_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Slice)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_Slice_co.paa",
			"PHarmor\data\helmets\customvisor_slice_co.paa"
		};
	};
	class Slice_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Slice)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_Slice_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class Lafayette_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Lafayette)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_lafayette_co.paa",
			"PHarmor\data\helmets\customvisor_lafayette_co.paa"
		};
	};
	class Lafayette_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Lafayette)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_lafayette_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class Burtovski_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
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
	class Burtovski_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
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
	class Pjetrovic_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
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
	class Pjetrovic_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
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
	class Riot_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
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
	class Riot_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
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
	class Wrecker_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
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
	class Wrecker_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
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
	class Ansley_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
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
	class Ansley_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
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
	class Johnson_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Johnson)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_charliebase_co.paa",
			"PHarmor\data\helmets\customvisor_johnson_co.paa"
		};
	};
	class Johnson_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Johnson)";
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
	class Dusk_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
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
	class Dusk_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	
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
	class Atlas_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Atlas)";
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
	class Atlas_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Atlas)";
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
	class Stratos_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Stratos)";
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
	class Stratos_ODST_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Stratos)";
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

	//Recon Helmets

	class Kaz_ODST_Helmet : OPTRE_UNSC_Recon_Helmet
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
	class Kaz_ODST_Helmet_dp : OPTRE_UNSC_Recon_Helmet_dp
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
	class Moon_ODST_Helmet : OPTRE_UNSC_Recon_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "Recon Helmet (Moon)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customrecon_moon_co.paa",
			"PHarmor\data\helmets\customvisor_moon_co.paa"
		};
	};
	class Moon_ODST_Helmet_dp : OPTRE_UNSC_Recon_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "Recon Helmet (Moon)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customrecon_moon_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};
	class Vale_ODST_Helmet : OPTRE_UNSC_Recon_Helmet
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
	class Vale_ODST_Helmet_dp : OPTRE_UNSC_Recon_Helmet_dp
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
	class Vanderclutch_ODST_Helmet : OPTRE_UNSC_Recon_Helmet
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
	class Vanderclutch_ODST_Helmet_dp : OPTRE_UNSC_Recon_Helmet_dp
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
	class Viper_ODST_Helmet : OPTRE_UNSC_Recon_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "Recon Helmet (Viper)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customrecon_viper_co.paa",
			"PHarmor\data\helmets\customvisor_viper_co.paa"
		};
	};
	class Viper_ODST_Helmet_dp : OPTRE_UNSC_Recon_Helmet_dp
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "Recon Helmet (Viper)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customrecon_viper_co.paa",
			"PHarmor\data\helmets\ODST_Helmet_Visor_ca.paa"
		};
	};


	//VX19 Helmets

	class Razgriz_Pilot_Helmet : OPTRE_FC_VX19_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "VX19 Pilot Helmet (Razgriz)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\razgrizhelmet_base_co.paa",
			"PHarmor\data\helmets\razgrizvisor_base_co.paa"
		};
	};
	class Bitter_Pilot_Helmet : OPTRE_FC_VX19_Helmet
	{
		dlc = "PHarmor";
		scope = 2;
		author = "Project Harvest Mod Team";
		displayName = "VX19 Pilot Helmet (Bitter)";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		{
			"PHarmor\data\helmets\customhelmet_bitter_co.paa",
			"PHarmor\data\helmets\customvisor_bitter_co.paa"
		};
	};

	//M52D armor

	class Alpha_Armor_Rifleman : OPTRE_UNSC_M52D_Armor_Rifleman
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
	class Alpha_Medic_M52D_Armor : OPTRE_UNSC_M52D_Armor_Medic
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
	class Bravo_Armor_Rifleman : OPTRE_UNSC_M52D_Armor_Rifleman
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
	class Bravo_Medic_M52D_Armor : OPTRE_UNSC_M52D_Armor_Medic
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
	class Charlie_Armor_Rifleman : OPTRE_UNSC_M52D_Armor_Rifleman
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
	class Charlie_Medic_M52D_Armor : OPTRE_UNSC_M52D_Armor_Medic
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
	class Moon_ODST_Armor : OPTRE_UNSC_M52D_Armor
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
	class Collins_Armor_Rifleman : OPTRE_UNSC_M52D_Armor_Medic
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
	class Kaz_Armor_Rifleman : OPTRE_UNSC_M52D_Armor_Sniper
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
	class Vale_Armor_Rifleman : OPTRE_UNSC_M52D_Armor_Sniper
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
	class Vanderclutch_Armor_Rifleman : OPTRE_UNSC_M52D_Armor_Sniper
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
	/*class Tepfer_Armor_Rifleman : OPTRE_UNSC_M52D_Armor_Rifleman
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
	class Holland_Armor_Rifleman : OPTRE_UNSC_M52D_Armor_Rifleman
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
	class Vargo_Armor_Rifleman : OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Vargo)";
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
			"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			"AP_Thigh", 
			//"AP_Frag", 
			//"AP_Smoke", 
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
			"PHarmor\data\armor\customlegs_vargo_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_vargo_co.paa"
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
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
				//"AP_Frag", 
				//"AP_Smoke", 
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
				"PHarmor\data\armor\customlegs_vargo_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_vargo_co.paa"
			};
		};
	};
	class Raider_Armor_Rifleman : OPTRE_UNSC_M52D_Armor_Rifleman
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
	class Viper_Armor_Rifleman : OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Viper)";
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
			"A_KneesLeft", 
			"A_KneesRight", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			//"A_ODST", 
			"A_ShinArmorLeft", 
			"A_ShinArmorRight", 
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
			//"AP_Canteen", 
			"AP_GL", 
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
			//"AP_Thigh", 
			//"AP_Frag", 
			"AP_Smoke", 
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
			"PHarmor\data\armor\customarmor_viper_co.paa"
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
				"A_KneesLeft", 
				"A_KneesRight", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				//"A_ODST", 
				"A_ShinArmorLeft", 
				"A_ShinArmorRight", 
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
				//"AP_Canteen", 
				"AP_GL", 
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
				//"AP_Thigh", 
				//"AP_Frag", 
				"AP_Smoke", 
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
				"PHarmor\data\armor\customarmor_viper_co.paa"
			};
		};
	};
	/*class Soldner_Armor_Rifleman : OPTRE_UNSC_M52D_Armor_Rifleman
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
			"PHarmor\data\armor\customarmor_soldner_co.paa"
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
				"PHarmor\data\armor\customarmor_soldner_co.paa"
			};
		};
	};*/
	class Owessel_Armor_Rifleman : OPTRE_UNSC_M52D_Armor_Rifleman
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
	class Lafayette_Armor_Rifleman : OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Lafayette)";
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
			"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
			//"AS_ODSTSniperRight", 
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
			"PHarmor\data\armor\customlegs_lafayette_co.paa",
			"PHarmor\data\army\data\ghillie_woodland_co.paa",
			"PHarmor\data\armor\customarmor_lafayette_co.paa"
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
				"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
				//"AS_ODSTSniperRight", 
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
				"PHarmor\data\armor\customlegs_lafayette_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_lafayette_co.paa"
			};
		};
	};
	class Slice_Armor_Rifleman : OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Slice)";
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
			"PHarmor\data\armor\customarmor_slice_co.paa"
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
				"PHarmor\data\armor\customarmor_slice_co.paa"
			};
		};
	};
	class Burtovski_Armor_Rifleman : OPTRE_UNSC_M52D_Armor_Rifleman
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
			"PHarmor\data\armor\customlegs_soldner_co.paa",
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
				"PHarmor\data\armor\customlegs_soldner_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_burtovski_co.paa"
			};
		};
	};
	class Pjetrovic_Armor_Rifleman : OPTRE_UNSC_M52D_Armor_Rifleman
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
				"PHarmor\data\armor\customlegs_pjetrovic_co.paa",
				"PHarmor\data\army\data\ghillie_woodland_co.paa",
				"PHarmor\data\armor\customarmor_pjetrovic_co.paa"
			};
		};
	};
	class Wrecker_Armor_Rifleman : OPTRE_UNSC_M52D_Armor_Rifleman
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
	class Dusk_Armor_Rifleman : OPTRE_UNSC_M52D_Armor_Rifleman
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
	class Atlas_Armor_Rifleman : OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Atlas)";
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
	class Stratos_Armor_Rifleman : OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc = "PHarmor";
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Stratos)";
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
};