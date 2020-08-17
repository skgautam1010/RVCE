#implement overloading of modules using oops concept
class operator:
	def __init__(self):
		self.list1=[]
	def getdata(self):
		n=int(input("enter the range of list: "))
		for i in range(n):
			item= int(input("enter the item: "))
			self.list1.append(item)
		return self.list1
	def __add__(self,other):
		nlist=[]
		for i in range(0,len(self.list1)):
			nlist.append(self.list1[i]+other.list1[i])
		return nlist
	def __sub__(self,other):
		nlist=[]
		for i in range(0,len(self.list1)):
			nlist.append(self.list1[i]-other.list1[i])
		return nlist
	def __mul__(self,other):
		nlist=[]
		for i in range(0,len(self.list1)):
			nlist.append(self.list1[i]*other.list1[i])
		return nlist
	def __floordiv__(self,other):
		nlist=[]
		for i in range(0,len(self.list1)):
			nlist.append(self.list1[i]//other.list1[i])
		return nlist
'''ob1=operator()
ob2=operator()
ob1.getdata()
ob2.getdata()
print(ob1.list1)
print(ob2.list1)
while True:
	print("*****menu*****\n")
	print("1-->addition")
	print("2-->subtraction")
	print("3-->multiplication")
	print("4-->floor division")
	print("5-->exit")
	ch=int(input("enter your choice: "))
	if ch==1:
		print(ob1+ob2)
	elif ch==2:
		print(ob1-ob2)
	elif ch==3:
		print(ob1*ob2)
	elif ch==4:
		print(ob1//ob2)
	elif ch==5:
		break
	else:
		print("wrong input\n")'''

