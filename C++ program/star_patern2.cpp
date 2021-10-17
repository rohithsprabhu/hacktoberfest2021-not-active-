#include<iostream.h>
#include<conio.h>

void main()
{
 int i, j, k;
for(i=5;i>=1;i--)
{
for(j=5;j>i;j--)
{
cout<<" ";
}
for(k=1;k<(i*2);k++)
{
cout<<"*";
}
cout<<"\n";
}
getch();
}
