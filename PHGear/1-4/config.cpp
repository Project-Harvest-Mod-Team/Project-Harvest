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
		class PHRP_onefour_vests
		{
			label = "1-4 Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"default","corpsman","vanderclutch","samson","kincaid"};
				class default
				{
					label = "Default";
				};
				class corpsman
				{
					label = "Corpsman";
				};
				class vanderclutch
				{
					label = "Vandy";
				};
				class samson
				{
					label = "Samson";
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
		class PHRP_onefour_Armor
		{
			model = "PHRP_onefour_vests";
			role = "default";
		};
		class PHRP_onefourmedic_Armor
		{
			model = "PHRP_onefour_vests";
			role = "corpsman";
		};
		class PHRP_Vanderclutch_Armor
		{
			model = "PHRP_onefour_vests";
			role = "vanderclutch";
		};
		class PHRP_Samson_Armor
		{
			model = "PHRP_onefour_vests";
			role = "samson";
		};
		class PHRP_Kincaid_Armor
		{
			model = "PHRP_onefour_vests";
			role = "kincaid";
		};
	};
};
