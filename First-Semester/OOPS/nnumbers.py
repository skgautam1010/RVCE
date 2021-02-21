i=1
n=int(input("enter a number\n"))
m=int(input("enter the number where u want to break\n"))
while i<=n:
	if m>=n:
		break
	elif i==m :
		break
	else:
		print("numbers till",n,i)
		i=i+1




