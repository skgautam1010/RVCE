d=dict()
list1=[]
class Employee(object):
	def assign(self,name,address,pan,basic,tds,deduct):
		self.name=name
		self.address=address
		self.pan=pan
		self.basic=basic
		self.tds=tds
		self.deduct=deduct
		self.hra=12*basic
		self.da=5*basic
		self.gross_sal=self.basic+self.hra+self.da
		return self.gross_sal
	def calculate(self):
		self.net_sal=self.gross_sal-self.deduct
		return self.net_sal
	def accept(self,i):
		temp=dict()
		temp['id']=int(input("enter the id\n"))
		temp['name']=(input("enter the name\n"))
		temp['address']=(input("enter the address\n"))
		temp['pan']=(input("enter the pan number\n"))
		temp['basic']=int(input("enter the basic salary\n"))
		temp['tds']=int(input("enter the tds \n"))
		temp['deduct']=int(input("enter the deducted sal\n"))
		temp['gross_sal']=self.assign(temp['name'],temp['address'],temp['pan'],temp['basic'],temp['tds'],temp['deduct'])
		temp['net_sal']=self.calculate()
		d[i]=temp
		list1.append(d)
	def display(self):
		print(list1)
	def search(self):
		searchkey=int(input("enter the item to be searched\n"))
		for key in d.keys():
			if key==searchkey:
				print(key,d[key])
				break
		else:
			print("not found\n")
	def update(self,n,name):
		value=dict()
		for key,value in d.items():
			if key==n:
				for k in value.keys():
					if k=='name':
						value[k]=name
		print(value)


while True:
	print("1-->enter employee details\n")
	print("2-->display the employee detail\n")
	print("3-->update the employee details\n")
	print("4-->search fr employee in the dictionary\n")
	print("5--> for exit\n")
	ch=int(input("enter you choice\n"))
	e=Employee()
	if ch==1:
		n=int(input("enter the range for the employee details\n"))
		for i in range(0,n):
			e.accept(i)
	elif ch==2:
		e.display()
	elif ch==3:
		n=int(input("enter the employee number which is to be updated\n"))
		name=input("enter the changed name\n")
		e.update(n,name)
		print(d)
	elif ch==4:
		e.search()
	elif ch==5:
		break
	else:
		print("wrong input\n")

