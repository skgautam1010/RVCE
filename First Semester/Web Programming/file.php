<?php
echo "Write <br>";
$file=fopen("test.txt",'w');
fwrite($file,"This Is file Operation");
fclose($file);
echo "Read <br>";
$file=fopen("test.txt",'r');
$size=filesize("demo.txt");
$text=fread($file,$size);
echo $text;
echo "<br>";
fclose($file);

