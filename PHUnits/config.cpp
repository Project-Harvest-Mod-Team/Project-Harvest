#define _ARMA_

class CfgPatches
{
	class PHRP_Units
	{
		author = "PHRP Mod Team";
		name = "Project Harvest Units";
		url = "https://discord.gg/vSnh2zBTCu";
		units[] = {""};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class PHRP_Units
		{
			list[] = {"PHRP_Units"};
		};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class PHRP_Soldier_Base: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class Atlas_Rifleman: PHRP_Soldier_Base
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		editorCategory = "Gladius_Company";
		displayName = "Atlas Rifleman";
		uniformClass = "Hades_BDU_Urban_Evolved";
		backpack = "OPTRE_ILCS_Rucksack_Black";
		icon = "iconMan";
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		Weapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252_MAR_Light",0.75,"H_Booniehat_khk",0.05,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_MAR_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_MAR_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_BR55_MAR: VES_Rifleman_MA5B_MAR
	{
		displayName = "Rifleman (BR55)";
		Weapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_M392_MAR: VES_Rifleman_MA5B_MAR
	{
		displayName = "Designated Marksman (M392)";
		Weapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_M73_MAR: VES_Rifleman_MA5B_MAR
	{
		displayName = "Autorifleman";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		Weapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252_MAR_Heavy",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_MAR_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_MAR_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Radio_MAR: VES_Rifleman_BR55_MAR
	{
		displayName = "Radio Operator";
		backpack = "OPTRE_ANPRC_521_Black";
		headgearList[] = {"VES_CH252_MAR_Radio",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_MAR_Radio_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_MAR_Radio_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Crew_MAR: VES_Rifleman_MA5B_MAR
	{
		displayName = "Crewman";
		backpack = "";
		headgearList[] = {"VES_CH252_MAR_Crew",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_MAR_Rifleman_D","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_MAR_Rifleman_D","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Officer_MAR: VES_Rifleman_MA5B_MAR
	{
		displayName = "Officer";
		backpack = "OPTRE_ANPRC_521_Black";
		Weapons[] = {"OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"OPTRE_UNSC_PatrolCap_Marines",1};
		linkedItems[] = {"VES_M52A_MAR_Radio_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_MAR_Radio_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_SquadLeader_MAR: VES_Rifleman_MA5B_MAR
	{
		displayName = "Squad Leader";
		backpack = "OPTRE_ANPRC_521_Black";
		Weapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252_MAR_Heavy",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_MAR_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_MAR_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_TeamLeader_MAR: VES_Rifleman_MA5B_MAR
	{
		displayName = "Team Leader";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		Weapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252_MAR_Light",0.75,"H_Booniehat_khk",0.05,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_MAR_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_MAR_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
};
class CfgGroups
{
	class West
	{
		class V_FZ_UNSCDF
		{
			dlc = "Zulu";
			name = "[Zulu] UNSCDF";
			class Marines
			{
				name = "Infantry (Marines)";
				class Fireteam
				{
					dlc = "Zulu";
					name = "Fireteam";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Corporal
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "VES_Rifleman_TeamLeader_MAR";
					};
					class Private: Corporal
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						vehicle = "VES_Rifleman_MA5B_MAR";
					};
					class Private1: Private
					{
						position[] = {-5,-5,0};
					};
					class Private2: Private
					{
						position[] = {10,-10,0};
						vehicle = "VES_Rifleman_BR55_MAR";
					};
				};
				class Sentry
				{
					dlc = "Zulu";
					name = "Sentry";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Corporal
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "VES_Rifleman_TeamLeader_MAR";
					};
					class Corporal1: Corporal
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						vehicle = "VES_Rifleman_M73_MAR";
					};
				};
			};
			class MarinesWDL
			{
				name = "Infantry (Woodland)";
				class Fireteam
				{
					dlc = "Zulu";
					name = "Fireteam";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Corporal
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "VES_Rifleman_TeamLeader_WDL";
					};
					class Private: Corporal
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						vehicle = "VES_Rifleman_MA5B_WDL";
					};
					class Private1: Private
					{
						position[] = {-5,-5,0};
					};
					class Private2: Private
					{
						position[] = {10,-10,0};
						vehicle = "VES_Rifleman_BR55_WDL";
					};
				};
				class Sentry
				{
					dlc = "Zulu";
					name = "Sentry";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Corporal
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "VES_Rifleman_TeamLeader_WDL";
					};
					class Corporal1: Corporal
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						vehicle = "VES_Rifleman_M73_WDL";
					};
				};
			};
			class MarinesSNOW
			{
				name = "Infantry (Arctic)";
				class Fireteam
				{
					dlc = "Zulu";
					name = "Fireteam";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Corporal
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "VES_Rifleman_TeamLeader_SNO";
					};
					class Private: Corporal
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						vehicle = "VES_Rifleman_MA5B_SNO";
					};
					class Private1: Private
					{
						position[] = {-5,-5,0};
					};
					class Private2: Private
					{
						position[] = {10,-10,0};
						vehicle = "VES_Rifleman_BR55_SNO";
					};
				};
				class Sentry
				{
					dlc = "Zulu";
					name = "Sentry";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Corporal
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "VES_Rifleman_TeamLeader_SNO";
					};
					class Corporal1: Corporal
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						vehicle = "VES_Rifleman_M73_SNO";
					};
				};
			};
			class MarinesDES
			{
				name = "Infantry (Desert)";
				class Fireteam
				{
					dlc = "Zulu";
					name = "Fireteam";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Corporal
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "VES_Rifleman_TeamLeader_DES";
					};
					class Private: Corporal
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						vehicle = "VES_Rifleman_MA5B_DES";
					};
					class Private1: Private
					{
						position[] = {-5,-5,0};
					};
					class Private2: Private
					{
						position[] = {10,-10,0};
						vehicle = "VES_Rifleman_BR55_DES";
					};
				};
				class Sentry
				{
					dlc = "Zulu";
					name = "Sentry";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Corporal
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "VES_Rifleman_TeamLeader_DES";
					};
					class Corporal1: Corporal
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						vehicle = "VES_Rifleman_M73_DES";
					};
				};
			};
			class MarinesCEA
			{
				name = "Infantry (Evolved)";
				class Fireteam
				{
					dlc = "Zulu";
					name = "Fireteam";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Corporal
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "VES_Rifleman_TeamLeader_CEA";
					};
					class Private: Corporal
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						vehicle = "VES_Rifleman_MA5B_CEA";
					};
					class Private1: Private
					{
						position[] = {-5,-5,0};
					};
					class Private2: Private
					{
						position[] = {10,-10,0};
						vehicle = "VES_Rifleman_BR55_CEA";
					};
				};
				class Sentry
				{
					dlc = "Zulu";
					name = "Sentry";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Corporal
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "VES_Rifleman_TeamLeader_CEA";
					};
					class Corporal1: Corporal
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						vehicle = "VES_Rifleman_M73_CEA";
					};
				};
			};
			class MarinesURB
			{
				name = "Infantry (Urban)";
				class Fireteam
				{
					dlc = "Zulu";
					name = "Fireteam";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Corporal
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "VES_Rifleman_TeamLeader_URB";
					};
					class Private: Corporal
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						vehicle = "VES_Rifleman_MA5B_URB";
					};
					class Private1: Private
					{
						position[] = {-5,-5,0};
					};
					class Private2: Private
					{
						position[] = {10,-10,0};
						vehicle = "VES_Rifleman_BR55_URB";
					};
				};
				class Sentry
				{
					dlc = "Zulu";
					name = "Sentry";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Corporal
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "VES_Rifleman_TeamLeader_URB";
					};
					class Corporal1: Corporal
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						vehicle = "VES_Rifleman_M73_URB";
					};
				};
			};
			class ODSTs
			{
				name = "Infantry (ODST)";
				class Fireteam
				{
					dlc = "Zulu";
					name = "Fireteam";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Corporal
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "VES_Rifleman_TeamLeader_ODST";
					};
					class Private: Corporal
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						vehicle = "VES_Rifleman_MA5B_ODST";
					};
					class Private1: Private
					{
						position[] = {-5,-5,0};
					};
					class Private2: Private
					{
						position[] = {10,-10,0};
						vehicle = "VES_Rifleman_BR55_ODST";
					};
				};
				class Sentry
				{
					dlc = "Zulu";
					name = "Sentry";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Corporal
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "VES_Rifleman_TeamLeader_ODST";
					};
					class Corporal1: Corporal
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						vehicle = "VES_Rifleman_M73_ODST";
					};
				};
			};
			class MarinesVeh
			{
				name = "Motorized Marines";
				class WarthogM41
				{
					dlc = "Zulu";
					name = "Warthog Patrol (M41 LAAG)";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Warthog
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "VES_M12_LRV";
					};
					class Private: Warthog
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						vehicle = "VES_Rifleman_MA5B_MAR";
					};
					class Private1: Private
					{
						position[] = {-5,-5,0};
						vehicle = "VES_Rifleman_BR55_MAR";
					};
				};
				class WarthogATGM
				{
					dlc = "Zulu";
					name = "Warthog Patrol (ATGM)";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Warthog
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "VES_M12A1_LRV";
					};
					class Private: Warthog
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						vehicle = "VES_Rifleman_MA5B_MAR";
					};
					class Private1: Private
					{
						position[] = {-5,-5,0};
						vehicle = "VES_Rifleman_BR55_MAR";
					};
				};
				class WarthogM68
				{
					dlc = "Zulu";
					name = "Warthog Patrol (M68 ALIM)";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Warthog
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "VES_M12G1_LRV";
					};
					class Private: Warthog
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						vehicle = "VES_Rifleman_MA5B_MAR";
					};
					class Private1: Private
					{
						position[] = {-5,-5,0};
						vehicle = "VES_Rifleman_BR55_MAR";
					};
				};
				class WarthogTT
				{
					dlc = "Zulu";
					name = "Warthog Convoy (Troop)";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Warthog
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "VES_M12_LRV";
					};
					class Warthog1: Warthog
					{
						position[] = {0,-10,0};
						vehicle = "VES_M813_TT";
					};
					class Warthog2: Warthog1
					{
						position[] = {0,-20,0};
					};
					class Warthog3: Warthog
					{
						position[] = {0,-30,0};
					};
				};
				class BuffaloTT
				{
					dlc = "Zulu";
					name = "Buffalo Convoy (Troop)";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Warthog
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "VES_M12_LRV";
					};
					class Buffalo: Warthog
					{
						position[] = {0,-10,0};
						vehicle = "VES_HDV134_TT_C";
					};
					class Warthog1: Warthog
					{
						position[] = {0,-22.5,0};
					};
				};
			};
			class MarineArmor
			{
				name = "Mechanized Marines";
				class HoneybadgerTeam
				{
					dlc = "Zulu";
					name = "Honeybadger Team";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Honeybadger
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "VES_IFV76_A";
					};
					class Private: Honeybadger
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						vehicle = "VES_Rifleman_MA5B_MAR";
					};
					class Private1: Private
					{
						position[] = {-5,-5,0};
						vehicle = "VES_Rifleman_M73_MAR";
					};
					class Private2: Private
					{
						position[] = {10,-10,0};
						vehicle = "VES_Rifleman_BR55_MAR";
					};
					class Private3: Private
					{
						position[] = {-10,-10,0};
						vehicle = "VES_Rifleman_MA5B_MAR";
					};
				};
			};
		};
	};
	class Indep
	{
		class V_FZ_CPD
		{
			dlc = "Zulu";
			name = "[Zulu] Colonial Police";
			class Police
			{
				name = "Infantry (Police)";
				class Fireteam
				{
					dlc = "Zulu";
					name = "Fireteam";
					side = 2;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Corporal
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "VES_Rifleman_TeamLeader_CPD";
					};
					class Private: Corporal
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						vehicle = "VES_Rifleman_MA5B_CPD";
					};
					class Private1: Private
					{
						position[] = {-5,-5,0};
					};
					class Private2: Private
					{
						position[] = {10,-10,0};
						vehicle = "VES_Rifleman_BR55_CPD";
					};
				};
				class Sentry
				{
					dlc = "Zulu";
					name = "Sentry";
					side = 2;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Corporal
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "VES_Rifleman_TeamLeader_CPD";
					};
					class Corporal1: Corporal
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						vehicle = "VES_Rifleman_M73_CPD";
					};
				};
			};
			class SWAT
			{
				name = "Infantry (SWAT)";
				class Fireteam
				{
					dlc = "Zulu";
					name = "Fireteam";
					side = 2;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Corporal
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "VES_Rifleman_TeamLeader_SWAT";
					};
					class Private: Corporal
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						vehicle = "VES_Rifleman_MA5B_SWAT";
					};
					class Private1: Private
					{
						position[] = {-5,-5,0};
					};
					class Private2: Private
					{
						position[] = {10,-10,0};
						vehicle = "VES_Rifleman_BR55_SWAT";
					};
				};
				class Sentry
				{
					dlc = "Zulu";
					name = "Sentry";
					side = 2;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Corporal
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "VES_Rifleman_TeamLeader_SWAT";
					};
					class Corporal1: Corporal
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						vehicle = "VES_Rifleman_M73_SWAT";
					};
				};
			};
		};
	};
};
