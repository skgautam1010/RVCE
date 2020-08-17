while True:
	print("1--> union")
	print("2--> intersection")
	print("3--> add")
	print("4--> symmetric difference")
	print("5--> copy")
	print("6--> update")
	print("7--> discard")
	print("8--> subset")
	print("9--> length")
	print("10-->superset")
	print("0--> for exit")
	ch=int(input("enter your choice\n"))
	if ch==1:
		n1=set(input("enter your choice"))
		n2=set(input("enter your choice"))
		print(n1.union(n2))
	elif ch==2:
		n1=set(input("enter your choice"))
		n2=set(input("enter your choice"))
		print(n1.intersection(n2))
	elif ch==3:
		n1=set(input("enter your choice"))
		n1.add(4)
		print(n1)
	elif ch==4:
		n1=set(input("enter your choice"))
		n2=set(input("enter your choice"))
		t1= n1.difference(n2)
		t2= n2.difference(n1)
		print(t1.union(t2))
	elif ch==5:
		n1=set(input("enter your choice"))
		print(n1)
		n2=n1.copy()
		print(n2)
	elif ch==6:
		n1=set(input("enter your choice"))
		n2.update(n1)
		print(n2)
	elif ch==7:
		n1=set(input("enter your choice"))
		n2=set(input("enter your set"))
		print (n1)
		print (n2)
		n2.discard(n1)
		print (n1)
		print(n2)
	elif ch==8:
		n1=set(input("enter your set"))
		n2=set(input("enter your set"))
		print(n1.issubset(n2))
	elif ch==9:
		n1=set(input("enter your set"))
		print(len(n1))
	elif ch==10:
		n1=set(input("enter your set"))
		n2=set(input("'enter your set"))
		print(n1.issuperset(n2))
	elif ch==0:
		exit()
	else:
		print("wrong input")
