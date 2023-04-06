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
				values[] = {"default","corpsman","erikson","presscott","buckley","jaeger","famous","griffith","miller","graves","samson"};
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
				class presscott
				{
					label = "Presscott";
				};
				class buckley
				{
					label = "Buckley";
				};
				class jaeger
				{
					label = "Jaeger";
				};
				class famous
				{
					label = "Famous";
				};
				class griffith
				{
					label = "Griffith";
				};
				class miller
				{
					label = "Miller";
				};
				class graves
				{
					label = "Graves";
				};
				class samson
				{
					label = "Samson";
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
		class PHRP_Miller_Armor
		{
			model = "PHRP_Alpha_vests";
			role = "miller";
		};
		class PHRP_Graves_Armor
		{
			model = "PHRP_Alpha_vests";
			role = "graves";
		};
		class PHRP_Samson_Armor
		{
			model = "PHRP_Alpha_vests";
			role = "samson";
		};
	};
};
