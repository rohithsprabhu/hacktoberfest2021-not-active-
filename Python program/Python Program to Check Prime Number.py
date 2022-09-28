# Program to check if a number is prime or not

num = 407

# To take input from the user

#num = int(input("Enter a number: "))

# prime numbers are greater than 1

if num > 1:

   # check for factors
   # As the number cannot be divisible by more than its half, we can divide the range so that the python program can be executed faster
   half_of_no = int(num/2)
   for i in range(2,half_of_no):

       if (num % i) == 0:

           print(num,"is not a prime number")

           print(i,"times",num//i,"is",num)

           break

   else:

       print(num,"is a prime number")

       

# if input number is less than

# or equal to 1, it is not prime

else:

   print(num,"is not a prime number")
