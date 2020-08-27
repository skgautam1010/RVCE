try:
    f=open("test.txt","w")
    f.writelines("it is a file operation")
    f.write("\nwelcome to rvce")
    f.close()
    with open("test.txt","r") as f:
        print(f.read())
    f=open("binfile.bin","wb")
    num=[5,10,15,20,25]
    arr=bytearray(num)
    f.write(arr)
    print(f.tell())
    f=open("binfile.bin","rb")
    print(f.read())
    f.seek(0,0)
    num1=tuple(f.read())
    print(num1)
    lis=[s.strip() for s in open("test.txt")]
    print(lis)
    list1=[30,20,45,27,21,23]
    #cut_value=27
    for i in list1:
        assert(i>=27)
        print(str(i))
except FileNotFoundError:
    print("file does not exist")
#except Exception:
 #   print("exception caught")
except EOFError:
    print("end of file error")
except NameError:
    print("a")
except AssertionError:
    print("assertion error")