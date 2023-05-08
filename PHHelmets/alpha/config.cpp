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
		class PHRP_alpha_helmets
		{
			label = "Alpha Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"default","erikson","presscott","buckley","jaeger","famous","graves","samson","stone"};
				class default
				{
					label = "Default";
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
				class graves
				{
					label = "Graves";
				};
				class samson
				{
					label = "Samson";
				};
				class stone
				{
					label = "Stone";
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
			model = "PHRP_alpha_helmets";
		};
		class PHRP_Erikson_ODST_Helmet
		{
			role = "erikson";
			model = "PHRP_alpha_helmets";
		};
		class PHRP_Presscott_ODST_Helmet
		{
			role = "presscott";
			model = "PHRP_alpha_helmets";
		};
		class PHRP_Buckley_ODST_Helmet
		{
			role = "buckley";
			model = "PHRP_alpha_helmets";
		};
		class PHRP_Jaeger_ODST_Helmet
		{
			role = "jaeger";
			model = "PHRP_alpha_helmets";
		};
		class PHRP_Famous_ODST_Helmet
		{
			role = "famous";
			model = "PHRP_alpha_helmets";
		};
		class PHRP_Graves_ODST_Helmet
		{
			role = "graves";
			model = "PHRP_alpha_helmets";
		};
		class PHRP_Samson_ODST_Helmet
		{
			role = "samson";
			model = "PHRP_alpha_helmets";
		};
		class PHRP_Stone_ODST_Helmet
		{
			role = "stone";
			model = "PHRP_alpha_helmets";
		};
	};
};
class CfgWeapons
{
    class PHRP_Base_ODST_Helmet;
	class PHRP_Base_Scout_Helmet;
	class PHRP_Alpha_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "CH252D Helmet - Alpha";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_alphabase_co.paa","PHHelmets\data\helmets\customvisor_base_co.paa"};
	};
	class PHRP_Erikson_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "VorpalHotdog";
		displayName = "CH252D Helmet (Erikson)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_erikson_co.paa","PHHelmets\data\helmets\customvisor_erikson_co.paa"};
	};
	class PHRP_Presscott_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "VorpalHotdog";
		displayName = "CH252D Helmet (Presscott)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_presscott_co.paa","PHHelmets\data\helmets\customvisor_buckley_co.paa"};
	};
	class PHRP_Buckley_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "VorpalHotDog";
		displayName = "CH252D Helmet (Buckley)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_buckley_co.paa","PHHelmets\data\helmets\customvisor_buckley_co.paa"};
	};
	class PHRP_Jaeger_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Jimbo";
		displayName = "CH252D Helmet (Jaeger)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_jaeger_co.paa","PHHelmets\data\helmets\customvisor_jaeger_co.paa"};
	};
	class PHRP_Famous_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "SirChungus";
		displayName = "CH252D Helmet (Famous)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_famous_co.paa","PHHelmets\data\helmets\customvisor_famous_co.paa"};
	};
	class PHRP_Graves_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "SirChungus";
		displayName = "CH252D Helmet (Graves)";
		hiddenSelections[] = {"camo","camo2","H_Ghillie"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_graves_co.paa","PHHelmets\data\helmets\customvisor_graves_co.paa"};
	};
	class PHRP_Samson_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MrMicrobe";
		displayName = "CH252D Helmet (Samson)";
		hiddenSelections[] = {"camo","camo2","H_Ghillie"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_samson_co.paa","PHHelmets\data\helmets\customvisor_buckley_co.paa"};
	};
	class PHRP_Stone_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "CH252D Helmet (Stone)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_stone_co.paa","PHHelmets\data\helmets\customvisor_stone_co.paa"};
	};
};