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
class CfgWeapons
{
	class OPTRE_UNSC_CH252D_Helmet_Base;
	class OPTRE_UNSC_CH252D_Helmet: OPTRE_UNSC_CH252D_Helmet_Base
	{
		class ItemInfo;
	};
    class PHRP_Base_ODST_Helmet : OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "Project Harvest Armory";
        author = "Soldner";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "CH252D Helmet - Base";
        picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet";
		hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "OPTRE_UNSC_Units\Army\odst_helmet";
			hiddenSelections[] = {"camo","camo2"};
			hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
			hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 35;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 35;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 35;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
    class VES_CH252D_dp;
	class HeadgearItem;
	class PHRP_Base_ODST_Helmet_dp : VES_CH252D_dp
	{
		dlc = "Project Harvest Armory";
		author = "Soldner";
        scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "CH252D Helmet - Base";
		hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
        class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "OPTRE_UNSC_Units\Army\odst_helmet_dp";
			picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[] = {"camo","camo2"};
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252D_DEF_CO","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
			hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 35;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 35;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 35;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
		subItems[] = {"ItemcTabHCam"};
	};
	class OPTRE_UNSC_Recon_Helmet;
	class PHRP_Base_Recon_Helmet : OPTRE_UNSC_Recon_Helmet
	{
		class ItemInfo;
		dlc = "Project Harvest Armory";
        author = "Soldner";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "Recon Helmet - Base";
        picture = "\OPTRE_UNSC_Units\Army\icons\odst_recon";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "OPTRE_UNSC_Units\Army\recon_helmet";
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	class OPTRE_UNSC_Recon_Helmet_dp;
	class PHRP_Base_Recon_Helmet_dp : OPTRE_UNSC_Recon_Helmet_dp
	{
		class ItemInfo;
		dlc = "Project Harvest Armory";
        author = "Soldner";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "Recon Helmet - Base";
        picture = "\OPTRE_UNSC_Units\Army\icons\odst_recon";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "OPTRE_UNSC_Units\Army\recon_helmet";
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	class OPTRE_UNSC_Commando_Helmet;
	class PHRP_Base_Commando_Helmet : OPTRE_UNSC_Commando_Helmet
	{
		class ItemInfo;
		dlc = "Project Harvest Armory";
        author = "Soldner";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "Commando Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "OPTRE_UNSC_Units\Army\commando_helmet";
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	class OPTRE_UNSC_Commando_Helmet_dp;
	class PHRP_Base_Commando_Helmet_dp : OPTRE_UNSC_Commando_Helmet_dp
	{
		class ItemInfo;
		dlc = "Project Harvest Armory";
        author = "Soldner";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "Commando Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "OPTRE_UNSC_Units\Army\commando_helmet";
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	class OPTRE_UNSC_HRPilot_Helmet;
	class PHRP_Base_HRPilot_Helmet : OPTRE_UNSC_HRPilot_Helmet
	{
		class ItemInfo;
		dlc = "Project Harvest Armory";
        author = "Soldner";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "Hellbringer Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "\OPTRE_UNSC_Units\Army\HRPilot_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	class OPTRE_UNSC_HRPilot_Helmet_dp;
	class PHRP_Base_HRPilot_Helmet__dp : OPTRE_UNSC_HRPilot_Helmet_dp
	{
		class ItemInfo;
		dlc = "Project Harvest Armory";
        author = "Soldner";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "Hellbringer Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "\OPTRE_UNSC_Units\Army\HRPilot_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	class OPTRE_UNSC_Operator_Helmet;
	class PHRP_Base_Operator_Helmet : OPTRE_UNSC_Operator_Helmet
	{
		class ItemInfo;
		dlc = "Project Harvest Armory";
        author = "Soldner";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "AT Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "\OPTRE_UNSC_Units\Army\Operator_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	class OPTRE_UNSC_Operator_Helmet_dp;
	class PHRP_Base_Operator_Helmet__dp : OPTRE_UNSC_Operator_Helmet_dp
	{
		class ItemInfo;
		dlc = "Project Harvest Armory";
        author = "Soldner";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "AT Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "\OPTRE_UNSC_Units\Army\Operator_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	class OPTRE_UNSC_CQC_Helmet;
	class PHRP_Base_CQC_Helmet : OPTRE_UNSC_CQC_Helmet
	{
		class ItemInfo;
		dlc = "Project Harvest Armory";
        author = "Soldner";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "Mark V/CQC Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "\OPTRE_UNSC_Units\Army\Operator_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	class OPTRE_UNSC_CQC_Helmet_dp;
	class PHRP_Base_CQC_Helmet__dp : OPTRE_UNSC_CQC_Helmet_dp
	{
		class ItemInfo;
		dlc = "Project Harvest Armory";
        author = "Soldner";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "Mark V/CQC Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "\OPTRE_UNSC_Units\Army\Operator_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
};