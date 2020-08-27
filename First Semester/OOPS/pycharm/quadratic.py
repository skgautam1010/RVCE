from math import sqrt
a = float(input('enter first number'))
b = float(input('enter second number'))
c = float(input('enter third number'))
d = (b*b)-(4*a*c)
if d<0 :
        print('the vaue does not exits for R')
elif d==0 :
        x = -b/(2*a)
        print('the value is: '+ str(x))
else :
        x1 = (-b+ round(sqrt(d)))/2*a
        x2 = (-b- round(sqrt(d)))/2*a
        print('the first value is :'+ str(x1)+"\t\n"+'the secnd vaue is :'+str(x2))

