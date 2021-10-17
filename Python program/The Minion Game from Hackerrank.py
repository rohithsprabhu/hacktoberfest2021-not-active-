def minion_game(text,u1,u2):
    s=0
    k=0
    count=1
    text = text.upper()
    vowels = ["A","E","I","O","U"]
    for i in range(len(text)):
        if text[i] in vowels:
            k = k + (len(text)-i)
        else:
            s = s + (len(text)-i)
    if (k>s):
        print ("The winner is",u1,"with",k,"substrings")
    elif (s>k):
        print ("The winner is",u2,"with",s,"substrings")
    else:
        print("Draw")
print("This is a two-player game. Any user needs to enter a text and each needs to select one of the two options :\n1.The number of substrings starting with vowels will be higher\n2.The number of substrings starting with consonants will be higher")
s = input("Enter any text : ")
user1 = input("Enter the name of player who chose option 1 :")
user2 = input("Enter the name of player who chose option 2 :")
minion_game(s,user1,user2)
