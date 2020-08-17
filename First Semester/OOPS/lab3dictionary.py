while True:
	print("0-->exit")
	print("1-->creating a dictionary")
	print("2-->displaying keys")
	print("3-->displaying values")
	print("4-->displaying items")
	print("5-->clearing dictionary")
	print("6-->deleting one item from dictionary")
	print("7-->poping the dictionary")
	print("8-->sorting the dictionary")
	print("9-->copy the element")
	print("10-->update the dictionary")
	ch=int(input("enter your choice: "))
	if ch==1:
		d1=eval(input("enter the dictionary: "))
		print(d1)
	elif ch==2:
		d1=eval(input("enter the dictionary: "))
		d2=d1.keys()
		print(d2)
		print(d1.keys())
	elif ch==3:
		d1=eval(input("enter the dictionary: "))
		d2=d1.values()
		print(d2)
		print(d1.values())
	elif ch==4:
		d1=eval(input("enter the dictionary: "))
		d2=d1.items()
		print(d2)
		print(d1.items())
	elif ch==5:
		d1=eval(input("enter the dictionary: "))
		d1.clear()
		print(d1)
	elif ch==6:
		d1=eval(input("enter the dictionary: "))
		print(d1)
		del(d1['name'])
		print(d1)
	elif ch==7:
		d1=eval(input("enter the dictionary: "))
		d1.pop("1")
		print(d1)
	elif ch==8:
		d1=eval(input("enter the dictionary: "))
		print(sorted(d1.items()))
	elif ch==9:
		d1=eval(input("enter the dictionary: "))
		d2=d1.copy()
		print(d2)
	elif ch==10:
		d1=eval(input("enter the dictionary: "))
		d2=eval(input("enter the element to be updated: "))
		d1.update(d2)
		print(d1)
	elif ch==0:
		break
