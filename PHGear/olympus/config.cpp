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
		class PHRP_Olympus_vests
		{
			label = "Olympus Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Olympus Armors";
				values[] = {"soldner","pjetrovic","burtovski","holland","raider"};
				class soldner
				{
					label = "Soldner";
					image = "";
				};
				class burtovski
				{
					label = "Burtovski";
					image = "";
				};
				class pjetrovic
				{
					label = "Pjetrovic";
					image = "";
				};
				class raider
				{
					label = "Raider";
					image = "";
				};
				class holland
				{
					label = "Holland";
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
		class PHRP_Soldner_Armor
		{
			model = "PHRP_Olympus_vests";
			role = "soldner";
		};
		class PHRP_Burtovski_Armor
		{
			model = "PHRP_Olympus_vests";
			role = "burtovski";
		};
		class PHRP_Pjetrovic_Armor
		{
			model = "PHRP_Olympus_vests";
			role = "pjetrovic";
		};
		class PHRP_Holland_Armor
		{
			model = "PHRP_Olympus_vests";
			role = "holland";
		};
		class PHRP_Raider_Armor
		{
			model = "PHRP_Olympus_vests";
			role = "raider";
		};
	};
};
