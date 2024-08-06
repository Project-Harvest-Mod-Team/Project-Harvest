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
		class PHRP_hades_vests
		{
			label = "Hades Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"moon","kaz","buckley","payne","wolf","ramirez"};
				class moon
				{
					label = "Moon";
				};
				class kaz
				{
					label = "Kaz";
				};
				class buckley
				{
					label = "Buckley";
				};
				class payne
				{
					label = "Payne";
				};
				class wolf
				{
					label = "Wolf";
				};
				class ramirez
				{
					label = "Ramirez";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Moon_M56R_Armor
		{
			model = "PHRP_hades_vests";
			role = "moon";
		};
		class PHRP_Kaz_M56R_Armor
		{
			model = "PHRP_hades_vests";
			role = "kaz";
		};
		class PHRP_Buckley_M56R_Armor
		{
			model = "PHRP_hades_vests";
			role = "buckley";
		};
		class PHRP_Payne_M56R_Armor
		{
			model = "PHRP_hades_vests";
			role = "payne";
		};
		class PHRP_Wolf_M56R_Armor
		{
			model = "PHRP_hades_vests";
			role = "wolf";
		};
		class PHRP_Ramirez_M56R_Armor
		{
			model = "PHRP_hades_vests";
			role = "ramirez";
		};
	};
};
