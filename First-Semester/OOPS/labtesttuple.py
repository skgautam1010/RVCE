while True :
	print("1: enter 1 for exit\n")
	print("2: enter 2 for concatenation\n")
	print("3: enter 3 for size of\n")
	print("4: enter 4 sorting\n")
	print("5: enter 5 for length\n")
	print("6: enter 6 for reverse\n")
	print("7: enter 7 for  slicing\n")
	print("8: enter 8 for range slicing\n")
	print("9: enter 9 for no white space\n")
	print("10: enter 10 for is a  digit or not\n")
	print("11: enter 11 for sort\n")
	print("12: enter 12 for string comparison\n")
	print("13: enter 13 for spliting\n")
	ch = int(input("enter the choice\n"))
	if ch==2:
		n1 = tuple(input("enter the first tuple"))
		n2 = tuple(input("enter the second tuple"))
		print (n1+n2)

	elif ch==3:
		n1 = tuple(input("enter the tuple\n"))
		print(n1.__sizeof__())
	elif ch==4:
		n1 = tuple(input("enter the tuple\n"))
		print(tuple(sorted(n1)))
	elif ch == 5:
		n1 = tuple(input("enter the tuple\n"))
		print(len(n1))
	elif ch == 6:
		n1 = tuple(input("enter the tuple\n"))
		print(tuple(n1[ ::-1]))
	elif ch == 7:
		n1 = tuple(input("enter the tuple\n"))
		print(tuple( n1[3]))
	elif ch == 8:
		n1 = tuple(input("enter the tuple\n"))
		print(tuple( n1[5:2]))
	elif ch == 9:
		n1 = tuple(input("enter the tuple\n"))
		print(n1.strip())
	elif ch == 10:
		n1 = tuple(input("enter the tuple\n"))
		print(n1.isdigit())
	elif ch == 11:
		n1 = tuple(input("enter the tuple\n"))
		print(sorted(n1))
	elif ch == 12:
		n1 =tuple(input("enter the tuple\n"))
		n2 =tuple(input("enter another tuple\n"))
		print(n1==n2)
	elif ch == 13:
		print(tuple("master of computer application".split()))
	elif ch == 1:
		break
	else :
		print("invalid input")



