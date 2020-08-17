d=dict()
class Employee:
	def accept(self,name=" ",address=" ",basic=0,hra=0,da=0,deduction=0):
		self.name=name
		self.address=address
		self.basic=basic
		self.hra=hra
		self.da=da
		self.deduction=deduction
		self.gross=self.basic+self.hra+self.da
		return self.gross
	def cal(self):
		self.netsal=self.gross-self.deduction
		return self.netsal
	def getdata(self,i):
		temp={}
		temp['name']=input("enter the name: ")
		temp['address']=input("enter the address: ")
		temp['basic']=int(input("enter the basic salary: "))
		temp['hra']=int(input("enter the hra: "))
		temp['da']=int(input("enter the da: "))
		temp['deduct']=int(input("enter the deductions: "))
		temp['gross']=self.accept(temp['name'],temp['address'],temp['basic'],temp['hra'],temp['da'],temp['deduct'])
		temp['netsal']=self.cal()
		d[i]=temp
	def display(self):
		print(d)
	def search(self):
		searchkey=int(input("enter the key to be searched: "))
		for key in d.keys():
			if(key==searchkey):
				print(key,d[key])
	def update(self,n,name):
		value=dict()
		for key,value in d.items():
			if key==n:
				for k in value.keys():
					if k=='name':
						value[k]=name
		print(value)
while True:
	print("1-->insertion")
	print("2-->display")
	print("3-->search")
	print("4-->update")
	print("5-->exit")
	ch=int(input("enter your choice: "))
	if ch==1:
		n=int(input("enter the range: "))
		for i in range(n):
			e1=Employee()
			e1.getdata(i)
	elif ch==2:
		e1=Employee()
		e1.display()
	elif ch==3:
		e1=Employee()
		e1.search()
	elif ch==4:
		n=int(input("enter the employee number to be changed: "))
		name=input("enter the changed name: ")
		e1=Employee()
		e1.update(n,name)
	elif ch==5:
		break
	else:
		print("wrong input")
