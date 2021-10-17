
/*
 ** QUES - CHECK IF A NUMBER HAS BITS IN ALTERNATE POSITION **
*/

//** METHOD 1 -       T.C = O(log(n)) **

#include<bits/stdc++.h> 
using namespace std; 
// Returns true if n has alternate bit pattern 
// else false 
bool findPattern(int n) 
{ 
    // Store last bit 
    int prev = n % 2; 
    n = n/2; 
  
    // Traverse through remaining bits 
    while (n > 0) 
    { 
        int curr = n % 2; 
  
        // If current bit is same as previous 
        if (curr == prev) 
           return false; 
  
        prev = curr; 
        n = n / 2; 
    } 
    return true; 
} 

int main() 
{ 
      int n; 
      cin>>n;
    if (findPattern(n)) 
        cout << "Yes"; 
    else
        cout << "No"; 
  
    return 0; 
} 

//** METHOD 2      T.C - O(1) **
bool findPattern(int n){
	int nums=n^(n>>1);
	if(((nums+1) & nums) == 0) return true;
	else return false;
}

int main() 
{ 
    int n;
    cin>>n;
    if (findPattern(n)) 
        cout << "Yes"; 
    else
        cout << "No"; 
  
    return 0; 
} 
