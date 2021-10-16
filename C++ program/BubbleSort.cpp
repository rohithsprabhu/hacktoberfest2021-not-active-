#include <iostream>
#include<conio.h>


int main() 
{
	int i,j,temp,n;
	int a[n];
	cout<<"Enter n elements to be sorted ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	 for(i=0;i<n-1;i++)
	 {
	 	for(j=0;j<n-1-i;j++)
	 	{
	 		if( a[j+1] > a[j] )
	 		 {
	 		 	temp =a [j];
	 		 	a[j] = a[j+1];
	 		 	a[j+1] = temp;	 			
			 }
		}
	 }
	 cout<<"The sorted array is"<<endl;
	 for(i=0;i<n;i++)
	 {
	 	cout<<a[i]<<endl;
	 }
	return 0;
}
