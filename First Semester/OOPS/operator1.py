from opeover import *
ob1=opeover()
while True:
	ch=int(input("enter your choice\n"))
	if ch==1:
		print("add\n")
		ob1.getelement()
		ob1.__add__(5)
	elif ch==2:
		print("subtract\n")
		ob1.getelement()
		ob1.__sub__(8)
	else:
		print("wrong user input\n")

