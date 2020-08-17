lis=[40,26,39,30,25,21]
cut_value=26
for i in lis:
	assert i>=26
	print(str(i))
'''try:
	def celciusToFahrenheit(Temperature):
		assert(Temperature >=0)
		return ((Temperature *1.8)+32)
	print(celciusToFahrenheit(100))
	print(celciusToFahrenheit(-1))
except AssertionError as e:
	print(e)'''
'''try:
	x="hello"
	assert x=="hello"
	assert x=="hel","x should be 'hello'"
	print(x)
except AssertionError:
	print("assertion Error")'''
'''class ContextManager():
	def __init__(self):
		print('init method called')
	def __enter__(self):
		print('enter method called')
		return self
	def __exit__(self,exc_type,exc_value,exc_traceback):
		print('exit method called')
with ContextManager() as manager:
	print('with statement block')'''
'''class FileManager():
	def __init__(self,filename,mode):
		self.filename=filename
		self.mode=mode
		self.f1= None
	def __enter__(self):
		self.f1=open(self.filename,self.mode)
		return self.f1
	def __exit__(self,exc_type,exc_value,exc_traceback):
		self.f1.close()
		print('hello')
with FileManager('test.txt','w') as f:
	f.write('testing the program')
print(f.closed)'''
'''try:
	a=int(input("enter a: "))
	b=input("enter b: ")
	print(a/b)
	if a<18:
		raise ValueError
except ValueError:
	print("value error")
except TypeError:
	print("type error")'''
try:
	f=open("tst.txt",'r')
	f1.write("tefghf")
except NameError:
	print("name error")
except FileNotFoundError:
	print("file not found")




