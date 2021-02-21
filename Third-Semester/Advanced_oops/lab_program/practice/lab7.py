from tkinter import *
top=Tk()
top.geometry("800x500")
top.title("Conversion Table")


gram=DoubleVar()
kilo=DoubleVar()
ounce=DoubleVar()
feren=DoubleVar()
abr=DoubleVar()





l1=Label(top,text="GRAM TO OUNCE")
gram1=Entry(top,textvariable=gram)
b1=Button(top,text="ok",command=gtoo)
l2=Label(top,text="KILO TO PONDS")
kilo1=Entry(top,textvariable=kilo)
b2=Button(top,text="Convert",command=ktop)
l3=Label(top,text="STONE TO AHER")
ahr1=Entry(top,textvariable=ahr)
b3=Button(top,text="Convert",command=ttos)
l4=Label(top,text="CELC to FREN")
feren1=Entry(top,textvariable=feren)
b4=Button(top,text="Convert",command=ftoc)
mainloop()
