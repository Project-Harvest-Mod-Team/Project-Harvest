. ./vars.ps1

Get-ChildItem -Directory "PH*" | Foreach-Object {
	$fn = $_.FullName;
	$signArg = "-sign=" + $privKey;
	$whitelistArg = "-include=" + $( Get-Location ) + "\addonBuilderWhitelist.txt";
	
	if ($_.Name -ne "PHmusic") {
		& $addonBuilder $fn $destination $signArg $whitelistArg -binarizeFullLogs -binarizeAllTextures;
	} else {
		& $addonBuilder $fn $destinationMusic $signArg $whitelistArg -binarizeFullLogs -binarizeAllTextures;
	}
}
