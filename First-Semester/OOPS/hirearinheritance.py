class student:
	def __init__(self,usn=' ',name=' ',age=0):
		self.usn=usn
		self.name=name
		self.age=age
	def getdata(self):
		self.usn=input("enter the usn\n")
		self.name=input("enter the name\n")
		self.age=int(input("enter the age\n"))
	def display(self):
		print("usn of student:",self.usn)
		print("name of student:",self.name)
		print("age of student:",self.age)
class pgstudent(student):
	def __init__(self,sem=' ',fees=0,stipend=0):
		self.sem=sem
		self.fees=fees
		self.stipend=stipend
	def pggetdata(self):
		student.getdata(self)
		self.sem=input("enter the semester\n")
		self.fees=int(input("enter the fees\n"))
		self.stipend=int(input("enter the stipend\n"))
	def pgdisplay(self):
		student.display(self)
		print("semester is:",self.sem)
		print("fees is:",self.fees)
		print("stipend is:",self.stipend)
class ugstudent(student):
	def __init__(self,sem=' ',fees=0,stipend=0):
		self.sem=sem
		self.fees=fees
		self.stipend=stipend
	def uggetdata(self):
		student.getdata(self)
		self.sem=input("enter the semester\n")
		self.fees=int(input("enter the fees\n"))
		self.stipend=int(input("enter the stipend\n"))
	def ugdisplay(self):
		student.display(self)
		print("the semsester is:",self.sem)
		print("the fees is:",self.fees)
		print("the stipend is:",self.stipend)
list1=[]
list2=[]
d=dict()
d1=dict()
while True:
	print("1-->pg detail\n")
	print("2-->ug detail\n")
	print("3-->exit\n")
	ch=int(input("enter the choice\n"))
	if ch==1:
		n=int(input("total no of student details to be entered\n"))
		for i in range(0,n):
			pg=pgstudent()
			pg.pggetdata()
			list1.append(pg)
			d[i]=pg.__dict__
		for i in range(0,n):
			list1[i].pgdisplay()
		print(d)
	elif ch==2:
		n=int(input("total no of student details to be entered\n"))
		for i in range(0,n):
			ug=ugstudent()
			ug.uggetdata()
			list2.append(ug)
			d1[i]=ug.__dict__
		print(d1)
		for i in range(0,n):
			list2[i].ugdisplay()
	elif ch==3:
		break
	else:
		print("wrong input\n")



