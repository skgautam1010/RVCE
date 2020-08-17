m=int(input("enter a starting number: "))
n=int(input("enter the second number: "))
print("prime numbers between % and % are" %(m,n))
for i in range(m,n+1):
	if(i>1):
		for n in range(2,i):
			if(i%n==0):
				break
		else:
			print(i)

n=int(input("enter a number: "))
sum=0
while(n!=0):
	rem=n%10
	sum=sum+rem
	n=n//10
print(sum)
for i in range(n,0,-1):
	print(i)
def fib(n):
	if n==0:
		return 0
	elif n==1:
		return 1
	else:
		return(fib(n-1)+fib(n-2))
n=int(input("enter a number: "))
for i in range(0,n):
	print(fib(i))
#for i in range(1,n+1):
#	f=f*i
#print(f)

