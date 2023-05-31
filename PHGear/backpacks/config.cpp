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
	class CfgVehicles
	{
		class PHRP_Backpacks
		{
			label = "Gladius Packs";
			author = "Project Harvest Mod Team";
			options[] = {"role","squad"};
			class role
			{
				alwaysSelectable = 1;
				label = "Type";
				values[] = {"basic","medic","heavy","satchel","PRC515","PRC521","gunbagace"};
				class basic
				{
					label = "Basic";
					image = "";
				};
				class medic
				{
					label = "Corpsman";
					image = "";
				};
				class heavy
				{
					label = "Heavy";
					image = "";
				};
				class satchel
				{
					label = "Satchel";
					image = "";
				};
				class PRC515
				{
					label = "515";
					image = "";
				};
				class PRC521
				{
					label = "521";
					image = "";
				};
				class gunbagace
				{
					label = "Gunbag";
					image = "";
				};
			};
			class squad
			{
				alwaysSelectable = 1;
				label = "Squad";
				values[] = {"ilcs","unsc","alpha","bravo","vulcan"};
				class ilcs
				{
					label = "ODST";
				};
				class unsc
				{
					label = "Marine";
				};
				class alpha
				{
					label = "Alpha";
				};
				class bravo
				{
					label = "Bravo";
				};
				class vulcan
				{
					label = "Vulcan";
				};
			};
		};
	};
};

class XtdGearInfos
{
	class CfgVehicles
	{
		class PHRP_ILCS
		{
			model = "PHRP_Backpacks";
			role = "basic";
			squad = "ilcs";
		};
		class PHRP_ILCS_Corpsman
		{
			model = "PHRP_Backpacks";
			role = "medic";
			squad = "ilcs";
		};
		class PHRP_ILCS_Heavy
		{
			model = "PHRP_Backpacks";
			role = "heavy";
			squad = "ilcs";
		};
		class PHRP_Medic_Hardcase
		{
			model = "PHRP_Backpacks";
			role = "satchel";
			squad = "ilcs";
		};
		class PHRP_ANPRC_515
		{
			model = "PHRP_Backpacks";
			role = "PRC515";
			squad = "ilcs";
		};
		class PHRP_ANPRC_521
		{
			model = "PHRP_Backpacks";
			role = "PRC521";
			squad = "ilcs";
		};
		class PHRP_ILCS_Gunbag
		{
			model = "PHRP_Backpacks";
			role = "gunbagace";
			squad = "ilcs";
		};
		class PHRP_Rucksack
		{
			model = "PHRP_Backpacks";
			role = "basic";
			squad = "unsc";
		};
		class PHRP_Rucksack_Medical
		{
			model = "PHRP_Backpacks";
			role = "medic";
			squad = "unsc";
		};
		class PHRP_Rucksack_Heavy
		{
			model = "PHRP_Backpacks";
			role = "heavy";
			squad = "unsc";
		};
		class PHRP_Alpha_ILCS
		{
			model = "PHRP_Backpacks";
			role = "basic";
			squad = "alpha";
		};
		class PHRP_Alpha_ILCS_Corpsman
		{
			model = "PHRP_Backpacks";
			role = "medic";
			squad = "alpha";
		};
		class PHRP_Alpha_ILCS_Heavy
		{
			model = "PHRP_Backpacks";
			role = "heavy";
			squad = "alpha";
		};
		class PHRP_Alpha_ILCS_Gunbag
		{
			model = "PHRP_Backpacks";
			role = "gunbagace";
			squad = "alpha";
		};		
		class PHRP_Bravo_ILCS
		{
			model = "PHRP_Backpacks";
			role = "basic";
			squad = "bravo";
		};
		class PHRP_Bravo_ILCS_Corpsman
		{
			model = "PHRP_Backpacks";
			role = "medic";
			squad = "bravo";
		};
		class PHRP_Bravo_ILCS_Heavy
		{
			model = "PHRP_Backpacks";
			role = "heavy";
			squad = "bravo";
		};
		class PHRP_Bravo_ILCS_Gunbag
		{
			model = "PHRP_Backpacks";
			role = "gunbagace";
			squad = "bravo";
		};	
		class PHRP_Vulcan_ILCS
		{
			model = "PHRP_Backpacks";
			role = "basic";
			squad = "vulcan";
		};
		class PHRP_Vulcan_ILCS_Corpsman
		{
			model = "PHRP_Backpacks";
			role = "medic";
			squad = "vulcan";
		};
		class PHRP_Vulcan_ILCS_Heavy
		{
			model = "PHRP_Backpacks";
			role = "heavy";
			squad = "vulcan";
		};
		class PHRP_Vulcan_ILCS_Gunbag
		{
			model = "PHRP_Backpacks";
			role = "gunbagace";
			squad = "vulcan";
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
		maximumLoad = 350;
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
		maximumLoad = 400;
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
		maximumLoad = 375;
		mass = 50;
		hiddenSelections[] = {"camo1","AP_Heavy"};
		hiddenSelectionsTextures[] = {"PHGear\data\packs\rucksack_co.paa"};
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
		maximumLoad = 350;
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
		maximumLoad = 400;
	};
	class OPTRE_ONI_Researcher_Suitcase;
	class PHRP_Medic_Hardcase : OPTRE_ONI_Researcher_Suitcase
	{
		author = "VorpalHotdog";
		displayName = "Corpsman Hardcase";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"PHGear\data\packs\PHRP_Medic_Hardcase.paa"};
        maximumLoad = 300;
	};	
	class OPTRE_UNSC_Rucksack;
	class PHRP_Rucksack: OPTRE_UNSC_Rucksack
	{
		author = "Soldner";
		displayName = "PHRP UNSC Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 350;
		mass = 50;
		hiddenSelections[] = {"camo","camo2","B_Addons","B_Medic","B_Radio"};
		hiddenSelectionsTextures[] = {"PHGear\data\packs\soft_backpack_co.paa"};
	};
	class OPTRE_UNSC_Rucksack_Heavy;
	class PHRP_Rucksack_Heavy: OPTRE_UNSC_Rucksack_Heavy
	{
		author = "Soldner";
		displayName = "PHRP UNSC Heavy Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 400;
		mass = 50;
		hiddenSelections[] = {"camo","B_Medic","B_Radio"};
		hiddenSelectionsTextures[] = {"PHGear\data\packs\soft_backpack_co.paa"};
	};
	class OPTRE_UNSC_Rucksack_Medic;
	class PHRP_Rucksack_Medical: OPTRE_UNSC_Rucksack_Medic
	{
		author = "Soldner";
		displayName = "PHRP UNSC Corpsman Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 375;
		mass = 50;
		hiddenSelections[] = {"camo","B_Addons","B_Radio"};
		hiddenSelectionsTextures[] = {"PHGear\data\packs\soft_backpack_co.paa"};
	};
	class PHRP_Alpha_ILCS: PHRP_ILCS
	{
		displayName = "PHRP Alpha ILCS Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\rucksack_alpha_co.paa"};
	};
	class PHRP_Alpha_ILCS_Heavy: PHRP_ILCS_Heavy
	{
		displayName = "PHRP Alpha ILCS Heavy Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\rucksack_alpha_co.paa"};
	};
	class PHRP_Alpha_ILCS_Corpsman: PHRP_ILCS_Corpsman
	{
		displayName = "PHRP Alpha ILCS Corpsman Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\rucksack_alpha_co.paa"};
	};
	class PHRP_Bravo_ILCS: PHRP_ILCS
	{
		displayName = "PHRP Bravo ILCS Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\rucksack_bravo_co.paa"};
	};
	class PHRP_Bravo_ILCS_Heavy: PHRP_ILCS_Heavy
	{
		displayName = "PHRP Bravo ILCS Heavy Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\rucksack_bravo_co.paa"};
	};
	class PHRP_Bravo_ILCS_Corpsman: PHRP_ILCS_Corpsman
	{
		displayName = "PHRP Bravo ILCS Corpsman Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\rucksack_bravo_co.paa"};
	};
	class PHRP_Vulcan_ILCS: PHRP_ILCS
	{
		displayName = "PHRP Vulcan ILCS Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\vulcan_rucksack_co.paa"};
	};
	class PHRP_Vulcan_ILCS_Heavy: PHRP_ILCS_Heavy
	{
		displayName = "PHRP Vulcan ILCS Heavy Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\vulcan_rucksack_co.paa"};
	};
	class PHRP_Vulcan_ILCS_Corpsman: PHRP_ILCS_Corpsman
	{
		displayName = "PHRP Vulcan ILCS Corpsman Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\vulcan_rucksack_co.paa"};
	};
	class PHRP_ILCS_Gunbag : PHRP_ILCS
	{
		_generalMacro = "ace_gunbag_Tan";
		displayName = "PHRP ILCS Gunbag";
		maximumLoad = 130;
		ace_gunbag = 1;
	};
	class PHRP_Alpha_ILCS_Gunbag : PHRP_ILCS_Gunbag
	{
		displayName = "PHRP ILCS Alpha Gunbag";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\rucksack_alpha_co.paa"};
	};
	class PHRP_Bravo_ILCS_Gunbag : PHRP_ILCS_Gunbag
	{
		displayName = "PHRP ILCS Bravo Gunbag";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\rucksack_bravo_co.paa"};
	};
	class PHRP_Vulcan_ILCS_Gunbag : PHRP_ILCS_Gunbag
	{
		displayName = "PHRP ILCS Vulcan Gunbag";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\vulcan_rucksack_co.paa"};
	};
};