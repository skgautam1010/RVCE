try:
    x=100
    y=int(input("enter a number: "))
    z=x/y
    print(z)
except ArithmeticError:
    print("divided by zero")
except