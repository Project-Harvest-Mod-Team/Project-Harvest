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
		class PHRP_Caliburn_helmets
		{
			label = "Caliburn Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"g017","b192","o148","d236","b232","g129","b170"};
				class g017
				{
					label = "G017";
				};
				class b192
				{
					label = "B192";
				};
				class o148
				{
					label = "148";
				};
				class d236
				{
					label = "D236";
				};
				class b232
				{
					label = "B232";
				};
				class g129
				{
					label = "G129"
				};
				class b170
				{
					label = "B170"
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_G017_Helmet
		{
			model = "PHRP_Caliburn_helmets";
			role = "g017";
		};
		class PHRP_B192_Helmet
		{
			model = "PHRP_Caliburn_helmets";
			role = "b192";
		};
		class PHRP_Oliver_My_Beloved_Helmet
		{
			model = "PHRP_Caliburn_helmets";
			role = "o148";
		};
		class PHRP_D236_Helmet
		{
			model = "PHRP_Caliburn_helmets";
			role = "d236";
		};
		class PHRP_B232_Helmet
		{
			model = "PHRP_Caliburn_helmets";
			role = "b232";
		};
		class PHRP_G129_Helmet
		{
			model = "PHRP_Caliburn_helmets";
			role = "g129";
		};
		class PHRP_B170_Helmet
		{
			model = "PHRP_Caliburn_helmets";
			role = "b170";
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class OPTRE_MJOLNIR_Mk4Helmet;
	class OPTRE_MJOLNIR_MkVBHelmet_Human;
	class PHRP_G017_Helmet : OPTRE_MJOLNIR_MkVBHelmet_Human
	{
		author = "Soldner";
		displayName = "Spartan Helmet G017";
		model = "\OPTRE_UNSC_Units\Army\helmetmkvb_human.p3d";
		hiddenSelections[] = {"camo1","camo2","attach_ua","attach_hul"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\Helmet_G017_co.paa","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Black_CO.paa"};
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		class ItemInfo: ItemInfo
		{
			model = "\OPTRE_UNSC_Units\Army\helmetmkvb_human.p3d";
			hiddenSelections[] = {"camo1","camo2","attach_ua","attach_hul"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\Helmet_G017_co.paa","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Black_CO.paa"};
		};
	};
	class PHRP_Oliver_My_Beloved_Helmet: OPTRE_MJOLNIR_Mk4Helmet
	{
		author = "Soldner";
		displayName = "Spartan Helmet 148";
		model = "\OPTRE_MJOLNIR_Units\helmetmkvb.p3d";
		hiddenSelections[] = {"camo1","camo2","attach_ua","attach_hul"};
		hiddenSelectionsTextures[] = {"OPTRE_MJOLNIR_Units\data\Helmet_MkVB_CO.paa","OPTRE_MJOLNIR_Units\data\Visor_MkVB_CO.paa"};
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_MJOLNIR_Units\helmetmkvb.p3d";
			hiddenSelections[] = {"camo1","camo2","attach_ua","attach_hul"};
			hiddenSelectionsTextures[] = {"OPTRE_MJOLNIR_Units\data\Helmet_MkVB_CO.paa","OPTRE_MJOLNIR_Units\data\Visor_MkVB_CO.paa"};
		};
	};
	class PHRP_Oliver_My_Beloved_Helmet_dp: PHRP_Oliver_My_Beloved_Helmet
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		class ItemInfo: ItemInfo{};
	};
	class PHRP_D236_Helmet: OPTRE_MJOLNIR_Mk4Helmet
	{
		author = "Soldner";
		displayName = "Spartan Helmet D236";
		model = "\OPTRE_MJOLNIR_Units\helmetmkvb.p3d";
		hiddenSelections[] = {"camo1","camo2","attach_ua","attach_hul"};
		hiddenSelectionsTextures[] = {"OPTRE_MJOLNIR_Units\data\Helmet_MkVB_Red_CO.paa","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Blue_CO.paa"};
		hiddenSelectionsMaterials[] = {"OPTRE_MJOLNIR_Units\data\Helmet_MkVB.rvmat","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Blue.rvmat"};
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_MJOLNIR_Units\helmetmkvb.p3d";
			hiddenSelections[] = {"camo1","camo2","attach_ua","attach_hul"};
			hiddenSelectionsTextures[] = {"OPTRE_MJOLNIR_Units\data\Helmet_MkVB_Red_CO.paa","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Blue_CO.paa"};
			hiddenSelectionsMaterials[] = {"OPTRE_MJOLNIR_Units\data\Helmet_MkVB.rvmat","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Blue.rvmat"};
		};
	};
	class PHRP_D236_Helmet_dp: PHRP_D236_Helmet
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		class ItemInfo: ItemInfo{};
	};
	class PHRP_B192_Helmet: OPTRE_MJOLNIR_Mk4Helmet
	{
		author = "Soldner";
		displayName = "Spartan Helmet B192";
		model = "\OPTRE_MJOLNIR_Units\helmetmkvb.p3d";
		hiddenSelections[] = {"camo1","camo2","attach_ua","attach_hul"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\Helmet_B192_co.paa","OPTRE_MJOLNIR_Units\data\Visor_MkVB_CO.paa"};
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_MJOLNIR_Units\helmetmkvb.p3d";
			hiddenSelections[] = {"camo1","camo2","attach_ua","attach_hul"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\Helmet_B192_co.paa","OPTRE_MJOLNIR_Units\data\Visor_MkVB_CO.paa"};
		};
	};
	class PHRP_B192_Helmet_dp: PHRP_B192_Helmet
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		class ItemInfo: ItemInfo{};
	};
	class PHRP_B232_Helmet: OPTRE_MJOLNIR_Mk4Helmet
	{
		author = "Soldner";
		displayName = "Spartan Helmet B232";
		model = "\OPTRE_MJOLNIR_Units\helmetmkvb.p3d";
		hiddenSelections[] = {"camo1","camo2","attach_ua","attach_hul"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\Helmet_B232_co.paa","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Blue_CO.paa"};
		hiddenSelectionsMaterials[] = {"OPTRE_MJOLNIR_Units\data\Helmet_MkVB.rvmat","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Blue.rvmat"};
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_MJOLNIR_Units\helmetmkvb.p3d";
			hiddenSelections[] = {"camo1","camo2","attach_ua","attach_hul"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\Helmet_B232_co.paa","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Blue_CO.paa"};
			hiddenSelectionsMaterials[] = {"OPTRE_MJOLNIR_Units\data\Helmet_MkVB.rvmat","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Blue.rvmat"};
		};
	};
	class PHRP_B232_Helmet_dp: PHRP_B232_Helmet
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		class ItemInfo: ItemInfo{};
	};
	class PHRP_G129_Helmet : OPTRE_MJOLNIR_Mk4Helmet
	{
		author = "Soldner";
		displayName = "Spartan Helmet G129";
		model = "\OPTRE_MJOLNIR_Units\helmetmkvb.p3d";
		hiddenSelections[] = {"camo1","camo2","attach_ua","attach_hul"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\Helmet_G129_co.paa","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Blue_CO.paa"};
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_MJOLNIR_Units\helmetmkvb.p3d";
			hiddenSelections[] = {"camo1","camo2","attach_ua","attach_hul"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\Helmet_G129_co.paa","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Blue_CO.paa"};
		};
	};
	class PHRP_G129_Helmet_dp : PHRP_G129_Helmet
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		class ItemInfo: ItemInfo{};
	};
	class PHRP_B170_Helmet : OPTRE_MJOLNIR_Mk4Helmet
	{
		author = "Soldner";
		displayName = "Spartan Helmet B170";
		model = "\OPTRE_MJOLNIR_Units\helmetmkvb.p3d";
		hiddenSelections[] = {"camo1","camo2","attach_ua","attach_hul"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\Helmet_B170_co.paa","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Blue_CO.paa"};
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_MJOLNIR_Units\helmetmkvb.p3d";
			hiddenSelections[] = {"camo1","camo2","attach_ua","attach_hul"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\Helmet_B170_co.paa","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Blue_CO.paa"};
		};
	};
	class PHRP_B170_Helmet_dp : PHRP_B170_Helmet
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		class ItemInfo: ItemInfo{};
	};
};