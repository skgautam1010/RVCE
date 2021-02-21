from tkinter import *
from tkinter import messagebox
top=Tk()
top.geometry('800x400')
username="rvce"
password="rvce"
user=StringVar()
pas=StringVar()
def login():
	if(username==user.get() and password==pas.get()):
		messagebox.showinfo('Success','Login Success')
	else:
		messagebox.showerror('Error','Please Try Again')

def clear():
	user.delete(0,'end')
	pwd.delete(0,'end')

l1=Label(top,text="Username:")
user=Entry(top,textvariable=user)
l2=Label(top,text="Password:")
pwd=Entry(top,textvariable=pas,show='*')
b1=Button(top,text="Clear",command=clear)
b2=Button(top,text="Cancel",command=top.quit)
b3=Button(top,text='OK',command=login)
l1.place(x='50',y='100')
user.place(x='180',y='100')
l2.place(x='50',y='150')
pwd.place(x='180',y='150')
b1.place(x='90',y='210')
b2.place(x='180',y='210')
b3.place(x='290',y='210')
mainloop()
