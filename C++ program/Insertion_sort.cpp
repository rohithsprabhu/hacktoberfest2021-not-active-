#include<iostream>
using namespace std;
main()
{ int s,i,j,temp;
cout<<"enter Array Size";
cin>>s;
int A[s];
cout<<"enter Array Elements";
for(i=0;i<s;i++)
{
    cin>>A[i];
}
for(i=1;i<s;i++)
{   temp = A[i];
    j=i-1;
    while(j>=0 && A[j]>temp)    // by changing > sign to < sign we will get in decending order
    {
        A[j+1]=A[j];
        j--;
    }
    A[j+1]=temp;
}
 cout<<"sorted element are";
for(i=0;i<s;i++)
{
    cout<<A[i]<<" ";
}
return 0;
}
