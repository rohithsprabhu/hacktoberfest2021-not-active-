#include<iostream>
#include<conio.h>
using namespace std;
 int main()
 {
 int i,n,temp=0,j;
// clrscr();
 cout<<"Enter how many no. you want to sort in array: \n";
 cin>>n;
 int a[n];
 cout<<"enter no.s to sort in decending order";
 for(i=0;i<n;i++)
 {
 cin>>a[i];
 }
 for(i=0;i<=n;i++)
 {
 for(j=i+1;j<n;j++)
 {
 if(a[i]<a[j])
 {
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;
 }
 }
 }
 cout<<"\nData after sorting: ";
 for(i=0;i<n;i++)
 {
 cout<<a[i];
 }

 return 0;
 }
