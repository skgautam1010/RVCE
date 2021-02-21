from tkinter import *
window=Tk()
def calculate():
    a1=int(e1.get())
    b1=int(e2.get())
    a = int(check_var_1.get())
    b = int(check_var_2.get())
    if a==1 and b==1:
        l3=Label(window,anchor='w',text="please choose one operation!")
        #l3.place( x='350', y='470' )
        #l3.pack_forget()
    elif a==1 and b==0:
        l3=Label(window,anchor='w',text=f'the addition result is:{a1+b1}')
        #l3.place( x='350', y='470' )
        #l3.pack_forget()
    elif a==0 and b==1:
        l3 = Label( window,anchor='w', text=f'the subtraction result is:{a1-b1}' )
        #l3.place( x='350', y='470' )
        #l3.pack_forget()
    else:
        l3 = Label( window,anchor='w', text='please check mark any checkbutton' )
        #l3.pack_forget()
    l3.place( x='0', y='470',width=250 )

'''def get_int(e:Entry):
    return int(e.get())'''
#add=lambda a,b:print(a+b)
#a=int(input("a= "))
#b=int(input("b= "))
window.title('GUI for PYTHON')
window.geometry('900x500+400+300')
button=Button(window,text='Add',bg='black',fg='white',command=lambda:calculate())
#button.pack()
label1=Label(window,text='A:')
e1=Entry(window)
e1.place(x='360',y='150')
e2=Entry(window)
e2.place(x='360',y='200')
label2=Label(window,text='B:')
label1.place(x='300',y='150')
label2.place(x='300',y='200')
button.place(x='400',y='400')
check_var_1,check_var_2=IntVar(),IntVar()
c1=Checkbutton(window,text='Add',var=check_var_1)
c1.place(x='300',y='300')
c2=Checkbutton(window,text='Substract',var=check_var_2)
c2.place(x='360',y='300')
window.mainloop()

