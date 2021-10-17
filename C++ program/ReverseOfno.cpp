#include<iostream>
#include<conio.h>
using namespace std;
  main()
  {
   int no,rev=0,r,a;
   //clrscr();
   cout<<"Enter any numb.: ";
   cin>>no;
   a=no;
   for(;no>0;)
   {
    r=no%10;
    rev=rev*10+r;
    no=no/10;
   }
  cout<<"\nReverse of "<<a<<" is: "<<rev;
  getch();
 }
