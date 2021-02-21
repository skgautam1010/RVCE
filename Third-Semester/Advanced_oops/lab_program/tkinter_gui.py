from tkinter import *
from tkinter import messagebox
from tkinter import Tk

class LoginPage():

    def logincmd(self):
        pass

    def cancelcmd(self):
        pass


    def __init__(self,master):
        super().__init__(master)

        self.uid=StringVar()
        self.pid=StringVar()

        self.label1=Label(self,text='Username: ')
        self.label2=Label(self,text='Password: ')

        self.tb1=Entry(self)
        self.tb2=Entry(self,show='*')

        self.label1.place(x='50',y='100')
        self.label2.place(x='50',y='150')
        self.tb1.place(x='180',y='100')
        self.tb2.place(x='180',y='150')

        self.loginbtn=Button(self,text='OK',command=self.logincmd)
        self.cancelbtn=Button(self,text='Cancel',command=self.cancelcmd)
        self.loginbtn.place(x='120',y='200')
        self.cancelbtn.place(x='200',y='200')


window=Tk()
obj=LoginPage(window)
window.title('Login Form')
window.geometry('500x300')
window.mainloop()
