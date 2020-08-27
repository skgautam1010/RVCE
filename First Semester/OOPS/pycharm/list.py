#from random import randint
list_n = [1,2,3,4,5,6]
list_n[4] = 8
del list_n[5]
print(list_n)
try:
    for i in range(0,7) :
        if i==2:
            raise StopIteration
        list_n.reverse()
    print(list_n)
except StopIteration:
    print("iteration errror")
except IOError:
    print("io error")


