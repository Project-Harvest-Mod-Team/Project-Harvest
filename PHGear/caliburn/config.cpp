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
class XtdGearModels
{
	class CamoBase;
	class CfgWeapons
	{
		class PHRP_caliburn_vests
		{
			label = "Spartan Armor";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"G017","B192","o148","B232","G129","A062"};
				class G017
				{
					label = "G017";
				};
				class B192
				{
					label = "B192";
				};
				class o148
				{
					label = "148";
				};
				class B232
				{
					label = "B232";
				};
				class G129
				{
					label = "G129";
				};
				class A062
				{
					label = "A062";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_G017_Armor
		{
			model = "PHRP_caliburn_vests";
			role = "G017";
		};
		class PHRP_Cyrus_Armor
		{
			model = "PHRP_caliburn_vests";
			role = "B192";
		};
		class PHRP_Oliver_Armor
		{
			model = "PHRP_caliburn_vests";
			role = "o148";
		};
		class PHRP_Marcus_Armor
		{
			model = "PHRP_caliburn_vests";
			role = "B232";
		};
		class PHRP_Kass_Armor
		{
			model = "PHRP_caliburn_vests";
			role = "G129";
		};
		class PHRP_Orlan_Armor
		{
			model = "PHRP_caliburn_vests";
			role = "A062";
		};
	};
};
class cfgVehicles
{
	class ContainerSupply;
	class Supply2000: ContainerSupply		// The class name does not really matter, but for clarity, it should be SupplyXX, where XX is the desired capacity value.
	{
		maximumLoad = 2000;				// Replace XX with the desired capacity value.
	};
};
class CfgWeapons
{
	class VestItem;
	class OPTRE_MJOLNIR_Mk4Armor;
	class PHRP_Base_Spartan_Armor : OPTRE_MJOLNIR_Mk4Armor
	{
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;
		class ItemInfo;
	};
	class OPTRE_MJOLNIR_MkVBArmor_Human;
	class PHRP_Base_Human_Spartan : OPTRE_MJOLNIR_MkVBArmor_Human
	{
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;
		class ItemInfo;
	};
	class PHRP_G017_Armor : PHRP_Base_Human_Spartan
	{
		dlc = "Project Harvest Armory";
		author = "Soldner";
		displayName = "Spartan Armor G017";
		model = "\OPTRE_UNSC_Units\Army\MKVB_Armor_Human.p3d";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenSelections[] = {"camo1","camo2","attach_security1","attach_security2","attach_fjpara1","attach_fjpara2","attach_commando1","attach_commando2","attach_mkv1","attach_mkv2","attach_grenadier1","attach_grenadier2","attach_cqc1","attach_cqc2","attach_gren_ua","attach_knees_fjpara"};
		hiddenSelectionsTextures[] = {"PHGear\data\armor\Armor_G017_co.paa","PHGear\data\armor\legs_G017_co.paa"};
		class ItemInfo: VestItem
		{
			containerClass = "Supply2000";
			uniformModel = "\OPTRE_UNSC_Units\Army\MKVB_Armor_Human.p3d";
			hiddenSelections[] = {"camo1","camo2","attach_security1","attach_security2","attach_fjpara1","attach_fjpara2","attach_commando1","attach_commando2","attach_mkv1","attach_mkv2","attach_grenadier1","attach_grenadier2","attach_cqc1","attach_cqc2","attach_gren_ua","attach_knees_fjpara"};
			hiddenSelectionsTextures[] = {"PHGear\data\armor\Armor_G017_co.paa","PHGear\data\armor\legs_G017_co.paa"};
			mass = 20;
			passThrough = 0.1;
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
	class PHRP_Cyrus_Armor : PHRP_Base_Spartan_Armor
	{
		dlc = "Project Harvest Armory";
		author = "Soldner";
		displayName = "Spartan Armor B192";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		model = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
		hiddenSelections[] = {"camo1","attach_security1","attach_security2","attach_fjpara1","attach_fjpara2","attach_commando1","attach_commando2","attach_mkv1","attach_mkv2","attach_grenadier1","attach_grenadier2","attach_cqc1","attach_cqc2","attach_gren_ua","attach_knees_fjpara"};
		hiddenSelectionsTextures[] = {"PHGear\data\armor\armor_B192_co.paa","PHGear\data\armor\legs_B192_co.paa"};
		class ItemInfo: VestItem
		{
			containerClass = "Supply2000";
			uniformModel = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
			hiddenSelections[] = {"camo1","camo2","attach_security1","attach_security2","attach_fjpara1","attach_fjpara2","attach_commando1","attach_commando2","attach_mkv1","attach_mkv2","attach_grenadier1","attach_grenadier2","attach_cqc1","attach_cqc2","attach_gren_ua","attach_knees_fjpara"};
			hiddenSelectionsTextures[] = {"PHGear\data\armor\armor_B192_co.paa","PHGear\data\armor\legs_B192_co.paa"};
			mass = 20;
			passThrough = 0.1;
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
	class PHRP_Oliver_Armor : PHRP_Base_Spartan_Armor
	{
		dlc = "Project Harvest Armory";
		author = "Soldner";
		displayName = "Spartan Armor 148";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		model = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
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
		class ItemInfo: VestItem
		{
			containerClass = "Supply2000";
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
			mass = 20;
			passThrough = 0.1;
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
	class PHRP_Marcus_Armor : PHRP_Base_Spartan_Armor
	{
		dlc = "Project Harvest Armory";
		author = "Soldner";
		displayName = "Spartan Armor B232";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		model = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
		hiddenSelections[] = {"camo1","attach_security1","attach_security2","attach_fjpara1","attach_fjpara2","attach_commando1","attach_commando2","attach_mkv1","attach_mkv2","attach_grenadier1","attach_grenadier2","attach_cqc1","attach_cqc2","attach_gren_ua","attach_knees_fjpara"};
		hiddenSelectionsTextures[] = {"PHGear\data\armor\armor_B232_co.paa","PHGear\data\armor\legs_B232_co.paa"};
		class ItemInfo: VestItem
		{
			containerClass = "Supply2000";
			uniformModel = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
			hiddenSelections[] = {"camo1","camo2","attach_security1","attach_security2","attach_fjpara1","attach_fjpara2","attach_commando1","attach_commando2","attach_mkv1","attach_mkv2","attach_grenadier1","attach_grenadier2","attach_cqc1","attach_cqc2","attach_gren_ua","attach_knees_fjpara"};
			hiddenSelectionsTextures[] = {"PHGear\data\armor\armor_B232_co.paa","PHGear\data\armor\legs_B232_co.paa"};
			mass = 20;
			passThrough = 0.1;
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
	class PHRP_Kass_Armor : PHRP_Base_Spartan_Armor
	{
		dlc = "Project Harvest Armory";
		author = "Soldner";
		displayName = "Spartan Armor G129";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		model = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
		hiddenSelections[] = {"camo1","attach_security1","attach_security2","attach_fjpara1","attach_fjpara2","attach_commando1","attach_commando2","attach_mkv1","attach_mkv2","attach_grenadier1","attach_grenadier2","attach_cqc1","attach_cqc2","attach_gren_ua","attach_knees_fjpara"};
		hiddenSelectionsTextures[] = {"PHGear\data\armor\armor_G129_co.paa","PHGear\data\armor\legs_G129_co.paa"};
		class ItemInfo: VestItem
		{
			containerClass = "Supply2000";
			uniformModel = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
			hiddenSelections[] = {"camo1","camo2","attach_security1","attach_security2","attach_fjpara1","attach_fjpara2","attach_commando1","attach_commando2","attach_mkv1","attach_mkv2","attach_grenadier1","attach_grenadier2","attach_cqc1","attach_cqc2","attach_gren_ua","attach_knees_fjpara"};
			hiddenSelectionsTextures[] = {"PHGear\data\armor\armor_G129_co.paa","PHGear\data\armor\legs_G129_co.paa"};
			mass = 20;
			passThrough = 0.1;
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
	class PHRP_Orlan_Armor : PHRP_Base_Spartan_Armor
	{
		dlc = "Project Harvest Armory";
		author = "Soldner";
		displayName = "Spartan Armor A062";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		model = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
		hiddenSelections[] = {"camo1","camo2","attach_security1","attach_security2","attach_fjpara1","attach_fjpara2","attach_commando2","attach_mkv1","attach_grenadier1","attach_grenadier2","attach_cqc1","attach_cqc2","attach_gren_ua","attach_knees_default"};
		hiddenSelectionsTextures[] = {"PHGear\data\armor\armor_A062_co.paa","OPTRE_MJOLNIR_Units\data\Legs_MkVB_CO.paa"};
		class ItemInfo: VestItem
		{
			containerClass = "Supply2000";
			uniformModel = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
			hiddenSelections[] = {"camo1","camo2","attach_security1","attach_security2","attach_fjpara1","attach_fjpara2","attach_commando2","attach_mkv1","attach_grenadier1","attach_grenadier2","attach_cqc1","attach_cqc2","attach_gren_ua","attach_knees_default"};
			hiddenSelectionsTextures[] = {"PHGear\data\armor\armor_A062_co.paa","OPTRE_MJOLNIR_Units\data\Legs_MkVB_CO.paa"};
			mass = 20;
			passThrough = 0.1;
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
	/*class PHRP_Luka_Armor : PHRP_Base_Spartan_Armor
	{
		dlc = "Project Harvest Armory";
		author = "Soldner";
		displayName = "Spartan Armor B170";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		model = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
		hiddenSelections[] = {"camo1","attach_security1","attach_security2","attach_fjpara1","attach_fjpara2","attach_commando1","attach_commando2","attach_mkv1","attach_mkv2","attach_grenadier1","attach_grenadier2","attach_cqc1","attach_cqc2","attach_gren_ua","attach_knees_fjpara"};
		hiddenSelectionsTextures[] = {"PHGear\data\armor\armor_B170_co.paa","PHGear\data\armor\legs_B170_co.paa"};
		class ItemInfo: VestItem
		{
			containerClass = "Supply2000";
			uniformModel = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
			hiddenSelections[] = {"camo1","camo2","attach_security1","attach_security2","attach_fjpara1","attach_fjpara2","attach_commando1","attach_commando2","attach_mkv1","attach_mkv2","attach_grenadier1","attach_grenadier2","attach_cqc1","attach_cqc2","attach_gren_ua","attach_knees_fjpara"};
			hiddenSelectionsTextures[] = {"PHGear\data\armor\armor_B170_co.paa","PHGear\data\armor\legs_B170_co.paa"};
			mass = 20;
			passThrough = 0.1;
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
	};*/
};