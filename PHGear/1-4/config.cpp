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
				values[] = {"default","corpsman","presscott","griffith","lark"};
				class default
				{
					label = "Default";
				};
				class corpsman
				{
					label = "Corpsman";
				};
				class presscott
				{
					label = "Presscott";
				};
				class griffith
				{
					label = "Griffith";
				};
				class lark
				{
					label = "Lark";
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
		class PHRP_Presscott_Armor
		{
			model = "PHRP_onefour_vests";
			role = "presscott";
		};
		class PHRP_Griffith_Armor
		{
			model = "PHRP_onefour_vests";
			role = "griffith";
		};
		class PHRP_Lark_Armor
		{
			model = "PHRP_onefour_vests";
			role = "lark";
		};
	};
};
