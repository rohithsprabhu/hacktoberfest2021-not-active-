#include<bits/stdc++.h>
using namespace std;
int coin_change(int coins[],int amount,int n)
{
    int dp[n+1][amount+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=amount;j++)
        {
            if(i==0)
            dp[i][j]=INT_MAX;
            else if(j==0)
            dp[i][j]=0;
            else if(coins[i-1]>j)
            dp[i][j]=dp[i-1][j];
            else
            {
                dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
            }
            
        }
    }
    return dp[n][amount];
}
int main()
{
    int n,amount;
    cout<<"Enter the number of coins available for change and the total amount to change"<<endl;
    cin>>n>>amount;
    int coins[n];
    cout<<"Enter the coins now"<<endl;
    for(int i=0;i<n;i++)
    cin>>coins[i];

    cout<<"The minimum number of coins required are:"<<endl;
    cout<<coin_change(coins,amount,n);
    return 0;
}