'''d=dict()
n=int(input("enter the number of student details to be enetere: "))
for i in range(n):
	temp=dict()
	temp['name']=input("enter rthe name: ")
	temp['roll']=input("enter the roll: ")
	temp['sub1']=int(input("enter the first sub marks: "))
	temp['sub2']=int(input("enter the second sub marks: "))
	temp['sub3']=int(input("enter the third sub marks: "))
	temp['total']=temp['sub1']+temp['sub2']+temp['sub3']
	d[i]=temp
print(d)
a=int(input("enter a number: "))
b=int(input("enter second number: "))
c=int(input("enter third number: "))
if(a>b & a>c):
	print("a is greatest\n")
elif(b>c):
	print("b is greatest\n")
else:
	print("c is greatest")
m=int(input("enter the first number: "))
n=int(input("enter second number: "))
for i in range(m,n+1):
	if i>0:
		for n in range(2,i):
			if(i%n==0):
				break
		else:
			print(i)'''


def palindrome(n):
	m=n
	j=n[ ::-1]
	if j==m:
		return True
	else:
		return False
n=input("enter the string: ")
f=palindrome(n)
if(f==True):
	print("plindrome")
else:
	print("not a palindrome")

