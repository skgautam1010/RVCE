l=45
s=30
b=25
totallocks=0
totalstocks=0
totalbarrels=0

locks=int(input("Enter the number of locks: "))
if(locks<1 and locks>70):
    print("Range is 1-70")
while (locks!=-1):
    stocks=int(input("Enter the number of stocks: "))
    if(stocks<1 and stocks>80):
        print("Range is 1-80")
    barrels=int(input("Enter the number of baarreels: "))
    if(barrels<1 and barrels>90):
        print("Range is: 1-90")

    totallocks=totallocks+locks
    totalbarrels=totalbarrels+barrels
    totalstocks=totalstocks+stocks

    locks=int(input("Enter the number of locks: "))
print("Locks",totallocks)
print("stocks",totalstocks)
print("Barrels",totalbarrels)

ls=l*totallocks
ss=s*totalstocks
bs=b*totalbarrels
sales=ls+ss+bs
print("Total sales",sales)
if(sales>1800):
    com=0.10*1000
    com=com+0.15+800
    com=com+0.20*(sales-1800)
elif sales>1000:
    com=0.10*1000
    com=com+0.15*(sales-1000)
else:
    com=0.10*sales
print("The commission is: ",com)



