a = int(input("Enter first prime no.: "))
b = int(input("Enter second prime no.: "))
print("You entered", "a = ", a, "b= ", b)
n = a * b
print("n= ", n)
phin = (a - 1) * (b - 1)
print("phi(n)= ", phin)
def gcd(a, b):
    while b != 0:
        c = a % b
        a = b
        b = c
    return a
def modinv(a, m):
    for x in range(1, m):
        if (a * x) % m == 1:
            return x
    return None
def coprimes(a):
    l = []
    for x in range(2, a):
        if gcd(a, x) == 1 and modinv(x, phin) != None:
            l.append(x)
    for x in l:
        if x == modinv(x, phin):
             l.remove(x)
    return l

print("Choose an e from a below coprimes array:\n")
print(str(coprimes(phin)) + "\n")
e = int(input())
d = modinv(e, phin)
P = int(input("Enter plain text: "))
if (P > n):
    P = int(input("Please enter a valid plain text"))
print("Public key = {", e, ",", n, "}")
print("Private key = {", d, ",", n, "}")
print("------Computing Cipher Text Using Plain Text------")
C = (P ** e) % n
print("Plain Text = ", P)
print("Encryption Key = ", e)
print("Cipher Text = ", C)
print("------Computing Plain Text Using Generated Cipher Text------")
P = ((C ** d) % n)
print("Cipher Text = ", C)
print("Decryption Key = ", d)
print("Plain Text = ", P)


