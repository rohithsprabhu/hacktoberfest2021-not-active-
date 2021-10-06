#include <iostream>
using namespace std;
int main()
{
  int pasNo;
  int remSeat;
  cin>>pasNo;
  remSeat=pasNo%50;
  remSeat=50-remSeat;
    cout << remSeat;
    return 0;
}
