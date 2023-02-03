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
	class OPTRE_MJOLNIR_Mk4Armor;
	class PHRP_Base_Armor : OPTRE_UNSC_M52D_Armor
	{
		class ItemInfo;
	};
	class PHRP_Base_Spartan_Armor : OPTRE_MJOLNIR_Mk4Armor
	{
		class ItemInfo;
	};
	class PHRP_G311_Armor: PHRP_Base_Armor
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		dlc = "Project Harvest Armory";
		author = "Soldner";
		displayName = "G311 - Frank";
		model = "\OPTRE_UNSC_Units\Army\MKVB_Armor_Human.p3d";
		hiddenSelections[] = {"camo1","camo2","attach_fjpara1","attach_fjpara2","attach_commando1","attach_commando2","attach_grenadier1","attach_grenadier2","attach_security1","attach_security2"};
		hiddenSelectionsTextures[] = {"optre_mjolnir_units\data\Chest_MkVB_CO.paa","optre_mjolnir_units\data\Legs_MkVB_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\MKVB_Armor_Human.p3d";
			hiddenSelections[] = {"camo1","camo2","attach_fjpara1","attach_fjpara2","attach_commando1","attach_commando2","attach_grenadier1","attach_grenadier2","attach_security1","attach_security2"};
			hiddenSelectionsTextures[] = {"optre_mjolnir_units\data\Chest_MkVB_CO.paa","optre_mjolnir_units\data\Legs_MkVB_CO.paa"};
		};
	};
	class PHRP_Oliver_My_Beloved: PHRP_Base_Spartan_Armor
	{
		dlc = "Project Harvest Armory";
		author = "Soldner";
		displayName = "148 - Oliver";
		model = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
		hiddenSelections[] = {"camo1","camo2","attach_fjpara1","attach_fjpara2","attach_commando1","attach_commando2","attach_mkv1","attach_mkv2","attach_grenadier1","attach_grenadier2","attach_cqc1","attach_cqc2","attach_knees_fjpara"};
		hiddenSelectionsTextures[] = {"OPTRE_MJOLNIR_Units\data\Chest_MkVB_CO.paa","OPTRE_MJOLNIR_Units\data\Legs_MkVB_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_MJOLNIR_Units\armormkvb.p3d";
			hiddenSelections[] = {"camo1","camo2","attach_fjpara1","attach_fjpara2","attach_commando1","attach_commando2","attach_mkv1","attach_mkv2","attach_grenadier1","attach_grenadier2","attach_cqc1","attach_cqc2","attach_knees_fjpara"};
			hiddenSelectionsTextures[] = {"OPTRE_MJOLNIR_Units\data\Chest_MkVB_CO.paa","OPTRE_MJOLNIR_Units\data\Legs_MkVB_CO.paa"};
		};
	};
};