import random
game_list=['Rock', 'rock', 'Paper', 'paper', 'Scissors', 'scissors']
computer=c=0
command=p=0
print("Score: Computer " +str(c)+ " Player " +str(p))
# the loop
run=True
while run:
    computer_choice=random.choice(game_list)
    command=input('Rock, Paper, Scissors or Quit: ')
    if command.lower() == computer_choice.lower():
        print("Tie")
    elif command == 'rock':
        if computer_choice == 'scissors':
            print("Player won!")
            p+=1
        else:
            print("Computer won!")
            c+=1
    elif command == 'scissors':
        if computer_choice == 'paper':
            print("Player won!")
            p+=1
        else:
            print("Computer won!")
            c+=1
    elif command == 'paper':
        if computer_choice == 'rock':
            print("Player won!")
            p+=1
        else:
            print("Computer won!")
            c+=1
    elif command == 'quit':
        print("Thank you for playing!!")
        break
    else:
        print("Wrong command!")
    print("Player: " + command.capitalize())
    print("Computer: " + computer_choice.capitalize())
    print("")
    print("Score: Computer " + str(c) + " Player " + str(p))
    print("")
