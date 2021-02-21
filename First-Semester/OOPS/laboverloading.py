from labtestoper import *

ob1=oper()
ob2=oper()
ob1.getdata()
ob2.getdata()
print(ob1.list1)
print(ob2.list1)
print(ob1)
print(ob2)

while True:
	print("1-->addition\n")
	print("2-->subtraction\n")
	print("3-->multiplication\n")
	print("4-->floor division\n")
	print("5-->exit\n")
	ch=int(input("enter choice\n"))
	if ch==1:
		print(ob1+ob2)
	elif ch==2:
		print(ob1-ob2)
	elif ch==3:
		print(ob1*ob2)
	elif ch==4:
		print(ob1//ob2)
	elif ch==5:
		break
	else:
		print("wrong input\n")

