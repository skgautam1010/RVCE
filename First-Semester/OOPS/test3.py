
'''try:	
	list1=[56,34,26,34,12,45]
	cut_value=26
	for i in list1:
		assert (i>=26)
		print(i)
except AssertionError:
	print("there is a assertion error")'''
'''try:
	list1=[10,20,30]
	l1=iter(list1)
	print(next(l1))
	print(next(l1))
	class fib():
		def __init__(self):
			self.a=0
			self.b=1
		def __next__(self):
			(self.a,self.b)=self.b,self.a+self.b
			return self.a
		def __iter__(self):
			return self
	f1=fib()
	for f in f1:
		print(f)
		if(f>10):break
	def square(x):
		if x==0:
			raise ValueError
		print(x*x)
	x=int(input("enter the number: "))
	square(x)
except ValueError as v:
	print(v)
except StopIteration:
	print("there is more iteration them needed")'''
'''class FileManager():
	def __init__(self,filename,mode):
		self.filename=filename
		self.mode=mode
		self.f1=None
	def __enter__(self):
		self.f1=open(self.filename,self.mode)
		return self.f1
	def __exit__(self,exc_type,exc_value,exc_traceback):
		self.f1.close()
		print("closed file")
#with FileManager("skg.txt","w") as f:
#	f.write("this is context manager managing file reources")
with FileManager("skg.txt","r") as f:
	print(f.read())
print(f.closed)'''
'''def product(a,b):
	c=a*b
	print(c)
def product(a,b,c):
	d=(a*b*c)
	print(d)
product(4,5)
product(4,5,6)'''
qty=[5,4,7,3,6,2,1]
print(qty)
qty.insert(0,9)
qty.insert(8,11)
qty.append(99)
qty.insert(3,76)
qty.pop(0)
qty.pop()
del(qty[4])
qty.pop(4)
qty.clear()
print(qty)
print(qty[ ::-1])


