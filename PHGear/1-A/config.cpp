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
		class PHRP_oneA_vests
		{
			label = "1-A Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"burtovski","chopper","aturr","buckley"};
				class burtovski
				{
					label = "Burtovski";
				};
				class chopper
				{
					label = "Chopper";
				};
				class aturr
				{
					label = "Aturr";
				};
				class buckley
				{
					label = "Buckley";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Burtovski_Armor
		{
			model = "PHRP_oneA_vests";
			role = "burtovski";
		};
		class PHRP_chopper_Armor
		{
			model = "PHRP_oneA_vests";
			role = "chopper";
		};
		class PHRP_Aturr_Armor
		{
			model = "PHRP_oneA_vests";
			role = "aturr";
		};
		class PHRP_Buckley_Armor
		{
			model = "PHRP_oneA_vests";
			role = "buckley";
		};
	};
};
