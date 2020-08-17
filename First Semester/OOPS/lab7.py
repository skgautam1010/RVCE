class Employee:
	raise_amt=1.04
	def __init__(self,first=" ",last=" ",empid=" ",pay=0):
		self.first=first
		self.last=last
		self.empid=empid
		self.pay=pay
	def getdata(self):
		self.first=input("enter the first name: ")
		self.last=input("enter the last namme: ")
		self.empid=input("enter the empid: ")
		self.pay=int(input("enter the pay scale: "))
	def assign(self):
		self.gross=self.pay*self.raise_amt
		return self.gross
	def display(self):
		print("first name is: ",self.first)
		print("last name is: ",self.last)
		print("empid is: ",self.empid)
		print("payscale is: ",self.pay)
		print("gross sal after applying raise: ",self.gross)
class developer(Employee):
	raise_amt=1.05
	def assign(self):
		self.gross=self.pay*self.raise_amt
class manager(Employee):
	raise_amt=1.06
	def assign(self):
		self.gross=self.pay*self.raise_amt
d1={}
d2={}
n=int(input("enter for develepor detail: "))
for i in range(0,n):
	d=developer()
	d.getdata()
	d.assign()
	d.display()
	d1[i]=d.__dict__
print(d1)
m=int(input("enter manager detail: "))
for i in range(m):
	m1=manager()
	m1.getdata()
	m1.assign()
	m1.display()
	d2[i]=m1.__dict__
print(d2)
