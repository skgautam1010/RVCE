class Employee:
	def __setattr__(self,name,value):
		if name=='empname'or'emp_name':
			self.__dict__[name]=value
		else:
			return 0
	def __getattr__(self,name):
		if name=='empname'or'emp_name':
			return self.name
		else:
			print("no attribute matching")
e=Employee()
e1=Employee()
a=input("enter attribute name")
v=input("enter attribute value")
setattr(e,a,v)
setattr(e1,'empname','jas')
print(e.__dict__)
print(e1.__dict__)
getattr(e,a)
print(getattr(e1,'empname'))
lis1=[1,2,3,4,5]
set1={10,20,30}
print("the list is of type:"+str(type(lis1)))
lis1=iter(lis1)
s1=iter(set1)
for i in range(len(set1)):
	print(next(s1))
print("the iterator is of type:"+str(type(lis1)))
print(next(lis1))
print(next(lis1))
print(next(lis1))
print(next(lis1))
print(next(lis1))
#print(next(lis1))
class fibs():
	def __init__(self):
		self.a=0
		self.b=1
	def __next__(self):
		self.a,self.b=self.b,self.a+self.b
		return self.a
	def __iter__(self):
		return self
f=fibs()
for f1 in f:
	print(f1)
	if(f1>10):break





