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
				values[] = {"raider","kaz","aturr","holland","erikson","buckley"};
				class raider
				{
					label = "Raider";
				};
				class kaz
				{
					label = "Kaz";
				};
				class aturr
				{
					label = "Aturr";
				};
				class holland
				{
					label = "Holland";
				};
				class erikson
				{
					label = "Erikson";
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
		class PHRP_raider_M56_Armor
		{
			model = "PHRP_Olympus_vests";
			role = "raider";
		};
		class PHRP_Kaz_M56R_Armor
		{
			model = "PHRP_Olympus_vests";
			role = "kaz";
		};
		class PHRP_Aturr_M56R_Armor
		{
			model = "PHRP_Olympus_vests";
			role = "aturr";
		};
		class PHRP_Holland_M56R_Armor
		{
			model = "PHRP_Olympus_vests";
			role = "holland";
		};
		class PHRP_Erikson_M56R_Armor
		{
			model = "PHRP_Olympus_vests";
			role = "erikson";
		};
		class PHRP_Buckley_M56R_Armor
		{
			model = "PHRP_Olympus_vests";
			role = "buckley";
		};
	};
};
