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
		class PHRP_Delta_vests
		{
			label = "Delta Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Delta Armors";
				values[] = {"default","corpsman","raider","morgenstern","riot","stone"};
				class default
				{
					label = "Default";
					image = "";
				};
				class corpsman
				{
					label = "Corpsman";
					image = "";
				};
				class raider
				{
					label = "Raider";
					image = "";
				};
				class morgenstern
				{
					label = "Morg";
					image = "";
				};
				class riot
				{
					label = "Riot";
					image = "";
				};
				class stone
				{
					label = "Stone";
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
		class PHRP_Delta_Armor
		{
			model = "PHRP_Delta_vests";
			role = "default";
		};
		class PHRP_Delta_Medic_Armor
		{
			model = "PHRP_Delta_vests";
			role = "corpsman";
		};
		class PHRP_Raider_Armor
		{
			model = "PHRP_Delta_vests";
			role = "raider";
		};
		class PHRP_Morgenstern_Armor
		{
			model = "PHRP_Delta_vests";
			role = "morgenstern";
		};
		class PHRP_Riot_Armor
		{
			model = "PHRP_Delta_vests";
			role = "riot";
		};
		class PHRP_Stone_Armor
		{
			model = "PHRP_Delta_vests";
			role = "stone";
		};
	};
};
