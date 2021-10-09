#include <iostream>
using namespace std;

bool pairsum(int a[],int n,int k){
    //Logic
    int low = 0;
    int high = n-1;
    for(int i = 0; i < n; i++){
        if (a[low] + a[high] == k){
            cout<<low+1<<"  "<<high+1<<endl;
            return true;
        }
        else if (a[low] + a[high] < k){
            low++;
        }
        else{
            high--;
        }
    }
    return false;

}

int main(){

    int n,k;
    cin>>n>>k;

    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    //Sorting
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j+1]){
                int temp;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    cout<<pairsum(a,n,k)<<endl;
    return 0;
}
