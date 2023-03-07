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
		class PHRP_Alpha_vests
		{
			label = "Alpha Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"default","corpsman","erikson","presscott","buckley","jaeger","famous","griffith"};
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
				class erikson
				{
					label = "Erikson";
					image = "";
				};
				class presscott
				{
					label = "Presscott";
					image = "";
				};
				class buckley
				{
					label = "Buckley";
					image = "";
				};
				class jaeger
				{
					label = "Jaeger";
					image = "";
				};
				class famous
				{
					label = "Famous";
					image = "";
				};
				class griffith
				{
					label = "Griffith";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Alpha_Armor
		{
			model = "PHRP_Alpha_vests";
			role = "default";
		};
		class PHRP_Alpha_Medic_Armor
		{
			model = "PHRP_Alpha_vests";
			role = "corpsman";
		};
		class PHRP_Erikson_Armor
		{
			model = "PHRP_Alpha_vests";
			role = "erikson";
		};
		class PHRP_Presscott_Armor
		{
			model = "PHRP_Alpha_vests";
			role = "presscott";
		};
		class PHRP_Buckley_Armor
		{
			model = "PHRP_Alpha_vests";
			role = "buckley";
		}
		class PHRP_Jaeger_Armor
		{
			model = "PHRP_Alpha_vests";
			role = "jaeger";
		};
		class PHRP_Famous_Armor
		{
			model = "PHRP_Alpha_vests";
			role = "famous";
		};
		class PHRP_Griffith_Armor
		{
			model = "PHRP_Alpha_vests";
			role = "griffith";
		};
	};
};
