#define _ARMA_

class CfgPatches
{
	class PHProps
	{
		author = "MisfitMaid";
		hideName = 0;
		units[] = {};
		weapons[] ={};
		magazines[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

// OPTRE_FC_EditorCategory_Cov
class CfgEditorSubcategories {
	class PHRP_Props_CovvieWeapons {
		displayName="Covenant Weapon Props (Demilitarized)";
	};
};

class CfgVehicles {
	class Static;
	class PHRP_Prop_Needle_Carbine : Static {
		scope=2;
		scopeCurator=2;
		model="\OPTRE_FC_Weapons\Carbine\Type51_Carbine.p3d";
		picture="\OPTRE_FC_Weapons\Carbine\data\Carbine_Picture_CA.paa";
		modelOptics="\OPTRE_FC_Weapons\Carbine\Type51_Scope.p3d";
		displayName="Type-51 Carbine (Demilitarized)";
		descriptionShort="Captured Covenant carbine which has been rendered unfit for further use.";
		faction="OPTRE_FC_Covenant";
		editorCategory="OPTRE_FC_EditorCategory_Cov";
		editorSubcategory="PHRP_Props_CovvieWeapons";
		vehicleClass="OPTRE_FC_Objects_class";
		hiddenSelections[] = {"zasleh"};
	};
};
