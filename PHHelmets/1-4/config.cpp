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
		class PHRP_onefour_helmets
		{
			label = "1-4 Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"default","presscott","griffith"};
				class default
				{
					label = "Default";
				};
				class presscott
				{
					label = "Presscott";
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
		class PHRP_onefour_ODST_Helmet
		{
			role = "default";
			model = "PHRP_onefour_helmets";
		};
		class PHRP_Presscott_ODST_Helmet
		{
			role = "presscott";
			model = "PHRP_onefour_helmets";
		};
		class PHRP_Griffith_ODST_Helmet
		{
			role = "griffith";
			model = "PHRP_onefour_helmets";
		};
	};
};
class CfgWeapons
{
    class PHRP_Base_ODST_Helmet;
	class PHRP_Base_Recon_Helmet;
	class PHRP_Base_Scout_Helmet;
	class PHRP_onefour_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "CH252D Helmet 1-4";
		hiddenSelections[] = {"camo","camo2","H_Ghillie"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_onefourbase_co.paa","PHHelmets\data\helmets\customvisor_base_co.paa"};
	};
	class PHRP_Presscott_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "VorpalHotdog";
		displayName = "CH252D Helmet (Presscott)";
		hiddenSelections[] = {"camo","camo2","H_Ghillie"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_presscott_co.paa","PHHelmets\data\helmets\customvisor_buckley_co.paa"};
	};
	class PHRP_Griffith_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "VibingVampire";
		displayName = "CH252D Helmet (Griffith)";
		hiddenSelections[] = {"camo","camo2","H_Ghillie"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_griffith_co.paa","PHHelmets\data\helmets\customvisor_griffith_co.paa"};
	};
};