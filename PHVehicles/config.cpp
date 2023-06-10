#define _ARMA_

class CfgPatches
{
	class PHVehicles
	{
		author = "Soldner";
		hideName = 0;
		units[] = {"PHRP_SDV_01","PHRP_HMCS"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"PHRP_Core"};
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
		scope = 2;
		scopeCurator = 2;
		author = "Soldner";
		faction = "Gladius_Faction";
		displayname = "PHRP SDV - Engine Enhanced";
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
	};
	class HMCS;
	class PHRP_HMCS : HMCS
	{
		editorCategory = "PHRP_EdCat_Gladius";
		editorSubcategory = "PHRP_EdSubCat_AWGS";
		displayName = "Thurgood's HMCS";
		hiddenselectionstextures[] = {"PHVehicles\Textures\hm_01_co.paa","PHVehicles\Textures\hm_02_co.paa","PHVehicles\Textures\hm_03_co.paa","PHVehicles\Textures\hm_glass_ca.paa","PHVehicles\Textures\hmguns_01_501_co.paa","","","","","PHVehicles\Textures\hm_insignias_01_ca.paa"};
	};
};
