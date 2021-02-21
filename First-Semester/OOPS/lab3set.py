while True:
	print("0-->exit")
	print("1-->union of set")
	print("2-->intersection of set")
	print("3-->sizeof in bytes")
	print("4-->symmetric difference")
	print("5-->subset")
	print("6-->superset")
	print("7-->remove")
	print("8-->clear")
	print("9-->contain")
	print("10-->delete")
	print("11-->intersection update")
	print("12-->pop")
	print("13-->discard element")
	print("14-->sorting")
	print("15-->frozenset")
	print("16-->set difference")
	print("17-->add new values")
	print("18-->copy")
	ch=int(input("enter your choice: "))
	if ch==1:
		s1=set(input("enter the element: "))
		s2=set(input("enter the element: "))
		s3=s1|s2
		print(s3)
	elif ch==2:
		s1=set(input("enter the set: "))
		s2=set(input("enter the set: "))
		s3=s1 & s2
		print(s3)
	elif ch==3:
		s1=set(input("enter the set: "))
		s2=s1.__sizeof__()
		print(s2)
	elif ch==4:
		s1=set(input("enter the set: "))
		s2=set(input("enter the set: "))
		s3=s1^s2
		print(s3)
	elif ch==5:
		s1=set(input("enter the set: "))
		s2=set(input("enter the set: "))
		print(s1.issubset(s2))
	elif ch==6:
		s1=set(input("enter the set: "))
		s2=set(input("enter the set: "))
		print(s1.issuperset(s2))
	elif ch==7:
		s1=set(input("enter the set: "))
		print(s1)
		s1.remove('f')
		print(s1)
	elif ch==8:
		s1=set(input("enter the set: "))
		print(s1)
		s1.clear()
		print(s1)
	elif ch==9:
		s1=set(input("enter the set: "))
		s2=set(input("enter the conatained element: "))
		print(s1.__contains__(s2))
	elif ch==10:
		s1=set(input("enter the set: "))
		del(s1)
	elif ch==11:
		s1=set(input("enter the set: "))
		s2=set(input("enter the set: "))
		print(s1.intersection_update(s2))
	elif ch==12:
		s1=set(input("enter the set: "))
		print(s1.pop())
	elif ch==13:
		s1=set(input("enter the set: "))
		s2=set(input("enter the element: "))
		s1.discard('t')
		print(s1)
	elif ch==14:
		s1=set(input("enter the set: "))
		print(sorted(s1))
	elif ch==15:
		s1=set(input("enter the set: "))
		s2=frozenset(s1)
		print(s1)
		print(s2)
	elif ch==16:
		s1=set(input("enter the set: "))
		s2=set(input("enter the set: "))
		s3=s1-s2
		print(s3)
	elif ch==17:
		s1=set(input("enter the set: "))
		s1.add('d')
		print(s1)
	elif ch==18:
		s1=set(input("enter the set: "))
		s2=s1.copy()
		print(s1)
		print(s2)
	elif ch==0:
		break
