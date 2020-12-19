from tkinter import *
from tkinter import messagebox
import pymysql as py

def clear():
    tb1.delete(0,'end')
    tb2.delete(0,'end')
    tb3.delete(0,'end')
    tb4.delete(0,'end')
    tb5.delete(0,'end')
    tb6.delete(0,'end')
    tb7.delete(0,'end')

def insert_data():
    usn=tb1.get()
    name=tb2.get()
    age=tb3.get()
    address=tb4.get()
    gender=tb5.get()
    email=tb6.get()
    password=tb7.get()
    if (tb1.get() == "" or
        tb2.get() == "" or
        tb3.get() == "" or
        tb4.get() == "" or
        tb5.get() == "" or
        tb6.get() == "" or
        tb7.get() == ""):

        messagebox.showerror("Error!!!",'Empty Fields!! All fields required!!')
    else:
        try:
            db=py.connect("localhost","root","Skg@123!","advance_oops")
            cursor=db.cursor()
            cursor.execute("insert into registration values('"+ usn +"','"+ name +"','"+ age +"','"+ address +"','"+ gender +"','"+ email +"','"+ password +"')")
            cursor.execute("insert into login values('"+ usn +"','"+ password +"')")
            db.commit()
            messagebox.showinfo("Success","Registration successfull!!")
        except:
            db.rollback()
        db.close()




window=Tk()
window.title("Registration page")
window.geometry('900x700')
label1=Label(window,text="Usn: ")
label1.place(x='50',y='100')
label2=Label(window,text="Name: ")
label2.place(x='50',y='150')
label3=Label(window,text="Age: ")
label3.place(x='50',y='200')
label4=Label(window,text="Address: ")
label4.place(x='50',y='250')
label5=Label(window,text="Gender: ")
label5.place(x='50',y='300')
label6=Label(window,text="Email: ")
label6.place(x='50',y='350')
label7=Label(window,text="Password: ")
label7.place(x='50',y='400')
tb1=Entry(window)
tb1.place(x='180',y='100')
tb2=Entry(window)
tb2.place(x='180',y='150')
tb3=Entry(window)
tb3.place(x='180',y='200')
tb4=Entry(window)
tb4.place(x='180',y='250')
tb5=Entry(window)
tb5.place(x='180',y='300')
tb6=Entry(window)
tb6.place(x='180',y='350')
tb7=Entry(window)
tb7.place(x='180',y='400')
button=Button(window,text='Submit',bg='black',fg='white',command=insert_data)
button.place(x='290',y='500')
button1=Button(window,text='Cancel',bg='black',fg='white',command=window.destroy)
button1.place(x='190',y='500')
button2=Button(window,text='Clear',bg='black',fg='white',command=clear)
button2.place(x='90',y='500')
window.mainloop()
