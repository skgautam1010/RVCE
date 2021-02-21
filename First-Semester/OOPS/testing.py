'''class student(object):
	def __init__(self,name,usn):
		self.name=name
		self.usn=usn
	def getdata(self):
		self.name=input("enter the name\n")
		self.usn=input("enter the usn\n")
	def display(self):
		print("name is:",self.name)
		print("usn is :",self.usn)
def main():
	ob1=student('a','s')
	ob1.getdata()
	ob1.display()
main()'''
'''nu=(1,2,3,4,5,6,7,8,9)
fnum=frozenset(nu)
print(fnum)'''
student={'name':'ABC','age':21,'sex':'male','college':'rvce','address':'bangalore'}
key=frozenset(student)
print("the frozenset is:",key)






