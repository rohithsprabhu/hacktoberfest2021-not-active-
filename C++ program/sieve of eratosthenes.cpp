//This program displays the prime numbers before n
#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v(1000001,1);
  v[0]=0;
  v[1]=0;
  for(int i=2;i*i<=1000000;i++){
    if(v[i]==1){
      for(int j=i*i;j<=1000000;j+=i){
        v[j]=0;
      }
    }
  }
    int n;
    cin>>n;   //prime numbers before n
    for(int i=0;i<=n;i++){
      if(v[i]==1) cout<<i<<" ";
    }
    cout<<"\n";
  }
