/*
    Extended euclid's algorithm will help us in solving equations of type - Ax + By = GCD(A,B).

    Ques will be of something like this -> Given A,B and a equation, find x,y.

    2 major applications of Extended euclid's algorithm is - 
    - Finding Multiplicative Modulo Inverse
    - Solving Linear Diophantine Equations

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

int main(){
    ll a,b;
    cin>>a>>b;
    extendedEuclidAlgorithm(a,b);
    cout<<x<<","<<y<<endl;
}