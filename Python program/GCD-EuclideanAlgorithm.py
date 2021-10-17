'''
In mathematics, the greatest common divisor (GCD) of two or more integers, which
are not all zero, is the largest positive integer that divides each of the integers.
For two integers x, y, the greatest common divisor of x and y is denoted gcd ( x , y ) gcd(x,y) gcd(x,y).
For example, the GCD of 8 and 12 is 4 that is, gcd(8, 12) = 4
'''

#factors of 16 = [1, 2, 4, 8, 16]
#factors 88 = [1, 2, 4, 8, 11, 22, 44, 88]
#common_factors = [1, 2, 4, 8]

def gcd_recursive(a,b):
    '''
    Euclidean Algorithm : Implemented using Recursion
    '''
    if a < b:
        (a,b) = (b,a)
    if a%b == 0:
        return b
    else:
        return gcd_recursive(b, a%b)

def gcd_while(a,b):
    '''
    Euclidean Algorithm : Implemented using While Loop
    ''' 
    if a < b:
        (a,b) = (b,a)
    
    while a%b != 0:
        (a,b) = (b, a%b)
    return b

print('GCD using Recursive function :',gcd_recursive(16,88))

print('GCD using While loop :', gcd_while(16,88))