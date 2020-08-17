class student(object):
	def __init__(self,USN,name,age):
		self.USN=NULL
		self.name=NULL
		self.age=NULL
	def getdata(self):
		self.USN=input("enter the usn\n")
		self.name=input("ener the name\n")
		self.age=int(input("enter the age\n"))
	'''def display(self):
		print("the usn is:",self.USN)
		print("the name is:",self.name)
		print("the age is:",self.age)'''
class Semester(student):
	def __init__(self,semester,sub1,sub2,sub3,sub4,sub5):
		self.semester=semester
		self.sub1=sub1
		self.sub2=sub2
		self.sub3=sub3
		self.sub4=sub4
		self.sub5=sub5
	def subject_marks(self):
		#student.getdata(self)
		self.semester=input("enter the semester\n")
		self.sub1=int(input("enter the subject1 marks\n"))
		self.sub2=int(input("enter the subject2 marks\n"))
		self.sub3=int(input("enter the subject3 marks\n"))
		self.sub4=int(input("enter the subject4 marks\n"))
		self.sub5=int(input("enter the subject5 marks\n"))
	def calculate(self):
		self.total=self.sub1+self.sub2+self.sub3+self.sub4+self.sub5
		return self.total
	def calculate1(self):
		self.percentage=(self.total/500)*100
		return self.percentage
	'''def display1(self):
		student.display(self)
		print("the semester is:",self.semester)
		print("the subject 1 marks is:",self.sub1)
		print("the subject 2 marks is:",self.sub2)
		print("the subject 3 marks is:",self.sub3)
		print("the subject 4 marks is:",self.sub4)
		print("the subject 5 marks is:",self.sub5)
		print("the total marks is:",self.total)
		print("the percentage of  marks is:",self.percentage)'''

class Display_data(Semester):
	def display(self):
		print("the usn is:",self.USN)
		print("the name is:",self.name)
		print("the age is:",self.age)
		print("the semester is:",self.semester)
		print("the subject 1 marks is:",self.sub1)
		print("the subject 2 marks is:",self.sub2)
		print("the subject 3 marks is:",self.sub3)
		print("the subject 4 marks is:",self.sub4)
		print("the subject 5 marks is:",self.sub5)
		print("the total marks is:",self.total)
		print("the percentage of  marks is:",self.percentage)
	'''def getdata1(self):
		Semester.subject_marks(self)
		Semester.calculate(self)
		Semester.calculate1(self)
	def display2(self):
		Semester.display1(self)'''
s1=Display_data('1',23,45,56,67,89)
s1.getdata()
s1.subject_marks()
s1.calculate()
s1.calculate1()
s1.display()

