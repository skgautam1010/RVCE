try:
	d=dict()
	temp=dict()
	class student:
		def branch(self,name,dsc,oops,dm,web,coa):
			self.name=name
			self.dsc=dsc
			self.oops=oops
			self.dm=dm
			self.web=web
			self.coa=coa
			self.full=500
			self.per=100
			self.total=self.dsc+self.oops+self.dm+self.web+self.coa
			return self.total
		def calculate(self):
			self.percentage=(self.total/500)*100
			return self.percentage
		def accept(self):
			usn=input("enter the usn number\n")
			temp['name']=input("enter the name\n")
			temp['dsc']=int(input("enter the dsc marks\n"))
			temp['oops']=int(input("enter the oops marks\n"))
			temp['dm']=int(input("enter the dm marks\n"))
			temp['web']=int(input("enter the web marks\n"))
			temp['coa']=int(input("enter the coa marks\n"))
			temp['total']=self.branch(temp['name'],temp['dsc'],temp['oops'],temp['dm'],temp['web'],temp['coa'])
			temp['percentage']=self.calculate()
			d[usn]=temp
		def display(self,d):
			print(d)
	while True:
		print("1 for assining vaues\n")
		print("2 for display\n")
		print("3 for key as a frozenset\n")
		print("4 for exit\n")
		ch=int(input("enter the choice\n"))
		s=student()
		if ch==1:
			n=int(input("enter the range\n")) 
			for i in range(0,n):
				s.accept()
		elif ch==2:
			s.display(d)
		elif ch==3:
			key=frozenset(temp)
			print(key)
		else:
			break
except NameError:
	print("name not correect")
except AttributeError:
	print("attribute not available")
except ValueError:
	print("value not correct")
except TypeError:
	print("the type is not correct")
except RuntimeError:
	print("error occured")
except OverflowError:
	print("overflow Error")
except IndexError:
	print("out of index range")
else:
	print("the code is correct")
