n=int(input("Enter the number of loops: "))
for i in range(n):
    try:
        num=int(input("Enter the number: "))
        if(num>1 and num<101):
            print("Valid Input")
        else:
            print("Invalid Input")
    except:
        print("Enter the number in the range")