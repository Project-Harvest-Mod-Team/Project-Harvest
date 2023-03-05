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
		class PHRP_reservist_helmets
		{
			label = "Reservist Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"recruit","reserve","collins","ansley","carter","tinoco","carsten","mischa","wilson","chopper","raider"};
				class recruit
				{
					label = "Recruit";
				};
				class reserve
				{
					label = "Reserve";
				};
				class collins
				{
					label = "Collins";
				};
				class ansley
				{
					label = "Ansley";
				};
				class carter
				{
					label = "Carter";
				};
				class tinoco
				{
					label = "Tinoco";
				};
				class carsten
				{
					label = "Carsten";
				};
				class mischa
				{
					label = "Mischa";
				};
				class wilson
				{
					label = "Wilson";
				};
				class chopper
				{
					label = "Chopper";
				};
				class raider
				{
					label = "Raider";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Recruit_ODST_Helmet
		{
			role = "recruit";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Reserve_ODST_Helmet
		{
			role = "reserve";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Collins_ODST_Helmet
		{
			role = "collins";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Ansley_ODST_Helmet
		{
			role = "ansley";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Carter_Commando_Helmet
		{
			role = "carter";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Tinoco_ODST_Helmet
		{
			role = "tinoco";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Carsten_ODST_Helmet
		{
			role = "carsten";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Mischa_ODST_Helmet
		{
			role = "mischa";
			model = "PHRP_reservist_helmets";
		};		
		class PHRP_Wilson_CQC_Helmet
		{
			role = "wilson";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Chopper_EOD_Helmet
		{
			role = "chopper";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Raider_Commando_Helmet
		{
			role = "raider";
			model = "PHRP_reservist_helmets";
		};
	};
};
class CfgWeapons
{
    class PHRP_Base_ODST_Helmet;
	class PHRP_Base_Commando_Helmet;
	class PHRP_Base_HRPilot_Helmet;
	class PHRP_Base_CQC_Helmet;
	class PHRP_Base_EOD_Helmet;
	class PHRP_Recruit_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "VibingVampire";
		displayName = "CH252D Helmet - Recruit";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_gladius_co.paa","PHHelmets\data\helmets\customvisor_gladius_co.paa"};
	};
	class PHRP_Reserve_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "VibingVampire";
		displayName = "CH252D Helmet - Reserve";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_gladiusred_co.paa","PHHelmets\data\helmets\customvisor_gladiusred_co.paa"};
	};
	class PHRP_Collins_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "It is Luna";
		displayName = "CH252D Helmet (Collins)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_collins_co.paa","PHHelmets\data\helmets\customvisor_collins_co.paa"};
	};
	class PHRP_Ansley_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Project Harvest Mod Team";
		displayName = "CH252D Helmet (Ansley)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_ansley_co.paa","PHHelmets\data\helmets\customvisor_ansley_co.paa"};
	};
	class PHRP_Carter_Commando_Helmet : PHRP_Base_Commando_Helmet
	{
		dlc = "PHHelmets";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Mark V/K Helmet (Carter)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_carter_co.paa","OPTRE_UNSC_Units\Army\data\Commando_Visor_co.paa"};
	};
	class PHRP_Tinoco_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "CH252D Helmet (Tinoco)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_tinoco_co.paa","PHHelmets\data\helmets\customvisor_tinoco_co.paa"};
	};
	class PHRP_Carsten_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Luna";
		displayName = "CH252D Helmet (Carsten)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_carsten_co.paa","PHHelmets\data\helmets\customvisor_carsten_co.paa"};
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
	class PHRP_Wilson_CQC_Helmet : PHRP_Base_CQC_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Mark V/CQC Helmet (Wilson)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_wilson_co.paa","OPTRE_UNSC_Units\Army\data\CQC_Visor_co.paa"};
	};
	class PHRP_Chopper_EOD_Helmet : PHRP_Base_EOD_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Mark V/EOD Helmet (Chopper)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_chopper_co.paa","OPTRE_UNSC_Units\Army\data\EOD_Visor_co.paa"};
	};
	class PHRP_Raider_Commando_Helmet : PHRP_Base_Commando_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "Mark V/K Helmet (Raider)";
		hiddenSelections[] =  {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_Raider_co.paa","PHHelmets\data\helmets\customvisor_moon_co.paa"};
	};
};