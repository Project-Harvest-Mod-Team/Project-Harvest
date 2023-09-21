<?php

// fast and dirty helper script to generate config.cpp params
// note that currently this doesn't affect the "on the ground" display of the cans, only the attached version

$TPL = '
	class %s;
	class %s: %s{
		author="Project Harvest Mod Team";
		picture="PHWeapons\data\IconAmmo\icon_95x40_%s_ca.paa";
		hiddenSelectionsTextures[]= {"PHWeapons\data\Ammo\95x40_%s_co.paa"};
	};
';

$types = [];
$types[] = ["OPTRE_200Rnd_95x40_Box_Tracer", "PHRP_200Rnd_95x40_Box_HPSAPT", "200_hpsapt"];
$types[] = ["OPTRE_200Rnd_95x40_Box" , "PHRP_200Rnd_95x40_Box_HPSAP" , "200_hpsap" ];
$types[] = ["OPTRE_100Rnd_95x40_Box_Tracer", "PHRP_100Rnd_95x40_Box_HPSAPT", "100_hpsapt"];
$types[] = ["OPTRE_100Rnd_95x40_Box" , "PHRP_100Rnd_95x40_Box_HPSAP" , "100_hpsap" ];
$types[] = ["TCF_200Rnd_95x40_Box_JHPT"  , "PHRP_200Rnd_95x40_Box_JHPT"  , "200_jhpt"  ];
$types[] = ["TCF_200Rnd_95x40_Box_JHP"   , "PHRP_200Rnd_95x40_Box_JHP"   , "200_jhp"   ];
$types[] = ["TCF_100Rnd_95x40_Box_JHPT"  , "PHRP_100Rnd_95x40_Box_JHPT"  , "100_jhpt"  ];
$types[] = ["TCF_100Rnd_95x40_Box_JHP"   , "PHRP_100Rnd_95x40_Box_JHP"   , "100_jhp"   ];
$types[] = ["TCF_200Rnd_95x40_Box_SST"   , "PHRP_200Rnd_95x40_Box_SST"   , "200_sst"   ];
$types[] = ["TCF_200Rnd_95x40_Box_SS"    , "PHRP_200Rnd_95x40_Box_SS"    , "200_ss"    ];
$types[] = ["TCF_100Rnd_95x40_Box_SST"   , "PHRP_100Rnd_95x40_Box_SST"   , "100_sst"   ];
$types[] = ["TCF_100Rnd_95x40_Box_SS"    , "PHRP_100Rnd_95x40_Box_SS"    , "100_ss"    ];

foreach ($types as $type) {
	echo sprintf($TPL, $type[0], $type[1], $type[0], $type[2], $type[2]);
}