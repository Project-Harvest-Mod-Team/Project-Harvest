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
	class CfgVehicles
	{
		class PHRP_Backpacks
		{
			label = "Gladius Backpacks";
			author = "Project Harvest Mod Team";
			options[] = {"role"};
			class role
			{
				class medic_hardcase
				{
					label = "Corpsman Hardcase";
					image = "";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgVehicles
	{
		class PHRP_Medic_Hardcase
		{
			model = "PHRP_Base_Hardcase";
			role = "medic_hardcase";
		};
	};
};