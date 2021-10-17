n = int(input("Enter income (p.a) : "))
if(n< 250000):
	print("You do not have any income tax")
elif(n >= 250000 and n < 500000):
	print("Your income tax is" ,(5/100*n))
elif(n >= 500000 and n< 750000):
	print("Your income tax is" ,(10/100*n))
elif(n >= 750000 and n < 1000000):
	print("Your income tax is" ,(15/100*n))
elif(n >=1000000 and n < 1250000):
	print("Your income tax is" ,(20/100*n))
elif(n >= 1250000 and n < 1500000):
	print("Your income tax is" ,(25/100*n))
elif(n >= 1500000):
	print("Your income tax is" ,(30/100 *n))
