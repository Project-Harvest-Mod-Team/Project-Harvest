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
	class PHRP_Recruit_Armor : PHRP_Base_Armor
	{
		author = "VibingVampire";
		displayName = "M52D Body Armor - Recruit";
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
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] =
		{
			"PHGear\data\Army\data\vest_odst_co.paa",
			"PHGear\data\army\data\armor_odst_co.paa",
			"PHGear\data\armor\customlegs_gladius_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_gladius_CO.paa"
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
		};
	};
	class PHRP_Reserve_Armor : PHRP_Base_Armor
	{
		author = "VibingVampire";
		displayName = "M52D Body Armor - Reserve";
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
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] =
		{
			"PHGear\data\Army\data\vest_odst_co.paa",
			"PHGear\data\army\data\armor_odst_co.paa",
			"PHGear\data\armor\customlegs_gladiusred_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_gladiusred_CO.paa"
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
		};
	};
	class PHRP_Collins_Armor : PHRP_Base_Armor
	{
		author = "Luna";
		displayName = "M52D Body Armor (Collins)";
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
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] =
		{
			"PHGear\data\Army\data\vest_odst_co.paa",
			"PHGear\data\army\data\armor_odst_co.paa",
			"PHGear\data\armor\customlegs_collins_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_collins_co.paa"
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
		};
	};
	class PHRP_Ansley_Armor : PHRP_Base_Armor
	{
		author = "Project Harvest Mod Team";
		displayName = "M52D Body Armor (Ansley)";
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
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] =
		{
			"PHGear\data\Army\data\vest_odst_co.paa",
			"PHGear\data\army\data\armor_odst_co.paa",
			"PHGear\data\armor\legs_base_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_ansley_CO.paa"
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
		};
	};
	class PHRP_Carter_Armor : PHRP_Base_Armor
	{
		author = "Luna & MrMicrobe";
		displayName = "M52D Body Armor (Carter)";
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
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] =
		{
			"PHGear\data\Army\data\vest_odst_co.paa",
			"PHGear\data\army\data\armor_odst_co.paa",
			"PHGear\data\armor\customlegs_Carter_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_Carter_CO.paa"
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
		};
	};
	class PHRP_Tinoco_Armor : PHRP_Base_Armor
	{
		author = "MrMicrobe";
		displayName = "M52D Body Armor (Tinoco)";
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
			//"AP_GL", 
			//"AP_Knife", 
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
			//"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] =
		{
			"PHGear\data\Army\data\vest_odst_co.paa",
			"PHGear\data\army\data\armor_odst_co.paa",
			"PHGear\data\armor\legs_base_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_tinoco_co.paa"
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
				//"AP_GL", 
				//"AP_Knife", 
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
				//"APO_Sniper", 
				"CustomKit_Scorch"
			};
		};
	};
	class PHRP_Carsten_Armor : PHRP_Base_Armor
	{
		author = "Soldner";
		displayName = "M52D Body Armor (Carsten)";
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
			//"AS_ODSTCQBRight", 
			"AS_ODSTLeft", 
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
			//"AP_SMG", 
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
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] =
		{
			"PHGear\data\Army\data\vest_odst_co.paa",
			"PHGear\data\army\data\armor_odst_co.paa",
			"PHGear\data\armor\customlegs_carsten_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_carsten_CO.paa"
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
				//"AS_ODSTCQBRight", 
				"AS_ODSTLeft", 
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
				//"AP_SMG", 
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
		};
	};
	class PHRP_Wilson_Armor : PHRP_Base_Armor
	{
		author = "MrMicrobe";
		displayName = "M52D Body Armor (Wilson)";
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
			"AS_BaseLeft", 
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
			//"APO_SMG", 
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
			"PHGear\data\armor\customarmor_wilson_CO.paa"
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
				"AS_BaseLeft", 
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
				//"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
		};
	};
	class PHRP_Drip_Armor : PHRP_Base_Armor
	{
		author = "VorpalHotdog";
		displayName = "M52D Body Armor (Drip)";
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
			"PHGear\data\armor\customlegs_dripdst_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_dripdst_co.paa"
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
				//"APO_AR", 
				"APO_BR", 
				//"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
		};
	};
	class PHRP_Miller_Armor : PHRP_Base_Armor
	{
		author = "MrMicrobe";
		displayName = "M52D Body Armor (Miller)";
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
			"PHGear\data\armor\legs_base_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_miller_co.paa"
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
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
		};
	};
	class PHRP_Jaeger_Armor : PHRP_Base_Armor
	{
		author = "Jimbo";
		displayName = "M52D Body Armor (Jaeger)";
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
			"AS_ODSTRight", 
			//"AS_ODSTSniperLeft", 
			//"AS_ODSTSniperRight", 
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
			"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] =
		{
			"PHGear\data\Army\data\vest_odst_co.paa",
			"PHGear\data\army\data\armor_odst_co.paa",
			"PHGear\data\armor\customlegs_jaeger_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_jaeger_co.paa"
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
				"AS_ODSTRight", 
				//"AS_ODSTSniperLeft", 
				//"AS_ODSTSniperRight", 
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
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
		};
	};
	class PHRP_Craven_Armor : PHRP_Base_Armor
	{
		author = "Jimbo";
		displayName = "M52D Body Armor (Craven)";
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
			"PHGear\data\armor\customlegs_craven_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_craven_co.paa"
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
				"APO_AR", 
				"APO_BR", 
				"APO_Knife", 
				"APO_SMG", 
				//"APO_Sniper", 
				"CustomKit_Scorch"
			};
		};
	};
	class PHRP_Owessel_Armor : PHRP_Base_Armor
	{
		author = "Jimbo";
		displayName = "M52D Body Armor (Owessel)";
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
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] =
		{
			"PHGear\data\Army\data\vest_odst_co.paa",
			"PHGear\data\army\data\armor_odst_co.paa",
			"PHGear\data\armor\customlegs_owessel_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_owessel_co.paa"
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
		};
	};
	class PHRP_Wolf_Armor : PHRP_Base_Armor
	{
		author = "MrMicrobe";
		displayName = "M52D Body Armor (Wolf)";
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
			//"AP_GL", 
			"AP_Knife", 
			"AP_MGThigh", 
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
			//"AP_Smoke", 
			"APO_AR", 
			"APO_BR", 
			//"APO_Knife", 
			"APO_SMG", 
			//"APO_Sniper", 
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] =
		{
			"PHGear\data\Army\data\vest_odst_co.paa",
			"PHGear\data\army\data\armor_odst_co.paa",
			"PHGear\data\armor\customlegs_wolf_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_wolf_CO.paa"
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
				//"AP_GL", 
				"AP_Knife", 
				"AP_MGThigh", 
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
				//"AP_Smoke", 
				"APO_AR", 
				"APO_BR", 
				//"APO_Knife", 
				//"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
		};
	};
	class PHRP_Kincaid_Armor : PHRP_Base_Armor
	{
		author = "Jimbo";
		displayName = "M52D Body Armor (Kincaid)";
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
			"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
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
			//"AP_BR", 
			"AP_Pack", 
			//"AP_Pistol", 
			//"AP_Rounds", 
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
			"PHGear\data\armor\customlegs_kincaid_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_kincaid_co.paa"
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
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
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
				//"AP_BR", 
				"AP_Pack", 
				//"AP_Pistol", 
				//"AP_Rounds", 
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
	class PHRP_Stone_Armor : PHRP_Base_Armor
	{
		author = "Soldner";
		displayName = "M52D Body Armor (Stone)";
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
			//"AP_GL", 
			"AP_Knife", 
			"AP_MGThigh", 
			"AP_AR", 
			"AP_BR", 
			"AP_Pack", 
			//"AP_Pistol", 
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
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] =
		{
			"PHGear\data\Army\data\vest_odst_co.paa",
			"PHGear\data\army\data\armor_odst_co.paa",
			"PHGear\data\armor\customlegs_stone_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_stone_co.paa"
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
				//"AP_GL", 
				"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				"AP_BR", 
				"AP_Pack", 
				//"AP_Pistol", 
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
		};
	};
	class PHRP_Lark_Armor : PHRP_Base_Armor
	{
		author = "Enreth";
		displayName = "M52D Body Armor (Lark)";
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
			"AS_ODSTRight", 
			//"AS_ODSTSniperLeft", 
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
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] =
		{
			"PHGear\data\Army\data\vest_odst_co.paa",
			"PHGear\data\army\data\armor_odst_co.paa",
			"PHGear\data\armor\customlegs_lark_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_lark_co.paa"
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
				"AS_ODSTRight", 
				//"AS_ODSTSniperLeft", 
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
		};
	};
	class PHRP_Samson_Armor : PHRP_Base_Armor
	{
		author = "MrMicrobe";
		displayName = "M52D Body Armor (Samson)";
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
			//"AS_ODSTCQBRight", 
			"AS_ODSTLeft", 
			"AS_ODSTRight", 
			"AS_ODSTSniperLeft", 
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
			"PHGear\data\armor\customlegs_samson_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_samson_co.paa"
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
				//"AS_ODSTCQBRight", 
				"AS_ODSTLeft", 
				"AS_ODSTRight", 
				"AS_ODSTSniperLeft", 
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
				"APO_Knife", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch"
			};
		};
	};
	class PHRP_Presscott_Armor : PHRP_Base_Armor
	{
		author = "VorpalHotdog";
		displayName = "M52D Body Armor (Presscott)";
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
			"PHGear\data\armor\customlegs_presscott_co.paa",
			"PHGear\data\army\data\ghillie_woodland_co.paa",
			"PHGear\data\armor\customarmor_presscott_CO.paa"
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
				//"APO_AR", 
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

	//new armors
	class ItemInfo;
	class PHRP_Base_M56R_Armor;
	class PHRP_raider_M56_Armor : PHRP_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "[PHRP] M56H Combat Armor (Raider)";
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
			//"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			"Reach_Sniper_Pauldron_Right",
			"Reach_CQB_Pauldron_Left",
			"Reach_CQB_Pauldron_Right",
			//"Thigh_Pouch",
			//"Reach_Armor_Upper",
			"Reach_Armor_Lower",
			"H3_Armor_Upper",
			//"H3_Armor_Lower",
			//"Forearm_Vent_Left",
			//"Forearm_Vent_Right",
			//"Canisters"
		};
		hiddenSelectionsTextures[] = 
		{
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Medic_Thigh_Pouch_co.paa",
			"PHGear\data\armor\raider_Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
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
				//"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				//"Thigh_Pouch",
				//"Reach_Armor_Upper",
				"Reach_Armor_Lower",
				"H3_Armor_Upper",
				//"H3_Armor_Lower",
				//"Forearm_Vent_Left",
				//"Forearm_Vent_Right",
				//"Canisters"
			};
			hiddenSelectionsTextures[] = 
			{
				"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
				"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Medic_Thigh_Pouch_co.paa",
				"PHGear\data\armor\raider_Reach_Armor_Upper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
			};
		};
	};
};