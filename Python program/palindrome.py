
# Author: Álvaro Masanori Sato

bold_start = '\033[1m'
bold_end = '\033[0m'

def verify_palindrome(user_input):
    reversed_s = user_input[::-1]
    is_palindrome = 1
    if(user_input != reversed_s):
        is_palindrome = 0
    print_strings(user_input, reversed_s)
    return is_palindrome

def print_strings(string1, string2):
    print("--------------------------------------------------")
    print(f"\nUser Input: {string1}")
    print(f"Reverse: {string2}\n")
    print("--------------------------------------------------")

if __name__ == "__main__":
    user_input = input("Enter a string: ")

    if(verify_palindrome(user_input)):
        print(f"\n{bold_start}Your input is palindrome!{bold_end}\n")
    else:
        print(f"\n{bold_start}Sorry, your input is not palindrome!{bold_end}\n")