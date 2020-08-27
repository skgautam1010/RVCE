try:
    a=int(input("enter  a number: "))
    if a == 2:
        raise ValueError
    print(10/a)
except ValueError as e:
    print("there is a value error")
    print(e)
except ZeroDivisionError as e:
    print(e)
else:
    print("program executed properly")

