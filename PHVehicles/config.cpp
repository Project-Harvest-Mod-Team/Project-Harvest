#define _ARMA_

class CfgPatches
{
	class PHRP_patch_vehicle
	{
		author = "Soldner";
		requiredAddons[] = {"PHRP_Core"};
		requiredVersion = 0.1;
		units[] = {"PHRP_SDV_01","HMCS_Thurgood","PHRP_Olympus_M12","Vulcan_M808BM"};
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
		editorSubcategory = "PHRP_EdSubCat_Cars";
		faction = "Gladius_Faction";
		maxSpeed = 500;
		fuelCapacity = 1500;
		peakTorque = 10000;
		enginePower = 10000;
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

	//vulcan tank
	class OPTRE_M808BM_Base;
	class Turrets;
	class MainTurret;
	class CargoTurret;
	class ViewOptics;
	class Vulcan_M808BM: OPTRE_M808BM_Base
	{
		dlc = "Project Harvest Armory";
		author = "Soldner";
		editorCategory = "PHRP_EdCat_Gladius";
		editorSubcategory = "PHRP_EdSubCat_Tanks";
		faction = "Gladius_Faction";
		displayName = "Vulcan M808B/M Scorpion MBT";
		scope = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};
		hiddenSelectionsTextures[] = 
		{
			"PHVehicles\Textures\Vulcan_lopo_co.paa",
			"PHVehicles\Textures\Vulcan_tur_wood_co.paa",
			"PHVehicles\Textures\Vulcan_3_co.paa",
			"PHVehicles\Textures\Vulcan_decals_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\mine_roller_co.paa",
			"PHVehicles\Textures\Vulcan_mg_co.paa"
		};
		class Turrets: Turrets
		{
			class CargoTurret1: CargoTurret
			{
				gunnerAction = "passenger_inside_3";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos cargo1";
				memoryPointsGetInGunnerDir = "pos cargo1 dir";
				memoryPointGunnerOptics = "gunnerview";
				gunnerName = "Passenger Gunner 1";
				proxyIndex = 1;
				maxElev = 15;
				minElev = -25;
				maxTurn = 60;
				minTurn = -60;
				isPersonTurret = 2;
				ejectDeadGunner = 1;
				gunnerInAction = "passenger_inside_3";
				startEngine = 0;
				allowLauncherIn = 1;
				allowLauncherOut = 1;
				LODTurnedIn = 0;
				LODTurnedOut = 0;
			};
			class CargoTurret2: CargoTurret1
			{
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos cargo2";
				memoryPointsGetInGunnerDir = "pos cargo2 dir";
				gunnerName = "Passenger Gunner 2";
				proxyIndex = 2;
			};
			class CargoTurret3: CargoTurret1
			{
				proxyIndex = 3;
				gunnerName = "Passenger Gunner 3";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos cargo3";
				memoryPointsGetInGunnerDir = "pos cargo3 dir";
			};
			class CargoTurret4: CargoTurret1
			{
				proxyIndex = 4;
				gunnerName = "Passenger Gunner 4";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos cargo4";
				memoryPointsGetInGunnerDir = "pos cargo4 dir";
			};
			class CargoTurret5: CargoTurret1
			{
				proxyIndex = 5;
				gunnerName = "Passenger Gunner 5";
				gunnerCompartments = "Compartment4";
				memoryPointsGetInGunner = "pos cargo5";
				memoryPointsGetInGunnerDir = "pos cargo6 dir";
			};
			class CargoTurret6: CargoTurret1
			{
				proxyIndex = 6;
				gunnerName = "Passenger Gunner 6";
				gunnerCompartments = "Compartment4";
				memoryPointsGetInGunner = "pos cargo6";
				memoryPointsGetInGunnerDir = "pos cargo6 dir";
			};
			class CargoTurret7: CargoTurret1
			{
				proxyIndex = 7;
				gunnerName = "Passenger Gunner 7";
				gunnerCompartments = "Compartment5";
				memoryPointsGetInGunner = "pos cargo7";
				memoryPointsGetInGunnerDir = "pos cargo7 dir";
			};
			class CargoTurret8: CargoTurret1
			{
				proxyIndex = 8;
				gunnerName = "Passenger Gunner 8";
				gunnerCompartments = "Compartment5";
				memoryPointsGetInGunner = "pos cargo8";
				memoryPointsGetInGunnerDir = "pos cargo8 dir";
			};
			class MainTurret: MainTurret
			{
				//teehee
				class Turrets{};
				memoryPointGun = "usti hlavne2";
				selectionFireAnim = "zasleh2";
				maxVerticalRotSpeed = "90/45";
				maxHorizontalRotSpeed = "90/45";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				minElev = -12;
				maxElev = 25;
				initElev = 0;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best","db-40",1.0,50};
				turretInfoType = "RscOptics_MBT_01_gunner";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex = 5;
				memoryPointGunnerOptics = "gunnerview";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				weapons[] = {"OPTRE_90mm_M512","SmokeLauncher","TG_NOD_Flamethrower_Weapon"};
				magazines[] = {"OPTRE_30Rnd_90mm_APBC","OPTRE_30Rnd_90mm_SAPHE","OPTRE_10Rnd_90mm_S1","SmokeLauncherMag","TG_NOD_Flamethrower_Magazine","TG_NOD_Flamethrower_Magazine","TG_NOD_Flamethrower_Magazine","TG_NOD_Flamethrower_Magazine","TG_NOD_Flamethrower_Magazine","TG_NOD_Flamethrower_Magazine","TG_NOD_Flamethrower_Magazine","TG_NOD_Flamethrower_Magazine","TG_NOD_Flamethrower_Magazine","TG_NOD_Flamethrower_Magazine","TG_Dummy_Magazine"};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.3;
						minFov = 0.3;
						maxFov = 0.3;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0};
						thermalResolution[] = {2048};
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_m_F.p3d";
						gunnerOpticsEffect[] = {};
					};
					class Medium: Wide
					{
						initFov = 0.07;
						minFov = 0.07;
						maxFov = 0.07;
					};
					class Narrow: Wide
					{
						initFov = 0.028;
						minFov = 0.028;
						maxFov = 0.028;
					};
				};
				gunnerAction = "Gunner_OPTRE_M808B";
				gunnerInAction = "Gunner_OPTRE_M808B";
				gunnerGetInAction = "GetInAMV_cargo";
				gunnerGetOutAction = "GetOutLow";
				castGunnerShadow = 0;
				stabilizedInAxes = 3;
				viewGunnerInExternal = 1;
				forceHideGunner = 1;
				gunnerForceOptics = 0;
				usepip = 1;
				class HitPoints
				{
					class HitTurret
					{
						armor = 4.5;
						material = -1;
						name = "otocVez";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.02;
						explosionShielding = 0.6;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 4.5;
						material = -1;
						name = "otocHlaven";
						visual = "Hlaven";
						passThrough = 0;
						minimalHit = 0;
						explosionShielding = 0.6;
						radius = 0.25;
					};
				};
			};
			class CommanderTurret: MainTurret
			{
				class Turrets{};
				LODTurnedIn = 1100;
				body = "obsTurret";
				gun = "obsGun";
				animationSourceBody = "obsTurret";
				animationSourceGun = "obsGun";
				proxyType = "CPCargo";
				proxyIndex = 14;
				cargoCompartments[] = {"Compartment1"};
				memoryPointGun = "usti hlavne3";
				selectionFireAnim = "zasleh3";
				maxVerticalRotSpeed = "90/45";
				maxHorizontalRotSpeed = "90/45";
				gunBeg = "usti hlavne3";
				gunEnd = "konec hlavne3";
				weapons[] = {"TG_NOD_Flamethrower_Weapon","Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries","TG_NOD_Flamethrower_Magazine","TG_NOD_Flamethrower_Magazine","TG_NOD_Flamethrower_Magazine","TG_NOD_Flamethrower_Magazine","TG_NOD_Flamethrower_Magazine","TG_NOD_Flamethrower_Magazine","TG_NOD_Flamethrower_Magazine","TG_NOD_Flamethrower_Magazine","TG_NOD_Flamethrower_Magazine","TG_NOD_Flamethrower_Magazine","TG_Dummy_Magazine"};
				minElev = -12;
				maxElev = 45;
				initElev = 0;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best","db-40",1.0,50};
				turretInfoType = "RscOptics_APC_Wheeled_01_gunner";
				memoryPointsGetInGunner = "pos commander";
				memoryPointsGetInGunnerDir = "pos commander dir";
				commanding = -2;
				primaryGunner = 0;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex = 4;
				memoryPointGunnerOptics = "commanderview";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.3;
						minFov = 0.3;
						maxFov = 0.3;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						thermalResolution[] = {2048};
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOpticsEffect[] = {};
					};
					class Medium: Wide
					{
						initFov = 0.07;
						minFov = 0.07;
						maxFov = 0.07;
					};
					class Narrow: Wide
					{
						initFov = 0.028;
						minFov = 0.028;
						maxFov = 0.028;
					};
				};
				gunnerGetInAction = "GetInAMV_cargo";
				gunnerGetOutAction = "GetOutLow";
				gunnerName = "Commander";
				castGunnerShadow = 0;
				stabilizedInAxes = 3;
				viewGunnerInExternal = 1;
				startEngine = 0;
				gunnerForceOptics = 0;
				usepip = 1;
			};
		};		
		tf_range = 25000;
		tf_isolatedAmount = 0.4;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		enableRadio = 1;
	};
};
