# Write a python program to calculate numbers of days between two dates

from datetime import date

f_date = date(2021, 7, 21)
l_date = date(2021, 7, 25)
delta = l_date - f_date
print(delta.days)
