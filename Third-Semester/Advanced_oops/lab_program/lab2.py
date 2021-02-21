def function(a=45,b=21):
	return a+b


class TestMeta(type):
	def t_method():
		return 'Inside Function'
	def __new__(cls,name,base,attr):
		print("class name: ",name)
		print("current executing object: ",cls)
		print("super classes: ",base)
		attr['function']=function()
		attr['t_method']=TestMeta.t_method()
		print("Dictionary attributes: ",attr)
		return super(TestMeta,cls).__new__(cls,name,base,attr)
	def __init__(cls,name,base,attr):
		print("class name: ",name)
		print("current executing object: ",cls)
		print("supper classes: ",base)
		print("Dictionary attributes: ",attr)
		return super(TestMeta,cls).__init__(name,base,attr)

class Test(metaclass=TestMeta):
	attr=50

	def foo(self,param):
		print("Parameter passed is: ",param)

obj=Test()
obj.foo("Sonu gautam")

