from contextlib import contextmanager 						#contextmanager used

@contextmanager 								#use of context manager as a decorater
def FileManager(filepath,mode):
	#everything before yield is considered as enter method
	try:
		print("#"*150)
		f=open(filepath,mode)
		yield f 							#generator used and it acts as intermediary between
										#the entry and the exit function
	#after yield is considered as exit method
	except Exception as e:
		print("File does not exist",e)
	else:
		print("#"*150)

with FileManager("news.txt","r") as file: 					#with block statement used
	print("*"*130)
	print(file.readline())
	print("*"*130)
	print(file.readline())
	print("*"*130)
	print(file.read())
	print("*"*130)
