def main():
	num=int(input("enter the number\n"))
	count=primeno(num,num/2)
	if (count==1):
		print(" a prime number",num)
	else:
		print(" not a prime number",num)

def primeno(num,i):
	if(i==1):
		return 1
	else:
		if(num%i==0):
			return 0
		else:
			return primeno(num,i-1)
main()
