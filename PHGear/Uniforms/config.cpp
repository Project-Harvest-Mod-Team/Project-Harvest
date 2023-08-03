#define _ARMA_

class CfgPatches
{
	class PHRP_Uniforms
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
class XtdGearModels
{
	class CfgWeapons
	{
		class PHRP_Uniform
		{
			label = "Uniforms";
			author = "Soldner";
			options[] = {"type"};
			class type
			{
				label = "Type";
				values[] = {"normal","rolled","short"};
				changeingame = 1;
				changedelay = 0;
				alwaysSelectable = 1;
				class normal
				{
					label = "Normal";
				};
				class rolled
				{
					label = "Rolled";
				};
				class short
				{
					label = "Short";
				};
			};
		};
		class PHRP_ONI_Uniform
		{
			label = "Non-Combat Attire";
			author = "Soldner";
			options[] = {"type"};
			class type
			{
				label = "Name";
				values[] = {"burt","pj"};
				changeingame = 1;
				changedelay = 0;
				alwaysSelectable = 1;
				class burt
				{
					label = "Burt";
				};
				class pj
				{
					label = "PJ";
				};
			};
		};
		/*class PHRP_Dress_Uniform
		{
			label = "Dress Uniforms";
			author = "Soldner";
			options[] = {"type"};
			class type
			{
				label = "Name";
				values[] = {"soldner","moon","kaz","tepfer","holland","pj","burt"};
				changeingame = 1;
				changedelay = 0;
				alwaysSelectable = 1;
				class soldner
				{
					label = "Soldner";
				};
				class moon
				{
					label = "Moon";
				};
				class kaz
				{
					label = "Kaz";
				};
				class tepfer
				{
					label = "Tepfer";
				};
				class holland
				{
					label = "Holland";
				};
				class pj
				{
					label = "PJ";
				};
				class burt
				{
					label = "Burt";
				};
			};
		};*/
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class Gladius_BDU
		{
			model = "PHRP_Uniform";
			type = "normal";
		};
		class Gladius_BDU_Rolled
		{
			model = "PHRP_Uniform";
			type = "rolled";
		};
		class Gladius_BDU_Short
		{
			model = "PHRP_Uniform";
			type = "short";
		};
		class PHRP_Burt_ONI
		{
			model = "PHRP_ONI_Uniform";
			type = "burt";
		};
		class PHRP_PJ_UNSC
		{
			model = "PHRP_ONI_Uniform";
			type = "pj";
		};
		/*class PHRP_Dress_Uni_Soldner
		{
			model = "PHRP_Dress_Uniform";
			type = "soldner";
		};*/
	};
};
class CfgWeapons
{
	class Uniform_Base;
	class U_B_PilotCoveralls;
	class UniformItem;
	class ItemInfo;
	class U_B_CombatUniform_mcam: Uniform_Base
	{
		class ItemInfo;
	};
	class PHRP_Base: U_B_CombatUniform_mcam
	{
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;
		author = "Soldner";
		ACE_GForceCoef = 0.9;
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
		CBRN_protectionLevel = "4 + 8";
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
		};
	}
	class Gladius_BDU: PHRP_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[PHRP] Gladius Combat Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass = "BDU_V_Gladius";
		};
	};
	class Gladius_BDU_Rolled: PHRP_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[PHRP] Gladius Combat Uniform (Rolled)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "BDU_V_Gladius_Rolled";
		};
	};
	class Gladius_BDU_Short: PHRP_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[PHRP] Gladius Combat Uniform (Short)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "BDU_V_Gladius_Short";
		};
	};
	class PHRP_Burt_ONI: PHRP_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[PHRP] Burt's Naval Intelligence Formal Attire";
		class ItemInfo: ItemInfo
		{
			uniformClass = "BDU_Burt_ONI_BDU";
		};
	};
	class PHRP_PJ_UNSC: PHRP_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[PHRP] PJ's Formal Attire";
		class ItemInfo: ItemInfo
		{
			uniformClass = "BDU_PJ_UNSC_BDU";
		};
	};
	/*class PHRP_Dress_Uni_Soldner: PHRP_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[PHRP] Soldner's Dress Uniform ";
		class ItemInfo: ItemInfo
		{
			uniformClass = "PHRP_Dress_Soldner";
		};
	};*/
};
class CfgVehicles
{
	class SoldierWB;
	class B_Pilot_F;
	class PHRP_Soldier_Base: SoldierWB
	{
		class HitPoints;
	};
	class PHRP_Soldier_WDL: PHRP_Soldier_Base
	{
		class HitPoints: HitPoints
		{
			class HitFace;
			class HitNeck;
			class HitHead;
			class HitPelvis;
			class HitAbdomen;
			class HitDiaphragm;
			class HitChest;
			class HitBody;
			class HitArms;
			class HitHands;
			class HitLegs;
			class Incapacitated;
			class HitLeftArm;
			class HitRightArm;
			class HitLeftLeg;
			class HitRightLeg;
			class ACE_HDBracket;
		};
	};
	class PHRP_Base_Uniform: PHRP_Soldier_WDL
	{
		class HitPoints: HitPoints
		{
			class HitFace: HitFace
			{
				armor = 5;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitNeck
			{
				armor = 5;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitHead
			{
				armor = 5;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitPelvis
			{
				armor = 6;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 0.1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitAbdomen
			{
				armor = 6;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 0.1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitDiaphragm
			{
				armor = 6;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 0.25;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitChest
			{
				armor = 6;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 0.25;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitBody
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 0.25;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitArms
			{
				armor = 6;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitHands
			{
				armor = 6;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitLegs
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 0.3;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: Incapacitated
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 0.1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm: HitLeftArm
			{
				armor = 6;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitRightArm
			{
				armor = 6;
				material = -1;
				name = "hand_r";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitLeftLeg: HitRightArm
			{
				armor = 6;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitRightLeg
			{
				armor = 6;
				material = -1;
				name = "leg_r";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class ACE_HDBracket: ACE_HDBracket
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0;
				radius = 1;
				explosionShielding = 0.1;
				visual = "";
				minimalHit = 0;
				depends = "HitHead";
			};
		};
		dlc = "Project Harvest Armory";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
		uniformClass = "Gladius_BDU";
		model = "\OPTRE_UNSC_Units\Army\uniform.p3d";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		hiddenSelections[] = {"camo","camo2","insignia","clan","A_SlimLeg"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\uniform_a_woodland_co.paa","OPTRE_UNSC_Units\Army\data\uniform_b_woodland_co.paa"};
		editorSubcategory = "PHRP_EdSubCat_ODSTs";
	};

	//Gladius Unis
	class BDU_V_Gladius: PHRP_Base_Uniform
	{
		scopeArsenal = 2;
		uniformclass = "Gladius_BDU";
		hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"PHGear\data\uniforms\H2A_CO.paa","PHGear\data\uniforms\H2A_CO.paa"};
	};
	class BDU_V_Gladius_Rolled: PHRP_Base_Uniform
	{
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\uniform_rolled";
		uniformclass = "Gladius_BDU_Rolled";
		hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"PHGear\data\uniforms\H2A_CO.paa","PHGear\data\uniforms\H2A_CO.paa"};
	};
	class BDU_V_Gladius_Short: PHRP_Base_Uniform
	{
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\uniform_short";
		uniformclass = "Gladius_BDU_Short";
		hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"PHGear\data\uniforms\H2A_CO.paa","PHGear\data\uniforms\H2A_CO.paa"};
	};

	//ONI outfit
	class BDU_Burt_ONI_BDU : PHRP_Base_Uniform
	{
		scopeArsenal = 2;
		model = "\a3\Characters_F\Civil\Scientist_01_formal_F";
		uniformclass = "PHRP_Burt_ONI";
		hiddenSelections[] = {"camo1","badge","id"};
		hiddenSelectionsTextures[] = {"PHGear\data\uniforms\Burt_ONI_CO.paa","PHGear\data\uniforms\Burt_ONI_CO.paa"};
	};
	class BDU_PJ_UNSC_BDU : PHRP_Base_Uniform
	{
		scopeArsenal = 2;
		model = "\a3\Characters_F\Civil\Scientist_01_formal_F";
		uniformclass = "PHRP_PJ_UNSC";
		hiddenSelections[] = {"camo1","badge","id"};
		hiddenSelectionsTextures[] = {"PHGear\data\uniforms\PJ_UNSC_CO.paa","PHGear\data\uniforms\PJ_UNSC_CO.paa"};
	};
	/*class PHRP_Dress_Soldner : PHRP_Base_Uniform
	{
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		uniformClass = "PHRP_Dress_Uni_Soldner";
		hiddenSelections[] = {"camo1","insignia","clan","name"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","PHGear\data\uniforms\Soldner_rank_co.paa","PHGear\data\uniforms\Soldner_rank_co.paa","PHGear\data\uniforms\Soldner_rank_co.paa"};
	};*/
};