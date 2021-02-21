import tkinter
from tkinter import *
from tkinter import messagebox


top=tkinter.Tk()
top.title("Login page")
top.geometry('500x300')
name="rvce"
pas="rvce"

user=StringVar()
pwd=StringVar()

def login():
	if(user.get()==name and pwd.get()==pas):
		messagebox.showinfo("Success","Login Success!!!")
	else:
		messagebox.showerror("Error","Username or Password Incorrect!!!")

def clear():
    user.delete(0,'end')
    pwd.delete(0,'end')



l1=Label(top,text="Username: ")
user=Entry(top,textvariable=user)
l2=Label(top,text="Password: ")
pwd=Entry(top,textvariable=pwd,show="*")
b1=Button(top,text="Clear",command=clear)
b2=Button(top,text="Cancel",command=quit)
b3=Button(top,text='OK',command=login)

l1.place(x='50',y='100')
user.place(x='180',y='100')
l2.place(x='50',y='150')
pwd.place(x='180',y='150')
b1.place(x='90',y='210')
b2.place(x='180',y='210')
b3.place(x='290',y='210')

top.mainloop()
