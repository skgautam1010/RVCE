from curses.ascii import isdigit


def binary_search(alist, key):
    start = 0
    end = len(alist)
    while start < end:
        mid = (start + end)//2
        if alist[mid] > key:
            end = mid
        elif alist[mid] <key:
            start = mid +1
        else:
            return mid
    return -1

while True:
    alist = []
    try:
        num = int(input("Enter the Limit"))

    except:
            print("Enter number only")
    else:
        if (num < 0):
            print("Give Positive VALUE")
        else:
            i=0
            while(i<num):
                no = int(input("Enter the Number"))
                alist.append(no)
                i +=1
                print("Numbers only")


                alist.sort()
                print("Sorted Element is :", alist)
                key = int(input("Enter The key Elemet for Search"))

                index = binary_search(alist,key)

                if index < 0:
                    print("Elment Is not Found")
                else:
                    print("{} was found at index {}".format(key, index))