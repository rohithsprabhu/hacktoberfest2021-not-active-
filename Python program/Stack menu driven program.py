lim=100
s=[]
def add(s):
    global lim
    n=int(input("Enter the value:"))
    l=len(s)
    if l==lim:
        print("Overflow")
    else:
        s.append(n)
        print("Number added in stack")

def delete(s):
    if len(s)==0:
        print("Underflow")
    else:
        a=s.pop()
        print("Deleted {} from stack".format(a))

def stacklim():
    global lim
    lim=int(input("Enter the stack limit"))
    print("Limit set as",lim)

def view(s):
    for i in range(len(s)-1,-1,-1):
        print(s[i])

def top(s):
    if len(s)==0:
        print("Stack is empty")
    else:
        print("Top element is",s[len(s)-1])

def main():
    c=1
    while c!=0:
        print("""Menu
1.Add elements to stack
2.Delete elements from stack
3.Set stack limit(By default stack limit is 100)
4.View stack
5.View Top element
6.Exit""")
        a=int(input("Enter your choice:"))
        if a==1:
            add(s)
        elif a==2:
            delete(s)
        elif a==3:
            stacklim()
        elif a==4:
            view(s)
        elif a==5:
            top(s)
        elif a==6:
            c=0
        else:
            print("Invalid Input")
main()
