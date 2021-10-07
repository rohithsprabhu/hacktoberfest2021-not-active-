# Simple Rock Paper Scissors game in python

import random

player = 0
cpu = 0

print("Three points wins the game!")

while player < 3 and cpu < 3:
    cpu_choice = random.choice(["rock", "paper", "scissors"])
    player_choice = input("Rock, Paper or Scissors: ")

    print(f"CPU: {cpu_choice} vs Player: {player_choice}")

    if player_choice.lower() == cpu_choice:
        print("Tie! No points!")
    elif player_choice.lower() == "rock":
        if cpu_choice == "scissors":
            player += 1
            print(f"Player wins one point!")
        elif cpu_choice == "paper":
            cpu += 1
            print(f"CPU wins one point!")
    elif player_choice.lower() == "scissors":
        if cpu_choice == "paper":
            player += 1
            print(f"Player wins one point!")
        elif cpu_choice == "rock":
            cpu += 1
            print(f"CPU wins one point!")
    elif player_choice.lower() == "paper":
        if cpu_choice == "rock":
            player += 1
            print(f"Player wins one point!")
        elif cpu_choice == "scissors":
            cpu += 1
            print(f"CPU wins one point!")

if cpu > player:
    print(f"CPU Wins!\nScore: cpu - {cpu} and player - {player}")
else:
    print(f"Player Wins!\nScore: cpu - {cpu} and player - {player}")
