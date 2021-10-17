#include<iostream>
#include<conio.h>
using namespace std;
 int main()
 {
 int i,n,temp,j;
// clrscr();
 cout<<"Enter how many no. you want to sort in array: \n";
 cin>>n;
 int a[n];
 cout<<"enter no.s to sort in Ascending order";
 for(i=0;i<n;i++)
 {
 cin>>a[i];
 }
 for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 {
 if(a[j]>a[j+1])
 {
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }
 }
 }
 cout<<"\nData after sorting: ";
 for(j=0;j<n;j++)
 {
 cout<<a[j]<<" ";
 }

 return 0;
 }
