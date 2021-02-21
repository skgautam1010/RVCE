while True:
	print("0 for exit\n")
	print("1 for adding/cncat\n")
	print("2 for copy\n")
	print("3 for length\n")
	print("4 for delete dictionary\n")
	print("5 for clear\n")
	print("6 for pop\n")
	print("7 fr sorted\n")
	print("8 fr update\n")
	print("9 for search\n")
	print("10 for key\n")
	print("11 for values\n")
	ch=int(input("enter your choice\n"))
	if ch==1:
		d1=eval(input("enter a dictinary\n"))
		d2=eval(input("enter a dictionary\n"))
		print(d1,d2)
	elif ch==2:
		d1=eval(input("enter a dictionary\n"))
		d2=d1.copy()
		print(d2)
	elif ch==3:
		d1=eval(input("enter a dictionary\n"))
		len(d1)
	elif ch==4:
		d1=eval(input("enter a dictionaRY\n"))
		del(d1)
	elif ch==5:
		d1=eval(input("enter a dictionary\n"))
		d1.clear()
		print(d1)
	elif ch==6:
		d1={1:'abc',2:34,3:456}
		d1.pop(2)
		print(d1)
	elif ch==7:
		d1=eval(input("enter the dictonary\n"))
		print(sorted(d1.items()))
	elif ch==8:
		d1={1:'cfde','name':'bhnj',3:89}
		d1.update({5:'ertyu'})
		print(d1)
	elif ch==9:
		d1={1:'sde',2:456,3:'rty'}
		print(d1.get(2))
	elif ch==10:
		d1=eval(input("enter the dictionary\n"))
		print(d1.keys())
	elif ch==11:
		d1=eval(input("enter the dictionary\n"))
		print(d1.values())
	elif ch==0:
		exit()
	else:
		print("wrong input\n")

