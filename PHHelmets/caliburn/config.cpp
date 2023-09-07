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
		class PHRP_caliburn_helmets
		{
			label = "Spartan Helmets";
			author = "Project Harvest Mod Team";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"G017","B192","o148","B232","G129"};
				class G017
				{
					label = "G017";
				};
				class B192
				{
					label = "B192";
				};
				class o148
				{
					label = "148";
				};
				class B232
				{
					label = "B232";
				};
				class G129
				{
					label = "G129";
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
			role = "G017";
			model = "PHRP_caliburn_helmets";
		};
		class PHRP_Cyrus_Helmet
		{
			role = "B192";
			model = "PHRP_caliburn_helmets";
		};
		class PHRP_Oliver_Helmet
		{
			role = "o148";
			model = "PHRP_caliburn_helmets";
		};
		class PHRP_Marcus_Helmet
		{
			role = "B232";
			model = "PHRP_caliburn_helmets";
		};
		class PHRP_Kass_Helmet
		{
			role = "G129";
			model = "PHRP_caliburn_helmets";
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class OPTRE_MJOLNIR_MkVBHelmet_Human;
	class PHRP_G017_Helmet : OPTRE_MJOLNIR_MkVBHelmet_Human
	{
		author = "Soldner";
		displayName = "Spartan Helmet G017";
		model = "\OPTRE_UNSC_Units\Army\helmetmkvb_human.p3d";
		hiddenSelections[] = {"camo1","camo2","attach_ua","attach_hul"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\Helmet_G017_co.paa","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Blue_CO.paa"};
		hiddenSelectionsMaterials[] = {"OPTRE_MJOLNIR_Units\data\Helmet_MkVB.rvmat","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Blue.rvmat"};
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		class ItemInfo: ItemInfo
		{
			model = "\OPTRE_UNSC_Units\Army\helmetmkvb_human.p3d";
			hiddenSelections[] = {"camo1","camo2","attach_ua","attach_hul"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\Helmet_G017_co.paa","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Blue_CO.paa"};
			hiddenSelectionsMaterials[] = {"OPTRE_MJOLNIR_Units\data\Helmet_MkVB.rvmat","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Blue.rvmat"};
		};
	};
	class PHRP_G017_Helmet_dp: PHRP_G017_Helmet
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		class ItemInfo: ItemInfo{};
	};
	class PHRP_Oliver_Helmet : OPTRE_MJOLNIR_MkVBHelmet_Human
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
	class PHRP_Oliver_Helmet_dp: PHRP_Oliver_Helmet
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		class ItemInfo: ItemInfo{};
	};
	class PHRP_Cyrus_Helmet : OPTRE_MJOLNIR_MkVBHelmet_Human
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
	class PHRP_Cyrus_Helmet_dp: PHRP_Cyrus_Helmet
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		class ItemInfo: ItemInfo{};
	};
	class PHRP_Marcus_Helmet : OPTRE_MJOLNIR_MkVBHelmet_Human
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
	class PHRP_Marcus_Helmet_dp: PHRP_Marcus_Helmet
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		class ItemInfo: ItemInfo{};
	};
	class PHRP_Kass_Helmet : OPTRE_MJOLNIR_MkVBHelmet_Human
	{
		author = "Soldner";
		displayName = "Spartan Helmet G129";
		model = "\OPTRE_MJOLNIR_Units\helmetmkvb.p3d";
		hiddenSelections[] = {"camo1","camo2","attach_ua","attach_hul"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\Helmet_G129_co.paa","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Black_CO.paa"};
		hiddenSelectionsMaterials[] = {"OPTRE_MJOLNIR_Units\data\Helmet_MkVB.rvmat","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Black.rvmat"};
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_MJOLNIR_Units\helmetmkvb.p3d";
			hiddenSelections[] = {"camo1","camo2","attach_ua","attach_hul"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\Helmet_G129_co.paa","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Black_CO.paa"};
			hiddenSelectionsMaterials[] = {"OPTRE_MJOLNIR_Units\data\Helmet_MkVB.rvmat","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Black.rvmat"};
		};
	};
	class PHRP_Kass_Helmet_dp : PHRP_Kass_Helmet
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		class ItemInfo: ItemInfo{};
	};
	/*class PHRP_Luka_Helmet : OPTRE_MJOLNIR_MkVBHelmet_Human
	{
		author = "Soldner";
		displayName = "Spartan Helmet B170";
		model = "\OPTRE_MJOLNIR_Units\helmetmkvb.p3d";
		hiddenSelections[] = {"camo1","camo2","attach_ua","attach_hul"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\Helmet_B170_co.paa","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Black_CO.paa"};
		hiddenSelectionsMaterials[] = {"OPTRE_MJOLNIR_Units\data\Helmet_MkVB.rvmat","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Black.rvmat"};
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_MJOLNIR_Units\helmetmkvb.p3d";
			hiddenSelections[] = {"camo1","camo2","attach_ua","attach_hul"};
			hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\Helmet_B170_co.paa","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Black_CO.paa"};
			hiddenSelectionsMaterials[] = {"OPTRE_MJOLNIR_Units\data\Helmet_MkVB.rvmat","OPTRE_MJOLNIR_Units\data\Visor_MkVB_Black.rvmat"};
		};
	};
	class PHRP_Luka_Helmet_dp : PHRP_Luka_Helmet
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		class ItemInfo: ItemInfo{};
	};*/
};