from abc import ABC,abstractmethod

class Calculation(ABC):
	def __init__(self,a,b):
		self.a=a
		self.b=b
	@abstractmethod
	def calculate(self):
		pass


class Addition(Calculation):
	def calculate(self):
		add1=[]
		for i in range(0,len(self.a)):
			add1.append(self.a[i]+self.b[i])
		print("The addition of",self.a,"and",self.b,"is: ",add1)


class Substract(Calculation):
	def calculate(self):
		sub1=[]
		for i in range(0,len(self.a)):
			sub1.append(self.a[i]-self.b[i])
		print(sub1)



a=[]
b=[]
n=int(input("Enter the list size: "))
while True:
	print("1-->addition\n2-->substract\n")
	ch=int(input("Enter your choice: "))
	if ch==1:
		print("Enter the value for list1")
		for i in range(0,n):
			temp=int(input())
			a.append(temp)
		print("Enter the value for list2")
		for i in range(0,n):
			temp=int(input())
			b.append(temp)
		add=Addition(a,b)
		add.calculate()
	else:
		break
#sub=Substract(a,b)
#sub.calculate()

