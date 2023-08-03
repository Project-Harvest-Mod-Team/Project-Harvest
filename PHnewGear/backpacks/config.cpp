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

/*class XtdGearModels
{
	class CamoBase;
	class CfgVehicles
	{
		class PHRP_M56_Backpacks
		{
			label = "Gladius M56 Packs";
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
				values[] = {"ilcs"};
				class ilcs
				{
					label = "ODST";
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
		class PHRP_ILCS_Gunbag
		{
			model = "PHRP_Backpacks";
			role = "gunbagace";
			squad = "ilcs";
		};
	};
};*/

class CfgVehicles
{
	class MA_M56S_Rucksack;
	class PHRP_M56_ILCS: MA_M56S_Rucksack
	{
		author = "Soldner";
		displayName = "[PHRP] M56 ILCS Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 350;
		mass = 50;
		hiddenSelections[] = {"camo1","camo2","Radio"};
		hiddenSelectionsTextures[] = {"MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_M56_ILCS_Heavy: MA_M56S_Rucksack
	{
		author = "Soldner";
		displayName = "[PHRP] M56 ILCS Radio Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 400;
		mass = 50;
		hiddenSelections[] = {"camo1","camo2","Radio"};
		hiddenSelectionsTextures[] = {"MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_M56_ILCS_Corpsman: MA_M56S_Rucksack
	{
		author = "Soldner";
		displayName = "[PHRP] M56 ILCS Corpsman Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 375;
		mass = 50;
		hiddenSelections[] = {"camo1","camo2","Radio"};
		hiddenSelectionsTextures[] = {"MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class PHRP_M56_ILCS_Gunbag : PHRP_M56_ILCS
	{
		_generalMacro = "ace_gunbag_Tan";
		displayName = "[PHRP] M56 ILCS Gunbag";
		maximumLoad = 250;
		ace_gunbag = 1;
	};
};