a = float(input('Enter the length of first side: '))  
b = float(input('Enter  the length of second side: '))  
c = float(input('Enter  the length of third side: '))  
s = (a + b + c) / 2  
Area = (s*(s-a)*(s-b)*(s-c)) ** 0.5  
print('The area of the triangle is %0.2f' %Area)