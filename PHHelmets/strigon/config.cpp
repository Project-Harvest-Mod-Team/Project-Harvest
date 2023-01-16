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
			options[] = {"Type","Role"};
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
			class type
			{
				alwaysSelectable = 1;
				label = "Type";
				values[] = {"vx16","jhmcs"};
				class vx16
				{
					label = "VX-16";
				};
				class jhmcs
				{
					label = "JHMCS";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Strigon_VX16
		{
			role = "default";
			type = "vx16";
			model = "strigon_helmets";
		};
		class PHRP_Strigon_JHMCS
		{
			role = "default";
			type = "jhmcs";
			model = "strigon_helmets";
		};
		class PHRP_Foulke_VX16
		{
			role = "foulke";
			type = "vx16";
			model = "strigon_helmets";
		};
		class PHRP_Foulke_JHMCS
		{
			role = "foulke";
			type = "jhmcs";
			model = "strigon_helmets";
		};
	};
};
class CfgWeapons
{
	class OPTRE_UNSC_VX16_Helmet_base;
	class PHRP_VX16_Base : OPTRE_UNSC_VX16_Helmet_base
	{
		class ItemInfo;
	};
	class PHRP_VX16 : PHRP_VX16_Base
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		hiddenSelections[] = {"camo1","camo2","attach_visor_up","attach_visor_down","attach_face_mask"};
		hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\helm_gray_CO.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\pilot_helmet.p3d";
			mass = 35;
			modelSides[] = {6};
			passThrough = 0.1;
			hiddenSelections[] = {"camo1","camo2","attach_visor_up","attach_visor_down","attach_face_mask"};
			hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\helm_gray_CO.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 15;
					passThrough = 0.1;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 15;
					passThrough = 0.1;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.1;
				};
			};
		};
	};
    class PHRP_JHMCS_Helmet;
	class OPTRE_UNSC_VX16_Helmet;
	class PHRP_Strigon_VX16 : PHRP_VX16
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "Strigon VX16 Helmet";
		hiddenSelections[] = {"camo1","camo2","attach_visor_down","attach_face_mask"};
		hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\helm_olive_CO.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down","attach_face_mask"};
			hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\helm_olive_CO.paa",""};
		};
	};
	class PHRP_Strigon_JHMCS : PHRP_JHMCS_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "Strigon JHMCS Helmet";
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_strigon_jhmcs_co.paa"};
	};
	class PHRP_Foulke_VX16 : PHRP_VX16
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "Foulke's VX16 Helmet";
		hiddenSelections[] = {"camo1","camo2","attach_visor_down","attach_face_mask"};
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\foulke_vx16_CO.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down","attach_face_mask"};
			hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\helm_olive_CO.paa",""};
		};
	};
	class PHRP_Foulke_JHMCS : PHRP_JHMCS_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "Foulke's JHMCS Helmet";
		hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\customhelmet_foulke_jhmcs_co.paa"};
	};
};