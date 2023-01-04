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
	class B_Soldier_base_F;
	class PHRP_Soldier_Base: B_Soldier_base_F
	{
		class EventHandlers;
		scope = 1;
		scopeCurator = 1;
		side = 1;
		editorCategory = "PHRP_EdCat_Gladius";
		editorSubCategory = "PHRP_EdSubCat_ODSTs";
	};
	class Gladius_Rifleman: PHRP_Soldier_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Gladius Rifleman";
		uniformClass = "Hades_BDU_Urban_Evolved";
		backpack = "OPTRE_ILCS_Rucksack_Black";
		icon = "iconMan";
		Weapons[] = {"OPTRE_MA5C","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5C","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		linkedItems[] = {"PHRP_Recruit_ODST_Helmet","PHRP_Recruit_Armor","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"Gladius_ODST_Helmet","Gladius_Armor_Rifleman","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class Gladius_Demolitionist: Gladius_Rifleman
	{
		displayName = "Gladius Demolitionist";
		canDeactivateMines = true;
		Weapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class Gladius_Grenadier: Gladius_Rifleman
	{
		displayName = "Gladius Grenadier";
		Weapons[] = {"OPTRE_MA5CGL","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5CGL","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell"};
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell"};
	};
	class Gladius_Marksman: Gladius_Rifleman
	{
		displayName = "Gladius Designated Marksman";
		Weapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class Gladius_Autorifleman: Gladius_Rifleman
	{
		displayName = "Gladius Autorifleman";
		Weapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class Gladius_Radio_Operator: Gladius_Rifleman
	{
		displayName = "Gladius Radio Operator";
		backpack = "OPTRE_ANPRC_521_Black";
	};
	class Gladius_AT_Specialist: Gladius_Rifleman
	{
		displayName = "Gladius AT Specialist";
		Weapons[] = {"OPTRE_MA5C","OPTRE_M6C","OPTRE_M41_SSR","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5C","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal"};
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal"};
		backpack = "OPTRE_ILCS_Rucksack_Heavy";
	};
	class Gladius_Medic: Gladius_Rifleman
	{
		displayName = "Gladius Corpsman";
		backpack = "OPTRE_ILCS_Rucksack_Medical";
		attendant = 1;
	};
	class Gladius_Breacher: Gladius_Rifleman
	{
		displayName = "Gladius Breacher";
		Weapons[] = {"OPTRE_M45TAC","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M45TAC","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_12Rnd_8Gauge_Slugs","OPTRE_12Rnd_8Gauge_Slugs","OPTRE_12Rnd_8Gauge_Slugs","OPTRE_12Rnd_8Gauge_Slugs","OPTRE_12Rnd_8Gauge_Slugs","OPTRE_12Rnd_8Gauge_Slugs","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_12Rnd_8Gauge_Slugs","OPTRE_12Rnd_8Gauge_Slugs","OPTRE_12Rnd_8Gauge_Slugs","OPTRE_12Rnd_8Gauge_Slugs","OPTRE_12Rnd_8Gauge_Slugs","OPTRE_12Rnd_8Gauge_Slugs","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
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
						rank = "SERGEANT";
						side = 1;
						vehicle = "Gladius_Radio_Operator";
					};
					class Gladius_Demo: Gladius_Leader
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						vehicle = "Gladius_Demolitionist";
					};
					class Gladius_DMR: Gladius_Leader
					{
						position[] = {-5,-5,0};
						rank = "Private";
						vehicle = "Gladius_Marksman";
					};
					class Gladius_M73: Gladius_DMR
					{
						position[] = {10,-10,0};
						vehicle = "Gladius_Autorifleman";
					};
					class Gladius_Grenadier: Gladius_DMR
					{
						position[] = {-10,-10,0};
						vehicle = "Gladius_Grenadier";
					};
					class Gladius_AT_Specialist: Gladius_DMR
					{
						position[] = {15,-15,0};
						vehicle = "Gladius_AT_Specialist";
					};
					class Gladius_Breacher: Gladius_DMR
					{
						position[] = {-15,-15,0};
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
