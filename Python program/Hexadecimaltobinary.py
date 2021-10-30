def dec_bin(x):
    k=[]
    n=x
    while(n>0):
        a=int(float(n%2))
        k.append(a)
        n=(n-a)/2
    k.append(0)
    string=""
    for j in k[::-1]:
        string+= str(j)
    if len(string)>4:
        print(string[1:],end=" ")
    elif len(string)>3:
        print(string,end=" ")
    elif len(string)>2:
        print('0'+string,end=" ")
    else:
        print('00'+string,end=" ")

def hex_to_bin(h):
    print(" ",end=" ")
    for ch in range(len(h)):
        ch= h[ch]
        if 'A'<=ch<='F':
            dn= 10+(ord(ch)-ord('A'))
            dec_bin(dn)
        else:
            dn= (ord(ch)-ord('0'))
            dec_bin(dn)


n=input("Please Enter Hexadecimal Number:")
print("Equivalent Binary Number is as follows:")
hex_to_bin(n)