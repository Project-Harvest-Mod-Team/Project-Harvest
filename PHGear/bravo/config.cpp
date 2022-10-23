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
				values[] = {"default","corpsman","wolf","richter","tinoco","chopper"};
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
				class wolf
				{
					label = "Wolf";
					image = "";
				};
				class richter
				{
					label = "Richter";
					image = "";
				};
				class tinoco
				{
					label = "Tinoco";
					image = "";
				};
				class chopper
				{
					label = "Chopper";
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
		class PHRP_Wolf_Armor
		{
			model = "PHRP_Bravo_vests";
			role = "wolf";
		};
		class PHRP_Richter_Armor
		{
			model = "PHRP_Bravo_vests";
			role = "richter";
		};
		class PHRP_Tinoco_Armor
		{
			model = "PHRP_Bravo_vests";
			role = "tinoco";
		};
		class PHRP_chopper_Armor
		{
			model = "PHRP_Bravo_vests";
			role = "chopper";
		};
	};
};
