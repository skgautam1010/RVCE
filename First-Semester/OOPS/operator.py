class greater():
	def __init__(self,a):
		self.a=a
	def __gt__(self,other):
		if(self.a<other.a):
			return True
		else:
			return False
ob1=greater(2)
ob2=greater(3)
print(ob1.__gt__(ob2))

