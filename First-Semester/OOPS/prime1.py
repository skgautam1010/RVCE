m=int(input("enter first no"))
n=int(input("enter second range"))
for i in range(m,n+1):
	if i>1:
		for n in range(2,i):
			if (i%n==0):
				break
		else:
			print(i)

