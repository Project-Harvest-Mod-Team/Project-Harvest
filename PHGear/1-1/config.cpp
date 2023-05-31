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
		class PHRP_oneone_vests
		{
			label = "1-1 Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"default","corpsman","erikson","stone"};
				class default
				{
					label = "Default";
				};
				class corpsman
				{
					label = "Corpsman";
				};
				class erikson
				{
					label = "Erikson";
				};
				class stone
				{
					label = "Stone";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_oneone_Armor
		{
			model = "PHRP_oneone_vests";
			role = "default";
		};
		class PHRP_oneonemedic_Armor
		{
			model = "PHRP_oneone_vests";
			role = "corpsman";
		};
		class PHRP_Erikson_Armor
		{
			model = "PHRP_oneone_vests";
			role = "erikson";
		};
		class PHRP_Stone_Armor
		{
			model = "PHRP_oneone_vests";
			role = "stone";
		};
	};
};
