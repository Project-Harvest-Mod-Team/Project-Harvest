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
	class HeadgearItem;
	class OPTRE_UNSC_CH252D_Helmet_Base;
	class H_PilotHelmetFighter_B;
	class H_HelmetB;
	class OPTRE_UNSC_Recon_Helmet;
	class OPTRE_UNSC_CQC_Helmet;
	class OPTRE_UNSC_CQB_Helmet;
	class OPTRE_UNSC_EOD_Helmet;
	class OPTRE_UNSC_JFO_Helmet;
	class OPTRE_UNSC_Commando_Helmet;
	class OPTRE_UNSC_Security_Helmet;
	class OPTRE_UNSC_Operator_Helmet;
	class OPTRE_UNSC_HRPilot_Helmet;
	class OPTRE_UNSC_Scout_Helmet;


	class VES_CH252D_dp;
	class OPTRE_UNSC_Recon_Helmet_dp;
	class OPTRE_UNSC_CQC_Helmet_dp;
	class OPTRE_UNSC_CQB_Helmet_dp;
	class OPTRE_UNSC_EOD_Helmet_dp;
	class OPTRE_UNSC_JFO_Helmet_dp;
	class OPTRE_UNSC_Commando_Helmet_dp;
	class OPTRE_UNSC_Security_Helmet_dp;
	class OPTRE_UNSC_Operator_Helmet_dp;
	class OPTRE_UNSC_HRPilot_Helmet_dp;
	class OPTRE_UNSC_Scout_Helmet_dp;

	class PHRP_Pilot_Helmet_Base: H_PilotHelmetFighter_B
	{
		class ItemInfo;
	};
	class OPTRE_UNSC_CH252D_Helmet: OPTRE_UNSC_CH252D_Helmet_Base
	{
		class ItemInfo;
	};

	//Infantry Helmets
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
		hiddenSelections[] = {"camo","camo2","camo3","H_Ghillie"};
		hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\odst_helmet_co.paa","optre_unsc_units\army\data\odst_helmet_visor_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "OPTRE_UNSC_Units\Army\odst_helmet";
			hiddenSelections[] = {"camo","camo2","camo3","H_Ghillie"};
			hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\odst_helmet_co.paa","optre_unsc_units\army\data\odst_helmet_visor_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
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
		hiddenSelections[] = {"camo","camo2","camo3","H_Ghillie"};
		hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\odst_helmet_co.paa","optre_unsc_units\army\data\odst_helmet_visor_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
        class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "OPTRE_UNSC_Units\Army\odst_helmet_dp";
			picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[] = {"camo","camo2","camo3","H_Ghillie"};
			hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\odst_helmet_co.paa","optre_unsc_units\army\data\odst_helmet_visor_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa"};
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
					armor = 30;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 30;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 30;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
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
					armor = 30;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 30;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 30;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
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
			uniformModel = "\OPTRE_UNSC_Units\Army\CQC_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 30;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 30;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 30;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
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
			uniformModel = "\OPTRE_UNSC_Units\Army\CQC_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 30;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 30;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 30;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	class PHRP_Base_CQB_Helmet : OPTRE_UNSC_CQB_Helmet
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
		displayName = "Mark V/C Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 30;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 30;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 30;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	class PHRP_Base_CQB_Helmet__dp : OPTRE_UNSC_CQB_Helmet_dp
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
		displayName = "Mark V/C Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 30;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 30;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 30;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	class PHRP_Base_EOD_Helmet : OPTRE_UNSC_EOD_Helmet
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
		displayName = "Mark V/EOD Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 30;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 30;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 30;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	class PHRP_Base_EOD_Helmet__dp : OPTRE_UNSC_EOD_Helmet_dp
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
		displayName = "Mark V/EOD Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 30;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 30;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 30;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	class PHRP_Base_JFO_Helmet : OPTRE_UNSC_JFO_Helmet
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
		displayName = "Mark V/J Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 30;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 30;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 30;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	class PHRP_Base_JFO_Helmet__dp : OPTRE_UNSC_JFO_Helmet_dp
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
		displayName = "Mark V/J Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 30;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 30;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 30;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
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
		displayName = "Mark V/K Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 30;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 30;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 30;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
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
		displayName = "Mark V/K Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 30;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 30;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 30;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	class PHRP_Base_Security_Helmet : OPTRE_UNSC_Security_Helmet
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
		displayName = "Mark V/M Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 30;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 30;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 30;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	class PHRP_Base_Security_Helmet__dp : OPTRE_UNSC_Security_Helmet_dp
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
		displayName = "Mark V/M Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 30;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 30;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 30;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
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
		displayName = "Mark V/O Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "\OPTRE_UNSC_Units\Army\Operator_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 30;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 30;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 30;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
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
		displayName = "Mark V/O Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 30;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 30;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 30;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
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
		displayName = "Mark V/P Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "\OPTRE_UNSC_Units\Army\HRPilot_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 30;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 30;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 30;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
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
		displayName = "Mark V/P Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 30;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 30;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 30;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	class PHRP_Base_Scout_Helmet : OPTRE_UNSC_Scout_Helmet
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
		displayName = "Mark VI/S Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 30;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 30;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 30;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	class PHRP_Base_Scout_Helmet__dp : OPTRE_UNSC_Scout_Helmet_dp
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
		displayName = "Mark VI/S Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "\OPTRE_UNSC_Units\Army\HRPilot_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 30;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 30;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 30;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	
	//Covers

	class H_MilCap_Blue;
	class PHRP_Base_Beret: H_HelmetB
    {
        author = "VorpalHotdog";
        scope = 1;
        displayName = "PHRP Beret Base";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Beret_Colonel_ca.paa";
        model = "a3\characters_f_epb\BLUFOR\headgear_beret02";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\headgear_gladiusberet_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 20;
            uniformModel = "a3\characters_f_epb\BLUFOR\headgear_beret02";
            hiddenSelections[] = {"Camo"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitPointName = "HitHead";
                    armor = 1;
                    passThrough = 0.5;
                };
            };
        };
    };
	class PHRP_Base_Boonie: H_HelmetB
	{
		author = "VorpalHotdog";
        scope = 1;
        displayName = "PHRP Boonie Base";
		picture = "\A3\characters_f\Data\UI\icon_H_booniehat_desert_ca.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"PHHelmets\data\helmets\headgear_gladiusboonie_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 20;
            uniformModel = "a3\characters_f\Common\booniehat.p3d";
			hiddenSelections[] = {"Camo"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitPointName = "HitHead";
                    armor = 1;
                    passThrough = 0.5;
                };
            };
        };
	};
	
};