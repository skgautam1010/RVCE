try:
	lis1=[10,20,34,45]
	l1=iter(lis1)
	print(next(l1))
	print(next(l1))
	print(next(l1))
	print(next(l1))
	print(next(l1))
	print(next(l1))
	print(next(l1))
except StopIteration:
	ptint("iteration error")
'''for i in range(len(lis)):
	print(next(l1))'''
'''class Fibs:
	def __init__(self):
		self.a=0
		self.b=1
	def __next__(self):
		self.a,self.b=self.b,(self.a+self.b)
		return self.a
	def __iter__(self):
		return self
fibs=Fibs()
for f in Fibs():
	print(f)
	if(f>10):
		break'''
