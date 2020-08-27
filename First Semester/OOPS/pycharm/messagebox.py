from tkinter import *
from tkinter import messagebox

top=Tk()
top.geometry('100x100')

def hello():
    messagebox.showinfo("say hello",'Hello World!!!')

b1=Button(top,text='say hello',command=hello)
b1.place(x=35,y=40)
top.mainloop()
