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
		class PHRP_Bravo_vests
		{
			label = "Bravo Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Bravo Armors";
				values[] = {"default","corpsman","blackburn","angel","riot","stone","craven"};
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
				class angel
				{
					label = "Angel";
					image = "";
				};
				class blackburn
				{
					label = "Blackburn";
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
				class craven
				{
					label = "Craven";
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
		class PHRP_Bravo_Armor
		{
			model = "PHRP_Bravo_vests";
			role = "default";
		};
		class PHRP_Bravo_Medic_Armor
		{
			model = "PHRP_Bravo_vests";
			role = "corpsman";
		};
		class PHRP_Blackburn_Armor
		{
			model = "PHRP_Bravo_vests";
			role = "blackburn";
		};
		class PHRP_Angel_Armor
		{
			model = "PHRP_Bravo_vests";
			role = "angel";
		};
		class PHRP_Riot_Armor
		{
			model = "PHRP_Bravo_vests";
			role = "riot";
		};
		class PHRP_Stone_Armor
		{
			model = "PHRP_Bravo_vests";
			role = "stone";
		};
		/*class PHRP_Craven_Armor
		{
			model = "PHRP_Bravo_vests";
			role = "stone";
		};*/
	};
};
