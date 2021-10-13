#Python program to print a pattern triangle by stars

n = int(input('Enter number of rows for printing a triangle:'))
k = n - 1
for i in range(0,n):
    for j in range(0,k):
        print(end = ' ')
    k = k - 1
    for j in range(0,i+1):
        print('* ',end = '')
    print('\r')
