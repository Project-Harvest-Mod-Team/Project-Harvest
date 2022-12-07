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
	class OPTRE_UNSC_M52D_Armor;
	class PHRP_Base_Armor : OPTRE_UNSC_M52D_Armor
	{
		class ItemInfo;
	};
	class PHRP_Soldner_Armor : PHRP_Base_Armor
	{
		author = "Soldner";
		displayName = "M52D Body Armor (Soldner)";
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
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] =
		{
			"PHGear\data\armor\customvest_soldner_CO.paa",
			"PHGear\data\army\data\armor_odst_co.paa",
			"PHGear\data\armor\customlegs_soldner_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_soldner_CO.paa"
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
		};
	};
	class PHRP_Burtovski_Armor : PHRP_Base_Armor
	{
		author = "Soldner";
		displayName = "M52D Body Armor (Burtovski)";
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
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] =
		{
			"PHGear\data\Army\data\vest_odst_co.paa",
			"PHGear\data\army\data\armor_odst_co.paa",
			"PHGear\data\armor\customlegs_burtovski_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_burtovski_co.paa"
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
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
		};
	};
    class PHRP_Pjetrovic_Armor : PHRP_Base_Armor
	{
		author = "Soldner";
		displayName = "M52D Body Armor (Pjetrovic)";
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
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] =
		{
			"PHGear\data\Army\data\vest_odst_co.paa",
			"PHGear\data\army\data\armor_odst_co.paa",
			"PHGear\data\armor\customlegs_pjetrovic_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_pjetrovic_co.paa"
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
		};
	};
	class PHRP_Tepfer_Armor : PHRP_Base_Armor
	{
		author = "Soldner";
		displayName = "M52D Body Armor (Tepfer)";
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
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] =
		{
			"PHGear\data\Army\data\vest_odst_co.paa",
			"PHGear\data\army\data\armor_odst_co.paa",
			"PHGear\data\armor\customlegs_tepfer_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_tepfer_co.paa"
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
		};
	};
	class PHRP_Holland_Armor : PHRP_Base_Armor
	{
		author = "VorpalHotdog";
		displayName = "M52D Body Armor (Holland)";
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
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] =
		{
			"PHGear\data\Army\data\vest_odst_co.paa",
			"PHGear\data\army\data\armor_odst_co.paa",
			"PHGear\data\armor\legs_base_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_holland_co.paa"
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
		};
	};
	class PHRP_Raider_Armor : PHRP_Base_Armor
	{
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Raider)";
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
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] =
		{
			"PHGear\data\Army\data\vest_odst_co.paa",
			"PHGear\data\army\data\armor_odst_co.paa",
			"PHGear\data\armor\customlegs_raider_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_raider_co.paa"
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
		};
	};
};