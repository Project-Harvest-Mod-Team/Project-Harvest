. ./vars.ps1

if ($args.count -gt 0) {
	$dirs = $args[0];
} else {
	$dirs = "PH*";
}

Get-ChildItem . -Directory $dirs | Foreach-Object {
	$fn = $_.FullName;
	$signArg = "-sign=" + $privKey;
	$whitelistArg = "-include=" + $( Get-Location ) + "\addonBuilderWhitelist.txt";
	
	if ($_.Name -ne "PHmusic") {
		& $addonBuilder $fn $destination $signArg $whitelistArg -binarizeFullLogs -binarizeAllTextures;
	} else {
		& $addonBuilder $fn $destinationMusic $signArg $whitelistArg -binarizeFullLogs -binarizeAllTextures;
	}
}
