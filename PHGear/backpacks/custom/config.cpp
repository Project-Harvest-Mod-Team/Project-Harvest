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
class CfgVehicles
{
	
	class OPTRE_ILCS_Rucksack_Heavy;
	class PHRP_ILCS: OPTRE_ILCS_Rucksack_Heavy
	{
		author = "Soldner";
		displayName = "PHRP ILCS Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 300;
		mass = 50;
		hiddenSelections[] = {"camo1","AP_Heavy","biofoam"};
		hiddenSelectionsTextures[] = {"PHGear\data\packs\rucksack_co.paa"};
	};
	class PHRP_ILCS_Heavy: OPTRE_ILCS_Rucksack_Heavy
	{
		author = "Soldner";
		displayName = "PHRP ILCS Heavy Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 350;
		mass = 50;
		hiddenSelections[] = {"camo1","biofoam"};
		hiddenSelectionsTextures[] = {"PHGear\data\packs\rucksack_co.paa"};
	};
	class PHRP_ILCS_Corpsman: OPTRE_ILCS_Rucksack_Heavy
	{
		author = "Soldner";
		displayName = "PHRP ILCS Corpsman Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenSelections[] = {"camo1","AP_Heavy"};
		hiddenSelectionsTextures[] = {"PHGear\data\packs\rucksack_co.paa"};
		maximumLoad = 350;
	};
	class OPTRE_ANPRC_515;
	class PHRP_ANPRC_515: OPTRE_ANPRC_515
	{
		author = "Soldner";
		displayName = "PHRP ILCS AN/PRC-515";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_isolatedAmount = 0.65;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 120000;
		tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		hiddenSelectionsTextures[] = {"PHGear\data\packs\prc515_CO.paa"};
		maximumLoad = 300;
	};
	class OPTRE_ANPRC_521_green;
	class PHRP_ANPRC_521: OPTRE_ANPRC_521_green
	{
		author = "Soldner";
		displayName = "PHRP ILCS AN/PRC-521";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = {"PHGear\data\packs\soft_backpack_co.paa","PHGear\data\packs\prc521_co.paa"};
		tf_isolatedAmount = 0.65;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 120000;
		tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		maximumLoad = 350;
	};
	class OPTRE_ONI_Researcher_Suitcase;
	class PHRP_Medic_Hardcase : OPTRE_ONI_Researcher_Suitcase
	{
		author = "VorpalHotdog";
		displayName = "Corpsman Hardcase";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        hiddenSelectionsTextures[] = {"PHGear\data\packs\PHRP_Medic_Hardcase.paa"};
        maximumLoad = 200;
	};	
};