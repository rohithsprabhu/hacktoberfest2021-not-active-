/*
    Print all paths from ( 0 , 0 ) to (n-1 , m -1)
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:

        void helper(int ** mat , int n , int m , int i , int j , vector<int> &vr){
            if(i >= n || j >= m){
                return ;
            }

            if(i == n-1 && j == m-1){
                vr.push_back(mat[i][j]);

                for(int i = 0 ; i < vr.size() ; ++i){
                    cout<<vr[i]<<" ";
                }
                cout<<endl;

                vr.pop_back();
                return ;

            }

            vr.push_back(mat[i][j]);
            helper(mat , n , m , i , j + 1 , vr);
            helper(mat , n , m , i + 1 , j , vr);

            vr.pop_back();

            return ;

        }

        void print_path(int ** mat , int n , int m){
            vector<int> vr;
            helper(mat , n , m , 0 , 0 , vr);
        }
};

int main(){

    int n,m;
    cin>>n>>m;

    int ** mat = new int * [n];
    for(int row = 0 ; row < n ; ++row){

        mat[row] = new int [m];
        for(int col  = 0 ; col < m ; ++col){
            cin>>mat[row][col];
        }
    }

    Solution sl;

    sl.print_path(mat , n , m);

    return 0;
}