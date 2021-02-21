import time

def calculate_time(func):
	def inner_func():
		begin=time.time()
		func()
		end=time.time()
		print(end-begin)
	return inner_func




def fib():
	a=0
	b=1
	while True:
		yield a
		a,b=b,a+b



@calculate_time
def fibonnacci():
	g=fib()
	for _ in range(n):
		print(next(g))

n=int(input("Enter the total number: "))
fibonnacci()
