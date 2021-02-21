def func1(a=23,b=56):
	return a+b
class TestMeta(type):
	def t_func():
		return 'inside function'
	def __new__(cls,name,base,attr):
		print("current executing object",cls)
		print("name of class: ",name)
		print("base for the particular class",base)
		attr['func']=func1()
		attr['t_func']=TestMeta.t_func()
		print("Attributes are:",attr)
		return super(TestMeta,cls).__new__(cls,name,base,attr)

	def __init__(cls,name,base,attr):
		print("current executing object",cls)
		print("current class",name)
		print("base for class",base)
		print("Attributes",attr)
		return super(TestMeta,cls).__init__(name,base,attr)

class Meta(metaclass=TestMeta):
	attr=42
	def foo(self,param):
		print("parameter passed is:",param)

obj=Meta()
obj.foo("Sonu")

