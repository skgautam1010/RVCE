class student:
	def __init__(self,name=" ",age=0,usn=" "):
		self.name=name
		self.age=age
		self.usn=usn
	def getdata(self):
		self.name=input("enter the name: ")
		self.age=int(input("enter the age: "))
		self.usn=input("enter the usn: ")
class marks(student):
	def __init__(self,sub1=0,sub2=0,sub3=0,sub4=0,sub5=0):
		self.sub1=sub1
		self.sub2=sub2
		self.sub3=sub3
		self.sub4=sub4
		self.sub5=sub5
	def mgetdata(self):
		self.sub1=int(input("enter the subject1 marks: "))
		self.sub2=int(input("enter the subject2 marks: "))
		self.sub3=int(input("enter the subject3 marks: "))
		self.sub4=int(input("enter the subject4 marks: "))
		self.sub5=int(input("enter the subject5 marks: "))
		self.total=self.sub1+self.sub2+self.sub3+self.sub4+self.sub5
		return self.total
	def percentage(self):
		self.per=((self.total)/500)*100
		return self.per
class display(marks):
	def display_marks(self):
		print("name is: ",self.name)
		print("age is: ",self.age)
		print("usn is: ",self.usn)
		print("sub1 is: ",self.sub1)
		print("sub2 is: ",self.sub2)
		print("sub3 is: ",self.sub3)
		print("sub4 is: ",self.sub4)
		print("sub5 is: ",self.sub5)
		print("total is: ",self.total)
		print("percentage is: ",self.per)
d=dict()
list1=[]
n=int(input("enter the number of detail to be taken: "))
for i in range(n):
	d1=display()
	d1.getdata()
	d1.mgetdata()
	d1.percentage()
	list1.append(d1)
	d[i]=d1.__dict__
for i in range(n):
	list1[i].display_marks()
print(d)

