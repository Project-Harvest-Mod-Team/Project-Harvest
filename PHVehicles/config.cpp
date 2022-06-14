#define _ARMA_

class CfgPatches
{
	class PHVehicles
	{
		author = "PHRP Mod Team";
		units[] = {"JS_JC_FA18E","JS_JC_FA18F"};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"JS_JC_FA18"};
	};
};

class CfgVehicles
{
	class Plane_Base_F
	{
		class textureSources;
	};
	class JS_JC_FA18E: Plane_Base_F
	{
		class textureSources: textureSources
		{
			class VFA81_2019
			{
				displayName = "King's Rhino";
				author = "Jaentzen";
				textures[] = {"\PHVehicles\data\Rhino\king_hull_co.paa","\PHVehicles\data\Rhino\king_hull_misc.paa"};
			};
		};
	};
};
