#include<bits/stdc++.h>
using namespace std;
void getArray(int * A, int n)
{
    for(int i=0;i<n;i++)
        cin>>A[i];
}

void printArray(int * A, int n)
{
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
}

int Maximum(int * A, int n)
{
    int max = 0;
    for(int i=0;i<n;i++)
    {
        if(A[i]>max)
            max = A[i];
    }
    return max;
}
void CountSort(int * A, int n)
{
    // FINDING MAXIMUM ELEMENT IN A
    int max = Maximum(A,n);
    int * count = new int[max+1]; 
    // INITIALIZE THE COUNT ELEMENTS TO ZERO
    for(int i=0;i<max+1;i++)
        count[i] = 0;
    // INCREMENTING THE CORRESPONDING INDEX IN THE COUNT ARRAY
    for(int i=0;i<n;i++)
        count[A[i]]++;
    int i = 0; // COUNTER FOR COUNT ARRAY
    int j = 0; // COUNTER FOR A ARRAY
    while(i<max+1)
    {
        if(count[i]>0)
        {
            A[j] = i;
            count[i]--;
            j++;
        }
        else
            i++;
    }
}
int main(){
    int n;
    cin>>n;
    int * A = new int[n];
    getArray(A,n);
    CountSort(A,n);
    printArray(A,n);
return 0;
}
