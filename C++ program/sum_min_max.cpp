#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int i,A[n],max=0,min=0;
    for(i=0;i<5;i++)
    cin>>A[i];
    sortit(A,n);
     for(i=0;i<4;i++)
    {
        min=min+A[i];
    }
    cout<<min<<" ";
    for(i=0;i<5;i++)
    if(A[i+1]>A[i])
    {
        A[i]=A[i+1];
    }
    //sortit(A,n);
    for(i=0;i<4;i++)
    {
     max=max+A[i];
    }

   // for(i=0;i<5;i++)
    //{if(A[i]>A[i+1])
    //{
     //A[i+1]=A[i];
   // }
    //}

    cout<<max;
    return 0;
}
