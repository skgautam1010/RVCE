class student:
	def __init__(self,name=" ",usn=" ",age=0):
		self.name=name
		self.usn=usn
		self.age=age
	def getdata(self):
		self.name=input("enter the name: ")
		self.usn=input("enter the usn: ")
		self.age=int(input("enter the age: "))
	def display(self):
		print("name is: ",self.name)
		print("usn is: ",self.usn)
		print("age is: ",self.age)
class pgstudent(student):
	def __init__(self,fees=0,semester=" ",stipend=0):
		self.fees=fees
		self.semester=semester
		self.stipend=stipend
	def pggetdata(self):
		student.getdata(self)
		self.fees=int(input("enter the fees: "))
		self.semester=(input("enter the semsester: "))
		self.stipend=int(input("enter the stipend: "))
	def pgdisplay(self):
		student.display(self)
		print("fees is: ",self.fees)
		print("semsester is: ",self.semester)
		print("stipend is: ",self.stipend)
class ugstudent(student):
	def __init__(self,fees=0,stipend=0,semester=" "):
		self.fees=fees
		self.semester=semester
		self.stipend=stipend
	def uggetdata(self):
		student.getdata(self)
		self.fees=int(input("enter the fees: "))
		self.semester=input("enter the semester: ")
		self.stipend=int(input("enter the stipend: "))
	def ugdisplay(self):
		student.display(self)
		print("fees is: ",self.fees)
		print("semester is: ",self.semester)
		print("stipend is: ",self.stipend)
list1=[]
d={}
list2=[]
d1={}
while True:
	print("1-->pg detail")
	print("2-->ug detail")
	print("3-->exit")
	ch=int(input("enter the choice: "))
	if ch==1:
		n=int(input("enter the number of details to be enetered: "))
		for i in range(n):
			pg=pgstudent()
			pg.pggetdata()
			list1.append(pg)
			d[i]=pg.__dict__
		for i in range(n):
			list1[i].pgdisplay()
		print(d)
	elif ch==2:
		n=int(input("enter the number of ug detail to be entetred: "))
		for i in range(n):
			ug=ugstudent()
			ug.uggetdata()
			list2.append(ug)
			d1[i]=ug.__dict__
		for i in range(n):
			list2[i].ugdisplay()
		print(d1)
	elif ch==3:
		break
	else:
		print("wrong input")

