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
		class PHRP_Erebus_vests
		{
			label = "Erebus Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"soldner","kaz","holland","moon","pjetrovic"};
				class soldner
				{
					label = "Soldner";
				};
				class kaz
				{
					label = "Kaz";
				};
				class holland
				{
					label = "Holland";
				};
				class moon
				{
					label = "Moon";
				};
				class pjetrovic
				{
					label = "Pjetrovic";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Soldner_Armor
		{
			model = "PHRP_Erebus_vests";
			role = "soldner";
		};
		class PHRP_Kaz_Armor
		{
			model = "PHRP_Erebus_vests";
			role = "kaz";
		};
		class PHRP_Holland_Armor
		{
			model = "PHRP_Erebus_vests";
			role = "holland";
		};
		class PHRP_Moon_Armor
		{
			model = "PHRP_Erebus_vests";
			role = "moon";
		};
		class PHRP_Pjetrovic_Armor
		{
			model = "PHRP_Erebus_vests";
			role = "pjetrovic";
		};
	};
};
