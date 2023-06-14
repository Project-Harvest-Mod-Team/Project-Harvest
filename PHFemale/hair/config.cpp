class CfgPatches
{
	class MEOP_kro_helm
	{
		author="Opposition Team";
		units[]={};
		weapons[]=
		{
			"As_hair_ash_helmet",
			"As_hair_cls_helmet",
			"As_hair_cte_helmet",
			"As_hair_hbn_helmet",
			"As_hair_jes_helmet",
			"As_hair_mir_helmet",
			"As_hair_shep_helmet",
			"As_hair_ff_helmet"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};
class cfgWeapons
{
	class HeadgearItem;
	class ItemCore;
	class As_hair_ash_helmet: ItemCore
	{
		scope=2;
		author="Opposition Team";
		weaponPoolAvailable=1;
		displayName="(Female) Hair (A)";
		picture="\MEOP_turians\data\ico\Ico_helm_visor.paa";
		model="MEOP_asari\faces\hair\Hair_ash.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformmodel="MEOP_asari\faces\hair\Hair_ash.p3d";
			modelSides[]={6};
			material=-1;
			explosionShielding=0;
			minimalHit=0.0099999998;
			passThrough=0.0099999998;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=0.1;
				};
			};
		};
	};
	class As_hair_cls_helmet: ItemCore
	{
		scope=2;
		author="Opposition Team";
		weaponPoolAvailable=1;
		displayName="(Female) Hair (B)";
		picture="\MEOP_turians\data\ico\Ico_helm_visor.paa";
		model="MEOP_asari\faces\hair\Hair_cls.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformmodel="MEOP_asari\faces\hair\Hair_cls.p3d";
			modelSides[]={6};
			material=-1;
			explosionShielding=0;
			minimalHit=0.0099999998;
			passThrough=0.0099999998;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=0.1;
				};
			};
		};
	};
	class As_hair_cte_helmet: ItemCore
	{
		scope=2;
		author="Opposition Team";
		weaponPoolAvailable=1;
		displayName="(Female) Hair (C)";
		picture="\MEOP_turians\data\ico\Ico_helm_visor.paa";
		model="MEOP_asari\faces\hair\Hair_cte.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformmodel="MEOP_asari\faces\hair\Hair_cte.p3d";
			modelSides[]={6};
			material=-1;
			explosionShielding=0;
			minimalHit=0.0099999998;
			passThrough=0.0099999998;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=0.1;
				};
			};
		};
	};
	class As_hair_hbn_helmet: ItemCore
	{
		scope=2;
		author="Opposition Team";
		weaponPoolAvailable=1;
		displayName="(Female) Hair (D)";
		picture="\MEOP_turians\data\ico\Ico_helm_visor.paa";
		model="MEOP_asari\faces\hair\Hair_hbn.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformmodel="MEOP_asari\faces\hair\Hair_hbn.p3d";
			modelSides[]={6};
			material=-1;
			explosionShielding=0;
			minimalHit=0.0099999998;
			passThrough=0.0099999998;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=0.1;
				};
			};
		};
	};
	class As_hair_jes_helmet: ItemCore
	{
		scope=2;
		author="Opposition Team";
		weaponPoolAvailable=1;
		displayName="(Female) Hair (E)";
		picture="\MEOP_turians\data\ico\Ico_helm_visor.paa";
		model="MEOP_asari\faces\hair\Hair_jes.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformmodel="MEOP_asari\faces\hair\Hair_jes.p3d";
			modelSides[]={6};
			material=-1;
			explosionShielding=0;
			minimalHit=0.0099999998;
			passThrough=0.0099999998;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=0.1;
				};
			};
		};
	};
	class As_hair_mir_helmet: ItemCore
	{
		scope=2;
		author="Opposition Team";
		weaponPoolAvailable=1;
		displayName="(Female) Hair (F)";
		picture="\MEOP_turians\data\ico\Ico_helm_visor.paa";
		model="MEOP_asari\faces\hair\Hair_mir.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformmodel="MEOP_asari\faces\hair\Hair_mir.p3d";
			modelSides[]={6};
			material=-1;
			explosionShielding=0;
			minimalHit=0.0099999998;
			passThrough=0.0099999998;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=0.1;
				};
			};
		};
	};
	class As_hair_shep_helmet: ItemCore
	{
		scope=2;
		author="Opposition Team";
		weaponPoolAvailable=1;
		displayName="(Female) Hair (G)";
		picture="\MEOP_turians\data\ico\Ico_helm_visor.paa";
		model="MEOP_asari\faces\hair\Hair_shep.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformmodel="MEOP_asari\faces\hair\Hair_shep.p3d";
			modelSides[]={6};
			material=-1;
			explosionShielding=0;
			minimalHit=0.0099999998;
			passThrough=0.0099999998;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=0.1;
				};
			};
		};
	};
	class As_hair_ff_helmet: ItemCore
	{
		scope=2;
		author="Opposition Team";
		weaponPoolAvailable=1;
		displayName="(Female) Hair (H)";
		picture="\MEOP_turians\data\ico\Ico_helm_visor.paa";
		model="MEOP_asari\faces\hair\Hair_ff.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformmodel="MEOP_asari\faces\hair\Hair_ff.p3d";
			modelSides[]={6};
			material=-1;
			explosionShielding=0;
			minimalHit=0.0099999998;
			passThrough=0.0099999998;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=0.1;
				};
			};
		};
	};
};
