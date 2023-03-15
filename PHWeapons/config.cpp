#define _ARMA_

class CfgPatches
{
	class PHVehicles
	{
		author = "Soldner";
		hideName = 0;
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"PHRP_Core","A3_Weapons_F_Exp"};
	};
};
/*class XtdGearModels
{
	class CamoBase;
	class CfgWeapons;
	class phrp_weapons
	{
		label = "Weapons";
		options[] = {"type"};
		class type
		{
			alwaysSelectable = 1;
			label = "Type";
			values[] = {"M7","AK12"};
			class M7
			{
				label = "M7";
			};
			class AK12
			{
				label = "AK12";
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class Vulcan_M7
		{
			model = "phrp_weapons";
			name = "M7";
		};
		class PHRP_AK12
		{
			model = "phrp_weapons";
			name = "AK12";
		}
	};
};*/
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot_rail;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class UnderBarrelSlot;
class CowsSlot_Rail;
class CowsSlot_Rail_Pistol;
class CowsSlot_Pistol;
class CowsSlot_MSBS65;
class CowsSlot_Dovetail;
class CowsSlot_Dovetail_RPG;
class MuzzleSlot_45ACP;
class MuzzleSlot_9mm;
class MuzzleSlot_65;
class MuzzleSlot_65MG;
class MuzzleSlot_556;
class MuzzleSlot_762;
class MuzzleSlot_338;
class MuzzleSlot_93;
class MuzzleSlot_57;
class MuzzleSlot_58;
class MuzzleSlot_545R;
class MuzzleSlot_762R;
class PointerSlot_Rail;
class PointerSlot_Pistol;
class PointerSlot_Launcher;
class CfgWeapons
{
	class ItemCore;
	class OPTRE_M7;	
	class Vulcan_M7 : OPTRE_M7
	{
		dlc = "Project Harvest Armory"
		author = "Soldner";
		baseWeapon = "Vulcan_M7";
		scope = 2;
		scopearsenal = 2;
		displayName = "(PHRP) Vulcan M7X Caseless SMG";
		canShootInWater = 1;
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"PHWeapons\data\Vulcan_m7_co.paa","OPTRE_Weapons\smg\data\m7_magazine_co.paa"};
	};
	class arifle_AK12_base_F;
	class PHRP_AK12 : arifle_AK12_base_F
	{
		dlc = "Project Harvest Armory"
		author = "VorpalHotdog";
		baseWeapon = "PHRP_AK12";
		scope = 2;
		scopearsenal = 2;
		displayName = "(PHRP) Gladius AK-12";
		canShootInWater = 1;
		picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHWeapons\data\Holland_ak12_1.paa","PHWeapons\data\Holland_ak12_2.paa"};	
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {"OPTRE_MA5Suppressor"};
			}; 
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","tcf_ma1b_ammocounter",};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR","OPTRE_BMR_Laser"};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {"bipod_01_F_blk","bipod_02_F_blk","bipod_03_F_blk"};
			};
		};
	};
};