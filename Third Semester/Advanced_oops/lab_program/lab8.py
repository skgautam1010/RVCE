from tkinter import *

class Canvas_car:
    def __init__(self,master=None):
        self.master=master
        self.x=1
        self.y=0
        self.canvas=Canvas(master)
        self.rect=self.canvas.create_rectangle(40,100,300,200,tag="car",fill="violet")
        self.l1=self.canvas.create_line(100,40,200,40,tag="car",fill="red")
        self.l2=self.canvas.create_line(100,40,80,100,tag="car",fill="red")
        self.l3=self.canvas.create_line(200,40,300,100,tag="car",fill="red")
        self.c1=self.canvas.create_oval(250,180,280,220,tag="car",fill="black")
        self.canvas.pack()

        self.movement()

    def movement(self):
        self.canvas.move("car",self.x,self.y)
        self.canvas.after(100,self.movement)


if __name__=="__main__":
    master=Tk()
    can=Canvas_car(master)
    master.mainloop()

