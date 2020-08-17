#10 operation on string and tuple
while True:
	print("0-->exit")
	print("1-->concatenation")
	print("2-->uppercase")
	print("3-->lowercase")
	print("4-->length")
	print("5-->reverse")
	print("6-->count number of whitespaces")
	print("7-->count number of words")
	print("8-->range slicing")
	print("9-->splitting")
	print("10-->find")
	print("11-->replace")
	print("12-->slicing")
	print("13-->sorting")
	print("14-->string comparison")
	print("15-->isdigit or not")
	print("16-->isspaceor not")
	print("17-->max min in tuple")
	print("18-->iteration")
	print("19-->deletion")
	ch=int(input("enter your choice: "))
	if ch==1:
		n1=input("enter first string: ")
		n2=input("enter second string: ")
		print(n1+n2)
		t1=tuple(input("enter the tuple: "))
		t2=tuple(input("enter the tuple: "))
		print(t1+t2)
	elif ch==2:	#no tuple
		n1=input("enter the string: ")
		print(n1.upper())
	#	t1=tuple(input("enter the tuple: "))
	#	print(t1.upper())
	elif ch==3:	#no tuple
		n1=input("enter the string: ")
		print(n1.lower())
	#	t1=tuple(input("enter the tuple: "))
	#	print(t1.lower())
	elif ch==4:
		n1=input("enter the string: ")
		print(len(n1))
		t1=tuple(input("enter the tuple: "))
		print(len(t1))
	elif ch==5:
		n1=input("enter the string: ")
		print(n1[ ::-1])
		t1=tuple(input("enter the tuple: "))
		print(t1[ ::-1])
	elif ch==6:
		n1=input("enter the string : ")
		n2=n1.count(' ')
		print("the total number of spaces: ",n2)
		t1=tuple(input("enter the tuple: "))
		t2=t1.count(' ')
		print("total white space in tuple: ",t2)
	elif ch==7:
		n1=input("enter the string: ")
		n2=n1.split()
		print("the total number of word : ",len(n2))
		t1=input("enter the tuple: ")
		t2=tuple(t1.split())
		print("total number of words: ",len(t2))
	elif ch==8:
		n1=input("enter the string: ")
		print(n1)
		print(n1[5:2])
		t1=tuple(input("enter the tuple: "))
		print(t1[2:5])
	elif ch==9:
		n1=input("enter the string: ")
		print(n1.split())
		print(tuple(n1.split()))
	elif ch==10:	#no tuple
		n1=input("enter the string: ")
		n2=input("enter the string to be found: ")
		n3=n1.find(n2)
		print("the index number of found word: ",n3)
		print(t3)
	elif ch==11:	#no tuple
		n1=input("enter the string: ")
		n2=input("enter the string which is to be replaced : ")
		n3=input("enter the string in place of it: ")
		n4=n1.replace(n2,n3)
		print(n4)
	elif ch==12:
		n1=input("enter the string: ")
		n2=n1[0:3]
		print(n2)
		t1=tuple(input("enter the tuple: "))
		t2=t1[ :3]
		print(t2)
	elif ch==13:
		n1=input("enter the string: ")
		print(sorted(n1))
		t1=tuple(input("enter the tuple: "))
		print(sorted(t1))
	elif ch==14:
		n1=input("enter the string: ")
		n2=input("enter the string : ")
		print(n1==n2)
		t1=tuple(input("enter the tuple: "))
		t2=tuple(input("enter the tuple: "))
		print(t1==t2)
	elif ch==15:	#no tuple
		n1=input("enter the string: ")
		print(n1.isdigit())
	elif ch==16:	#no tuple
		n1=input("enter the string: ")
		print(n1.isspace())
	elif ch==17:
		t1=tuple(input("enter the tuple: "))
		print(min(t1))
		print(max(t1))
	elif ch==18:
		n1=input("enter the string: ")
		for i in n1:
			print(i)
		t1=tuple(input("enter the tuple: "))
		for i in t1:
			print(i)
	elif ch==19:
		t1=tuple(input("enter a tuple: "))
		del(t1)
		n1=input("enter the string: ")
		del(n1)
	elif ch==0:
		break
	else:
		print("wrong input\n")


