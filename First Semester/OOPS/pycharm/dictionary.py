from getpass import getpass
product=['addidas','nike shirt','sparx']
details =[
    {
        'name': 'skg',
        'password':'akt123',
        'product':[product[0],product[1]]

    },
    {
        'name': 'sk',
        'password': 'rth876543',
        'product':[product[1],product[2]]

    },
    {
        'name':'admin',
        'password': 'ka12345'
    }


]
a=5
while a>0:
    user_name=input("enter your name:  ")
    user_password=getpass("enter the password")
    for i in details:
        if user_name==i['name'] and user_password==i['password']:
            print("welcome",user_name,"!")
            print(i['product'])
            a= -1
    if a!=-1:
        print("wrong user input")
    a=a-1

