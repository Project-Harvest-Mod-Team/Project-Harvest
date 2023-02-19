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
		scope = 2;
		scopeCurator = 2;
		author = "Soldner";
		displayname = "PHRP SDV - Engine Enhanced";
		editorCategory = "PHRP_EdCat_Gladius";
		editorSubcategory = "PHRP_EdSubCat_Water";
		scope = 2;
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) animateSource [""periscope"",3,true];(_this select 0) animateSource [""Antenna"",3,true];(_this select 0) animateSource [""HideScope"",3,true]; (_this select 0) animateSource [""display_on_R"",1,true];";
		};
		acceleration = 20;
		maxSpeed = 100;
		enginePower = 100;
		waterSpeedFactor = 0.5;
	};

	//Hatchback Sport
	class C_Hatchback_01_sport_blue_F;
	class PHRP_Olympus_Hatchback : C_Hatchback_01_sport_blue_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Soldner";
		displayname = "PHRP Olympus Hatchback";
		editorCategory = "PHRP_EdCat_Gladius";
		editorSubcategory = "PHRP_EdSubCat_Cars";
		fuelCapacity = 16;
		brakeIdleSpeed = 2.5;
		maxSpeed = 500;
		antiRollbarForceCoef = 10.0;
		antiRollbarForceLimit = 8.0;
		slowSpeedForwardCoef = 0.2;
		enginePower = 1000;
		differentialType = "rear_limited";
		side = 1;
		idleRpm = 1000;
		redRpm = 10000;
		peakTorque = 650;
		maxOmega = 1033.038;
		minOmega = 104.72;
		engineMOI = 0.6;
	}
};
