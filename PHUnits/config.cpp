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
		editorCategory = "V_FZ_EdCat_Zulu";
		editorSubcategory = "V_FZ_EdSubCat_Men_Marine";
		displayName = "Rifleman";
		uniformClass = "VES_BDU_MulticamBlack";
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
	class VES_Rifleman_MA5B_WDL: VES_Rifleman_MA5B_MAR
	{
		editorSubcategory = "V_FZ_EdSubCat_Men_Marine_W";
		uniformClass = "VES_BDU_Halo2A";
		headgearList[] = {"VES_CH252_WDL_Light",0.75,"H_Booniehat_khk",0.05,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_WDL_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_WDL_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_BR55_WDL: VES_Rifleman_MA5B_WDL
	{
		displayName = "Rifleman (BR55)";
		Weapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_M392_WDL: VES_Rifleman_MA5B_WDL
	{
		displayName = "Designated Marksman (M392)";
		Weapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_M73_WDL: VES_Rifleman_MA5B_WDL
	{
		displayName = "Autorifleman";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		Weapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252_WDL_Heavy",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_WDL_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_WDL_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Radio_WDL: VES_Rifleman_BR55_WDL
	{
		displayName = "Radio Operator";
		backpack = "OPTRE_ANPRC_521_Black";
		headgearList[] = {"VES_CH252_WDL_Radio",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_WDL_Radio_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_WDL_Radio_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Crew_WDL: VES_Rifleman_MA5B_WDL
	{
		displayName = "Crewman";
		backpack = "";
		headgearList[] = {"VES_CH252_WDL_Crew",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_WDL_Rifleman_D","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_WDL_Rifleman_D","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Officer_WDL: VES_Rifleman_MA5B_WDL
	{
		displayName = "Officer";
		backpack = "OPTRE_ANPRC_521_Black";
		Weapons[] = {"OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"OPTRE_UNSC_PatrolCap_Marines",1};
		linkedItems[] = {"VES_M52A_WDL_Radio_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_WDL_Radio_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_SquadLeader_WDL: VES_Rifleman_MA5B_WDL
	{
		displayName = "Squad Leader";
		backpack = "OPTRE_ANPRC_521_Black";
		Weapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252_WDL_Heavy",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_WDL_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_WDL_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_TeamLeader_WDL: VES_Rifleman_MA5B_WDL
	{
		displayName = "Team Leader";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		Weapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252_WDL_Light",0.75,"H_Booniehat_khk",0.05,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_WDL_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_WDL_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_MA5B_DES: VES_Rifleman_MA5B_MAR
	{
		editorSubcategory = "V_FZ_EdSubCat_Men_Marine_D";
		uniformClass = "VES_BDU_DesertDPM";
		headgearList[] = {"VES_CH252_DES_Light",0.75,"H_Booniehat_khk",0.05,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_DES_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_DES_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_BR55_DES: VES_Rifleman_MA5B_DES
	{
		displayName = "Rifleman (BR55)";
		Weapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_M392_DES: VES_Rifleman_MA5B_DES
	{
		displayName = "Designated Marksman (M392)";
		Weapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_M73_DES: VES_Rifleman_MA5B_DES
	{
		displayName = "Autorifleman";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		Weapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252_DES_Heavy",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_DES_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_DES_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Radio_DES: VES_Rifleman_BR55_DES
	{
		displayName = "Radio Operator";
		backpack = "OPTRE_ANPRC_521_Black";
		headgearList[] = {"VES_CH252_DES_Radio",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_DES_Radio_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_DES_Radio_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Crew_DES: VES_Rifleman_MA5B_DES
	{
		displayName = "Crewman";
		backpack = "";
		headgearList[] = {"VES_CH252_DES_Crew",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_DES_Rifleman_D","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_DES_Rifleman_D","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Officer_DES: VES_Rifleman_MA5B_DES
	{
		displayName = "Officer";
		backpack = "OPTRE_ANPRC_521_Black";
		Weapons[] = {"OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"OPTRE_UNSC_PatrolCap_Marines",1};
		linkedItems[] = {"VES_M52A_DES_Radio_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_DES_Radio_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_SquadLeader_DES: VES_Rifleman_MA5B_DES
	{
		displayName = "Squad Leader";
		backpack = "OPTRE_ANPRC_521_Black";
		Weapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252_DES_Heavy",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_DES_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_DES_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_TeamLeader_DES: VES_Rifleman_MA5B_DES
	{
		displayName = "Team Leader";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		Weapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252_DES_Light",0.75,"H_Booniehat_khk",0.05,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_DES_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_DES_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_MA5B_SNO: VES_Rifleman_MA5B_MAR
	{
		editorSubcategory = "V_FZ_EdSubCat_Men_Marine_S";
		uniformClass = "VES_BDU_Tundra";
		headgearList[] = {"VES_CH252_SNO_Light",0.75,"H_Booniehat_khk",0.05,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_SNO_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_SNO_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_BR55_SNO: VES_Rifleman_MA5B_SNO
	{
		displayName = "Rifleman (BR55)";
		Weapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_M392_SNO: VES_Rifleman_MA5B_SNO
	{
		displayName = "Designated Marksman (M392)";
		Weapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_M73_SNO: VES_Rifleman_MA5B_SNO
	{
		displayName = "Autorifleman";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		Weapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252_SNO_Heavy",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_SNO_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_SNO_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Radio_SNO: VES_Rifleman_BR55_SNO
	{
		displayName = "Radio Operator";
		backpack = "OPTRE_ANPRC_521_Black";
		headgearList[] = {"VES_CH252_SNO_Radio",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_SNO_Radio_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_SNO_Radio_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Crew_SNO: VES_Rifleman_MA5B_SNO
	{
		displayName = "Crewman";
		backpack = "";
		headgearList[] = {"VES_CH252_SNO_Crew",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_SNO_Rifleman_D","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_SNO_Rifleman_D","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Officer_SNO: VES_Rifleman_MA5B_SNO
	{
		displayName = "Officer";
		backpack = "OPTRE_ANPRC_521_Black";
		Weapons[] = {"OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"OPTRE_UNSC_PatrolCap_Marines",1};
		linkedItems[] = {"VES_M52A_SNO_Radio_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_SNO_Radio_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_SquadLeader_SNO: VES_Rifleman_MA5B_SNO
	{
		displayName = "Squad Leader";
		backpack = "OPTRE_ANPRC_521_Black";
		Weapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252_SNO_Heavy",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_SNO_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_SNO_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_TeamLeader_SNO: VES_Rifleman_MA5B_SNO
	{
		displayName = "Team Leader";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		Weapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252_SNO_Light",0.75,"H_Booniehat_khk",0.05,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_SNO_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_SNO_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_MA5B_CEA: VES_Rifleman_MA5B_MAR
	{
		editorSubcategory = "V_FZ_EdSubCat_Men_Marine_C";
		uniformClass = "VES_BDU_Evolved";
		headgearList[] = {"VES_CH252_CEA_Light",0.75,"H_Booniehat_khk",0.05,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_CEA_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_CEA_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_BR55_CEA: VES_Rifleman_MA5B_CEA
	{
		displayName = "Rifleman (BR55)";
		Weapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_M392_CEA: VES_Rifleman_MA5B_CEA
	{
		displayName = "Designated Marksman (M392)";
		Weapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_M73_CEA: VES_Rifleman_MA5B_CEA
	{
		displayName = "Autorifleman";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		Weapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252_CEA_Heavy",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_CEA_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_CEA_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Radio_CEA: VES_Rifleman_BR55_CEA
	{
		displayName = "Radio Operator";
		backpack = "OPTRE_ANPRC_521_Black";
		headgearList[] = {"VES_CH252_CEA_Radio",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_CEA_Radio_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_CEA_Radio_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Crew_CEA: VES_Rifleman_MA5B_CEA
	{
		displayName = "Crewman";
		backpack = "";
		headgearList[] = {"VES_CH252_CEA_Crew",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_CEA_Rifleman_D","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_CEA_Rifleman_D","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Officer_CEA: VES_Rifleman_MA5B_CEA
	{
		displayName = "Officer";
		backpack = "OPTRE_ANPRC_521_Black";
		Weapons[] = {"OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"OPTRE_UNSC_PatrolCap_Marines",1};
		linkedItems[] = {"VES_M52A_CEA_Radio_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_CEA_Radio_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_SquadLeader_CEA: VES_Rifleman_MA5B_CEA
	{
		displayName = "Squad Leader";
		backpack = "OPTRE_ANPRC_521_Black";
		Weapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252_CEA_Heavy",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_CEA_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_CEA_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_TeamLeader_CEA: VES_Rifleman_MA5B_CEA
	{
		displayName = "Team Leader";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		Weapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252_CEA_Light",0.75,"H_Booniehat_khk",0.05,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_CEA_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_CEA_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_MA5B_URB: VES_Rifleman_MA5B_MAR
	{
		editorSubcategory = "V_FZ_EdSubCat_Men_Marine_U";
		uniformClass = "VES_BDU_Urban";
		headgearList[] = {"VES_CH252_URB_Light",0.75,"H_Booniehat_khk",0.05,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_URB_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_URB_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_BR55_URB: VES_Rifleman_MA5B_URB
	{
		displayName = "Rifleman (BR55)";
		Weapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_M392_URB: VES_Rifleman_MA5B_URB
	{
		displayName = "Designated Marksman (M392)";
		Weapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_M73_URB: VES_Rifleman_MA5B_URB
	{
		displayName = "Autorifleman";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		Weapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252_URB_Heavy",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_URB_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_URB_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Radio_URB: VES_Rifleman_BR55_URB
	{
		displayName = "Radio Operator";
		backpack = "OPTRE_ANPRC_521_Black";
		headgearList[] = {"VES_CH252_URB_Radio",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_URB_Radio_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_URB_Radio_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Crew_URB: VES_Rifleman_MA5B_URB
	{
		displayName = "Crewman";
		backpack = "";
		headgearList[] = {"VES_CH252_URB_Crew",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_URB_Rifleman_D","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_URB_Rifleman_D","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Officer_URB: VES_Rifleman_MA5B_URB
	{
		displayName = "Officer";
		backpack = "OPTRE_ANPRC_521_Black";
		Weapons[] = {"OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"OPTRE_UNSC_PatrolCap_Marines",1};
		linkedItems[] = {"VES_M52A_URB_Radio_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_URB_Radio_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_SquadLeader_URB: VES_Rifleman_MA5B_URB
	{
		displayName = "Squad Leader";
		backpack = "OPTRE_ANPRC_521_Black";
		Weapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252_URB_Heavy",1,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_URB_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_URB_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_TeamLeader_URB: VES_Rifleman_MA5B_URB
	{
		displayName = "Team Leader";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		Weapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252_URB_Light",0.75,"H_Booniehat_khk",0.05,"OPTRE_UNSC_PatrolCap_Marines",0.1};
		linkedItems[] = {"VES_M52A_URB_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_URB_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_MA5B_ARM: VES_Rifleman_MA5B_MAR
	{
		editorSubcategory = "V_FZ_EdSubCat_Men_Army";
		uniformClass = "VES_BDU_Reach";
		headgearList[] = {"VES_CH252_DES_Light",0.75,"OPTRE_UNSC_PatrolCap_Army",0.1};
		linkedItems[] = {"VES_M52A_MAR_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_MAR_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_BR55_ARM: VES_Rifleman_MA5B_ARM
	{
		displayName = "Rifleman (BR55)";
		Weapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_M392_ARM: VES_Rifleman_MA5B_ARM
	{
		displayName = "Designated Marksman (M392)";
		Weapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_M73_ARM: VES_Rifleman_MA5B_ARM
	{
		displayName = "Autorifleman";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		Weapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252_DES_Heavy",1,"OPTRE_UNSC_PatrolCap_Army",0.1};
		linkedItems[] = {"VES_M52A_MAR_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_MAR_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Radio_ARM: VES_Rifleman_BR55_ARM
	{
		displayName = "Radio Operator";
		backpack = "OPTRE_ANPRC_521_Black";
		headgearList[] = {"VES_CH252_DES_Radio",1,"OPTRE_UNSC_PatrolCap_Army",0.1};
		linkedItems[] = {"VES_M52A_MAR_Radio_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_MAR_Radio_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Crew_ARM: VES_Rifleman_MA5B_ARM
	{
		displayName = "Crewman";
		backpack = "";
		headgearList[] = {"VES_CH252_DES_Crew",1,"OPTRE_UNSC_PatrolCap_Army",0.1};
		linkedItems[] = {"VES_M52A_MAR_Rifleman_D","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_MAR_Rifleman_D","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Officer_ARM: VES_Rifleman_MA5B_ARM
	{
		displayName = "Officer";
		backpack = "OPTRE_ANPRC_521_Black";
		Weapons[] = {"OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"OPTRE_UNSC_PatrolCap_Army",1};
		linkedItems[] = {"VES_M52A_MAR_Radio_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_MAR_Radio_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_SquadLeader_ARM: VES_Rifleman_MA5B_ARM
	{
		displayName = "Squad Leader";
		backpack = "OPTRE_ANPRC_521_Black";
		Weapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252_DES_Heavy",1,"OPTRE_UNSC_PatrolCap_Army",0.1};
		linkedItems[] = {"VES_M52A_MAR_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_MAR_Rifleman_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_TeamLeader_ARM: VES_Rifleman_MA5B_ARM
	{
		displayName = "Team Leader";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		Weapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252_DES_Light",0.75,"OPTRE_UNSC_PatrolCap_Army",0.1};
		linkedItems[] = {"VES_M52A_MAR_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_MAR_Rifleman_B","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_MA5B_AMP: VES_Rifleman_MA5B_MAR
	{
		editorSubcategory = "V_FZ_EdSubCat_Men_Army_MP";
		uniformClass = "VES_MPU_Reach";
		backpack = "";
		headgearList[] = {"VES_CH252_SNO_Light",0.75,"OPTRE_UNSC_Dress_Hat",0.25,"VES_Beret_MP",0.15};
		linkedItems[] = {"VES_M52A_MAR_Vest_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_MAR_Vest_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_BR55_AMP: VES_Rifleman_MA5B_AMP
	{
		displayName = "Rifleman (BR55)";
		Weapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_M392_AMP: VES_Rifleman_MA5B_AMP
	{
		displayName = "Designated Marksman (M392)";
		Weapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_M73_AMP: VES_Rifleman_MA5B_AMP
	{
		displayName = "Autorifleman";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		Weapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252_SNO_Heavy",1,"OPTRE_UNSC_Dress_Hat",0.15,"VES_Beret_MP",0.05};
		linkedItems[] = {"VES_M52A_MAR_Radio_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52A_MAR_Radio_A","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_MA5B_ODST: VES_Rifleman_MA5B_MAR
	{
		backpack = "OPTRE_ILCS_Rucksack_Black";
		editorSubcategory = "V_FZ_EdSubCat_Men_Marine_ODST";
		uniformClass = "VES_BDU_Urban_Slim";
		headgearList[] = {"VES_CH252D",1,"VES_CH252D_S",0.25,"VES_CH252D_G",0.05};
		linkedItems[] = {"VES_M52D_Rifleman","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52D_Rifleman","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_BR55_ODST: VES_Rifleman_MA5B_ODST
	{
		displayName = "Rifleman (BR55)";
		Weapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_M392_ODST: VES_Rifleman_MA5B_ODST
	{
		displayName = "Designated Marksman (M392)";
		Weapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252D",1,"VES_CH252D_S",0.25,"VES_CH252D_G",0.05};
		linkedItems[] = {"VES_M52D_Marksman","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52D_Marksman","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_M73_ODST: VES_Rifleman_MA5B_ODST
	{
		displayName = "Autorifleman";
		backpack = "OPTRE_ILCS_Rucksack_Heavy";
		Weapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_Radio_ODST: VES_Rifleman_BR55_ODST
	{
		displayName = "Radio Operator";
		backpack = "OPTRE_ANPRC_515";
		headgearList[] = {"VES_CH252D",1,"VES_CH252D_S",0.25,"VES_CH252D_G",0.05};
		linkedItems[] = {"VES_M52D_Scout","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52D_Scout","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_SquadLeader_ODST: VES_Rifleman_Radio_ODST
	{
		displayName = "Squad Leader";
	};
	class VES_Rifleman_TeamLeader_ODST: VES_Rifleman_SquadLeader_ODST
	{
		displayName = "Team Leader";
	};
	class VES_Rifleman_MA5B_SFP: VES_Rifleman_MA5B_ODST
	{
		side = 2;
		uniformClass = "VES_BDU_Urban_I_Slim";
		editorCategory = "V_FZ_EdCat_SFP";
		headgearList[] = {"VES_CH252D",1,"VES_CH252D_S",0.25,"VES_CH252D_G",0.05};
		linkedItems[] = {"VES_M52D_SFP_Rifleman","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52D_SFP_Rifleman","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_BR55_SFP: VES_Rifleman_MA5B_SFP
	{
		displayName = "Rifleman (BR55)";
		Weapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_M392_SFP: VES_Rifleman_MA5B_SFP
	{
		displayName = "Designated Marksman (M392)";
		Weapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252D",1,"VES_CH252D_S",0.25,"VES_CH252D_G",0.05};
		linkedItems[] = {"VES_M52D_SFP_Marksman","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52D_SFP_Marksman","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_M73_SFP: VES_Rifleman_MA5B_SFP
	{
		displayName = "Autorifleman";
		backpack = "OPTRE_ILCS_Rucksack_Heavy";
		Weapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_Radio_SFP: VES_Rifleman_BR55_SFP
	{
		displayName = "Radio Operator";
		backpack = "OPTRE_ANPRC_515";
		headgearList[] = {"VES_CH252D",1,"VES_CH252D_S",0.25,"VES_CH252D_G",0.05};
		linkedItems[] = {"VES_M52D_SFP_Scout","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52D_SFP_Scout","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_SquadLeader_SFP: VES_Rifleman_Radio_SFP
	{
		displayName = "Squad Leader";
	};
	class VES_Rifleman_TeamLeader_SFP: VES_Rifleman_SquadLeader_SFP
	{
		displayName = "Team Leader";
	};
	class VES_Rifleman_MA5B_AA: VES_Rifleman_MA5B_ODST
	{
		uniformClass = "VES_BDU_Evolved_Slim";
		editorSubcategory = "V_FZ_EdSubCat_Men_Army_AA";
		headgearList[] = {"VES_CH252A",1,"VES_CH252A_S",0.25,"VES_CH252A_G",0.05};
		linkedItems[] = {"VES_M52D_Rifleman","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52D_Rifleman","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_BR55_AA: VES_Rifleman_MA5B_AA
	{
		displayName = "Rifleman (BR55)";
		Weapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_M392_AA: VES_Rifleman_MA5B_AA
	{
		displayName = "Designated Marksman (M392)";
		Weapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_CH252A",1,"VES_CH252A_S",0.25,"VES_CH252A_G",0.05};
		linkedItems[] = {"VES_M52D_Marksman","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52D_Marksman","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_M73_AA: VES_Rifleman_MA5B_AA
	{
		displayName = "Autorifleman";
		backpack = "OPTRE_ILCS_Rucksack_Heavy";
		Weapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_Radio_AA: VES_Rifleman_BR55_AA
	{
		displayName = "Radio Operator";
		backpack = "OPTRE_ANPRC_515";
		headgearList[] = {"VES_CH252A",1,"VES_CH252A_S",0.25,"VES_CH252A_G",0.05};
		linkedItems[] = {"VES_M52D_Scout","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_M52D_Scout","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_SquadLeader_AA: VES_Rifleman_Radio_AA
	{
		displayName = "Squad Leader";
	};
	class VES_Rifleman_TeamLeader_AA: VES_Rifleman_SquadLeader_AA
	{
		displayName = "Team Leader";
	};
	class VES_Rifleman_MA5B_CPD: VES_Rifleman_MA5B_MAR
	{
		side = 2;
		editorCategory = "V_FZ_EdCat_CPD";
		editorSubcategory = "V_FZ_EdSubCat_Men_Police";
		backpack = "";
		uniformClass = "VES_BDU_SS_CPD";
		headgearList[] = {"VES_Beret_CPD",0.25,"VES_PatrolCap_CPD",0.5};
		linkedItems[] = {"VES_Holster_CPD","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS","VES_HUD_Raybans"};
		respawnLinkedItems[] = {"VES_Holster_CPD","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS","VES_HUD_RayBans"};
	};
	class VES_Rifleman_BR55_CPD: VES_Rifleman_MA5B_CPD
	{
		displayName = "Rifleman (BR55)";
		uniformClass = "VES_BDU_SS_CPD_BLU";
		Weapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_M392_CPD: VES_Rifleman_MA5B_CPD
	{
		displayName = "Designated Marksman (M392)";
		uniformClass = "VES_BDU_SS_CPD_BLU";
		Weapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_M73_CPD: VES_Rifleman_MA5B_CPD
	{
		displayName = "Autorifleman";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		Weapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_KH2000_CPD",0.25,"VES_Beret_CPD",0.5,"VES_PatrolCap_CPD",0.5,"LM_OPCAN_CPD_CH230",0.15,"LM_OPCAN_CPD_CH230_UP",0.15};
		linkedItems[] = {"VES_FH320_CPD_Medium","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_FH320_CPD_Medium","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Radio_CPD: VES_Rifleman_BR55_CPD
	{
		displayName = "Radio Operator";
		headgearList[] = {"VES_KH2000_CPD",0.25,"VES_Beret_CPD",0.5,"VES_PatrolCap_CPD",0.5};
		linkedItems[] = {"VES_FH320_CPD_Light","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_FH320_CPD_Light","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Crew_CPD: VES_Rifleman_MA5B_CPD
	{
		displayName = "Crewman";
		backpack = "";
		headgearList[] = {"VES_CH252_URB_Crew",1,"VES_Beret_CPD",0.25,"VES_PatrolCap_CPD",0.25};
		linkedItems[] = {"VES_FH320_CPD_Medium","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_FH320_CPD_Medium","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Officer_CPD: VES_Rifleman_MA5B_CPD
	{
		displayName = "Officer";
		uniformClass = "VES_BDU_SS_CPD_BLU";
		Weapons[] = {"OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_KH2000_CPD",0.25,"VES_Beret_CPD",0.5,"VES_PatrolCap_CPD",0.5};
		linkedItems[] = {"VES_FH320_CPD_Light","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_FH320_CPD_Light","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_SquadLeader_CPD: VES_Rifleman_MA5B_CPD
	{
		displayName = "Squad Leader";
		Weapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_KH2000_CPD",0.25,"VES_Beret_CPD",0.5,"VES_PatrolCap_CPD",0.5,"LM_OPCAN_CPD_CH230",0.15,"LM_OPCAN_CPD_CH230_UP",0.15};
		linkedItems[] = {"VES_FH320_CPD_Medium","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_FH320_CPD_Medium","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_TeamLeader_CPD: VES_Rifleman_MA5B_CPD
	{
		displayName = "Team Leader";
		Weapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_Beret_CPD",0.25,"VES_PatrolCap_CPD",0.5};
		linkedItems[] = {"VES_Holster_CPD","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS","VES_HUD_Raybans"};
		respawnLinkedItems[] = {"VES_Holster_CPD","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS","VES_HUD_RayBans"};
	};
	class VES_Rifleman_MA5B_SWAT: VES_Rifleman_MA5B_CPD
	{
		side = 2;
		editorCategory = "V_FZ_EdCat_CPD";
		editorSubcategory = "V_FZ_EdSubCat_Men_SWAT";
		uniformClass = "VES_BDU_CPD";
		headgearList[] = {"VES_KH2000_CPD",0.25,"VES_Beret_CPD",0.5,"VES_PatrolCap_CPD",0.5};
		linkedItems[] = {"VES_FH320_CPD_Light","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_FH320_CPD_Light","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_BR55_SWAT: VES_Rifleman_MA5B_SWAT
	{
		displayName = "Rifleman (BR55)";
		uniformClass = "VES_BDU_R_CPD";
		Weapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_M392_SWAT: VES_Rifleman_MA5B_SWAT
	{
		displayName = "Designated Marksman (M392)";
		uniformClass = "VES_BDU_R_CPD";
		Weapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
	};
	class VES_Rifleman_M73_SWAT: VES_Rifleman_MA5B_SWAT
	{
		displayName = "Autorifleman";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		Weapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M73","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_KH2000_CPD",1,"LM_OPCAN_CPD_CH230",0.5,"LM_OPCAN_CPD_CH230_UP",0.5};
		linkedItems[] = {"VES_FH320_CPD_Heavy","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_FH320_CPD_Heavy","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Radio_SWAT: VES_Rifleman_BR55_SWAT
	{
		displayName = "Radio Operator";
		backpack = "OPTRE_ANPRC_521_Black";
		headgearList[] = {"VES_KH2000_CPD",0.25,"VES_Beret_CPD",0.5,"VES_PatrolCap_CPD",0.5,"LM_OPCAN_CPD_CH230",0.15,"LM_OPCAN_CPD_CH230_UP",0.15};
		linkedItems[] = {"VES_FH320_CPD_Medium","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_FH320_CPD_Medium","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Crew_SWAT: VES_Rifleman_MA5B_SWAT
	{
		displayName = "Crewman";
		backpack = "";
		headgearList[] = {"VES_CH252_URB_Crew",1,"VES_Beret_CPD",0.25,"VES_PatrolCap_CPD",0.25};
		linkedItems[] = {"VES_FH320_CPD_Medium","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_FH320_CPD_Medium","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_Officer_SWAT: VES_Rifleman_MA5B_SWAT
	{
		displayName = "Officer";
		backpack = "OPTRE_ANPRC_521_Black";
		uniformClass = "VES_BDU_R_CPD";
		Weapons[] = {"OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_KH2000_CPD",0.25,"VES_Beret_CPD",0.5,"VES_PatrolCap_CPD",0.5,"LM_OPCAN_CPD_CH230",0.15,"LM_OPCAN_CPD_CH230_UP",0.15};
		linkedItems[] = {"VES_FH320_CPD_Medium","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_FH320_CPD_Medium","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_SquadLeader_SWAT: VES_Rifleman_MA5B_SWAT
	{
		displayName = "Squad Leader";
		backpack = "OPTRE_ANPRC_521_Black";
		Weapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_KH2000_CPD",1,"LM_OPCAN_CPD_CH230",0.5,"LM_OPCAN_CPD_CH230_UP",0.5};
		linkedItems[] = {"VES_FH320_CPD_Heavy","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_FH320_CPD_Heavy","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_TeamLeader_SWAT: VES_Rifleman_MA5B_SWAT
	{
		displayName = "Team Leader";
		backpack = "OPTRE_UNSC_Rucksack_Heavy";
		Weapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_MA5B","OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		headgearList[] = {"VES_KH2000_CPD",0.25,"VES_Beret_CPD",0.5,"VES_PatrolCap_CPD",0.5};
		linkedItems[] = {"VES_FH320_CPD_Light","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
		respawnLinkedItems[] = {"VES_FH320_CPD_Light","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS"};
	};
	class VES_Rifleman_ONI_ODST: VES_Rifleman_BR55_ODST
	{
		side = 2;
		editorCategory = "V_FZ_EdCat_ONI";
		editorSubcategory = "V_FZ_EdSubCat_Men_Agent";
		displayName = "ONI Field Operative";
		headgearList[] = {"VES_S1ONIR",1,"VES_S1ONIR_S",0.5};
		linkedItems[] = {"VES_M52D_Scout","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS","VES_NVG_Collar_VAC"};
		respawnLinkedItems[] = {"VES_M52D_Scout","ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS","VES_NVG_Collar_VAC"};
	};
	class VES_ONI_Agent: VES_Rifleman_ONI_ODST
	{
		displayName = "Naval Intelligence Officer";
		backpack = "";
		uniformClass = "VES_BDU_ONI";
		headgearList[] = {};
		Weapons[] = {"OPTRE_M6C","Throw","Put"};
		respawnWeapons[] = {"OPTRE_M6C","Throw","Put"};
		Magazines[] = {"OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] = {"OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Red","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Green"};
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS","VES_HUD_RayBans"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","OPTRE_Smartfinder","ItemGPS","VES_HUD_RayBans"};
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
