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
};