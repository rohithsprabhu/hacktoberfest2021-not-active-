# Python Program to find position of n\'th multiple
# of a mumber k in Fibonacci Series
 
def findPosition(k, n):
    f1 = 0
    f2 = 1
    i =2;
    while i!=0:
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
 
        if f2%k == 0:
            return n*i
 
        i+=1
         
    return
 
 
# Multiple no.
n = 5;
# Number of whose multiple we are finding
k = 4;
 
print("Position of n\'th multiple of k in"
                "Fibonacci Series is", findPosition(k,n));
