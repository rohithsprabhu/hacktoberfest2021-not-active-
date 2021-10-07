#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<bits/stdc++.h>

using namespace std;



main()
{
	int t,arr[100],n,i;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>arr[i];
	int ele=arr[0];
	int count=0;
	for(i=0;i<n;i++)
	{
		if(ele==arr[i])
		count++;
		else
		count--;
		if(count<=0)
		ele=arr[i];
	}
	
	cout<<ele;

return 0;
}


