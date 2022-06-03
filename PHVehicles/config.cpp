#define _ARMA_

class CfgPatches
{
	class PHVehicles
	{
		author = "PHRP Mod Team";
		units[] = {"Soldner_Bayonet","Katelo_Bayonet"};
		requiredAddons[] = {"OPTRE_Core","OPTRE_Vehicles"};
		weapons[] = {};
	};
};

class UniformSlotInfo 
{ 
    slotType = 0; 
    linkProxy = "-"; 
}; 
class CfgVehicles
{
	class B_Plane_Fighter_01_F;
	
	class Soldner_Bayonet: B_Plane_Fighter_01_F
	{
		displayName = "Soldner's Bayonet";
		scope = 2;
		scopeCurator = 2;
		editorCategory = "PHRP_EdCat_Gladius";
		editorSubCategory = "PHRP_EdSubCat_Custom_Air";
		side = 1;
		hiddenSelections[] = {"Camo1","Camo2","number_01","number_02","number_03"};
		hiddenSelectionsTextures[] = 
		{
			"PHVehicles\Data\Bayonet\Soldner_01_fuselage_01_co.paa",
			"PHVehicles\Data\Bayonet\Soldner_01_fuselage_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_03_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"
		};
		LockDetectionSystem = "1+2+4+8";
		showAllTargets = 2;
	};
	class Katelo_Bayonet: B_Plane_Fighter_01_F
	{
		displayName = "Katelo's Bayonet";
		scope = 2;
		scopeCurator = 2;
		editorCategory = "PHRP_EdCat_Gladius";
		editorSubCategory = "PHRP_EdSubCat_Custom_Air";
		side = 1;
		hiddenSelections[] = {"Camo1","Camo2","number_01","number_02","number_03"};
		hiddenSelectionsTextures[] = 
		{
			"PHVehicles\Data\Bayonet\Katelo_01_fuselage_01_co.paa",
			"PHVehicles\Data\Bayonet\Soldner_01_fuselage_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_03_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_02_ca.paa"
		};
		LockDetectionSystem = "1+2+4+8";
		showAllTargets = 2;
	};
};
