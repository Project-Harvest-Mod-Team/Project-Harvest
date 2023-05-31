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
		class PHRP_onetwo_vests
		{
			label = "1-2 Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"default","corpsman","blackburn","graves"};
				class default
				{
					label = "Default";
				};
				class corpsman
				{
					label = "Corpsman";
				};
				class blackburn
				{
					label = "Blackburn";
				};
				class graves
				{
					label = "Graves";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_onetwo_Armor
		{
			model = "PHRP_onetwo_vests";
			role = "default";
		};
		class PHRP_onetwomedic_Armor
		{
			model = "PHRP_onetwo_vests";
			role = "corpsman";
		};
		class PHRP_Blackburn_Armor
		{
			model = "PHRP_onetwo_vests";
			role = "blackburn";
		};
		class PHRP_Graves_Armor
		{
			model = "PHRP_onetwo_vests";
			role = "graves";
		};
	};
};
