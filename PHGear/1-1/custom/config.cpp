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
	class ItemInfo;
	class PHRP_Base_M56R_Armor;
	class PHRP_Base_Armor;
	class PHRP_oneoneM56S_Armor : PHRP_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "[PHRP] M56S Combat Armor 1-1";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10",
			"Reach_Forearm_Left",
			"Reach_Forearm_Right",
			//"H3_Forearm_Left",
			//"H3_Forearm_Right",
			//"H3_Pauldron_Left",
			//"H3_Pauldron_Right",
			"Reach_Pauldron_Left",
			"Reach_Pauldron_Right",
			"Reach_Shoulder_Radio_Left",
			"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			"Reach_Sniper_Pauldron_Right",
			"Reach_CQB_Pauldron_Left",
			"Reach_CQB_Pauldron_Right",
			"Thigh_Pouch",
			"Reach_Armor_Upper",
			"Reach_Armor_Lower",
			//"H3_Armor_Upper",
			//"H3_Armor_Lower",
			"Forearm_Vent_Left",
			"Forearm_Vent_Right",
			"Canisters"
		};
		hiddenSelectionsTextures[] = 
		{
			"PHGear\data\armor\oneone_H3_Upper_Armor_co.paa",
			"PHGear\data\armor\oneone_H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"PHGear\data\armor\oneone_Reach_Armor_Upper_co.paa",
			"PHGear\data\armor\oneone_Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[] = 
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"Reach_Forearm_Left",
				"Reach_Forearm_Right",
				//"H3_Forearm_Left",
				//"H3_Forearm_Right",
				//"H3_Pauldron_Left",
				//"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"Reach_Armor_Upper",
				"Reach_Armor_Lower",
				//"H3_Armor_Upper",
				//"H3_Armor_Lower",
				"Forearm_Vent_Left",
				"Forearm_Vent_Right",
				"Canisters"
			};
			hiddenSelectionsTextures[] = 
			{
				"PHGear\data\armor\oneone_H3_Upper_Armor_co.paa",
				"PHGear\data\armor\oneone_H3_Lower_Armor_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"PHGear\data\armor\oneone_Reach_Armor_Upper_co.paa",
				"PHGear\data\armor\oneone_Reach_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
			};
		};
	};
	class PHRP_oneoneM56Smedic_Armor : PHRP_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "[PHRP] M56S Combat Armor 1-1 Corpsman";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10",
			"Reach_Forearm_Left",
			"Reach_Forearm_Right",
			//"H3_Forearm_Left",
			//"H3_Forearm_Right",
			//"H3_Pauldron_Left",
			//"H3_Pauldron_Right",
			"Reach_Pauldron_Left",
			"Reach_Pauldron_Right",
			"Reach_Shoulder_Radio_Left",
			"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			"Reach_Sniper_Pauldron_Right",
			"Reach_CQB_Pauldron_Left",
			"Reach_CQB_Pauldron_Right",
			//"Thigh_Pouch",
			"Reach_Armor_Upper",
			"Reach_Armor_Lower",
			//"H3_Armor_Upper",
			//"H3_Armor_Lower",
			"Forearm_Vent_Left",
			"Forearm_Vent_Right",
			"Canisters"
		};
		hiddenSelectionsTextures[] = 
		{
			"PHGear\data\armor\oneonecorpsman_H3_Upper_Armor_co.paa",
			"PHGear\data\armor\oneone_H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"PHGear\data\armor\oneonecorpsman_Reach_Armor_Upper_co.paa",
			"PHGear\data\armor\oneonecorpsman_Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[] = 
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"Reach_Forearm_Left",
				"Reach_Forearm_Right",
				//"H3_Forearm_Left",
				//"H3_Forearm_Right",
				//"H3_Pauldron_Left",
				//"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				//"Thigh_Pouch",
				"Reach_Armor_Upper",
				"Reach_Armor_Lower",
				//"H3_Armor_Upper",
				//"H3_Armor_Lower",
				"Forearm_Vent_Left",
				"Forearm_Vent_Right",
				"Canisters"
			};
			hiddenSelectionsTextures[] = 
			{
				"PHGear\data\armor\oneonecorpsman_H3_Upper_Armor_co.paa",
				"PHGear\data\armor\oneone_H3_Lower_Armor_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"PHGear\data\armor\oneonecorpsman_Armor_Upper_co.paa",
				"PHGear\data\armor\oneonecorpsman_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
			};
		};
	};
	class PHRP_oneoneM56R_Armor : PHRP_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "[PHRP] M56R Combat Armor 1-1";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10",
			//"Reach_Forearm_Left",
			//"Reach_Forearm_Right",
			"H3_Forearm_Left",
			"H3_Forearm_Right",
			"H3_Pauldron_Left",
			"H3_Pauldron_Right",
			//"Reach_Pauldron_Left",
			//"Reach_Pauldron_Right",
			"Reach_Shoulder_Radio_Left",
			"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			"Reach_Sniper_Pauldron_Right",
			"Reach_CQB_Pauldron_Left",
			"Reach_CQB_Pauldron_Right",
			"Thigh_Pouch",
			//"Reach_Armor_Upper",
			//"Reach_Armor_Lower",
			"H3_Armor_Upper",
			"H3_Armor_Lower",
			//"Forearm_Vent_Left",
			//"Forearm_Vent_Right",
			"Canisters"
		};
		hiddenSelectionsTextures[] = 
		{
			"PHGear\data\armor\oneone_H3_Upper_Armor_co.paa",
			"PHGear\data\armor\oneone_H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"PHGear\data\armor\oneone_Reach_Armor_Upper_co.paa",
			"PHGear\data\armor\oneone_Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[] = 
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				//"Reach_Forearm_Left",
				//"Reach_Forearm_Right",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				//"Reach_Pauldron_Left",
				//"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				//"Reach_Armor_Upper",
				//"Reach_Armor_Lower",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				//"Forearm_Vent_Left",
				//"Forearm_Vent_Right",
				"Canisters"
			};
			hiddenSelectionsTextures[] = 
			{
				"PHGear\data\armor\oneone_H3_Upper_Armor_co.paa",
				"PHGear\data\armor\oneone_H3_Lower_Armor_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"PHGear\data\armor\oneone_Reach_Armor_Upper_co.paa",
				"PHGear\data\armor\oneone_Reach_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
			};
		};
	};
	class PHRP_oneoneM56Rmedic_Armor : PHRP_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "[PHRP] M56R Combat Armor 1-1 Corpsman";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10",
			//"Reach_Forearm_Left",
			//"Reach_Forearm_Right",
			"H3_Forearm_Left",
			"H3_Forearm_Right",
			"H3_Pauldron_Left",
			"H3_Pauldron_Right",
			//"Reach_Pauldron_Left",
			//"Reach_Pauldron_Right",
			"Reach_Shoulder_Radio_Left",
			"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			"Reach_Sniper_Pauldron_Right",
			"Reach_CQB_Pauldron_Left",
			"Reach_CQB_Pauldron_Right",
			//"Thigh_Pouch",
			//"Reach_Armor_Upper",
			//"Reach_Armor_Lower",
			"H3_Armor_Upper",
			"H3_Armor_Lower",
			//"Forearm_Vent_Left",
			//"Forearm_Vent_Right",
			"Canisters"
		};
		hiddenSelectionsTextures[] = 
		{
			"PHGear\data\armor\oneonecorpsman_H3_Upper_Armor_co.paa",
			"PHGear\data\armor\oneonecorpsman_H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"PHGear\data\armor\oneonecorpsman_Reach_Armor_Upper_co.paa",
			"PHGear\data\armor\oneone_Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[] = 
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				//"Reach_Forearm_Left",
				//"Reach_Forearm_Right",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				//"Reach_Pauldron_Left",
				//"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				//"Thigh_Pouch",
				//"Reach_Armor_Upper",
				//"Reach_Armor_Lower",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				//"Forearm_Vent_Left",
				//"Forearm_Vent_Right",
				"Canisters"
			};
			hiddenSelectionsTextures[] = 
			{
				"PHGear\data\armor\oneonecorpsman_H3_Upper_Armor_co.paa",
				"PHGear\data\armor\oneonecorpsman_H3_Lower_Armor_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"PHGear\data\armor\oneonecorpsman_Armor_Upper_co.paa",
				"PHGear\data\armor\oneone_Reach_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
			};
		};
	};
	class PHRP_Erikson_Armor : PHRP_Base_Armor
	{
		author = "VorpalHotdog";
		displayName = "M52D Body Armor (Erikson)";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
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
			"AS_ODSTLeft", 
			"AS_ODSTRight", 
			//"AS_ODSTSniperLeft", 
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
			//"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			//"AP_Sniper", 
			"AP_Thigh", 
			"AP_Frag", 
			//"AP_Smoke", 
			"APO_AR", 
			"APO_BR", 
			//"APO_Knife", 
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] =
		{
			"PHGear\data\Army\data\vest_odst_co.paa",
			"PHGear\data\army\data\armor_odst_co.paa",
			"PHGear\data\armor\customlegs_erikson_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_erikson_CO.paa"
		};
		class ItemInfo :ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
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
				"AS_ODSTLeft", 
				"AS_ODSTRight", 
				//"AS_ODSTSniperLeft", 
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
				//"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				//"AP_Sniper", 
				"AP_Thigh", 
				"AP_Frag", 
				//"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				//"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
		};
	};
	class PHRP_Riot_Armor : PHRP_Base_Armor
	{
		author = "Soldner";
		displayName = "M52D Body Armor (Riot)";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
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
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] =
		{
			"PHGear\data\Army\data\vest_odst_co.paa",
			"PHGear\data\army\data\armor_odst_co.paa",
			"PHGear\data\armor\customlegs_riot_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_riot_CO.paa"
		};
		class ItemInfo :ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
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
		};
	};
	class PHRP_Coleson_M56R_Armor : PHRP_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "[PHRP] M56 Body Armor 1-1 (Coleson)";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10",
			//"Reach_Forearm_Left",
			//"Reach_Forearm_Right",
			"H3_Forearm_Left",
			"H3_Forearm_Right",
			"H3_Pauldron_Left",
			"H3_Pauldron_Right",
			"Reach_Pauldron_Left",
			"Reach_Pauldron_Right",
			"Reach_Shoulder_Radio_Left",
			"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			"Reach_Sniper_Pauldron_Right",
			//"Reach_CQB_Pauldron_Left",
			//"Reach_CQB_Pauldron_Right",
			"Thigh_Pouch",
			//"Reach_Armor_Upper",
			"Reach_Armor_Lower",
			"H3_Armor_Upper",
			//"H3_Armor_Lower",
			//"Forearm_Vent_Left",
			//"Forearm_Vent_Right",
			"Canisters"
		};
		hiddenSelectionsTextures[] = 
		{
			"PHGear\data\armor\coleson_H3_Upper_Armor_co.paa",
			"PHGear\data\armor\coleson_H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"PHGear\data\armor\coleson_Reach_Armor_Upper_co.paa",
			"PHGear\data\armor\coleson_Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"PHGear\data\armor\coleson_CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[] = 
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				//"Reach_Forearm_Left",
				//"Reach_Forearm_Right",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				//"Reach_CQB_Pauldron_Left",
				//"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				//"Reach_Armor_Upper",
				"Reach_Armor_Lower",
				"H3_Armor_Upper",
				//"H3_Armor_Lower",
				//"Forearm_Vent_Left",
				//"Forearm_Vent_Right",
				"Canisters"
			};
			hiddenSelectionsTextures[] = 
			{
				"PHGear\data\armor\coleson_H3_Upper_Armor_co.paa",
				"PHGear\data\armor\coleson_H3_Lower_Armor_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"PHGear\data\armor\coleson_Reach_Armor_Upper_co.paa",
				"PHGear\data\armor\coleson_Reach_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
				"PHGear\data\armor\coleson_CQB_Shoulders\CQB_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
			};
		};
	};
};