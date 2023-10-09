<?php

// fast and dirty helper script to generate config.cpp params
// note that currently this doesn't affect the "on the ground" display of the cans, only the attached version

$types = [];
//           SOURCE ITEM NAME                 OUR NEW ITEM NAME               TEXTURE
$types[] = ["OPTRE_200Rnd_95x40_Box_Tracer", "PHRP_200Rnd_95x40_Box_HPSAPT" , "200_hpsapt" , "HP-SAP"];
$types[] = ["OPTRE_200Rnd_95x40_Box_Tracer", "PHRP_200Rnd_95x40_Box_HPSAPT8", "200_hpsapt8", "HP-SAP"];
$types[] = ["OPTRE_200Rnd_95x40_Box"       , "PHRP_200Rnd_95x40_Box_HPSAP"  , "200_hpsap"  , "HP-SAP"];
$types[] = ["OPTRE_100Rnd_95x40_Box_Tracer", "PHRP_100Rnd_95x40_Box_HPSAPT" , "100_hpsapt" , "HP-SAP"];
$types[] = ["OPTRE_100Rnd_95x40_Box_Tracer", "PHRP_100Rnd_95x40_Box_HPSAPT8", "100_hpsapt8", "HP-SAP"];
$types[] = ["OPTRE_100Rnd_95x40_Box"       , "PHRP_100Rnd_95x40_Box_HPSAP"  , "100_hpsap"  , "HP-SAP"];
$types[] = ["TCF_200Rnd_95x40_Box_JHPT"    , "PHRP_200Rnd_95x40_Box_JHPT"   , "200_jhpt"   , "JHP"];
$types[] = ["TCF_200Rnd_95x40_Box_JHPT"    , "PHRP_200Rnd_95x40_Box_JHPT8"  , "200_jhpt8"  , "JHP"];
$types[] = ["TCF_200Rnd_95x40_Box_JHP"     , "PHRP_200Rnd_95x40_Box_JHP"    , "200_jhp"    , "JHP"];
$types[] = ["TCF_100Rnd_95x40_Box_JHPT"    , "PHRP_100Rnd_95x40_Box_JHPT"   , "100_jhpt"   , "JHP"];
$types[] = ["TCF_100Rnd_95x40_Box_JHPT"    , "PHRP_100Rnd_95x40_Box_JHPT8"  , "100_jhpt8"  , "JHP"];
$types[] = ["TCF_100Rnd_95x40_Box_JHP"     , "PHRP_100Rnd_95x40_Box_JHP"    , "100_jhp"    , "JHP"];
$types[] = ["TCF_200Rnd_95x40_Box_SST"     , "PHRP_200Rnd_95x40_Box_SST"    , "200_sst"    , "SS"];
$types[] = ["TCF_200Rnd_95x40_Box_SST"     , "PHRP_200Rnd_95x40_Box_SST8"   , "200_sst8"   , "SS"];
$types[] = ["TCF_200Rnd_95x40_Box_SS"      , "PHRP_200Rnd_95x40_Box_SS"     , "200_ss"     , "SS"];
$types[] = ["TCF_100Rnd_95x40_Box_SST"     , "PHRP_100Rnd_95x40_Box_SST"    , "100_sst"    , "SS"];
$types[] = ["TCF_100Rnd_95x40_Box_SST"     , "PHRP_100Rnd_95x40_Box_SST8"   , "100_sst8"   , "SS"];
$types[] = ["TCF_100Rnd_95x40_Box_SS"      , "PHRP_100Rnd_95x40_Box_SS"     , "100_ss"     , "SS"];

$TPL = '
	class {{source}};
	class {{dest}}: {{source}} {
		displayname="{{count}} 9.5x40mm {{type}} Box Magazine{{tracerStr}}";
		descriptionShort="{{count}} 9.5x40mm {{type}} Box Magazine{{tracerStr}}";
		author="Project Harvest Mod Team";
		picture="PHWeapons\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"PHWeapons\data\Ammo\95x40_{{texture}}_co.paa"};{{tracerConfig}}
	};
';


$tr8 = "
		tracersEvery=8;
		lastRoundsTracer=10;";

foreach ($types as $type) {
	if (str_ends_with($type[2], "t8")) {
		$ts = " (Tracers/8)";
	} elseif (str_ends_with($type[2], "t")) {
		$ts = " (Tracers/*)";
	} else {
		$ts = "";
	}
	
	$l = [
		"{{source}}"       => $type[0],
		"{{dest}}"         => $type[1],
		"{{count}}"        => substr($type[2], 0, 3)."rd",
		"{{type}}"         => $type[3],
		"{{tracerConfig}}" => str_ends_with($type[2], "t8") ? $tr8 : "",
		"{{tracerStr}}"    => $ts,
		"{{texture}}"      => $type[2],
	];
	
	echo str_replace(array_keys($l), array_values($l), $TPL);
}