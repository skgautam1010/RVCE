import MySQLdb as my

class Student(object):
	def __init__(self):
		try:
			self.db=my.connect('localhost','root','Skg@123!','advance_oops')
			self.cur=self.db.cursor()
		except Exception as e:
			print(e)
	def insert(self,usn,name,age,address,gender,email,password):
		self.cur.execute('''insert into registration values('%s','%s','%d','%s','%s','%s','%s')'''%(usn,name,int(age),address,gender,email,password))
		self.db.commit()

	def display(self,usn):
		self.cur.execute('''select * from registration''')
		print(self.cur.fetchall())

	def close(self):
		self.cur.close()
		self.db.close()
		exit(0)


s1=Student()
while True:
	print("1-->Insert\n2-->display\n3-->close\n")
	ch=int(input("Enter the choice: "))
	if ch==1:
		usn=input("Enter the usn: ")
		name=input("Enter the name: ")
		age=int(input("Enter the age: "))
		address=input("Enter the address: ")
		gender=input("Enter the gender: ")
		email=input("Enter the email: ")
		password=input("Enter the pasword: ")
		s1.insert(usn,name,age,address,gender,email,password)
		print("Insertion Successful")
	elif ch==2:
		s1.display('1rd19mca65')
	elif ch==3:
		 s1.close()
	else:
		print("Wrong Choice\n")

