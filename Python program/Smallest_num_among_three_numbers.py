n1 = int(input("Enter 1st number :"))
n2 = int(input("Enter 2nd number :"))
n3 = int(input("Enter 3rd number :"))
if(n1<n2 and n1<n3):
	print("Smallest number is " ,n1)
elif(n2<n1 and n2<n3):
	print("Smallest number is " ,n2)
elif(n3<n2 and n3<n1):
	print("Smallest number is " ,n3)
elif(n1==n2 and n1<n3):
	print("Smallest number is " ,n1)
elif(n2==n3 and n2<n1):
	print("Smallest number is " ,n2)
elif(n1==n3 and n3<n2):
	print("Smallest nunber is " ,n3)
elif(n1==n2==n3):
	print("All numbers are equal")
