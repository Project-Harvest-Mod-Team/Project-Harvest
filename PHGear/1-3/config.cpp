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
		class PHRP_onethree_vests
		{
			label = "1-3 Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"default","corpsman","buckley","griffith","riot"};
				class default
				{
					label = "Default";
				};
				class corpsman
				{
					label = "Corpsman";
				};
				class buckley
				{
					label = "Buckley";
				};
				class griffith
				{
					label = "Griffith";
				};
				class riot
				{
					label = "Riot";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_onethree_Armor
		{
			model = "PHRP_onethree_vests";
			role = "default";
		};
		class PHRP_onethreemedic_Armor
		{
			model = "PHRP_onethree_vests";
			role = "corpsman";
		};
		class PHRP_Buckley_Armor
		{
			model = "PHRP_onethree_vests";
			role = "buckley";
		};
		class PHRP_Griffith_Armor
		{
			model = "PHRP_onethree_vests";
			role = "griffith";
		};
		class PHRP_Riot_Armor
		{
			model = "PHRP_onethree_vests";
			role = "riot";
		};
	};
};
