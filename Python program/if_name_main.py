#This line will execute regardless of whether the script is imported or run directly
print('This script illustrates using the "if __name__ == __main__" function')

#While this is just a print statement, in practice you would put more complex code here
#The code in main() would be code that you wanted to execute when run from this script
#Defining the function prevents it from executing unless that condition is met
def main():
    print('giggity')

#The "if __name__ == '__main__'" conditional executes main() if this script is run directly
#If the script is imported, however, it will run the "else" condition
#This allows the code to be more modular and gives you control over how it executes
if __name__ == '__main__':
    main()
else:
    print('goo')

#The presence of "if __name__ == '__main__'" can also be a visual cue to others viewing your code
#It indicates that there is an intended function if this script is executed directly
#This differentiates it from code libraries that are only intended for import into other programs