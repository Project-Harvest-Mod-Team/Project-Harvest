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
			"MA_Armor"
		};
	};
};
class CfgMods
{
	class Mod_Base;
	class PHnewGear : Mod_Base
	{
		name = "Project Harvest Armory";
		picture = "PHGear\data\PHarmor_CA.paa";
		logoSmall = "PHGear\data\Gladius_Logo_64x_CA.paa";
		logo = "PHGear\data\Gladius_Logo_128x_CA.paa";
		logoOver = "PHGear\data\Gladius_Logo_128x_CA.paa";
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
	class VestItem;
	class ItemInfo;
	class MA_Vest_Base;
	class PHRP_Base_M56R_Armor : MA_Vest_Base
	{
		scope = 1;
		scopeArsenal = 1;
		displayName = "PHRP M56R Body Armor - BASE";
		vestType = "Rebreather";
		model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture = "MA_Armor\data\Icons\H3ODST_Vest.paa";
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","H3_Forearm_Left","H3_Forearm_Right","H3_Pauldron_Left","H3_Pauldron_Right","Reach_Shoulder_Radio_Left","Reach_Shoulder_Radio_Right","Reach_Sniper_Pauldron_Left","Reach_Sniper_Pauldron_Right","Reach_CQB_Pauldron_Left","Reach_CQB_Pauldron_Right","Thigh_Pouch","H3_Armor_Upper","H3_Armor_Lower"};
			hiddenSelectionsTextures[] = {"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa","MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa","MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 50;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 55;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 55;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 55;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 50;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 50;
					passThrough = 0.1;
				};
			};
		};
	};

	class HeadgearItem;
	class MA_Helmet_Base;
	class PHRP_M56SR_Helmet_Base : MA_Helmet_Base
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		author = "Soldner";
		model = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		picture = "MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
		displayName = "[PHRP] M56S-R Helmet -Base";
		hiddenSelectionsTextures[] = {"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Red_co.paa"};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
			hiddenSelectionsTextures[] = 
			{
				"PHnewGear\data\armor\Soldner_HR_ODST_Helmet_CO.paa",
				"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Red_co.paa"
			};
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