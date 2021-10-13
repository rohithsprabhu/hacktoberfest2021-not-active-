list1=[1,2,3,4]
print(list1)
list1.insert(1,8)
print(list1)
"""n=int(input())
dict={}
for i in range(n):
    name,number=input().split()
    
    dict[name]=number
namesearch=[]
for i in range(n):
    names=input()
    namesearch.append(names)

for i in range(len(namesearch)):
    if namesearch[i] in dict.keys():
        print(namesearch[i]+"="+dict.get(namesearch[i]))
    else:
        print("Not found")"""

"""
print(namesearch[i],end='')
        print("=",end='')
        print(dict.get(namesearch[i]),end='')
"""
"""
phonebook = {}
entries = int(raw_input())
for n in range(entries):
    name, num = raw_input().strip().split(' ')
    name, num = [str(name), int(num)]
    phonebook[name] = num

while True:
    try:  
        search = str(raw_input())
        if search in phonebook:
            output = ''.join('%s=%r' % (search, phonebook[search]))
            print output
        else:
            print "Not found"
    except EOFError:
        break
"""