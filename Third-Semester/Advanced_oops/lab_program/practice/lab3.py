def details(Value=False):
	if Value:
		keys=['empid','empname','empaddr']
	else:
		keys=['cmpid','cmpname','cmpaddr']

	def init(self,**kwargs):
		self.expected_keys=set(keys)
		if self.expected_keys!=set(kwargs.keys()):
			raise ValueError("key dont match")
		else:
			for k,v in kwargs.items():
				setattr(self,k,v)
	if Value:
		return type('emp',(object,),{'__init__':init,})
	else:
		return type('cmp',(object,),{'__init__':init,})



emp=details(True)
e1=emp(empid='emp01',empname='skg',empaddr='bang')
print(type(e1))
print(type(emp))
print(e1.empid)
cmp=details(False)
c1=cmp(cmpid='cmp01',cmpname='abc',cmpaddr='bangalore')
print(type(cmp))
print(type(c1))
print(c1.cmpname)
