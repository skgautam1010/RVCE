with open("mno.txt","w") as f:
    f.write("this is a football ground")
with open("mno.txt","r") as f:
    print(f.read())
with open('mno.bin','wb') as f:
    list=[10,20,30]
    arr=bytearray(list)
    f.write(arr)
    print(f.tell())
with open("mno.bin",'rb') as f:
    print(f.read())
    f.seek(0,0)
    t1=tuple(f.read())
    print(t1)