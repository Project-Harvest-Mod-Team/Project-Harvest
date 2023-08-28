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
		class PHRP_fleet_vests
		{
			label = "Fleet Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"moon","pjetrovic","burtovski"};
				class burtovski
				{
					label = "Burtovski";
				};
				class moon
				{
					label = "Moon";
				};
				class pjetrovic
				{
					label = "Pjetrovic";
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
			model = "PHRP_fleet_vests";
			role = "burtovski";
		};
		class PHRP_Moon_M56R_Armor
		{
			model = "PHRP_fleet_vests";
			role = "moon";
		};
		class PHRP_Pjetrovic_Armor
		{
			model = "PHRP_fleet_vests";
			role = "pjetrovic";
		};
	};
};
