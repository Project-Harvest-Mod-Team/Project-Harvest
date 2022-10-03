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
		class PHRP_Charlie_vests
		{
			label = "Charlie Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"default","corpsman","morgenstern","owessel"};
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
				class morgenstern
				{
					label = "Morgenstern";
					image = "";
				};
				class owessel
				{
					label = "Owessel";
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
		class PHRP_Charlie_Armor
		{
			model = "PHRP_Charlie_vests";
			role = "default";
		};
		class PHRP_Charlie_Medic_Armor
		{
			model = "PHRP_Charlie_vests";
			role = "corpsman";
		};
		class PHRP_Morgenstern_Armor
		{
			model = "PHRP_Charlie_vests";
			role = "morgenstern";
		};
		class PHRP_Owessel_Armor
		{
			model = "PHRP_Charlie_vests";
			role = "owessel";
		};
	};
};
