from tkinter import *

top=Tk()
top.title("Canvas")
c=Canvas(top,bg='blue',width='300',height='300')
coord=0,20,300,300
arc=c.create_arc(coord,start=0,extent=180,fill='green')
line=c.create_line(0,0,300,300,fill="red")
c.pack()
top.mainloop()