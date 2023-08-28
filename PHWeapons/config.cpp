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
		class phrp_squad_weapons
		{
			label = "PHRP Squad Weapons";
			options[] = {"type","GL"};
			class type
			{
				alwaysSelectable = 1;
				label = "Type";
				values[] = {"VulcanM7","TemplarMA5"};
				class VulcanM7
				{
					label = "Vulcan M7";
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
		class phrp_personal_weapons
		{
			label = "PHRP Personal Weapons";
			options[] = {"type"};
			class type
			{
				alwaysSelectable = 1;
				label = "Owner";
				values[] = {"SoldnerSRS","SoldnerM7","HollandAK120","KazMA37K","MoonMA37K","ColesonM90"};
				class SoldnerSRS
				{
					label = "Soldner";
					image = "PHWeapons\data\Icon\SRS.paa";
				};
				class SoldnerM7
				{
					label = "Soldner";
					image = "PHWeapons\data\Icon\m7.paa";
				};
				class HollandAK120
				{
					label = "Holland";
				};
				class KazMA37K
				{
					label = "Kaz";
				};
				class MoonMA37K
				{
					label = "Moon";
				};
				class ColesonM90
				{
					label = "Coleson";
				};
			};
		};
	};		
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class PHRP_Vulcan_M7
		{
			model = "phrp_squad_weapons";
			type = "VulcanM7";
			GL = "NoGL";
		};
		class PHRP_Templar_MA5B
		{
			model = "phrp_squad_weapons";
			type = "TemplarMA5";
			GL = "NoGL";
		};
		class PHRP_Templar_MA5BGL
		{
			model = "phrp_squad_weapons";
			type = "TemplarMA5";
			GL = "GL";
		};
		class PHRP_Holland_AK120
		{
			model = "phrp_personal_weapons";
			type = "HollandAK120";
		};
		class PHRP_Soldner_SRS99C
		{
			model = "phrp_personal_weapons";
			type = "SoldnerSRS";
		};
		class PHRP_Soldner_M7
		{
			model = "phrp_personal_weapons";
			type = "SoldnerM7";
		};
		class PHRP_Kaz_MA37K
		{
			model = "phrp_personal_weapons";
			type = "KazMA37K";
		};
		class PHRP_Moon_MA37K
		{
			model = "phrp_personal_weapons";
			type = "MoonMA37K";
		};
		class PHRP_Coleson_M90
		{
			model = "phrp_personal_weapons";
			type = "ColesonM90";
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
	class PHRP_Vulcan_M7 : OPTRE_M7
	{
		dlc = "Project Harvest Armory"
		author = "Soldner";
		baseWeapon = "PHRP_Vulcan_M7";
		scope = 2;
		scopearsenal = 2;
		displayName = "[PHRP] Vulcan M7X Caseless SMG";
		canShootInWater = 1;
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"PHWeapons\data\Vulcan_m7_co.paa","OPTRE_Weapons\smg\data\m7_magazine_co.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {"optre_m7_silencer","optre_ma5suppressor"};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"MEU_REC_HOLO","MEU_REC_HOLO_Red","MEU_REC_HOLO_Gre""optic_hamr","OPTRE_M7_Sight"};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] = {"OPTRE_M7_Flashlight","OPTRE_M7_Laser","ace_acc_pointer_green","MEU_M7_Vis_Laser","OPTRE_BMR_Laser"};
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
		displayName = "[PHRP] Templar's MA5B";
		canShootInWater = 1;
		magazineWell[] = {"MEU_rifle_uw","MEU_60rnd_762_51"};
		magazines[] = {};
		hiddenSelectionsTextures[] = {"PHWeapons\data\templarWeapon_CO.paa","PHWeapons\data\templarSmartlink_co.paa","PHWeapons\data\templarCover_co.paa","optre_weapons\optics\data\reticles\ma5_reticle.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 80;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {"muzzle_snds_h_mg_blk_f","muzzle_snds_l","optre_ma5suppressor","ace_muzzle_mzls_b","muzzle_snds_b","OPTRE_MA37KSuppressor","muzzle_snds_65_TI_blk_F"};
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
		displayName = "[PHRP] Templar's MA5BGL";
		canShootInWater = 1;
		magazineWell[] = {"MEU_rifle_uw","MEU_60rnd_762_51"};
		magazines[] = {};
		hiddenSelectionsTextures[] = {"PHWeapons\data\templarWeapon_CO.paa","PHWeapons\data\templarSmartlink_co.paa","PHWeapons\data\templarCover_co.paa","optre_weapons\optics\data\reticles\ma5_reticle.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 80;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {"muzzle_snds_h_mg_blk_f","muzzle_snds_l","optre_ma5suppressor","ace_muzzle_mzls_b","muzzle_snds_b","OPTRE_MA37KSuppressor","muzzle_snds_65_TI_blk_F"};
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
	
	//Soldner SRS
	class OPTRE_SRS99C;
	class PHRP_Soldner_SRS99C : OPTRE_SRS99C
	{
		author = "Soldner";
		model = "\OPTRE_Weapons\Sniper\SRS99C.p3d";
		displayName = "[PHRP] Soldner's SRS99C-S2 AM Sniper Rifle";
		picture = "\OPTRE_weapons\sniper\icons\sniper2.paa";
		reloadAction = "WBK_SRS99C_Reload";
		handAnim[] = {"OFP2_ManSkeleton","\OPTRE_Weapons\Sniper\data\anim\srs99c_handpos.rtm","Spartan_ManSkeleton","\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\srs99C_Spartan_handpos.rtm"};
		baseWeapon = "PHRP_Soldner_SRS99C";
		hiddenSelections[] = {"camo","camo1","camo_bipod"};
		hiddenSelectionsTextures[] = {"PHWeapons\data\soldner_mainbody_co.paa","OPTRE_Weapons\Sniper\data\mag_co.paa","PHWeapons\data\soldner_bipod_co.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"OPTRE_SRS99C_Scope"};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] = {"acc_pointer_ir"};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};

	//Soldner M7
	class PHRP_Soldner_M7 : OPTRE_M7
	{
		dlc = "Project Harvest Armory"
		author = "Soldner";
		baseWeapon = "PHRP_Soldner_M7";
		scope = 2;
		scopearsenal = 2;
		displayName = "[PHRP] Soldner's M7X Caseless SMG";
		canShootInWater = 1;
		magazineWell[] += {"MEU_smg_uw"};
		magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_JHP","OPTRE_60Rnd_5x23mm_Mag_NARQ"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"PHWeapons\data\Soldner_m7_co.paa","PHWeapons\data\Soldner_magazine_co.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {"optre_m7_silencer"};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"MEU_REC_HOLO","OPTRE_M7_Sight"};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] = {"OPTRE_M7_Flashlight","OPTRE_M7_Laser","ace_acc_pointer_green","MEU_M7_Vis_Laser"};
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
		displayName = "[PHRP] Holland's AK-120";
		canShootInWater = 1;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PHWeapons\data\Holland_ak120_1.paa","PHWeapons\data\Holland_ak120_2.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 60;
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

	//Kaz's Ma37K
	class OPTRE_MA37K;
	class PHRP_Kaz_MA37K : OPTRE_MA37K
	{
		dlc = "Project Harvest Armory"
		author = "Soldner";
		baseWeapon = "PHRP_Kaz_MA37K";
		scope = 2;
		scopearsenal = 2;
		displayName = "[PHRP] Kaz's Ma37K";
		canShootInWater = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PHWeapons\data\kaz_MA37K_CO.paa"};
		class WeaponSlotsInfo
		{
			mass = 40;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {"muzzle_snds_65_TI_blk_F","OPTRE_MA5Suppressor","OPTRE_MA37KSuppressor"};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M12_Optic","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_BR45_Scope"};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] = {"acc_pointer_IR","optre_m45_flashlight_red","optre_bmr_laser"};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};

	//Moon's MA37K
	class PHRP_Moon_MA37K : OPTRE_MA37K
	{
		dlc = "Project Harvest Armory"
		author = "Soldner";
		baseWeapon = "PHRP_Moon_MA37K";
		scope = 2;
		scopearsenal = 2;
		displayName = "[PHRP] Moon's Ma37K";
		canShootInWater = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PHWeapons\data\moon_MA37K_CO.paa"};
		class WeaponSlotsInfo
		{
			mass = 40;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {"muzzle_snds_65_TI_blk_F","OPTRE_MA5Suppressor","OPTRE_MA37KSuppressor"};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M12_Optic","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_BR45_Scope"};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] = {"acc_pointer_IR","optre_m45_flashlight_red","optre_bmr_laser"};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[] = {};
			};
		};
	};

	//Coleson's M90
	class OPTRE_M90A;
	class PHRP_Coleson_M90 : OPTRE_M90A
	{
		baseWeapon = "PHRP_Coleson_M90";
		displayName = "Coleson's M90";
		canShootInWater = 1;
		magazines[] = {"Meu_6Rnd_8Gauge_Super_Incendiary"};
		magazineWell[] = {"MEU_shotgun_uw","MEU_Shotgun_Mags"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] = {"acc_pointer_ir","ace_acc_pointer_green","optre_m45_flashlight","optre_m45_flashlight_red"};
			};
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PHWeapons\data\coleson_M90_CO.paa"};
	};
};