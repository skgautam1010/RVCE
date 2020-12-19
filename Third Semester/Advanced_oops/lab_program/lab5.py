import pymysql as py


class Student(object):
	def __init__(self):
		self.db=py.connect('localhost','root','Skg@123!','advance_oops')
		self.cursor=self.db.cursor()
		print("\n**************************Connection Established**************************\n")

	def insert(self,usn,name,age,address,gender,email,password):
		try:
			self.cursor.execute('''insert into registration values('%s','%s',%d,'%s','%s','%s','%s')''' %(usn,name,int(age),address,gender,email,password))
			self.db.commit()
			print("\n**********************Record Inserted Successfull!!!***************************\n")
		except Exception as e:
			print("The Error is:  ",e)

	def display(self):
		self.cursor.execute("select * from registration")
		print(self.cursor.fetchall())

	def delete(self,usn):
		self.val=self.cursor.execute("delete from registration where usn='%s'" %(usn))
		self.db.commit()
		if(self.val==1):
			print("\n**************************Deletion Successful!!!*****************************\n")
		else:
			print("\n*************************No record Deleted!!****************************\n")

	def update(self,address,usn):
		self.val=self.cursor.execute("update registration set address='%s' where usn='%s'" %(address,usn))
		self.db.commit()
		if(self.val==1):
			print("\n*****************************Update Successfull!!!***********************\n")
		else:
			print("\n*******************************No record Updated!!*************************\n")

	def close(self):
		self.cursor.close()
		self.db.close()
		print("\n********************Connection Closed*************************\n")



s=Student()
while True:
	print("\n\t1-->Insert\n\t2-->Display\n\t3-->Update\n\t4-->Delete\n\t5-->Exit\n")
	ch=int(input("Enter your choice: "))
	if ch==1:
		usn=input("Enter the usn: ")
		name=input("Enter the Name: ")
		age=int(input("Enter the age(only int): "))
		address=input("Enter the Address: ")
		gender=input("Enter your gender: ")
		email=input("Enter the Email: ")
		password=input("Enter the Password: ")
		s.insert(usn,name,age,address,gender,email,password)
	elif ch==2:
		s.display()
	elif ch==3:
		usn=input("Enter the usn : ")
		address=input("Enter the new address: ")
		s.update(address,usn)
	elif ch==4:
		usn=input("Enter the usn: ")
		s.delete(usn)
	elif ch==5:
		s.close()
		break


