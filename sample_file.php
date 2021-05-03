<!DOCTYPE html>
<html>
<body>

<?php
echo(strftime("%X %Z",mktime(20,0,0))."<br>");
$time_9_o_clock = strftime("%X %Z",mktime(9,0,0));
$time_9_15_o_clock = strftime("%X %Z",mktime(9,15,0));
$time_9_30_o_clock = strftime("%X %Z",mktime(9,30,0));
$time_9_45_o_clock = strftime("%X %Z",mktime(9,45,0));

$time_10_o_clock = strftime("%X %Z",mktime(10,0,0));
$time_10_15_o_clock = strftime("%X %Z",mktime(10,15,0));
$time_10_30_o_clock = strftime("%X %Z",mktime(10,30,0));
$time_10_45_o_clock = strftime("%X %Z",mktime(10,45,0));

$time_11_o_clock = strftime("%X %Z",mktime(11,0,0));
$time_11_15_o_clock = strftime("%X %Z",mktime(11,15,0));
$time_11_30_o_clock = strftime("%X %Z",mktime(11,30,0));
$time_11_45_o_clock = strftime("%X %Z",mktime(11,45,0));

$time_12_o_clock = strftime("%X %Z",mktime(12,0,0));
$time_12_15_o_clock = strftime("%X %Z",mktime(12,15,0));
$time_12_30_o_clock = strftime("%X %Z",mktime(12,30,0));
$time_12_45_o_clock = strftime("%X %Z",mktime(12,45,0));

$time_13_o_clock = strftime("%X %Z",mktime(13,0,0));
$time_13_15_o_clock = strftime("%X %Z",mktime(13,15,0));
$time_13_30_o_clock = strftime("%X %Z",mktime(13,30,0));
$time_13_45_o_clock = strftime("%X %Z",mktime(13,45,0));

$time_14_o_clock = strftime("%X %Z",mktime(14,0,0));
$time_14_15_o_clock = strftime("%X %Z",mktime(14,15,0));
$time_14_30_o_clock = strftime("%X %Z",mktime(14,30,0));
$time_14_45_o_clock = strftime("%X %Z",mktime(14,45,0));

$time_15_o_clock = strftime("%X %Z",mktime(15,0,0));
$time_15_15_o_clock = strftime("%X %Z",mktime(15,15,0));
$time_15_30_o_clock = strftime("%X %Z",mktime(15,30,0));
$time_15_45_o_clock = strftime("%X %Z",mktime(15,45,0));

$time_16_o_clock = strftime("%X %Z",mktime(16,0,0));
$time_16_15_o_clock = strftime("%X %Z",mktime(16,15,0));
$time_16_30_o_clock = strftime("%X %Z",mktime(16,30,0));
$time_16_45_o_clock = strftime("%X %Z",mktime(16,45,0));

$currentTime = date("G:i:s");
$dataRefresh = '';

if($currentTime > $time_9_o_clock && $currentTime < $time_9_15_o_clock){
	$dataRefresh = 'Last refreshed at 9:00  A.M.';
}
else if($currentTime > $time_9_15_o_clock && $currentTime < $time_9_30_o_clock){
	$dataRefresh = 'Last refreshed at 9:16 A.M.';
}
else if($currentTime > $time_9_30_o_clock && $currentTime < $time_9_45_o_clock){
	$dataRefresh = 'Last refreshed at 9:31 A.M.';
}
else if($currentTime > $time_9_45_o_clock && $currentTime < $time_10_o_clock){
	$dataRefresh = 'Last refreshed at 9:46 A.M.';
}
else if($currentTime > $time_10_o_clock && $currentTime < $time_10_15_o_clock){
	$dataRefresh = 'Last refreshed at 10:00 A.M.';
}
else if($currentTime > $time_10_15_o_clock && $currentTime < $time_10_30_o_clock){
	$dataRefresh = 'Last refreshed at 10:16 A.M.';
}
else if($currentTime > $time_10_30_o_clock && $currentTime < $time_10_45_o_clock){
	$dataRefresh = 'Last refreshed at 10:31 A.M.';
}
else if($currentTime > $time_11_o_clock && $currentTime < $time_11_15_o_clock){
	$dataRefresh = 'Last refreshed at 11:00 A.M.';
}
else if($currentTime > $time_11_15_o_clock && $currentTime < $time_11_30_o_clock){
	$dataRefresh = 'Last refreshed at 11:16 A.M.';
}
else if($currentTime > $time_11_30_o_clock && $currentTime < $time_11_45_o_clock){
	$dataRefresh = 'Last refreshed at 11:31 A.M.';
}
else if($currentTime > $time_11_45_o_clock && $currentTime < $time_12_o_clock){
	$dataRefresh = 'Last refreshed at 11:46 A.M.';
}
else if($currentTime > $time_12_o_clock && $currentTime < $time_12_15_o_clock){
	$dataRefresh = 'Last refreshed at 12:00 P.M.';
}
else if($currentTime > $time_12_15_o_clock && $currentTime < $time_12_30_o_clock){
	$dataRefresh = 'Last refreshed at 12:16 P.M.';
}
else if($currentTime > $time_12_30_o_clock && $currentTime < $time_12_45_o_clock){
	$dataRefresh = 'Last refreshed at 12:31 P.M.';
}
else if($currentTime > $time_12_45_o_clock && $currentTime < $time_13_o_clock){
	$dataRefresh = 'Last refreshed at 12:46 P.M.';
}
else if($currentTime > $time_13_o_clock && $currentTime < $time_13_15_o_clock){
    $dataRefresh = 'Last refreshed at 1:00 P.M.';
}
else if($currentTime > $time_13_15_o_clock && $currentTime < $time_13_30_o_clock){
    $dataRefresh = 'Last refreshed at 1:16 P.M.';
}
else if($currentTime > $time_13_30_o_clock && $currentTime < $time_13_45_o_clock){
    $dataRefresh = 'Last refreshed at 1:31 P.M.';
}
else if($currentTime > $time_13_45_o_clock && $currentTime < $time_14_o_clock){
    $dataRefresh = 'Last refreshed at 1:46 P.M.';
}
else if($currentTime > $time_14_o_clock && $currentTime < $time_14_15_o_clock){
    $dataRefresh = 'Last refreshed at 2:00 P.M.';
}
else if($currentTime > $time_14_15_o_clock && $currentTime < $time_14_30_o_clock){
    $dataRefresh = 'Last refreshed at 2:16 P.M.';
}
else if($currentTime > $time_14_30_o_clock && $currentTime < $time_14_45_o_clock){
    $dataRefresh = 'Last refreshed at 2:31 P.M.';
}
else if($currentTime > $time_14_45_o_clock && $currentTime < $time_15_o_clock){
    $dataRefresh = 'Last refreshed at 2:46 P.M.';
}
else if($currentTime > $time_15_o_clock && $currentTime < $time_15_15_o_clock){
    $dataRefresh = 'Last refreshed at 3:00 P.M.';
}
else if($currentTime > $time_15_15_o_clock && $currentTime < $time_15_30_o_clock){
    $dataRefresh = 'Last refreshed at 3:16 P.M.';
}
else if($currentTime > $time_15_45_o_clock && $currentTime < $time_16_o_clock){
    $dataRefresh = 'Last refreshed at 3:31 P.M.';
}
else if($currentTime > $time_16_o_clock && $currentTime < $time_16_15_o_clock){
    $dataRefresh = 'Last refreshed at 4:00 P.M.';
}
else if($currentTime > $time_16_15_o_clock && $currentTime < $time_16_30_o_clock){
    $dataRefresh = 'Last refreshed at 4:16 P.M.';
}
else if($currentTime > $time_16_30_o_clock && $currentTime < $time_16_45_o_clock){
    $dataRefresh = 'Last refreshed at 4:31 P.M.';
}
else if($currentTime > $time_16_45_o_clock){
    $dataRefresh = 'Last refreshed at 4:46 P.M.';
}
else{
	$dataRefresh = 'Please wait for the stock market to open.';
}

echo $currentTime;
echo $dataRefresh;
?>

</body>
</html>
