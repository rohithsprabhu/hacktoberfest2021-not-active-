from tkinter import *
from translate import Translator

root = Tk()
root.title("TanCodes")
root.geometry("500x260")


def translate(event=None):
    translator = Translator(from_lang=lan1.get(), to_lang=lan2.get())
    translation = translator.translate(var.get())
    var1.set(translation)


lan1 = StringVar(root)
lan2 = StringVar(root)

choice = {'English', 'Hindi', 'Marathi', 'Gujarati', 'Spanish', 'German'}
lan1.set('English')
lan2.set('Hindi')

title = Label(text="Translator with Python", width='43',
              fg="lightgreen", bg="black", font="5")
title.place(x=0, y=10)

l1 = OptionMenu(root, lan1, *choice)
l1.place(x=125, y=85)
Label(root, text="Select a Language", bg="yellow").place(x=120, y=60)


l2 = OptionMenu(root, lan2, *choice)
l2.place(x=315, y=85)
Label(root, text="Select a Language", bg="yellow").place(x=310, y=60)


# textbox

Label(root, text="ENTER TEXT HERE", bg="lightblue").place(x=20, y=125)
var = StringVar()
textbox = Entry(root, textvariable=var).place(x=125, y=125)

Label(root, text="OUTPUT", bg="lightblue").place(x=260, y=125)
var1 = StringVar()
textbox = Entry(root, textvariable=var1).place(x=315, y=125)


# button
b = Button(root, text="Translate", foreground="red",
           width=15, command=translate).place(x=200, y=180)
root.bind('<Return>', translate)
root.resizable(0, 0)
root.mainloop()
