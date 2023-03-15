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
class XtdGearModels
{
	class CamoBase;
	class CfgWeapons;
	class phrp_smg
	{
		label = "SMG";
		options[] = {"type"};
		class type
		{
			alwaysSelectable = 1;
			label = "Type";
			values[] = {"M7"};
			class M7
			{
				label = "M7";
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
			model = "phrp_smg";
			name = "M7";
		};
	};
};
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot_rail;
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
		displayName = "Soldner's MA37B ICWS Assault Rifle";
		baseWeapon = "PHRP_Soldner_MA37B";
		hiddenSelections[] = {"camo","camo1","camo_reticle"};
		hiddenSelectionsTextures[] = {"optre_weapons\ar\data\ma37b_co.paa","optre_weapons\ar\data\ammocounter37b_co.paa","optre_weapons\ar\data\r_ar_ca.paa"};
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
};

	