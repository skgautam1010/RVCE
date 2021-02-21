def main():
	a=int(input("enter the value for a\n"))
	b=int(input("enter the value for b\n"))
	d=multiple(a,b)

def multiple(a,b):
	while True:
		print("1--> foraddition")
		print("2--> for substraction")
		print("3--> for division")
		print("4--> exit")
		ch=int(input("enter your choice\n"))
		if(ch==1):
			e=a+b
			print(e)
		elif(ch==2):
			f=a*b
			print(f)
		elif(ch==3):
			g=a/b
			print(g)
		elif(ch==4):
			exit()
		else:
			print("wrong input")
if __name__=="__main__":
	main()

