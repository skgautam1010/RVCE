<?php
	$myfile="demo.txt";
	$file=fopen($myfile,'w+');
	$text="this is rvce\n";
	fwrite($file,$text);
	$filedata=fread($file,$text);
	fclose($file);
	echo $filedata;

?>
