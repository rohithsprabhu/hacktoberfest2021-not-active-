#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        unordered_map<char,int> umap={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int val=0,prev_val=0,sum=0;
        //prev_val=umap.at(str[0]);
        for(int i=1;i<sizeof(str);i++)
        {
            val=umap.at(str[i]);
            prev_val=umap.at(str[i-1]);
            if(prev_val*4<val)
            sum+=val-prev_val;
            else
            sum+=val+prev_val;
        }
        return sum;
    }
};
main()
{int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.romanToDecimal(s)<<endl;
	}

return 0;
}


