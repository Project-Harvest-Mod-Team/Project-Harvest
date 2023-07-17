#define _ARMA_

class CfgPatches
{
	class PHRP_patch_vehicle
	{
		author = "Soldner";
		requiredAddons[] = {"PHRP_Core"};
		requiredVersion = 0.1;
		units[] = {"PHRP_SDV_01","HMCS_Thurgood"};
		weapons[] = {};
	};
};
class cfgVehicleClasses
{
	class AWGS
	{
		displayName = "AWGS";
	};
};
class CfgVehicles
{
	//Submarine
	class SDV_01_base_F;
	class B_SDV_01_F: SDV_01_base_F
	{
		class EventHandlers;
	};
	class PHRP_SDV_01: B_SDV_01_F
	{
		dlc = "Project Harvest Armory";
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayname = "PHRP SDV - Engine Enhanced";
		faction = "Gladius_Faction";
		side = 1;
		editorCategory = "PHRP_EdCat_Gladius";
		editorSubcategory = "PHRP_EdSubCat_Water";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) animateSource [""periscope"",3,true];(_this select 0) animateSource [""Antenna"",3,true];(_this select 0) animateSource [""HideScope"",3,true]; (_this select 0) animateSource [""display_on_R"",1,true];";
		};
		acceleration = 20;
		maxSpeed = 100;
		enginePower = 100;
		waterSpeedFactor = 0.1;
		enableRadio = 1;
	};
	class HMCS;
	class HMCS_Thurgood : HMCS
	{
		side = 1;
		editorCategory = "PHRP_EdCat_Gladius";
		editorSubcategory = "PHRP_EdSubCat_AWGS";
		displayName = "Thurgood's HMCS";
		hiddenselectionstextures[] = {"PHVehicles\Textures\hm_01_co.paa","PHVehicles\Textures\hm_02_co.paa","PHVehicles\Textures\hm_03_co.paa","PHVehicles\Textures\hm_glass_ca.paa","PHVehicles\Textures\hmguns_01_501_co.paa","","","","","PHVehicles\Textures\hm_insignias_01_ca.paa"};
	};
};
