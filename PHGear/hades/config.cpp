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
		class PHRP_Hades_vests
		{
			label = "Hades Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Hades Armors";
				values[] = {"moon","kaz","vanderclutch"};
				class moon
				{
					label = "Moon";
					image = "";
				};
				class kaz
				{
					label = "Kaz";
					image = "";
				};
				class vanderclutch
				{
					label = "Vanderclutch";
					image = "";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Moon_Armor
		{
			model = "PHRP_Hades_vests";
			role = "moon";
		};
		class PHRP_Kaz_Armor
		{
			model = "PHRP_Hades_vests";
			role = "kaz";
		};
		class PHRP_Vanderclutch_Armor
		{
			model = "PHRP_Hades_vests";
			role = "vanderclutch";
		};
	};
};
