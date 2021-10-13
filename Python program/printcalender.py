#  Write a python program to print the calender of a given mont and year

import calendar


y = int(input("Input the year:"))
m = int(input("Input the month:"))
print(calendar.month(y,m))
