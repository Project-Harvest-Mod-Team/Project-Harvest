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
				values[] = {"basic","medic","radio","satchel","PRC515","PRC521","gunbagace"};
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
				class radio
				{
					label = "Radio";
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
				values[] = {"ilcs","unsc","olympus","oneone","onetwo","onethree","onefour"};
				class ilcs
				{
					label = "ODST";
				};
				class unsc
				{
					label = "Marine";
				};
				class olympus
				{
					label = "Olympus"
				};
				class oneone
				{
					label = "1-1";
				};
				class onetwo
				{
					label = "1-2";
				};
				class onethree
				{
					label = "1-3";
				};
				class onefour
				{
					label = "1-4";
				};
			};
		};
	};
};

class XtdGearInfos
{
	class CfgVehicles
	{
		class PHRP_M56_ILCS
		{
			model = "PHRP_Backpacks";
			role = "basic";
			squad = "ilcs";
		};
		class PHRP_M56_ILCS_Corpsman
		{
			model = "PHRP_Backpacks";
			role = "medic";
			squad = "ilcs";
		};
		class PHRP_M56_ILCS_Radio
		{
			model = "PHRP_Backpacks";
			role = "radio";
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
		class PHRP_M56_ILCS_Gunbag
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
		class PHRP_Olympus_ILCS
		{
			model = "PHRP_Backpacks";
			role = "basic";
			squad = "olympus";
		};
		class PHRP_Olympus_ILCS_Corpsman
		{
			model = "PHRP_Backpacks";
			role = "medic";
			squad = "olympus";
		};
		class PHRP_Olympus_ILCS_Radio
		{
			model = "PHRP_Backpacks";
			role = "radio";
			squad = "olympus";
		};
		class PHRP_Olympus_ILCS_Gunbag
		{
			model = "PHRP_Backpacks";
			role = "gunbagace";
			squad = "olympus";
		};
		class PHRP_ANPRC_521_Holland
		{
			model = "PHRP_Backpacks";
			role = "PRC521";
			squad = "olympus";
		};
		class PHRP_oneone_ILCS
		{
			model = "PHRP_Backpacks";
			role = "basic";
			squad = "oneone";
		};
		class PHRP_oneone_ILCS_Corpsman
		{
			model = "PHRP_Backpacks";
			role = "medic";
			squad = "oneone";
		};
		class PHRP_oneone_ILCS_Radio
		{
			model = "PHRP_Backpacks";
			role = "radio";
			squad = "oneone";
		};
		class PHRP_oneone_ILCS_Gunbag
		{
			model = "PHRP_Backpacks";
			role = "gunbagace";
			squad = "oneone";
		};
		class PHRP_onetwo_ILCS
		{
			model = "PHRP_Backpacks";
			role = "basic";
			squad = "onetwo";
		};
		class PHRP_onetwo_ILCS_Corpsman
		{
			model = "PHRP_Backpacks";
			role = "medic";
			squad = "onetwo";
		};
		class PHRP_onetwo_ILCS_Radio
		{
			model = "PHRP_Backpacks";
			role = "radio";
			squad = "onetwo";
		};
		class PHRP_onetwo_ILCS_Gunbag
		{
			model = "PHRP_Backpacks";
			role = "gunbagace";
			squad = "onetwo";
		};
		class PHRP_onethree_ILCS
		{
			model = "PHRP_Backpacks";
			role = "basic";
			squad = "onethree";
		};
		class PHRP_onethree_ILCS_Corpsman
		{
			model = "PHRP_Backpacks";
			role = "medic";
			squad = "onethree";
		};
		class PHRP_onethree_ILCS_Radio
		{
			model = "PHRP_Backpacks";
			role = "radio";
			squad = "onethree";
		};
		class PHRP_onethree_ILCS_Gunbag
		{
			model = "PHRP_Backpacks";
			role = "gunbagace";
			squad = "onethree";
		};
		class PHRP_onefour_ILCS
		{
			model = "PHRP_Backpacks";
			role = "basic";
			squad = "onefour";
		};
		class PHRP_onefour_ILCS_Corpsman
		{
			model = "PHRP_Backpacks";
			role = "medic";
			squad = "onefour";
		};
		class PHRP_onefour_ILCS_Radio
		{
			model = "PHRP_Backpacks";
			role = "radio";
			squad = "onefour";
		};
		class PHRP_onefour_ILCS_Gunbag
		{
			model = "PHRP_Backpacks";
			role = "gunbagace";
			squad = "onefour";
		};
	};
};

class CfgVehicles
{
	//RTO Bags
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
		maximumLoad = 400;
	};
	class OPTRE_ANPRC_521_green;
	class PHRP_ANPRC_521: OPTRE_ANPRC_521_green
	{
		author = "Soldner";
		displayName = "[PHRP] ILCS AN/PRC-521";
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
	class PHRP_ANPRC_521_Holland: OPTRE_ANPRC_521_green
	{
		author = "Holland";
		displayName = "[PHRP] Holland's ILCS AN/PRC-521";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = {"PHGear\data\packs\soft_backpack_co.paa","PHGear\data\packs\holland_prc521_co.paa"};
		tf_isolatedAmount = 0.65;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 120000;
		tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		maximumLoad = 400;
	};

	//Medic Hardcase
	class OPTRE_ONI_Researcher_Suitcase;
	class PHRP_Medic_Hardcase : OPTRE_ONI_Researcher_Suitcase
	{
		author = "VorpalHotdog";
		displayName = "[PHRP] Corpsman Hardcase";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"PHGear\data\packs\PHRP_Medic_Hardcase.paa"};
        maximumLoad = 300;
	};

	//Marine Rucksack	
	class OPTRE_UNSC_Rucksack;
	class PHRP_Rucksack: OPTRE_UNSC_Rucksack
	{
		author = "Soldner";
		displayName = "[PHRP] UNSC Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 400;
		mass = 50;
		hiddenSelections[] = {"camo","camo2","B_Addons","B_Medic","B_Radio"};
		hiddenSelectionsTextures[] = {"PHGear\data\packs\soft_backpack_co.paa"};
	};
	class OPTRE_UNSC_Rucksack_Heavy;
	class PHRP_Rucksack_Heavy: OPTRE_UNSC_Rucksack_Heavy
	{
		author = "Soldner";
		displayName = "[PHRP] UNSC Heavy Rucksack";
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
		displayName = "[PHRP] UNSC Corpsman Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 400;
		mass = 50;
		hiddenSelections[] = {"camo","B_Addons","B_Radio"};
		hiddenSelectionsTextures[] = {"PHGear\data\packs\soft_backpack_co.paa"};
	};

	//m56
	class MA_M56S_Rucksack;
	class PHRP_M56_ILCS: MA_M56S_Rucksack
	{
		author = "Soldner";
		displayName = "[PHRP] M56 ILCS Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 400;
		mass = 50;
		hiddenSelections[] = {"camo1","camo2","Radio"};
		hiddenSelectionsTextures[] = {"MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_M56_ILCS_Corpsman : MA_M56S_Rucksack
	{
		author = "Soldner";
		displayName = "[PHRP] M56 Corpsman ILCS Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 400;
		mass = 50;
		hiddenSelections[] = {"camo1","camo2","Radio"};
		hiddenSelectionsTextures[] = {"MA_Armor\data\Backpacks\ODST_Rucksack\Medical_ODST_Ruck_co.paa.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_M56_ILCS_Radio: MA_M56S_Rucksack
	{
		author = "Soldner";
		displayName = "[PHRP] M56 ILCS Radio Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 400;
		mass = 50;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_M56_ILCS_Gunbag : PHRP_M56_ILCS
	{
		_generalMacro = "ace_gunbag_Tan";
		displayName = "[PHRP] M56 ILCS Gunbag";
		maximumLoad = 250;
		ace_gunbag = 1;
	};
	class PHRP_Olympus_ILCS: PHRP_M56_ILCS
	{
		displayName = "[PHRP] M56 ILCS Olympus Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\olympus_ODST_Ruck_Co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_Olympus_ILCS_Radio: PHRP_M56_ILCS_Radio
	{
		displayName = "[PHRP] M56 ILCS Olympus Radio Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\olympus_ODST_Ruck_Co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_Olympus_ILCS_Corpsman: PHRP_M56_ILCS_Corpsman
	{
		displayName = "[PHRP] M56 ILCS Olympus Corpsman Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\olympuscorpsman_ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_Olympus_ILCS_Gunbag : PHRP_M56_ILCS_Gunbag
	{
		displayName = "[PHRP] M56 ILCS Olympus Gunbag";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\olympus_ODST_Ruck_Co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_oneone_ILCS: PHRP_M56_ILCS
	{
		displayName = "[PHRP] M56 1-1 ILCS Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\oneone_ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_oneone_ILCS_Radio: PHRP_M56_ILCS_Radio
	{
		displayName = "[PHRP] M56 1-1 ILCS Radio Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\oneone_ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_oneone_ILCS_Corpsman: PHRP_M56_ILCS_Corpsman
	{
		displayName = "[PHRP] M56 1-1 ILCS Corpsman Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\oneonecorpsman_ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_oneone_ILCS_Gunbag : PHRP_M56_ILCS_Gunbag
	{
		displayName = "[PHRP] M56 ILCS 1-1 Gunbag";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\oneone_ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_onetwo_ILCS: PHRP_M56_ILCS
	{
		displayName = "[PHRP] M56 1-2 ILCS Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\onetwo_ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_onetwo_ILCS_Radio: PHRP_M56_ILCS_Radio
	{
		displayName = "[PHRP] M56 1-2 ILCS Radio Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\onetwo_ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_onetwo_ILCS_Corpsman: PHRP_M56_ILCS_Corpsman
	{
		displayName = "[PHRP] M56 1-2 ILCS Corpsman Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\onetwocorpsman_ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_onetwo_ILCS_Gunbag : PHRP_M56_ILCS_Gunbag
	{
		displayName = "[PHRP] M56 ILCS 1-2 Gunbag";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\onetwo_ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_onethree_ILCS: PHRP_M56_ILCS
	{
		displayName = "[PHRP] M56 1-3 ILCS Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\onethree_ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_onethree_ILCS_Radio: PHRP_M56_ILCS_Radio
	{
		displayName = "[PHRP] M56 1-3 ILCS Radio Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\onethree_ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_onethree_ILCS_Corpsman: PHRP_M56_ILCS_Corpsman
	{
		displayName = "[PHRP] M56 1-3 ILCS Corpsman Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\onethreecorpsman_ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_onethree_ILCS_Gunbag : PHRP_M56_ILCS_Gunbag
	{
		displayName = "[PHRP] M56 ILCS 1-3 Gunbag";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\onethree_ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_onefour_ILCS: PHRP_M56_ILCS
	{
		displayName = "[PHRP] M56 1-4 ILCS Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\onefour_ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_onefour_ILCS_Radio: PHRP_M56_ILCS_Radio
	{
		displayName = "[PHRP] M56 1-4 ILCS Radio Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\onefour_ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_onefour_ILCS_Corpsman: PHRP_M56_ILCS_Corpsman
	{
		displayName = "[PHRP] M56 1-4 ILCS Corpsman Rucksack";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\onefourcorpsman_ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_onefour_ILCS_Gunbag : PHRP_M56_ILCS_Gunbag
	{
		displayName = "[PHRP] M56 ILCS 1-4 Gunbag";
		hiddenSelectionsTextures[] = {"PHGear\data\packs\onefour_ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
};