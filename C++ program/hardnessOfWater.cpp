#include <iostream>
using namespace std;
int main() {
    cout << "Mg(HCO3)2 : ";
    float mghco32 ;
    cin >> mghco32;
    float temp_mghco32 = mghco32*100/146;
    cout << "Ca(HCO3)2 : ";
    float cahco32 ;
    cin >> cahco32;
    float temp_cahco32 = cahco32*100/162;
    cout << "MgCl2 : ";
    float mgcl2 ;
    cin >> mgcl2;
    float temp_mgcl2 = mgcl2*100/95;
    cout << "CaSO4 : ";
    float caso4 ;
    cin >> caso4;
    float temp_caso4 = caso4*100/136;
    cout << "Mg(NO3)2 : ";
    float mgno32;
    cin >> mgno32;
    float temp_mgno32 = mgno32*100/148;
    cout << "MgSO4 : ";
    float mgso4 ;
    cin >> mgso4;
    float temp_mgso4 = mgso4*100/120;
    cout << endl << endl;
    float temp_hardness = temp_mghco32 + temp_cahco32;
    float permanent_hardness = temp_mgcl2 + temp_caso4 + temp_mgno32 + temp_mgso4;
    cout << "Temparary Hardness: " << temp_hardness << endl;
    cout << "Permanat Hardness: " << permanent_hardness << endl;
    cout << "Total Hardness: " << temp_hardness + permanent_hardness << endl;
    return 0;
}