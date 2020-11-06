y=5
print(callable(y))

def method():
	print("Hello World")



m=method
print("Before")
m()
print("After")
#print(method())
method()
print(callable(method))

