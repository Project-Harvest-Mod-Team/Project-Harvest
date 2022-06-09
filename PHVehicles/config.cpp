#define _ARMA_

class CfgPatches
{
	class PHVehicles
	{
		author = "PHRP Mod Team";
		units[] = {"Soldner_Hornet","Katelo_Bayonet"};
		requiredAddons[] = {"OPTRE_Core","OPTRE_Vehicles"};
		weapons[] = {};
	};
};

class UniformSlotInfo 
{ 
    slotType = 0; 
    linkProxy = "-"; 
}; 
class Components;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateActiveRadar;
class SensorTemplatePassiveRadar;
class SensorTemplateLaser;
class SensorTemplateNV;
class CfgVehicles
{
	class B_Plane_Fighter_01_F;
	class OPTRE_raven_01;
	class OPTRE_UNSC_hornet;
	
	class Soldner_Hornet: OPTRE_UNSC_hornet
	{
		forceInGarage = 1;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		crewCrashProtection = 0.0001;
		crewExplosionProtection = 0.0001;
		displayName = "Soldner's Hornet";
		editorCategory = "PHRP_EdCat_Gladius";
		editorSubCategory = "PHRP_EdSubCat_Custom_Air";
		fuelCapacity = 200;
		tf_range = 120000;
		altFullForce = 6000;
		maxSpeed = 450;
		liftForceCoef = 2.5;
		cyclicAsideForceCoef = 3.4;
		cyclicForwardForceCoef = 1.65;
		bodyFrictionCoef = 0.3000001;
		backRotorForceCoef = 2;
		mainRotorSpeed = 6;
		backRotorSpeed = 7;
		hiddenSelections[] = {"camo1","clan","clan_text","insignia"};
		hiddenSelectionsTextures[] = {"PHVehicles\Data\Hornet\Soldner_Hornet.paa"};
		weapons[] = {"OPTRE_GUA23A","Icarus_missiles_C2GMLS","Icarus_missiles_Jackknife","Icarus_CMFlareLauncher"};
		magazines[] = {"OPTRE_2000Rnd_20mm_HEIAP","11_400Rnd_CMFlare_Chaff_Magazine"};
		weaponLockSystem = "1 + 2 + 4 + 8 + 16";
		class SensorsManagerComponent
		{
			class Components
			{
				class IRSensorComponent: SensorTemplateIR
				{
					class AirTarget
					{
						minRange = 50;
						maxRange = 5000;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = 1;
					};
					class GroundTarget
					{
						minRange = 5;
						maxRange = 2000;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = 1;
					};
					maxTrackableSpeed = 300;
					animDirection = "mainGun";
					angleRangeHorizontal = 46;
					angleRangeVertical = 34;
					aimdown = -0.25;
				};
				class VisualSensorComponent: SensorTemplateVisual
				{
					class AirTarget
					{
						minRange = 50;
						maxRange = 5000;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = 1;
					};
					class GroundTarget
					{
						minRange = 5;
						maxRange = 2000;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = 1;
					};
					maxTrackableSpeed = 300;
					animDirection = "mainGun";
					angleRangeHorizontal = 46;
					angleRangeVertical = 34;
					aimdown = -0.25;
				};
				class ActiveRadarSensorComponent: SensorTemplateActiveRadar
				{
					class AirTarget
					{
						minRange = 50;
						maxRange = 5000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						minRange = 5;
						maxRange = 2000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					maxTrackableSpeed = 300;
					angleRangeHorizontal = 180;
					angleRangeVertical = 90;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					aimDown = 30;
				};
				class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
				{
					class AirTarget
					{
						minRange = 50;
						maxRange = 5000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						minRange = 5;
						maxRange = 2000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					maxTrackableSpeed = 300;
					angleRangeHorizontal = 180;
					angleRangeVertical = 90;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					aimDown = 30;
				};
				class LaserSensorComponent: SensorTemplateLaser
				{
					class AirTarget
					{
						minRange = 50;
						maxRange = 5000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						minRange = 5;
						maxRange = 3000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					maxTrackableSpeed = 300;
					angleRangeHorizontal = 180;
					angleRangeVertical = 90;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					aimDown = 30;
				};
				class NVSensorComponent: SensorTemplateNV
				{
					class AirTarget
					{
						minRange = 50;
						maxRange = 5000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						minRange = 5;
						maxRange = 2000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					maxTrackableSpeed = 300;
					angleRangeHorizontal = 180;
					angleRangeVertical = 90;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					aimDown = 30;
				};
			};
		};
		ace_cargo_space = 4;
		ace_cargo_hasCargo = 1;
		class ACE_Cargo
		{
			class Cargo
			{
				class 11_RAMMO_Speedbag
				{
					type = "11_RAMMO_Speedbag";
					amount = 1;
				};
				class 11_Medical_Speedbag
				{
					type = "11_Medical_Speedbag";
					amount = 1;
				};
			};
		};
		class useractions
		{
			class MEU_E_Thruster
			{
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 2)";
				displayName = "<t color='#2CDB24'>Afterburners [ON]</t>";
				displayNameDefault = "<t color='#2CDB24'>Afterburners [ON]</t>";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn MEU_fnc_Afterburners_Engage;";
				textToolTip = "<t color='#2CDB24'>Afterburners [ON]</t>";
				userActionID = 59;
			};
			class MEU_D_Thruster
			{
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 2)";
				displayName = "<t color='#ff0000'>Afterburners [OFF]</t>";
				displayNameDefault = "<t color='#ff0000'>Afterburners [OFF]</t>";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 9;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn MEU_fnc_Afterburners_Disengage;";
				textToolTip = "<t color='#ff0000'>Afterburners [OFF]</t>";
				userActionID = 60;
			};
		};
		/*class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 50;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 50;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 300;
						animDirection = "mainGun";
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						aimdown = -0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 50;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 50;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 300;
						animDirection = "mainGun";
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						aimdown = -0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 20;
							maxRange = 3000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 20;
							maxRange = 3000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 300;
						angleRangeHorizontal = 180;
						angleRangeVertical = 90;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						aimDown = 30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
					class LaserSensorComponent: SensorTemplateLaser{};
					class NVSensorComponent: SensorTemplateNV{};
				};
			};
		};*/
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
			"PHVehicles\Data\Bayonet\Soldner_01_fuselage_01_co.paa",
			"PHVehicles\Data\Bayonet\Soldner_01_fuselage_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_03_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_02_ca.paa"
		};
		LockDetectionSystem = "1+2+4+8";
		showAllTargets = 2;
	};
};
