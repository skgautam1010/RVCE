import time

def calculate_time(func):
	def inner_func():
		begin=time.time()
		func()
		end=time.time()
		print("total time taken: ",round(end-begin,2))
	return inner_func


def fib():
	a,b=0,1
	while True:
		yield a
		a,b=b,a+b


@calculate_time
def find_fibonnaci():
	g=fib()
	n=int(input("Enter the number: "))
	for _ in range(n):
		print(next(g))

find_fibonnaci()

