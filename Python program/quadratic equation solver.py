eq = input("Enter a quadratic equation in the form of ax^2 + bx + c : ")
xsq_index = eq.index('x')
plus_index = eq.index('+')
eq2 = eq[xsq_index+1:]
x_index = eq2.index('x')
eq3 = eq[plus_index+1:]
sc_plus_index = eq3.index('+')
a = eq[0:xsq_index]
if a == "": a = "1"
a = int(a)
b = eq2[plus_index+1:x_index].strip()
if b == "": b = "1"
b = int(b)
c = eq3[sc_plus_index+1:].strip()
c = int(c)
p1 = ((-b)/2*a)
p2 = (((b**2)-4*a*c)**0.5)/2*a
r1 = p1-p2
r2 = p1+p2
print("The roots of the given quadratic equation are:",r1,"and",r2)
