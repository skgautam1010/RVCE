from lab1 import *
ob1=operator()
ob2=operator()
ob1.getdata()
ob2.getdata()
print(ob1.list1)
print(ob2.list1)
while True:
	print("****Menu*****")
	print("1-->addition")
	print("2-->subtraction")
	print("3-->multiplication")
	print("4-->floor division")
	print("5-->exit")
	ch=int(input("enter your choice: "))
	if ch==1:
		print(ob1+ob2)
	elif ch==2:
		print(ob1-ob2)
	elif ch==3:
		ob1.list1.clear()
		ob2.list1.clear()
		ob1.getdata()
		ob2.getdata()
		print(ob1.list1)
		print(ob2.list1)
		print(ob1*ob2)
	elif ch==4:
		ob1.list1.clear()
		ob1.list1.clear()
		ob1.getdata()
		ob2.getdata()
		print(ob1.list1)
		print(ob2.list1)
		print(ob1//ob2)
	elif ch==5:
		break
	else:
		print("wrong input try again!!!")

