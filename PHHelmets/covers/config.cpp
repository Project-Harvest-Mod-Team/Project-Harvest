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
		class gladius_covers
		{
			label = "Gladius Covers";
			author = "VorpalHotdog";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"beret","boonie","patrol"};
				class beret
				{
					label = "Beret";
				};
				class boonie
				{
					label = "Boonie";
				};
				class patrol
				{
					label = "Patrol";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Gladius_Beret
		{
			role = "beret";
			model = "gladius_covers";
		};
		class PHRP_Gladius_Boonie
		{
			role = "boonie";
			model = "strigon_helmets";
		};
		class PHRP_Gladius_Patrol
		{
			role = "patrol";
			model = "strigon_helmets";
		};
	};
};
class CfgWeapons
{
    class PHRP_Base_Beret;
	class PHRP_Gladius_Beret : PHRP_Base_Beret
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "VorpalHotdog";
		displayName = "Gladius Beret";
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\headgear_gladiusberet_co.paa"};
	};
};