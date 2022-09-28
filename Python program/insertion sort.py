def insertionsort(a):
    n=len(a)
    for i in range(1,n):
        k=a[i]
        j=i-1
        while j>=0 and k<a[j] :
                a[j+1]=a[j]
                j-=1
        a[j+1]=k
    print("List after selection sorting",a)

n=input("Enter comma separated values eg 1,2,3 :")
a=list(eval(n))
print("List before sorting",a)
insertionsort(a)
