class Student:
	def cal(self):
		#self.name=input("enter the name:")
		#self.id=input("enter the id:")
		self.m1=int(input("enter marks 1: "))
		self.m2=int(input("enter marks 2: "))
		self.m3=int(input("enter marks 3: "))
		return self.m1+self.m2+self.m3
	def __setattr__(self,name,value):
		self.__dict__[name]=value
	def __getattr__(self,name):
		return self.name
n=int(input("enter the number of students : "))
s=Student()
for i in range(n):
	name=input("enter name: ")
	value=s.cal()
	setattr(s,name,value)
ch=input("enter name to find")
print(s.__dict__

