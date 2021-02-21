class student:
	def __init__(self,name=" ",usn=" ",roll=0):
		self.name=name
		self.usn=usn
		self.roll=roll
	def getdata(self):
		self.name=input("enter the name: ")
		self.usn=input("enter the usn: ")
		self.roll=int(input("enter the roll: "))
		self.sub1=int(input("enter sub1 marks: "))
		self.sub2=int(input("enter sub2 marks: "))
		self.sub3=int(input("enter sub3 marks: "))
		self.total=self.sub1+self.sub2+self.sub3
		return self.total
	def percentage(self):
		self.per=((self.total/500)*100)
		return self.per
class pgstudent(student):
	def pggetdata(self):
		student.getdata(self)
		student.percentage(self)
	def pgdisplay(self):
		print(self.name)
		print(self.usn)
		print(self.roll)
		print(self.sub1)
		print(self.sub2)
		print(self.sub3)
		print(self.total)
		print(self.per)
class ugstudent(student):
	def uggetdata(self):
		student.getdata(self)
		student.percentage(self)
	def ugdisplay(self):
		print(self.name)
		print(self.usn)
		print(self.roll)
		print(self.sub1)
		print(self.sub2)
		print(self.sub3)
		print(self.total)
		print(self.per)
pg=pgstudent()
pg.pggetdata()
pg.pgdisplay()
ug=ugstudent()
ug.uggetdata()
ug.ugdisplay()

