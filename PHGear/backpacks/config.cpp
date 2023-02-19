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
			label = "Type of Backpack";
			author = "Project Harvest Mod Team";
			options[] = {"role","squad"};
			class role
			{
				alwaysSelectable = 1;
				label = "Gladius Backpacks";
				values[] = {"ILCS_Basic","ILCS_Medic","ILCS_Heavy","medic_hardcase","PRC515","PRC521"};
				class ILCS_Basic
				{
					label = "ILCS";
					image = "";
				};
				class ILCS_Medic
				{
					label = "Corpsman";
					image = "";
				};
				class ILCS_Heavy
				{
					label = "Heavy";
					image = "";
				};
				class medic_hardcase
				{
					label = "Hardcase";
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
			};
			class squad
			{
				alwaysSelectable = 1;
				label = "Squad";
				values[] = {"default"};
				class default
				{
					label = "Default";
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
			role = "ILCS_Basic";
			squad = "default";
		};
		class PHRP_ILCS_Corpsman
		{
			model = "PHRP_Backpacks";
			role = "ILCS_Medic";
			squad = "default";
		};
		class PHRP_ILCS_Heavy
		{
			model = "PHRP_Backpacks";
			role = "ILCS_Heavy";
			squad = "default";
		};
		class PHRP_Medic_Hardcase
		{
			model = "PHRP_Backpacks";
			role = "medic_hardcase";
			squad = "default";
		};
		class PHRP_ANPRC_515
		{
			model = "PHRP_Backpacks";
			role = "PRC515";
			squad = "default";
		};
		class PHRP_ANPRC_521
		{
			model = "PHRP_Backpacks";
			role = "PRC521";
			squad = "default";
		};
	};
};