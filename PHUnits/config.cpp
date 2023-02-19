#define _ARMA_

class CfgPatches
{
	class PHRP_Units
	{
		author = "PHRP Mod Team";
		name = "Project Harvest Units";
		url = "https://discord.gg/vSnh2zBTCu";
		units[] = {"Gladius_Rifleman","Gladius_BR55","Gladius_Marksman","Gladius_Autorifleman","Gladius_Radio_Operator","Gladius_Medic"};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"PHRP_Core"};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class PHRP_Units
		{
			list[] = {"PHRP_Units","PHRP_Core"};
		};
	};
};
class CfgVehicles
{
	class OPTRE_UNSC_Marine_Soldier_Rifleman_AR;
	class PHRP_Soldier_Base: OPTRE_UNSC_Marine_Soldier_Rifleman_AR
	{
		class EventHandlers;
		scope = 1;
		scopeCurator = 1;
		side = 1;
		editorCategory = "PHRP_EdCat_Gladius";
		editorSubCategory = "PHRP_EdSubCat_ODSTs";
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 6;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 5;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitArms
			{
				armor = 5;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 5;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 0.3;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm: HitHands
			{
				material = -1;
				name = "hand_l";
				radius = 0.08;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg: HitLegs
			{
				material = -1;
				name = "leg_l";
				radius = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name = "leg_r";
			};
			class ACE_HDBracket
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0;
				radius = 1;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "HitHead";
			};
		};
	};
	class Gladius_Rifleman: PHRP_Soldier_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Gladius ODST Rifleman";
		uniformClass = "Gladius_BDU";
		backpack = "OPTRE_ILCS_Rucksack_Black";
		icon = "iconMan";
		Weapons[] = {"OPTRE_MA5C","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5C","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		linkedItems[] = {"PHRP_Recruit_ODST_Helmet","PHRP_Recruit_Armor","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"Gladius_ODST_Helmet","Gladius_Armor_Rifleman","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class Gladius_Officer: Gladius_Rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Gladius ODST Officer";
		attendant = 1;
		engineer = true;
	};
	class Gladius_Squad_Leader: Gladius_Rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Gladius ODST Squad Leader";
		attendant = 1;
	};
	class Gladius_Radio_Operator: Gladius_Rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Gladius ODST Radio Operator";
		backpack = "OPTRE_ANPRC_521_Black";
	};
	class Gladius_Medic: Gladius_Rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Gladius ODST Corpsman";
		backpack = "OPTRE_ILCS_Rucksack_Medical";
		attendant = 1;
	};
	class Gladius_Demolitionist: Gladius_Rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Gladius ODST Demolitionist";
		canDeactivateMines = true;
		Weapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class Gladius_Grenadier: Gladius_Rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Gladius ODST Grenadier";
		Weapons[] = {"OPTRE_MA5CGL","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5CGL","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell"};
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell"};
	};
	class Gladius_AT_Specialist: Gladius_Rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Gladius ODST AT Specialist";
		Weapons[] = {"OPTRE_MA5C","OPTRE_M6C","OPTRE_M41_SSR","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5C","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal"};
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal"};
		backpack = "OPTRE_ILCS_Rucksack_Heavy";
	};
	class Gladius_Breacher: Gladius_Rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Gladius ODST Breacher";
		Weapons[] = {"OPTRE_M45TAC","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M45TAC","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_12Rnd_8Gauge_Slugs","OPTRE_12Rnd_8Gauge_Slugs","OPTRE_12Rnd_8Gauge_Slugs","OPTRE_12Rnd_8Gauge_Slugs","OPTRE_12Rnd_8Gauge_Slugs","OPTRE_12Rnd_8Gauge_Slugs","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_12Rnd_8Gauge_Slugs","OPTRE_12Rnd_8Gauge_Slugs","OPTRE_12Rnd_8Gauge_Slugs","OPTRE_12Rnd_8Gauge_Slugs","OPTRE_12Rnd_8Gauge_Slugs","OPTRE_12Rnd_8Gauge_Slugs","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class Gladius_Autorifleman: Gladius_Rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Gladius ODST Autorifleman";
		Weapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class Gladius_Marksman: Gladius_Rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Gladius ODST Designated Marksman";
		Weapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class Gladius_Sniper: Gladius_Rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Gladius ODST Sniper";
		Weapons[] = {"MEU_OPTRE_SRS99D_AI","Throw","Put"};
		respawnWeapons[] = {"MEU_OPTRE_SRS99D_AI","Throw","Put"};
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
};
class CfgGroups
{
	class West
	{
		class Gladius_Company
		{
			dlc = "Project Harvest Armory";
			name = "Gladius Company";
			class ODSTS
			{
				name = "ODSTs";
				class Gladius_Fireteam
				{
					dlc = "Project Harvest Armory";
					name = "Gladius Fireteam";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Gladius_Leader
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "Gladius_Squad_Leader";
					};
					class Gladius_RTO : Gladius_Leader
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "Gladius_Radio_Operator";
					};
					class Gladius_Demo: Gladius_Leader
					{
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						vehicle = "Gladius_Demolitionist";
					};
					class Gladius_DMR: Gladius_Leader
					{
						position[] = {10,-10,0};
						rank = "Private";
						vehicle = "Gladius_Marksman";
					};
					class Gladius_M73: Gladius_DMR
					{
						position[] = {-10,-10,0};
						vehicle = "Gladius_Autorifleman";
					};
					class Gladius_Grenadier: Gladius_DMR
					{
						position[] = {15,-15,0};
						vehicle = "Gladius_Grenadier";
					};
					class Gladius_AT_Specialist: Gladius_DMR
					{
						position[] = {-15,-15,0};
						vehicle = "Gladius_AT_Specialist";
					};
					class Gladius_Breacher: Gladius_DMR
					{
						position[] = {20,-20,0};
						vehicle = "Gladius_Breacher";
					};
					class Gladius_Medic: Gladius_DMR
					{
						position[] = {-20,-20,0};
						vehicle = "Gladius_Medic";
					};
				};
			};
		};
	};
};
