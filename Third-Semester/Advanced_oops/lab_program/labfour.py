from abc import ABC,abstractmethod

class BasicCalculation(ABC):
	def __init__(self,a,b):
		self.a=a
		self.b=b
	@abstractmethod
	def calculate(self):
		pass


class Addition(BasicCalculation):
	def calculate(self):
		sum=[]
		for i in range(0,len(self.a)):
			sum.append(self.a[i]+self.b[i])
		print("the sum of: ",self.a,"and",self.b,"is:",sum)

class Substraction(BasicCalculation):
	def calculate(self):
		diff=[]
		for i in range(0,len(self.a)):
			diff.append(self.a[i]-self.b[i])
		print("the difference of: ",self.a,"and",self.b,"is:",diff)

class Multiplication(BasicCalculation):
	def calculate(self):
		mul=[]
		for i in range(0,len(self.b)):
			mul.append(self.a[i]*self.b[i])
		print("The multiplication of :",self.a,"and",self.b,"is:",mul)

class Division(BasicCalculation):
	def calculate(self):
		div=[]
		for i in range(0,len(self.a)):
			div.append(self.a[i]/self.b[i])
		print("The division of: ",self.a,"and",self.b,"is:",div)


n=int(input("Enter the size of list: "))
p=[]
q=[]
print("Enter the first list")
for i in range(0,n):
	a=int(input(f"Enter the {i+1} value: ")) 
	p.append(a)
print("Enter the second list")
for i in range(0,n):
	b=int(input(f"Enter the  {i+1} value: "))
	q.append(b)
while True:
	print("1-->Addition\n2-->Substraction\n3-->Multiplication\n4-->Division\n5-->Exit\n")
	ch=int(input("Enter your choice: "))
	if ch==1:
		Addition(p,q).calculate()
	elif ch==2:
		Substraction(p,q).calculate()
	elif ch==3:
		Multiplication(p,q).calculate()
	elif ch==4:
		Division(p,q).calculate()
	elif ch==5:
		exit()
	else:
		print("Wrong Choice\n")

