s = list(input())
for i in range(len(s)):
	if(s[i] == s[i].upper()):
		s[i] = s[i].lower()
	elif(s[i] == s[i].lower()):
		s[i] = s[i].upper()
for j in range(len(s)):
	print(s[j] ,end="")
