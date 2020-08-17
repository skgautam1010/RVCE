class opeover():
	def __init__(self,alist=[]):
		self.alist=alist
	def getelement(self):
		n=int(input("enter the size\n"))
	for i in range(0,n):
		item=int(input("list element\n"))
		self.alist.apppend((item)
	return self.alist
	def __add__(self,other):
		newlist=[]
		for i in range(0,len(self,alist)):
			newlist.append(self.alist[i]+other.alist[i])
		return newlist
	def __sub__(self,other):
		list1=[]
		for i in range(0,len(self,alist)):
			list.append(self.alist[i]-other.alist[i])
		return list1
 
