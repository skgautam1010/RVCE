'''class employee:
	def info(self):
		self.empid=empid
		self.name=name
		self.address=address
	def accept(self):
		self.empid=input("enter the empid\n")
		self.name=input("enter the name\n")
		self.address=input("enter the address\n")
		self.basic_sal=int(input("enter the basic salary\n"))
class salary(employee):
	def __init__(self,gross_sal):
		self.gross_sal=gross_sal
	def details(self,basic_sal):
		self.hra=12*basic_sal
		self.da=10*basic_sal
		self.gross_sal=self.basic_sal+self.hra+self.hra
		return self.gross_sal
	def display(self):
		print("empid is:",self.empid)
		print("name is:",self.name)
		print("address is:",self.address)
		print("basic_sal is:",self.basic_sal)
		print("gross_sal is:",self.gross_sal)
list1=[]
d=dict()
n=int(input("enter the range for employee database\n"))
e=salary('gross_sal')
for i in range(0,n):
	e.accept()
	e.details(4567)
	e.display()
	d=e.__dict__
	list1.append(d)
print(list1)'''
def student(firstname,lastname='PQR',standard='MCA'):
	print(firstname,lastname,"studies in",standard)
def main():
	student('ABC')
main()

