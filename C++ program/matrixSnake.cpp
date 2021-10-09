#include <bits/stdc++.h>
using namespace std;

 // matrix in snake pattern 

int main() {
    int m,n;
    cin>>m>>n;
    int mat[m][n];
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    cin>>mat[i][j];
    for(int i=0;i<m;i++)
    {
        if(i%2==0)
        {
        for(int j=0;j<n;j++)
        cout<<mat[i][j]<<" ";
        }
        else
        {
        for(int j=n-1;j>=0;j--)
        cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
	return 0;
}
