while True
	echo "1-->file properties with formatted output"
	echo "2-->current week of the month and date replaced to **"
	echo "3-->conersion of lines to toggle case in another file"
	echo "4-->count the files with read only permission"
do
	echo "enter your choice"
	read ch
case $ch in
	1) echo "enter file name"
	read file
	if [-f "$file"]
	then
		set -- `ls -l $file`
		echo "file name" $9
		echo "number of links" $2
		echo "file permission" $1
		echo "date " $7
	else
		echo "file not found"
	fi;;
	2) set -- `date`
	cal -h | grep $3 | sed " s / "$3" / ** / ";;
	3)cat abc.txt | tr '[a-z]' '[A-Z]' > mno.txt
	cat mno.txt;;
	4) ls -l | grep r--r--r-- -c;;
	5)exit;;
esac
done
 
