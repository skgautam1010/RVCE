class oper:
	def __init__(self):
		self.list1=[]
	def getdata(self):
		n=int(input("enter the range fr the list\n"))
		for i in range(1,n+1):
			item=int(input("enter the items\n"))
			self.list1.append(item)
		return self.list1
	def __add__(self,other):
		nlist=[]
		for i in range(0,len(self.list1)):
			nlist.append(self.list1[i]+other.list1[i])
		#print(nlist)
		return nlist
	def __sub__(self,other):
		nlist=[]
		for i in range(0,len(self.list1)):
			nlist.append(self.list1[i]-other.list1[i])
		#print(nlist)
		return nlist
	def __mul__(self,other):
		nlist=[]
		for i in range(0,len(self.list1)):
			nlist.append(self.list1[i]*other.list1[i])
		#print(nlist)
		return nlist
	def __floordiv__(self,other):
		nlist=[]
		for i in range(0,len(self.list1)):
			nlist.append(self.list1[i]//other.list1[i])
		#print(nlist)
		return nlist

'''ob1=oper()
ob2=oper()
ob1.getdata()
ob2.getdata()
print(ob1)
print(ob2)
print(ob1.list1)
print(ob2.list1)
while True:
	print("1-->addition\n")
	print("2-->subtraction\n")
	print("3-->multiplication\n")
	print("4-->floor divivsion\n")
	print("5-->exit")
	ch=int(input("enter the choice\n"))
	if ch==1:
		ob1+ob2
	elif ch==2:
		ob1-ob2
	elif ch==3:
		ob1*ob2
	elif ch==4:
		ob1//ob2
	elif ch==5:
		break
	else:
		print("wrong user input\n")'''



