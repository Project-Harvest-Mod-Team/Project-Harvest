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
		class alpha_helmets
		{
			label = "Alpha Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"default","raider","holland","riot","mischa","owessel","kaker"};
				class default
				{
					label = "Default";
				};
				class raider
				{
					label = "Raider";
				};
				class holland
				{
					label = "Holland";
				};
				class riot
				{
					label = "Riot";
				};
				class mischa
				{
					label = "Mischa";
				};
				class owessel
				{
					label = "Owessel";
				};
				class kaker
				{
					label = "Kaker";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Alpha_ODST_Helmet
		{
			role = "default";
			model = "alpha_helmets";
		};
		class PHRP_Raider_Commando_Helmet
		{
			role = "raider";
			model = "alpha_helmets";
		};
		class PHRP_Holland_ODST_Helmet
		{
			role = "holland";
			model = "alpha_helmets";
		};
		class PHRP_Riot_ODST_Helmet
		{
			role = "riot";
			model = "alpha_helmets";
		};
		class PHRP_Mischa_ODST_Helmet
		{
			role = "mischa";
			model = "alpha_helmets";
		};
		class PHRP_Owessel_ODST_Helmet
		{
			role = "owessel";
			model = "alpha_helmets";
		};
		class PHRP_Kaker_ODST_Helmet
		{
			role = "kaker";
			model = "alpha_helmets";
		};
	};
};
class CfgWeapons
{
    class PHRP_Base_ODST_Helmet;
	class OPTRE_UNSC_Commando_Helmet;
	class PHRP_Alpha_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet - Alpha";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_alphabase_co.paa","PHHelmets\data\helmets\customvisor_base_co.paa"};
	};
	class PHRP_Raider_Commando_Helmet : OPTRE_UNSC_Commando_Helmet
	{
		dlc = "Project Harvest Armory";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Mark V/K Helmet (Raider)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_raider_co.paa","PHHelmets\data\helmets\customvisor_moon_co.paa"};
	};
	class PHRP_Holland_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Holland)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_holland_co.paa","PHHelmets\data\helmets\customvisor_holland_co.paa"};
	};
	class PHRP_Riot_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Riot)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_riot_co.paa","PHHelmets\data\helmets\customvisor_riot_co.paa"};
	};
	class PHRP_Mischa_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Mischa)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_mischa_co.paa","PHHelmets\data\helmets\customvisor_base_co.paa"};
	};
	class PHRP_Owessel_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Owessel)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_owessel_co.paa","PHHelmets\data\helmets\customvisor_owessel_co.paa"};
	};
	class PHRP_Kaker_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Kaker)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_kaker_co.paa","PHHelmets\data\helmets\customvisor_kaker_co.paa"};
	};	
};