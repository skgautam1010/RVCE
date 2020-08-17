class Employee:
	def __setattr__(self,name,value):
		if name=='empname' or name=='emp_name':
			self.__dict__[name]=value
			print("Attribute added set for %s-%s" %(name,value))
		else:
			print("cannot set '%s' attribute-empname,emp_name" %(name))
			return 0
	#def __getattribute__(self,name):
	#	print("get attribute method")
	def __getattr__(self,name):
		if name=='empname' or name=='emp_name':
			return self.name
		else:
			print("attribute not matching")
e1=Employee()
e2=Employee()
a=input("enter the name:")
b=input("enter the value:")
setattr(e1,a,b)
setattr(e2,'empname','skg')
print(e1.__dict__)
print(e2.__dict__)
#getattr(e1,a)
#print(getattr(e2,'empname'))

