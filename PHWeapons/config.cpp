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
		requiredAddons[] = {"PHRP_Core"};
	};
};

//ace arsenal stuff

class XtdGearModels
{
	class CfgWeapons
	{
		class phrp_weapons
		{
			label = "PHRP Weapons";
			options[] = {"type","GL"};
			class type
			{
				alwaysSelectable = 1;
				label = "Type";
				values[] = {"M7","HollandAK120","SoldnerMA37","TemplarMA5"};
				class M7
				{
					label = "Vulcan M7";
				};
				class HollandAK120
				{
					label = "Holland";
				};
				class SoldnerMA37
				{
					label = "Soldner";
				};
				class TemplarMA5
				{
					label = "Templar";
				};
			};
			class GL
			{
				alwaysSelectable = 1;
				label = "GL";
				values[] = {"NoGL","GL"};
				class NoGL
				{
					label = "No GL";
				};
				class GL
				{
					label = "GL";
				};
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
			type = "M7";
			GL = "NoGL";
		};
		class PHRP_Holland_AK120
		{
			model = "phrp_weapons";
			type = "HollandAK120";
			GL = "NoGL";
		};
		class PHRP_Soldner_MA37B
		{
			model = "phrp_weapons";
			type = "SoldnerMA37";
			GL = "NoGL";
		};
		class PHRP_Templar_MA5B
		{
			model = "phrp_weapons";
			type = "TemplarMA5";
			GL = "NoGL";
		};
		class PHRP_Templar_MA5BGL
		{
			model = "phrp_weapons";
			type = "TemplarMA5";
			GL = "GL";
		};
	};
};


class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;

class CfgWeapons
{
	//Vulcan M7
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
	
	//Soldner MA37
	class InventoryOpticsItem_Base_F;
	class OPTRE_MA37_Smartlink_Scope;
	class PHRP_MA37_Smartlink_Scope: OPTRE_MA37_Smartlink_Scope
	{
		dlc = "Project Harvest Armory";
		author = "Soldner";
		displayName = "4x Smart Link Scope";
		descriptionShort = "4x Smart Linked Scope";
		model = "OPTRE_Weapons\AR\MA37_2x_Scope.p3d";
		inertia = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 4;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class MA37_Irons
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 400;
					distanceZoomMax = 400;
				};
				class MA37_Sight
				{
					opticsID = 1;
					useModelOptics = 1;
					modelOptics[] = {"\OPTRE_Weapons\AR\MA37_2x_Scope.p3d","\OPTRE_Weapons\smg\M7_Optic_4x.p3d"};
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.125;
					opticsZoomMax = 0.0525;
					opticsZoomInit = 0.125;
					discreteinitIndex = 1;
					discreteDistanceInitIndex = 1;
					discretefov[] = {0.125,0.04};
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					discreteDistance[] = {100,300,400,500,600,700,800,900,1000};
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal","NVG","TI"};
				};
			};
		};
	};
	class OPTRE_MA37B;
	class PHRP_Soldner_MA37B : OPTRE_MA37B
	{
		dlc = "Project Harvest Armory";
		author = "Soldner";
		displayName = "(PHRP) Soldner's MA37B ICWS Assault Rifle";
		baseWeapon = "PHRP_Soldner_MA37B";
		canShootInWater = 1;
		hiddenSelections[] = {"camo","camo1","camo_reticle"};
		hiddenSelectionsTextures[] = {"PHWeapons\data\Soldner_MA37_CO.paa","PHWeapons\data\Soldner_ammocounterMA37_co.paa","optre_weapons\ar\data\r_ar_ca.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {"optre_ma5suppressor","muzzle_snds_65_TI_blk_F"};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"PHRP_MA37_Smartlink_Scope","OPTRE_MA37_Smartlink_Scope"};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] = {"OPTRE_M45_Flashlight"};
			};
		};
	};

	//Holland AK
	class arifle_AK12_F;
	class PHRP_Holland_AK120 : arifle_AK12_F
	{
		dlc = "Project Harvest Armory"
		author = "VorpalHotdog";
		baseWeapon = "PHRP_Holland_AK120";
		scope = 2;
		scopearsenal = 2;
		displayName = "(PHRP) Holland's AK-120";
		canShootInWater = 1;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHWeapons\data\Holland_ak120_1.paa","PHWeapons\data\Holland_ak120_2.paa"};	
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
	
	//Templar MA5B
	class OPTRE_MA5B;
	class OPTRE_MA5BGL;
	class OPTRE_M301UGL;
	class PHRP_Templar_MA5B: OPTRE_MA5B
	{
		dlc = "Project Harvest Armory";
		author = "Soldner";
		baseWeapon = "PHRP_Templar_MA5B";
		displayName = "(PHRP) Templar's MA5B";
		canShootInWater = 1;
		magazineWell[] = {"MEU_rifle_uw","MEU_60rnd_762_51"};
		magazines[] = {};
		hiddenSelectionsTextures[] = {"PHWeapons\data\templarWeapon_CO.paa","PHWeapons\data\templarSmartlink_co.paa","PHWeapons\data\templarCover_co.paa","optre_weapons\optics\data\reticles\ma5_reticle.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {"muzzle_snds_h_mg_blk_f","muzzle_snds_l","optre_ma5suppressor","optre_m7_silencer","optre_m6_silencer","ace_muzzle_mzls_b","muzzle_snds_b","OPTRE_MA37KSuppressor","muzzle_snds_65_TI_blk_F","OPTRE_srs99d_suppressor"};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"MEU_REC_HOLO","MEU_REC_HOLO_Red","MEU_REC_HOLO_Gre","optic_Yorris","optic_DMS","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_MRCO","optic_Arco","optic_Arco_ghex_F","optic_Arco_blk_F","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Hamr_khk_F","optic_Holosight","optic_Holosight_smg","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5_SmartLink_v2","OPTRE_MA5C_SmartLink_v2","OPTRE_MA5_SmartLink_legacy","OPTRE_MA5C_SmartLink_legacy","OPTRE_M12_Optic","optic_ico_01_black_f","OPTRE_BR45_Scope"};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] = {"OPTRE_M7_Flashlight","OPTRE_M7_Laser","acc_pointer_ir","acc_flashlight","OPTRE_BMR_Laser","optre_m12_laser","ace_acc_pointer_green","optre_m45_flashlight","optre_m45_flashlight_red","acc_pointer_vis_red","MEU_M12_Vis_Laser","MEU_BMR_Vis_Laser","MEU_M7_Vis_Laser","MEU_M6G_Laser"};
			};
		};
	};
	class PHRP_Templar_MA5BGL: OPTRE_MA5BGL
	{
		dlc = "Project Harvest Armory";
		author = "Soldner";
		baseWeapon = "PHRP_Templar_MA5BGL";
		displayName = "(PHRP) Templar's MA5BGL";
		canShootInWater = 1;
		magazineWell[] = {"MEU_rifle_uw","MEU_60rnd_762_51"};
		magazines[] = {};
		hiddenSelectionsTextures[] = {"PHWeapons\data\templarWeapon_CO.paa","PHWeapons\data\templarSmartlink_co.paa","PHWeapons\data\templarCover_co.paa","optre_weapons\optics\data\reticles\ma5_reticle.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {"muzzle_snds_h_mg_blk_f","muzzle_snds_l","optre_ma5suppressor","optre_m7_silencer","optre_m6_silencer","ace_muzzle_mzls_b","muzzle_snds_b","OPTRE_MA37KSuppressor","muzzle_snds_65_TI_blk_F","OPTRE_srs99d_suppressor"};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"MEU_REC_HOLO","MEU_REC_HOLO_Red","MEU_REC_HOLO_Gre","optic_Yorris","optic_DMS","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_MRCO","optic_Arco","optic_Arco_ghex_F","optic_Arco_blk_F","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Hamr_khk_F","optic_Holosight","optic_Holosight_smg","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5_SmartLink_v2","OPTRE_MA5C_SmartLink_v2","OPTRE_MA5_SmartLink_legacy","OPTRE_MA5C_SmartLink_legacy","OPTRE_M12_Optic","optic_ico_01_black_f","OPTRE_BR45_Scope"};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] = {"OPTRE_M7_Flashlight","OPTRE_M7_Laser","acc_pointer_ir","acc_flashlight","OPTRE_BMR_Laser","optre_m12_laser","ace_acc_pointer_green","optre_m45_flashlight","optre_m45_flashlight_red","acc_pointer_vis_red","MEU_M12_Vis_Laser","MEU_BMR_Vis_Laser","MEU_M7_Vis_Laser","MEU_M6G_Laser"};
			};
		};
		class OPTRE_M301UGL: OPTRE_M301UGL
		{
			magazines[] = {};
			magazineWell[] = {"MEU_GL_Explosive_Lethal","MEU_GL_Smokes","MEU_GL_Tactile","MEU_GL_Flares"};
		};
	};
};