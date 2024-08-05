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
		class PHRP_Reserve_vests
		{
			label = "Reserve Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Reserve Armors";
				values[] = {"recruit","owessel","griffith","kincaid","vasilev","chopper"};
				class recruit
				{
					label = "Recruit";
				};
				class owessel
				{
					label = "Owessel";
				};
				class griffith
				{
					label = "Griffith";
				};
				class kincaid
				{
					label = "Kincaid";
				};
				class chopper
				{
					label = "Chopper";
				};
				class vasilev
				{
					label = "Vasilev";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Recruit_M56_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "recruit";
		};
		class PHRP_Owessel_M56_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "owessel";
		};
		class PHRP_Griffith_M56R_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "griffith";
		};
		class PHRP_Kincaid_M56R_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "kincaid";
		};
		class PHRP_chopper_M56R_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "chopper";
		};
		class PHRP_Vasilev_M56R_Armor
		{
			model = "PHRP_Reserve_vests";
			role = "vasilev";
		};
	};
};
