n=int(input("enter any number"))
a=0
m=n
while(n!=0):
	rem=n%10
	a=a+(rem*rem*rem)
	n=n//10

if(m==a):
	print(" armstrong no ",a)
else:
	print("not a armstrong no")





