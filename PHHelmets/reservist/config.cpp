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
				values[] = {"recruit","reserve","collins","ansley","carter","tinoco","carsten","mischa","wilson","raider","drip","miller","craven","jaeger","owessel","kaker","wolf","kincaid"};
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
				class raider
				{
					label = "Raider";
				};
				class drip
				{
					label = "DripDST";
				};
				class miller
				{
					label = "Miller";
				};
				class craven
				{
					label = "Craven";
				};
				class jaeger
				{
					label = "Jaeger";
				};
				class owessel
				{
					label = "Owessel";
				};
				class kaker
				{
					label = "Kaker";
				};
				class wolf
				{
					label = "Wolf";
				};
				class kincaid
				{
					label = "Kincaid";
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
		class PHRP_Raider_Commando_Helmet
		{
			role = "raider";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Drip_ODST_Helmet
		{
			role = "drip";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Miller_Scout_Helmet
		{
			role = "miller";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Craven_Scout_Helmet
		{
			role = "craven";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Jaeger_ODST_Helmet
		{
			role = "jaeger";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Owessel_HRPilot_Helmet
		{
			role = "owessel";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Kaker_HRPilot_Helmet
		{
			role = "kaker";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Wolf_Recon_Helmet
		{
			role = "wolf";
			model = "PHRP_reservist_helmets";
		};
		class PHRP_Kincaid_HRPilot_Helmet
		{
			role = "kincaid";
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
	class PHRP_Base_Scout_Helmet;
	class PHRP_Base_Recon_Helmet;
	class PHRP_Recruit_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "VibingVampire";
		displayName = "CH252D Helmet - Recruit";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
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
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
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
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
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
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
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
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
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
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
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
	class PHRP_DRIP_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "VorpalHotdog";
		displayName = "CH252D Helmet (Drip)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_dripdst_co.paa","PHHelmets\data\helmets\customvisor_dripdst_co.paa"};
	};
	class PHRP_Miller_Scout_Helmet : PHRP_Base_Scout_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Mark VI/S Helmet (Miller)";
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_miller_co.paa","OPTRE_UNSC_Units\Army\data\Scout_Visor_co.paa"};
	};
	class PHRP_Craven_Scout_Helmet : PHRP_Base_Scout_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Jimbo";
		displayName = "Mark VI/S Helmet (Craven)";
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_craven_co.paa","OPTRE_UNSC_Units\Army\data\Scout_Visor_co.paa"};
	};
	class PHRP_Jaeger_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Jimbo";
		displayName = "CH252D Helmet (Jaeger)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_jaeger_co.paa","PHHelmets\data\helmets\customvisor_jaeger_co.paa"};
	};
	class PHRP_Owessel_HRPilot_Helmet : PHRP_Base_HRPilot_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Mark V/P Helmet (Owessel)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_owessel_co.paa","PHHelmets\data\helmets\customvisor_owessel_co.paa"};
	};
	class PHRP_Kaker_HRPilot_Helmet : PHRP_Base_HRPilot_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Jimbo";
		displayName = "Mark V/P Helmet (Kaker)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_kaker_co.paa","PHHelmets\data\helmets\customvisor_kaker_co.paa"};
	};
	class PHRP_Wolf_Recon_Helmet : PHRP_Base_Recon_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "Recon Helmet (Wolf)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_wolf_co.paa","PHHelmets\data\helmets\customvisor_wolf_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
	};
	class PHRP_Kincaid_HRPilot_Helmet : PHRP_Base_HRPilot_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Jimbo";
		displayName = "Mark V/P Helmet (Kincaid)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_kincaid_co.paa","PHHelmets\data\helmets\customvisor_kincaid_co.paa"};
	};
};