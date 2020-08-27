from tkinter import *

root=Tk()
scrollbar=Scrollbar(root)
scrollbar.pack(side=RIGHT,fill=Y)
listbox=Listbox(root,yscrollcommand=scrollbar.set)
for line in range(1,101):
    listbox.insert(END,'THis is line number'+str(line))
listbox.pack(side=LEFT,fill=BOTH)
scrollbar.config(command=listbox.yview)


root.mainloop()

