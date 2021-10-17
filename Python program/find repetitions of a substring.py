#The user enters a string and a substring. This Program prints the number of times that the substring occurs in the given string. 
#String traversal will take place from left to right, not from right to left.
text = input("Enter text ").strip()
sub_string = input("Enter a substring to check repetition of substring in the given text ").strip()
count = 0
for i in range(len(text)):
  if text[i:i+len(sub_string)] == sub_string:
    count+=1
print(sub_string,"is repeated",count,"times in",text)
