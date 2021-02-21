import time
import os

sec=0
min=0
hrs=0
#print("0-->To Exit\n")
while True:
	sec +=1
	print(str(hrs)+' hrs '+str(min)+' min '+str(sec)+' sec ')
	time.sleep(1)
	if sec==60:
		sec=0
		min +=1
	if min==60:
		sec=0
		min=0
		hrs +=1
	os.system('clear')

