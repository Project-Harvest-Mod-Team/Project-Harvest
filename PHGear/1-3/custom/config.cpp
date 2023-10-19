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
	class PHRP_onethreeM56S_Armor : PHRP_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "[PHRP] M56S Combat Armor 1-3";
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
			"PHGear\data\armor\onethree_H3_Upper_Armor_co.paa",
			"PHGear\data\armor\onethree_H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"PHGear\data\armor\onethree_Reach_Armor_Upper_co.paa",
			"PHGear\data\armor\onethree_Reach_Armor_Lower_co.paa",
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
				"PHGear\data\armor\onethree_H3_Upper_Armor_co.paa",
				"PHGear\data\armor\onethree_H3_Lower_Armor_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"PHGear\data\armor\onethree_Reach_Armor_Upper_co.paa",
				"PHGear\data\armor\onethree_Reach_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
			};
		};
	};
	class PHRP_onethreeM56Smedic_Armor : PHRP_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "[PHRP] M56S Combat Armor 1-3 Corpsman";
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
			"PHGear\data\armor\onethreecorpsman_H3_Upper_Armor_co.paa",
			"PHGear\data\armor\onethree_H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"PHGear\data\armor\onethreecorpsman_Reach_Armor_Upper_co.paa",
			"PHGear\data\armor\onethree_Reach_Armor_Lower_co.paa",
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
				"PHGear\data\armor\onethreecorpsman_H3_Upper_Armor_co.paa",
				"PHGear\data\armor\onethree_H3_Lower_Armor_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"PHGear\data\armor\onethreecorpsman_Armor_Upper_co.paa",
				"PHGear\data\armor\onethree_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
			};
		};
	};
	class PHRP_onethreeM56R_Armor : PHRP_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "[PHRP] M56R Combat Armor 1-3";
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
			"PHGear\data\armor\onethree_H3_Upper_Armor_co.paa",
			"PHGear\data\armor\onethree_H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"PHGear\data\armor\onethree_Reach_Armor_Upper_co.paa",
			"PHGear\data\armor\onethree_Reach_Armor_Lower_co.paa",
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
				"PHGear\data\armor\onethree_H3_Upper_Armor_co.paa",
				"PHGear\data\armor\onethree_H3_Lower_Armor_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"PHGear\data\armor\onethree_Reach_Armor_Upper_co.paa",
				"PHGear\data\armor\onethree_Reach_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
			};
		};
	};
	class PHRP_onethreeM56Rmedic_Armor : PHRP_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "[PHRP] M56R Combat Armor 1-3 Corpsman";
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
			"PHGear\data\armor\onethreecorpsman_H3_Upper_Armor_co.paa",
			"PHGear\data\armor\onethree_H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"PHGear\data\armor\onethreecorpsman_Reach_Armor_Upper_co.paa",
			"PHGear\data\armor\onethree_Reach_Armor_Lower_co.paa",
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
				"PHGear\data\armor\onethreecorpsman_H3_Upper_Armor_co.paa",
				"PHGear\data\armor\onethree_H3_Lower_Armor_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"PHGear\data\armor\onethreecorpsman_Armor_Upper_co.paa",
				"PHGear\data\armor\onethree_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
			};
		};
	};
	class PHRP_Buckley_M56R_Armor : PHRP_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "[PHRP] M56R Combat Armor 1-3 (Buckley)";
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
			"Reach_Pauldron_Right",
			"Reach_Shoulder_Radio_Left",
			"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			"Reach_Sniper_Pauldron_Right",
			"Reach_CQB_Pauldron_Left",
			//"Reach_CQB_Pauldron_Right",
			//"Thigh_Pouch",
			//"Reach_Armor_Upper",
			//"Reach_Armor_Lower",
			"H3_Armor_Upper",
			"H3_Armor_Lower",
			//"Forearm_Vent_Left",
			//"Forearm_Vent_Right",
			//"Canisters"
		};
		hiddenSelectionsTextures[] = 
		{
			"PHGear\data\armor\onethree_H3_Upper_Armor_co.paa",
			"PHGear\data\armor\onethree_H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"PHGear\data\armor\buckley_Reach_Armor_Upper_co.paa",
			"PHGear\data\armor\buckley_Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"PHGear\data\armor\buckley_CQB_co.paa",
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
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				//"Reach_CQB_Pauldron_Right",
				//"Thigh_Pouch",
				//"Reach_Armor_Upper",
				//"Reach_Armor_Lower",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				//"Forearm_Vent_Left",
				//"Forearm_Vent_Right",
				//"Canisters"
			};
			hiddenSelectionsTextures[] = 
			{
				"PHGear\data\armor\onethree_H3_Upper_Armor_co.paa",
				"PHGear\data\armor\onethree_H3_Lower_Armor_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"PHGear\data\armor\buckley_Reach_Armor_Upper_co.paa",
				"PHGear\data\armor\buckley_Reach_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
				"PHGear\data\armor\buckley_CQB_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
			};
		};
	};
	class PHRP_Morningstar_M56S_Armor : PHRP_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "[PHRP] M56S Combat Armor (Morningstar)";
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
			"PHGear\data\armor\morningstar_H3_Upper_Armor_co.paa",
			"PHGear\data\armor\onethree_H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"PHGear\data\armor\onethree_Reach_Armor_Upper_co.paa",
			"PHGear\data\armor\onethree_Reach_Armor_Lower_co.paa",
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
				"PHGear\data\armor\morningstar_H3_Upper_Armor_co.paa",
				"PHGear\data\armor\onethree_H3_Lower_Armor_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"PHGear\data\armor\onethree_Reach_Armor_Upper_co.paa",
				"PHGear\data\armor\onethree_Reach_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
			};
		};
	};
	class PHRP_Griffith_M56R_Armor : PHRP_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "[PHRP] M56R Combat Armor (Griffith)";
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
			//"Canisters"
		};
		hiddenSelectionsTextures[] = 
		{
			"PHGear\data\armor\onethree_H3_Upper_Armor_co.paa",
			"PHGear\data\armor\onethree_H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"PHGear\data\armor\griffith_Reach_Armor_Upper_co.paa",
			"PHGear\data\armor\griffith_Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"PHGear\data\armor\buckley_CQB_co.paa",
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
				//"Canisters"
			};
			hiddenSelectionsTextures[] = 
			{
				"PHGear\data\armor\onethree_H3_Upper_Armor_co.paa",
				"PHGear\data\armor\onethree_H3_Lower_Armor_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"PHGear\data\armor\griffith_Reach_Armor_Upper_co.paa",
				"PHGear\data\armor\griffith_Reach_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
				"PHGear\data\armor\buckley_CQB_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
			};
		};
	};
};
