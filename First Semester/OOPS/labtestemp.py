d=dict()
n=int(input("enter the no of items\n"))
for i in range(1,n+1):
	temp=dict()
	empno=input("enter the employee number\n")
	temp['name']=input("enter name\n")
	temp['basic_sal']=int(input("enter basic sa\n"))
	temp['hra']=int(input("enter hra\n"))
	temp['da']=int(input("enter da\n"))
	temp['gross_sal']=temp['basic_sal']+temp['hra']+temp['da']
	d[i]=temp

print("*"*80)
print(d)
print("*"*80)
searchkey=input("enter key to be searched\n")
for key in d.keys():
	if key==searchkey:
		print(key,d[key])
		break
else:
	print("not found\n")

