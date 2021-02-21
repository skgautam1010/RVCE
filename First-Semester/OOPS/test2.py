'''class father:
	def f1(self):
		print("inheriting the property of father")
class mother:
	def m1(self):
		print("inheriting the property of mother")
class child(father,mother):
	pass
c1=child()
c1.f1()
c1.m1()'''
'''class student:
	def __init__(self,name=" ",usn=" ",sub1=0,sub2=0,sub3=0):
		self.name=name
		self.usn=usn
		self.sub1=sub1
		self.sub2=sub2
		self.sub3=sub3
	def getdata(self):
		self.name=input("enter the name: ")
		self.usn=input("enter the usn: ")
		self.sub1=int(input("enter the sub1 marks: "))
		self.sub2=int(input("enter the sub2 marks: "))
		self.sub3=int(input("enter the sub3 marks: "))
	
class marks(student):
	def calculate(self):
		student.getdata(self)
		self.total=self.sub1+self.sub2+self.sub3
		return self.total
class Result(marks):
	def display(self):
		print("name is: ",self.name)
		print(self.usn)
		print(self.sub1)
		print(self.sub2)
		print(self.sub3)
		print(self.total)
d=dict()
list1=[]
n=int(input("enter the number of student details: "))
for i in range(n):
	r1=Result()
	r1.calculate()
	list1.append(r1)
	d[i]=r1.__dict__
for i in range(n):
	list1[i].display()
print(d)'''
'''def reverse(x,y):
	temp=x
	x=y
	y=temp
	return(x,y)
class garbage:
	def __init__(self):
		print("constructor called")
	def __del__(self):
		print("destructor called")
g1=garbage()
del(g1)'''
class Employee:
	def __init__(self,name=" ",_empid=" ",_sal=" "):
		self.name=name
		self._empid=_empid
		self._sal=_sal
	def getdata(self):
		self.name=input("enter the name: ")
		self._empid=input("enter the empid: ")
		self._sal=int(input("enter the salary: "))
class developer(Employee):
	_deduction=1200
	def deduct(self):
		self._sal=self._sal-self._deduction
	def display(self):
		print(self.name)
		print(self._empid)
		print(self._sal)
d1=developer()
d1.getdata()
d1.deduct()
d1.display()
print(issubclass(developer,Employee))



