from tkinter import *

def clear():
    tb1.delete(0,'end')
    tb2.delete(0,'end')

def validate_data():
    pass


window=Tk()
window.title("Login page")
window.geometry('500x300')
label=Label(window,text="Username: ")
label.place(x='50',y='100')
label2=Label(window,text="Password: ")
label2.place(x='50',y='150')
tb1=Entry(window)
tb1.place(x='180',y='100')
tb2=Entry(window)
tb2.place(x='180',y='150')
button=Button(window,text='Submit',bg='black',fg='white',command=validate_data)
button.place(x='290',y='200')
button1=Button(window,text='Cancel',bg='black',fg='white',command=window.destroy)
button1.place(x='190',y='200')
button2=Button(window,text='Clear',bg='black',fg='white',command=clear)
button2.place(x='90',y='200')
window.mainloop()

