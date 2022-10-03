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
		class PHRP_Disciple_vests
		{
			label = "Disciple Vests";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Disciple Armors";
				values[] = {"Soldner","Pjetrovic"};
				class soldner
				{
					label = "Soldner";
					image = "";
				};
				class pjetrovic
				{
					label = "Pjetrovic";
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
			model = "PHRP_Disciple_vests";
			role = "Soldner";
		};
		class PHRP_Pjetrovic_Armor
		{
			model = "PHRP_Disciple_vests";
			role = "Pjetrovic";
		};
	};
};
