from random import randint
a=1
b=4
print(f'the sum of {a} and {b} is: {a+b}')
list1=["John",15]
print(f"{list1[0]} is {list1[1]} yrs old")
a=[randint(0,100) for i in range(10)]
print(a)
b=[i for i in (a) if i%2==0]
print(b)