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
	class B_Plane_Fighter_01_F;
	class PHRP_Bayonet_Base: B_Plane_Fighter_01_F
	{
		scope = 0;
		dlc = "Project Harvest Armory";
		author = "Soldner";
		editorCategory = "PHRP_EdCat_Gladius";
		editorSubcategory = "PHRP_EdSubCat_Planes";
		faction = "Gladius_Faction";
		radarTargetSize = 0.4;
		visualTargetSize = 0.6;
		irTargetSize = 0.6;
	}
	class PHRP_Foulke_Bayonet_F: PHRP_Bayonet_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Foulke's Bayonet";
		hiddenSelections[] = {"Camo1","Camo2","number_01","number_02","number_03"};
		hiddenSelectionsTextures[] = {"PHVehicles\Data\Foulke_01_co.paa","PHVehicles\data\Strigon_02_co.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"};
	};
	class PHRP_Riader_Bayonet_F: PHRP_Bayonet_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Raider's Bayonet";
		hiddenSelections[] = {"Camo1","Camo2","number_01","number_02","number_03"};
		hiddenSelectionsTextures[] = {"PHVehicles\Data\Raider_01_co.paa","PHVehicles\data\Strigon_02_co.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_02_ca.paa"};
	};
};
