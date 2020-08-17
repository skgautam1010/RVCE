while True:
	print("1 concatenation of list\n")
	print("2 reverse of list\n")
	print("3 length of list\n")
	print("4 size f list\n")
	print("5 sort list\n")
	print("6 range sicing\n")
	print("7 find max from list\n")
	print("8 splitting of list\n")
	print("9 exit")

	ch = int(input("enter the choice\n"))
	
	if ch ==1:
		a = list(input("enter first list\n"))
		b = list(input("enter second list\n"))
		print(a+b)
	elif ch ==2:
		a = list(input("enter the list\n"))
		print(a[ ::-1])
	elif ch == 3:
		a = list(input("enter the list\n"))
		print(len(a))
	elif ch == 4:
		a = input("enter the value\n")
		print(a.__sizeof__())
	else :
		print("wrong input")


