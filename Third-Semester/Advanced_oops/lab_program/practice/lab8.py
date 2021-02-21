from tkinter import *

top=Tk()
top.geometry("800x600")
top.title("Moving Car")

can=Canvas(top,height=200,width=800)
def movement():
	can.move("car",5,0)
	can.after(100,movement)

rec=can.create_rectangle(40,100,300,200,tags="car",fill="blue")
l1=can.create_line(100,40,200,40,tags="car",fill="green")
can.pack()
movement()
mainloop()

