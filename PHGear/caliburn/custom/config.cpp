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
	class OPTRE_MJOLNIR_Mk4Armor;
	class VestItem;
	class OPTRE_UNSC_M52D_Armor
	{
		class ItemInfo;
	};
	class PHRP_Base_Spartan_Armor : OPTRE_MJOLNIR_Mk4Armor
	{
		class ItemInfo;
	};
	class PHRP_Oliver_My_Beloved: PHRP_Base_Spartan_Armor
	{
		dlc = "Project Harvest Armory";
		author = "Soldner";
		displayName = "Spartan Armor 148";
		model = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			//"attach_security1",
			//"attach_security2",
			"attach_fjpara1",
			"attach_fjpara2",
			"attach_commando1",
			"attach_commando2",
			"attach_mkv1",
			"attach_mkv2",
			"attach_grenadier1",
			"attach_grenadier2",
			"attach_cqc1",
			"attach_cqc2",
			//"attach_gren_ua",
			"attach_knees_fjpara"
		};
		hiddenSelectionsTextures[] = 
		{
			"PHGear\data\armor\armor_148_co.paa",
			"OPTRE_MJOLNIR_Units\data\Legs_MkVB_CO.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"PHGear\data\armor\beloved_grenadier_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
			hiddenSelections[] = 
			{
				"camo1",
				"camo2",
				//"attach_security1",
				//"attach_security2",
				"attach_fjpara1",
				"attach_fjpara2",
				"attach_commando1",
				"attach_commando2",
				"attach_mkv1",
				"attach_mkv2",
				"attach_grenadier1",
				"attach_grenadier2",
				"attach_cqc1",
				"attach_cqc2",
				//"attach_gren_ua",
				"attach_knees_fjpara"
			};
			hiddenSelectionsTextures[] = 
			{
				"PHGear\data\armor\armor_148_co.paa",
				"OPTRE_MJOLNIR_Units\data\Legs_MkVB_CO.paa",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"PHGear\data\armor\beloved_grenadier_co.paa",
				""
			};
		};
	};
	class PHRP_D236_Armor: PHRP_Base_Spartan_Armor
	{
		dlc = "Project Harvest Armory";
		author = "Soldner";
		displayName = "Spartan Armor D236";
		model = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"attach_security1",
			"attach_security2",
			"attach_fjpara1",
			"attach_fjpara2",
			"attach_commando1",
			"attach_commando2",
			"attach_mkv1",
			"attach_mkv2",
			"attach_grenadier1",
			"attach_grenadier2",
			"attach_cqc1",
			"attach_cqc2",
			"attach_gren_ua",
			"attach_knees_fjpara"
		};
		hiddenSelectionsTextures[] = 
		{
			"PHGear\data\armor\armor_D236_co.paa",
			"OPTRE_MJOLNIR_Units\data\Legs_MkVB_Red_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
			hiddenSelections[] = 
			{
				"camo1",
				"camo2",
				"attach_security1",
				"attach_security2",
				"attach_fjpara1",
				"attach_fjpara2",
				"attach_commando1",
				"attach_commando2",
				"attach_mkv1",
				"attach_mkv2",
				"attach_grenadier1",
				"attach_grenadier2",
				"attach_cqc1",
				"attach_cqc2",
				"attach_gren_ua",
				"attach_knees_fjpara"
			};
			hiddenSelectionsTextures[] = 
			{
				"PHGear\data\armor\armor_D236_co.paa",
				"OPTRE_MJOLNIR_Units\data\Legs_MkVB_Red_CO.paa"
			};
		};
	};
	class PHRP_B192_Armor: PHRP_Base_Spartan_Armor
	{
		dlc = "Project Harvest Armory";
		author = "Soldner";
		displayName = "Spartan Armor B232";
		model = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"attach_security1",
			"attach_security2",
			"attach_fjpara1",
			"attach_fjpara2",
			"attach_commando1",
			"attach_commando2",
			"attach_mkv1",
			"attach_mkv2",
			"attach_grenadier1",
			"attach_grenadier2",
			"attach_cqc1",
			"attach_cqc2",
			"attach_gren_ua",
			"attach_knees_fjpara"
		};
		hiddenSelectionsTextures[] = 
		{
			"PHGear\data\armor\armor_B192_co.paa",
			"PHGear\data\armor\legs_B192_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
			hiddenSelections[] = 
			{
				"camo1",
				"camo2",
				"attach_security1",
				"attach_security2",
				"attach_fjpara1",
				"attach_fjpara2",
				"attach_commando1",
				"attach_commando2",
				"attach_mkv1",
				"attach_mkv2",
				"attach_grenadier1",
				"attach_grenadier2",
				"attach_cqc1",
				"attach_cqc2",
				"attach_gren_ua",
				"attach_knees_fjpara"
			};
			hiddenSelectionsTextures[] = 
			{
				"PHGear\data\armor\armor_B192_co.paa",
				"PHGear\data\armor\legs_B192_co.paa"
			};
		};
	};
	class PHRP_B232_Armor: PHRP_Base_Spartan_Armor
	{
		dlc = "Project Harvest Armory";
		author = "Soldner";
		displayName = "Spartan Armor B232";
		model = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"attach_security1",
			"attach_security2",
			"attach_fjpara1",
			"attach_fjpara2",
			"attach_commando1",
			"attach_commando2",
			"attach_mkv1",
			"attach_mkv2",
			"attach_grenadier1",
			"attach_grenadier2",
			"attach_cqc1",
			"attach_cqc2",
			"attach_gren_ua",
			"attach_knees_fjpara"
		};
		hiddenSelectionsTextures[] = 
		{
			"PHGear\data\armor\armor_B232_co.paa",
			"PHGear\data\armor\legs_B232_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
			hiddenSelections[] = 
			{
				"camo1",
				"camo2",
				"attach_security1",
				"attach_security2",
				"attach_fjpara1",
				"attach_fjpara2",
				"attach_commando1",
				"attach_commando2",
				"attach_mkv1",
				"attach_mkv2",
				"attach_grenadier1",
				"attach_grenadier2",
				"attach_cqc1",
				"attach_cqc2",
				"attach_gren_ua",
				"attach_knees_fjpara"
			};
			hiddenSelectionsTextures[] = 
			{
				"PHGear\data\armor\armor_B232_co.paa",
				"PHGear\data\armor\legs_B232_co.paa"
			};
		};
	};
	class PHRP_G129_Armor: PHRP_Base_Spartan_Armor
	{
		dlc = "Project Harvest Armory";
		author = "Soldner";
		displayName = "Spartan Armor G129";
		model = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"attach_security1",
			"attach_security2",
			"attach_fjpara1",
			"attach_fjpara2",
			"attach_commando1",
			"attach_commando2",
			"attach_mkv1",
			"attach_mkv2",
			"attach_grenadier1",
			"attach_grenadier2",
			"attach_cqc1",
			"attach_cqc2",
			"attach_gren_ua",
			"attach_knees_fjpara"
		};
		hiddenSelectionsTextures[] = 
		{
			"PHGear\data\armor\armor_G129_co.paa",
			"PHGear\data\armor\legs_G129_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
			hiddenSelections[] = 
			{
				"camo1",
				"camo2",
				"attach_security1",
				"attach_security2",
				"attach_fjpara1",
				"attach_fjpara2",
				"attach_commando1",
				"attach_commando2",
				"attach_mkv1",
				"attach_mkv2",
				"attach_grenadier1",
				"attach_grenadier2",
				"attach_cqc1",
				"attach_cqc2",
				"attach_gren_ua",
				"attach_knees_fjpara"
			};
			hiddenSelectionsTextures[] = 
			{
				"PHGear\data\armor\armor_G129_co.paa",
				"PHGear\data\armor\legs_G129_co.paa"
			};
		};
	};
	class PHRP_B170_Armor: PHRP_Base_Spartan_Armor
	{
		dlc = "Project Harvest Armory";
		author = "Soldner";
		displayName = "Spartan Armor B170";
		model = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"attach_security1",
			"attach_security2",
			"attach_fjpara1",
			"attach_fjpara2",
			"attach_commando1",
			"attach_commando2",
			"attach_mkv1",
			"attach_mkv2",
			"attach_grenadier1",
			"attach_grenadier2",
			"attach_cqc1",
			"attach_cqc2",
			"attach_gren_ua",
			"attach_knees_fjpara"
		};
		hiddenSelectionsTextures[] = 
		{
			"PHGear\data\armor\armor_B170_co.paa",
			"PHGear\data\armor\legs_B170_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
			hiddenSelections[] = 
			{
				"camo1",
				"camo2",
				"attach_security1",
				"attach_security2",
				"attach_fjpara1",
				"attach_fjpara2",
				"attach_commando1",
				"attach_commando2",
				"attach_mkv1",
				"attach_mkv2",
				"attach_grenadier1",
				"attach_grenadier2",
				"attach_cqc1",
				"attach_cqc2",
				"attach_gren_ua",
				"attach_knees_fjpara"
			};
			hiddenSelectionsTextures[] = 
			{
				"PHGear\data\armor\armor_B170_co.paa",
				"PHGear\data\armor\legs_B170_co.paa"
			};
		};
	};
};