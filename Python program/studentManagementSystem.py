import os
import platform

global listStd #Making ListStd As Super Global Variable
listStd = ["yugesh", "kishor", "gajen", "Gopi"] #List Of Students

def manageStudent(): #Function For The Student Management System

	x = "#" * 30
	y = "=" * 28
	global bye #Making Bye As Super Global Variable
	bye = "\n {}\n# {} #\n# ===> Brought To You By <===  #\n# ===> code-projects.org <===  #\n# {} #\n {}".format(x, y, y, x) # Will Print GoodBye Message

	#Printing Welcome Message And options For This Program
	print(""" 

  ------------------------------------------------------
 |======================================================| 
 |======== Welcome To Student Management System	========|
 |======================================================|
  ------------------------------------------------------

Enter 1 : To View Student's List 
Enter 2 : To Add New Student 
Enter 3 : To Search Student 
Enter 4 : To Remove Student 
		
		""")

	try: #Using Exceptions For Validation
		userInput = int(input("Please Select An Above Option: ")) #Will Take Input From User
	except ValueError:
		exit("\nHy! That's Not A Number") #Error Message
	else:
		print("\n") #Print New Line

	#Checking Using Option	
	if(userInput == 1): #This Option Will Print List Of Students
		print("List Students\n")  
		for students in listStd:
			print("=> {}".format(students))

	elif(userInput == 2): #This Option Will Add New Student In The List
		newStd = input("Enter New Student: ")
		if(newStd in listStd): #This Condition Checking The New Student Is Already In List Ur Not
			print("\nThis Student {} Already In The Database".format(newStd))  #Error Message
		else:	
			listStd.append(newStd)
			print("\n=> New Student {} Successfully Add \n".format(newStd))
			for students in listStd:
				print("=> {}".format(students))	

	elif(userInput == 3): #This Option Will Search Student From The List
		srcStd = input("Enter Student Name To Search: ")
		if(srcStd in listStd): #This Condition Searching The Student
			print("\n=> Record Found Of Student {}".format(srcStd))
		else:
			print("\n=> No Record Found Of Student {}".format(srcStd)) #Error Message

	elif(userInput == 4): #This Option Will Remove Student From The List
		rmStd = input("Enter Student Name To Remove: ")
		if(rmStd in listStd): #This Condition Removing The Student From The List 
			listStd.remove(rmStd)
			print("\n=> Student {} Successfully Deleted \n".format(rmStd))
			for students in listStd:
				print("=> {}".format(students))
		else:
			print("\n=> No Record Found of This Student {}".format(rmStd)) #Error Message
	 
	elif(userInput < 1 or userInput > 4): #Validating User Option
		print("Please Enter Valid Option")	#Error Message	
						
#brought to you by code-projects.org
manageStudent()

def runAgain(): #Making Runable Problem1353
	runAgn = input("\nwant To Run Again Y/n: ")
	if(runAgn.lower() == 'y'):
		if(platform.system() == "Windows"): #Checking User OS For Clearing The Screen
			print(os.system('cls')) 
		else:
			print(os.system('clear'))
		manageStudent()
		runAgain()
	else:
		quit(bye) #Print GoodBye Message And Exit The Program

runAgain()		
