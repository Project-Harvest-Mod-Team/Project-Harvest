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
		class PHRP_twoone_vests
		{
			label = "2-1 Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"default","corpsman","kaker","wolf","kincaid"};
				class default
				{
					label = "Default";
				};
				class corpsman
				{
					label = "Corpsman";
				};
				class kaker
				{
					label = "Kaker";
				};
				class wolf
				{
					label = "Wolf";
				};
				class kincaid
				{
					label = "Kincaid";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_twoone_Armor
		{
			model = "PHRP_twoone_vests";
			role = "default";
		};
		class PHRP_twoonemedic_Armor
		{
			model = "PHRP_twoone_vests";
			role = "corpsman";
		}; 
		class PHRP_Kaker_Armor
		{
			model = "PHRP_twoone_vests";
			role = "kaker";
		};
		class PHRP_Wolf_Armor
		{
			model = "PHRP_twoone_vests";
			role = "wolf";
		};
		class PHRP_Kincaid_Armor
		{
			model = "PHRP_twoone_vests";
			role = "kincaid";
		};
	};
};
