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
		class PHRP_onetwo_helmets
		{
			label = "1-2 Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"default","blackburn","graves","morningstar"};
				class default
				{
					label = "Default";
				};
				class blackburn
				{
					label = "Blackburn";
				};
				class graves
				{
					label = "Graves";
				};
				class morningstar
				{
					label = "Morningstar";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_onetwo_ODST_Helmet
		{
			role = "default";
			model = "PHRP_onetwo_helmets";
		};
		class PHRP_Blackburn_Recon_Helmet
		{
			role = "blackburn";
			model = "PHRP_onetwo_helmets";
		};
		class PHRP_Graves_ODST_Helmet
		{
			role = "graves";
			model = "PHRP_onetwo_helmets";
		};
		class PHRP_Morningstar_Operator_Helmet
		{
			role = "morningstar";
			model = "PHRP_onetwo_helmets";
		};
	};
};
class CfgWeapons
{
    class PHRP_Base_ODST_Helmet;
	class PHRP_Base_Operator_Helmet;
	class PHRP_Base_Recon_Helmet;
	class PHRP_onetwo_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "CH252D Helmet 1-2";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_onetwobase_co.paa","PHHelmets\data\helmets\customvisor_base_co.paa"};
	};
	class PHRP_Blackburn_Recon_Helmet : PHRP_Base_Recon_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Jimbo";
		displayName = "Recon Helmet 1-2 (Blackburn)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_blackburn_co.paa","PHHelmets\data\helmets\customvisor_blackburn_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
	};
	class PHRP_Graves_ODST_Helmet : PHRP_Base_ODST_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "SirChungus";
		displayName = "CH252D Helmet 1-2 (Graves)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","H_Ghillie"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_graves_co.paa","PHHelmets\data\helmets\customvisor_graves_co.paa"};
	};
	class PHRP_Morningstar_Operator_Helmet : PHRP_Base_Operator_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "";
		displayName = "Mark V/O Helmet 1-2 (Morningstar)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_morningstar_co.paa","OPTRE_UNSC_Units\Army\data\Operator_Visor_co.paa"};
	};
};