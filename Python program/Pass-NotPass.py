n1 = float(input("Enter the marks obtained in English : "))
n2 = float(input("Enter the marks obtained in Physics : "))
n3 = float(input("Enter the marks obtained in Chemistry : "))
n4 = float(input("Enter the marks obtained in Maths : "))
n5 = float(input("Enter the marks obtained in IP : "))
p = float((n1+n2+n3+n4+n5)/5)
if( (n1>=0 and n1<=100) and (n2>=0 and n2<=100) and (n3>=0 and n3<=100) and (n4>=0 and n4<=100) and (n5>=0 and n5<=100) ):
	print("Ok")
else:
	print("Enter valid values, between 0 to 100")
if(n1<33):
	print("Sorry! but your are failed in English")
if(n2<33):
	print("Sorry! but your are failed in Physics")
if(n3<33):
	print("Sorry! but your are failed in Chemistry")
if(n4<33):
	print("Sorry! but your are failed in Maths")
if(n5<33):
	print("Sorry! but you are failed in IP")
elif((n1<33 and n2<33) or (n1<33 and n3<33) or (n1<33 and n4<33) or (n1<33 and n5<33) or (n2<33 and n2<33) or (n2<33 and n3<33) or (n2<33 and n4<33) or (n2<33 and n5<33) or (n3<33 and n4<33) or (n3<33 and n5<33) or (n4<33 and n5<33)):
	print("Sorry! but you failed this standrad and have to repeat it.")
elif((p>=33) and (p<45)):
	print("You have secured 3rd division")
elif((p>=45 and p<60)):
	print("You have secured 2nd division")
elif((p>=60 and p<=100)):
	print("Congratulations! You have secured 1st division")
print("Percentage is " ,p)
