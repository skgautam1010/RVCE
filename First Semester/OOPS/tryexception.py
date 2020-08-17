try:
	f=open("xyz1","")
	f1=open("xyz1","w")
	c=f.read()
	f1.write(c)
except StandardError:
	print("Error:standard error \n")
except FileNotFoundError:
	print("Error:File could not be found\n")
except IndentationError:
	print("Indentation error")
except ValueError:
	print("Error:value provided is not correct\n")
except AttributeError:
	print("Error:Attribute not found\n")
except EOFError:
	print("Error:No input provided\n")
else:
	print("coping from  files successful\n")
