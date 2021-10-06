#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  do{
    cout<<n;
    if(n%5==0)
  {
    cout << "Beep";
}
n--;
}while(n>0);
return 0;
}
