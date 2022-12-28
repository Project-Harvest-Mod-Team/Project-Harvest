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
		class strigon_helmets
		{
			label = "Strigon Helmets";
			author = "Soldner";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"default","foulke"};
				class default
				{
					label = "Default";
				};
				class foulke
				{
					label = "Foulke";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Strigon_Helmet
		{
			role = "default";
			model = "strigon_helmets";
		};
		class PHRP_Foulke_Helmet
		{
			role = "foulke";
			model = "strigon_helmets";
		};
	};
};
class CfgWeapons
{
    class PHRP_Pilot_Helmet;
	class PHRP_Strigon_Helmet : PHRP_Pilot_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "Strigon Pilot Helmet";
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_strigon_co.paa"};
	};
	class PHRP_Foulke_Helmet : PHRP_Pilot_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "Foulke's Helmet";
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_foulke_co.paa"};
	};
};