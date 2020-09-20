#def function1():
#	print("Hello This is Decorators Example")
#func2=function1
#del function1
#func2()


def dec1(func1):
	def exec():
		print("Executing now")
		func1()
		print("Executed")
	return exec

@dec1
def function1():
	print("Skgautam")

#func1=dec1(function1)
function1()
print(callable(function1))


