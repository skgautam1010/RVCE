class WrongNumber(Exception):
    def get_message(self):
        return 'wrong number'
class Number(Exception):
    def __str__(self):
        return 'wrong number'
try:
    n=int(input("enter a number:  "))
    if n in (1,3,4):
        raise Number
    print(10/n)
except WrongNumber as e:
    print(e.get_message())
except Number as e:
    print(e)
except IOError:
    print("io error")
except KeyboardInterrupt:
    print("interruption by keyboard")
except ArithmeticError:
    print("arithematic error")
class B():
    def __repr__(self):
        return 'hello Rvce Mca'
b=B()
print(b)
