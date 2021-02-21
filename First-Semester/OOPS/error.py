try:
	class count
		def __init__(self,min,max):
			self.min=min
			self.max=max
		def __setattr__(self,name,value):
			self.__dict__[name]=value
		def __getattr__(self,item):
			self.__dict__[item]=0
			return 0
except SyntaxError:
	print("Error:Check the syntax\n")
except IndentationError:
	print("Error:Indentation Not correct\n")
c1=count(1,10)
a=input("enter the name\n")
b=input("enter the value\n")
setattr(c1,a,b)
print(c1.min)
print(c1.max)
print(c1.current)

