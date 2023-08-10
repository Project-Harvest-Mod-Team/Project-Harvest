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
		class PHRP_Olympus_vests
		{
			label = "Olympus Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"soldner","kaz","tepfer","aturr","holland"};
				class soldner
				{
					label = "Soldner";
				};
				class kaz
				{
					label = "Kaz";
				};
				class tepfer
				{
					label = "Tepfer";
				};
				class aturr
				{
					label = "Aturr";
				};
				class holland
				{
					label = "Holland";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Soldner_M56R_Armor
		{
			model = "PHRP_Olympus_vests";
			role = "soldner";
		};
		class PHRP_Kaz_M56R_Armor
		{
			model = "PHRP_Olympus_vests";
			role = "kaz";
		};
		class PHRP_Tepfer_Armor
		{
			model = "PHRP_Olympus_vests";
			role = "tepfer";
		};
		class PHRP_Aturr_Armor
		{
			model = "PHRP_Olympus_vests";
			role = "aturr";
		};
		class PHRP_Holland_Armor
		{
			model = "PHRP_Olympus_vests";
			role = "holland";
		};
	};
};
