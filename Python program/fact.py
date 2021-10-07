def factorialOfNumber(n):
    if n < 0:
        return 0
    elif n == 0 or n == 1:
        return 1
    else:
        ans = 1
        while(n > 1):
            fact *= n
            n -= 1
        return ans
 
print("Enter the number to find its Factorial")
a=int(input())
print("Factorial of",a,"is",factorial(a))
