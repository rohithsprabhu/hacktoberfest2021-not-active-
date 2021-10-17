/*
    Ques: Compute (a^b)%m

    Approach :-
    ex: a=5 , b=3
    binary of 3 -> 011
    Let us initialize our ans as 1(ans=1).
    Now we will traverse over our binary of our number b, if there is a set bit at a particular position..then we will multiply our ans with current a.
    And in each turn we will increment our a as a*=a,bcz as we are traversing over binary of b..so our a is getting squared up in each turn, and also in each turn we will do b/=2(b>>=1).

    now a=5 , b=3(011)
    - ans=1,a=5
    - we are at 0th position and the bit is set, so ans*=a => ans=5, and a*=a => a=25
    - we are at 1st position and the bit is set, so ans*=a => ans=125
    - we are at 2nd position and the bit is not set, so no change in ans.
    - now as b becomes 0, we exit out of the loop, and return ans.

*/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll fast_modulo_exponentation(ll a,ll b){
    ll ans=1;
    while(b){
        if(b&1){
            ans*=a;
        }
        a*=a;
        b>>=1;
    }
    return ans;
}

int main(){
    ll a,b;
    cin>>a>>b;
    cout<<fast_modulo_exponentation(a,b)<<endl;
}