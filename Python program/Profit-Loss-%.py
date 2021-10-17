n = int(input("Enter Cost Price : "))
b = int(input("Enter Sale Price : "))
if(n>b):
	print('Loss is' ,((n-b)/n*100), "%")
if(b>n):
	print("Profit is" ,((b-n)/n*100), "%")
elif(b==n):
	print("No Profit/Loss")
