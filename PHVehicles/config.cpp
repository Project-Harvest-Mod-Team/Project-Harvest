#define _ARMA_

class CfgPatches
{
	class PHRP_patch_vehicle
	{
		author = "Soldner";
		requiredAddons[] = {"PHRP_Core"};
		requiredVersion = 0.1;
		units[] = {"PHRP_SDV_01","HMCS_Thurgood","PHRP_Olympus_M12"};
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
	class OPTRE_M12_Base;
	class PHRP_Olympus_M12 : OPTRE_M12_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "Olympus M12";
		editorCategory = "PHRP_EdCat_Gladius";
		editorSubcategory = "PHRP_EdSubCat_AWGS";
		faction = "Gladius_Faction";
		maxSpeed = 600;
		fuelCapacity = 1500;
		peakTorque = 20210;
		enginePower = 100000;
		maxOmega = 7330.038;
		minOmega = 104.72;
		dampingRateFullThrottle = 0.15;
		dampingRateZeroThrottleClutchEngaged = 0.2;
		dampingRateZeroThrottleClutchDisengaged = 0.1;
		clutchStrength = 15.0;
		torqueCurve[] = {{0.142857,0.533333},{0.285714,0.688889},{0.428571,0.844444},{0.571429,0.924444},{0.714286,1},{0.785714,1},{0.857143,0.933333},{1,0.733333}};
		differentialType = "all_limited";
		latency = 0.4;
		normalSpeedForwardCoef = 0.5;
		slowSpeedForwardCoef = 0.166667;
		changeGearType = "rpmratio";
		frontRearSplit = 0.45;
		changeGearOmegaRatios[] = {1,0.142857,0.228571,0.142857,0.928571,0.214286,0.928571,0.642857,0.928571,0.642857,0.928571,0.642857,0.928571,0.642857,1,0.642857};
		redRpm = 9000;
	};
};
