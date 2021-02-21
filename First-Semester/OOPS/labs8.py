class Employee:
	def __setattr__(self,name,value):
		if(name=='empname' or name=='emp_name'):
			self.__dict__[name]=value
		else:
			#print("couldnt set values")
			return 0
	def __getattr__(self,name):
		if(name=='empname' or name=='emp_name'):
			return self.name
		else:
			print("not found")
e1=Employee()
e2=Employee()
a=input("enter the name: ")
b=input("enter the value: ")
setattr(e1,a,b)
setattr(e2,'empname',"123")
print(getattr(e1,a))
print(getattr(e2,'empname'))
print(e1.__dict__)
print(e2.__dict__)

