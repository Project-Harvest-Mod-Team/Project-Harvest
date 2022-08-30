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
	class PHGear : Mod_Base
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
	class OPTRE_UNSC_M52D_Armor;

	class PHRP_Base_Armor : OPTRE_UNSC_M52D_Armor
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		dlc = "PHRP Custom Armor";
		author = "Project Harvest Mod Team";
		displayName = "PHRP M52D Body Armor - BASE";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_Base","A_Ghillie","A_ChestArmor","A_KneesLeft","A_KneesRight","A_KneesMarLeft","A_KneesMarRight","A_ODST","A_ShinArmorLeft","A_ShinArmorRight","A_TacPad","A_ThighArmorLeft","A_ThighArmorRight","AS_BaseLeft","AS_BaseRight","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_BR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch"};
		picture = "\OPTRE_UNSC_Units\Army\icons\ODST_Vest";
		hiddenSelectionsTextures[] = {"PHarmor\data\Army\data\vest_odst_co.paa","PHarmor\data\army\data\armor_odst_co.paa","PHarmor\data\armor\legs_base_co.paa","PHarmor\data\army\data\ghillie_woodland_co.paa","PHarmor\data\armor\customarmor_alphabase_CO.paa"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		subItems[] = {"ItemcTabHCam","MRH_BluForTransponder"};
		vestType = "Rebreather";
		class ItemInfo : VestItem
		{
			vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass = "Supply200";
			mass = 75;
			modelSides[] = {6};
			hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_Base","A_Ghillie","A_ChestArmor","A_KneesLeft","A_KneesRight","A_KneesMarLeft","A_KneesMarRight","A_ODST","A_ShinArmorLeft","A_ShinArmorRight","A_TacPad","A_ThighArmorLeft","A_ThighArmorRight","AS_BaseLeft","AS_BaseRight","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_BR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch"};
			hiddenSelectionsTextures[] = {"PHarmor\data\Army\data\vest_odst_co.paa","PHarmor\data\army\data\armor_odst_co.paa","PHarmor\data\armor\legs_base_co.paa","PHarmor\data\army\data\ghillie_woodland_co.paa","PHarmor\data\armor\customarmor_alphabase_CO.paa"};
			hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
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
};