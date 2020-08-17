echo "enter file name"
read file
if [ -f "$file" ]
then
	set -- `ls -l $file`
	echo name of the file $9
	echo file permission $1
	echo user name $3
else
	echo file not found
fi
	set -- `date`
	cal -h | grep $3 | sed ' s/"$3"/**/'
	cat test1 | tr '[a-z]' '[A-Z]' > test2
	cat test2
	ls -l | grep r--r--r-- -c
 
