import tkinter
from tkinter import *
top=tkinter.Tk()
top.geometry("400x300")
gram=DoubleVar()
kilo=DoubleVar()
ahr=DoubleVar()
feren=DoubleVar()

ounce=DoubleVar()

def gtoo():
	ounce=gram.get()*0.0352
	gram.set(ounce)
def ktop():
	pound=kilo.get()*2.204
	kilo.set(pound)
def ttos():
	stone=ahr.get() *2.204
	ahr.set(stone)
def ftoc():
	cel=(feren.get()*1.8)+32
	feren.set(cel)
def enter(event):
	b1.config(
		bg="#343434",
		fg="#ffffff",
	)
def left(event):
	b1.config(
		bg="#ffffff",
		fg="#000000",
	)
l1=Label(top,text="GRAM TO OUNCE")
gram1=Entry(top,textvariable=gram)
b1=Button(top,text="ok",command=gtoo)
b1.bind("<Enter>",enter)
b1.bind("<Leave>",left)


l2=Label(top,text="KILO TO PONDS")
kilo1=Entry(top,textvariable=kilo)
b2=Button(top,text="Convert",command=ktop)

l3=Label(top,text="STONE TO AHER")
ahr1=Entry(top,textvariable=ahr)
b3=Button(top,text="Convert",command=ttos)

l4=Label(top,text="CELC to FREN")
feren1=Entry(top,textvariable=feren)
b4=Button(top,text="Convert",command=ftoc)

l1.pack()
gram1.pack()
b1.pack()
l2.pack()
kilo1.pack()
b2.pack()

l3.pack()
ahr1.pack()
b3.pack()


l4.pack()
feren1.pack()
b4.pack()

top.mainloop()

