n=int(input("enter the number: "))

def generator(num):
	list1=[]
	for i in range(num):
		if i%2==0:
			list1.append(i)
	l1=iter(list1)
	return l1
for number in generator(n):
	print(number)
even=generator(n)
print(next(even))
print(next(even))
print(next(even))
print(next(even))
print(next(even))
print(next(even))
print(next(even))
print(next(even))

