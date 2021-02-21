from tkinter import *

top=Tk()
top.geometry('500x500')
def a(event):
    print("helloo!")
list1= Listbox(top,width='500',height='500')
list1.bind('<Button-1>',a)
list1.insert(1,"python")
list1.insert(2,'java')
list1.insert(3,'c++')
list1.insert(4,'c')
list1.insert(5,"javascript")
list1.pack()
top.mainloop()

