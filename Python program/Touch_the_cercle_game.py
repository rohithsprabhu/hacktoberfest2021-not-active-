from tkinter import *
from random import randint, choice


def click (event):
    global number_of_click, flag, rx, ry, number_of_point, oval, size
    number_of_click += 1
    if (number_of_click == 20):
        flag = 0
    else:
        if (event.x in range (rx-size, rx+size) and event.y in range (ry-size, ry+size)):
            number_of_point += 1
            size -= 1
            text.configure (text = "Score : "+str(number_of_point))
            can.delete (oval)
            oval = can.create_oval (rx-size, ry-size, rx+size, ry+size, fill = choice (["blue","red","white","black","green","yellow"]))


def moving (): 
    global rx, ry, oval, flag, speed, size
    rx = randint (size, 285)
    ry = randint (size, 285)
    can.coords (oval, rx-size, ry-size, rx+size, ry+size)
    can.bind ("<Button-1>", click)
    if (flag > 0):
        window.after(speed, moving)
    else:
        can.delete (oval)
        Label (window, text = "The game it's over, click on Quit").grid (row = 2, column = 0)


# ===== MAIN ====== #
size = 20
rx = randint (size,285)
ry = randint (size,285)
number_of_click, flag, number_of_point = 0, 1, 0
speed = 1000
window = Tk()
can = Canvas (window, width = 300, height = 300, bg ='purple')
oval = can.create_oval (rx-size, ry-size, rx+size, ry+size, fill = choice (["blue","red","white","black","green","yellow", "orange"]))
can.grid (row = 0, column = 0, columnspan = 2)
text = Label (window)
text.grid (row = 1, column = 0)
Button (window, text = "Start", command = moving).grid (row = 3, column = 1, padx = 5, pady = 5)
Button (window, text = "Quit", command = window.destroy).grid (row = 4, column = 1, padx = 5, pady = 5) 
window.mainloop()