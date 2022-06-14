#define _ARMA_

class CfgPatches
{
	class PHRP_Units
	{
		author = "PHRP Mod Team";
		name = "Project Harvest Units";
		url = "https://discord.gg/vSnh2zBTCu";
		units[] = {"Atlas_Rifleman","Atlas_BR55","Atlas_Marksman","Atlas_Autorifleman","Atlas_Radio_Operator","Atlas_Medic","Stratos_Rifleman","Stratos_BR55","Stratos_Marksman","Stratos_Autorifleman","Stratos_Radio_Operator","Stratos_Medic"};
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
		scope = 2;
		scopeCurator = 2;
		side = 1;
		editorCategory = "PHRP_EdCat_Gladius";
		editorSubCategory = "PHRP_EdSubCat_ODSTs";
	};
	class Atlas_Rifleman: PHRP_Soldier_Base
	{
		displayName = "Atlas Rifleman";
		uniformClass = "Hades_BDU_Urban_Evolved";
		backpack = "OPTRE_ILCS_Rucksack_Black";
		icon = "iconMan";
		Weapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		linkedItems[] = {"Atlas_ODST_Helmet","Atlas_Armor_Rifleman","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"Atlas_ODST_Helmet","Atlas_Armor_Rifleman","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class Atlas_BR55: Atlas_Rifleman
	{
		displayName = "Atlas Rifleman (BR55)";
		Weapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class Atlas_Marksman: Atlas_Rifleman
	{
		displayName = "Atlas Designated Marksman";
		Weapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class Atlas_Autorifleman: Atlas_Rifleman
	{
		displayName = "Atlas Autorifleman";
		Weapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class Atlas_Radio_Operator: Atlas_Rifleman
	{
		displayName = "Atlas Radio Operator";
		backpack = "OPTRE_ANPRC_521_Black";
	};
	class Atlas_Medic: Atlas_Rifleman
	{
		displayName = "Atlas Corpsman";
		backpack = "OPTRE_ILCS_Rucksack_Medical";
		attendant = 1;
	};
	class Stratos_Rifleman: PHRP_Soldier_Base
	{
		displayName = "Stratos Rifleman";
		uniformClass = "Hades_BDU_Urban_Evolved";
		backpack = "OPTRE_ILCS_Rucksack_Black";
		icon = "iconMan";
		Weapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		linkedItems[] = {"Stratos_ODST_Helmet","Stratos_Armor_Rifleman","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"Stratos_ODST_Helmet","Stratos_Armor_Rifleman","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class Stratos_BR55: Stratos_Rifleman
	{
		displayName = "Stratos Rifleman (BR55)";
		Weapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class Stratos_Marksman: Stratos_Rifleman
	{
		displayName = "Stratos Designated Marksman";
		Weapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class Stratos_Autorifleman: Stratos_Rifleman
	{
		displayName = "Stratos Autorifleman";
		Weapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class Stratos_Radio_Operator: Stratos_Rifleman
	{
		displayName = "Stratos Radio Operator";
		backpack = "OPTRE_ANPRC_521_Black";
	};
	class Stratos_Medic: Stratos_Rifleman
	{
		displayName = "Stratos Corpsman";
		backpack = "OPTRE_ILCS_Rucksack_Medical";
		attendant = 1;
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
				class Atlas_Fireteam
				{
					dlc = "Project Harvest Armory";
					name = "Atlas Fireteam";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Atlas_Leader
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "Atlas_BR55";
					};
					class Atlas_SIC: Atlas_Leader
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						vehicle = "Atlas_Rifleman";
					};
					class Atlas_DMR: Atlas_Leader
					{
						position[] = {-5,-5,0};
						rank = "Private";
						vehicle = "Atlas_Marksman";
					};
					class Atlas_M73: Atlas_DMR
					{
						position[] = {10,-10,0};
						vehicle = "Atlas_Autorifleman";
					};
					class Atlas_RTO: Atlas_DMR
					{
						position[] = {-10,-10,0};
						vehicle = "Atlas_Radio_Operator";
					};
					class Atlas_Medic: Atlas_DMR
					{
						position[] = {15,-15,0};
						vehicle = "Atlas_Medic";
					};
				};
				class Stratos_Fireteam
				{
					dlc = "Project Harvest Armory";
					name = "Stratos Fireteam";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Stratos_Leader
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "Stratos_BR55";
					};
					class Stratos_SIC: Stratos_Leader
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						vehicle = "Stratos_Rifleman";
					};
					class Stratos_DMR: Stratos_Leader
					{
						position[] = {-5,-5,0};
						rank = "Private";
						vehicle = "Stratos_Marksman";
					};
					class Stratos_M73: Stratos_DMR
					{
						position[] = {10,-10,0};
						vehicle = "Stratos_Autorifleman";
					};
					class Stratos_RTO: Stratos_DMR
					{
						position[] = {-10,-10,0};
						vehicle = "Stratos_Radio_Operator";
					};
					class Stratos_Medic: Stratos_DMR
					{
						position[] = {15,-15,0};
						vehicle = "Stratos_Medic";
					};
				};
			};
		};
	};
};
