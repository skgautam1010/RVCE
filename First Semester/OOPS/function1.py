class adding():
	def __init__(self,a,alist=[]):
		self.a=a
		self.alist=alist
	def __add__(self,other):
		return self.a+other.a
		return self.alist+other.alist
alist=[1,2,3,4]
ob1=adding(2,alist)
print(ob1)

