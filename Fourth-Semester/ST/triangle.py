a=int(input("Enter first side: "))
b=int(input("Enter Second Side: "))
c=int(input("Enter the third side: "))

if((a+b)<=c or (b+c)<=a or (a+c)<=b):
    print("Triangle Cannot Be Formed")
else:
    print("Triangle Can be formed")
    if(a==b and b==c and c==a):
        print("Equilateral triangle")
    elif(a!=b and b!=c and c!=a):
        print("Scalene Triangle")
    else:
        print("Isoceles triangle")
