/*
    Ques: (A*B)%m=1, find B.

    Approach :-
    (A*B)%m = 1
    (A*B)%m - 1 = 0
    (A*B) - 1 = k*m
    (A*B) - k*m = 1
    (A*B) + (-k)*m=1
    (A*B) + m*(k')=1      (-k = k')

    Now, A*B + m*k' = 1, is of the form AX + BY = GCD(A,B)
    So, from this we get that multipicative modulo inverse will only exist if GCD(A,m)==1.

    So if GCD(A,m)==1 then, using extended euclid's method we wil fin out the value of B which is the multiplicative modulo inverse of A with respect to m.
    
*/


#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
ll x,y,GCD;

ll gcd(ll a,ll b){
    //base case
    if(b==0) return a;
    //rec case
    return gcd(b,a%b);
}

void extendedEuclidAlgorithm(ll a,ll b){
    //base case
    if(b==0){
        x=1;y=0;
        GCD=a;
        return;
    }
    //rec case
    extendedEuclidAlgorithm(b,a%b);
    ll cx=y;
    ll cy=x-((a/b)*y);

    x=cx;
    y=cy;
}

void multiplicative_modulo_inverse(ll a,ll m){
    if(gcd(a,m)==1){
        extendedEuclidAlgorithm(a,m);
        //as the func can return -ve value also, so to return +ve value we do (x+m)%m.
        cout<<(x+m)%m<<endl;
    }
    else cout<<"Multiplicative modulo inverse is not possible!"<<endl;
}

int main(){
    ll a,m;
    cin>>a>>m;
    multiplicative_modulo_inverse(a,m);
    return 0;
}