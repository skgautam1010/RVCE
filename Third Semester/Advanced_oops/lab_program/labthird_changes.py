def details(value=False,addhar=False):
	if value == True or addhar==True:
		keys = ['empid', 'empname', 'empadd']
		keys.append('addharno')

	else:
		keys = ['empid', 'empname', 'empadd']

	def init(self, **kwargs):
		self.expected_keys = set(keys)
		if self.expected_keys != set(kwargs.keys()):
			raise ValueError("Key don't match")
		else:
			for k, v in kwargs.items():
				setattr(self, k, v)

	if value:
		return type('emp', (object,), {'__init__': init, })
	else:
		return type('emp', (object,), {'__init__': init, })


status=False
emp = details(True,status)
e1 = emp(empid='101', empname='ABC', empadd='Bengalore',addharno='294432123322')
print(type(emp))
print(type(e1))
print(e1.empid)
print(e1.empname)
print(e1.empadd)
if status:
	print(e1.addharno)


#emp = details(True,False)
#e1 = emp(empid='c1', empname='XYZ', empadd='Bengalore')
#print(type(emp))
#print(type(e1))
#print(e1.empid)
