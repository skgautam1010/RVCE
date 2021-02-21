class Employee:
	raise_amt=1.04
	def __init__(self,first="",last="",empid="",pay=0):
		self.first=first
		self.last=last
		self.empid=empid
		self.pay=pay
	def getdata(self):
		self.first=input("enter the first name\n")
		self.last=input("enter the last name\n")
		self.empid=input("enter the employee id\n")
		self.pay=int(input("enter the pay amount\n"))
	def apply_raise(self):
		#self.cal=self.pay*self.raise_amt
		#return self.cal
		self.pay=int(self.pay*self.raise_amt)
	def display(self):
		print("first name:",self.first)
		print("last name:",self.last)
		print("employee id:",self.empid)
		print("pay:",self.pay)
		#print("calculated pay:",self.cal)
class developer(Employee):
	raise_amt=1.06
	def apply_raise(self):
		#self.cal=self.pay*self.raise_amt
		#return self.cal
		self.pay=int(self.pay*self.raise_amt)
class manager(Employee):
	raise_amt=1.05
	def apply_raise(self):
		#self.cal=self.pay*self.raise_amt
		#return self.cal
		self.pay=int(self.pay*self.raise_amt)
#d1=developer()
#m1=manager()
#d1.getdata()
#d1.apply_raise()
#m1.getdata()
#m1.apply_raise()
#d1.display()
#m1.display()
n=int(input("enter the number of developers details to be enetered\n"))
#d1=developer()
d=dict()
m2=dict()
for i in range(0,n):
	d1=developer()
	d1.getdata()
	d1.apply_raise()
	d1.display()
	d[i]=d1.__dict__
	#print("in dictionary format:",vars(d1))
print(d)
m=int(input("enter the number of managers details to be enetered\n"))
#m1=manager()
for i in range(0,m):
	m1=manager()
	m1.getdata()
	m1.apply_raise()
	m1.display()
	m2[i]=m1.__dict__
	#print("in dictionary format:",vars(m1[i]))
print(m2)

