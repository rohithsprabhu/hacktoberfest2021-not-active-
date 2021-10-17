
#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);

stack<int> s;
int minn=1000000;
int sizeee=0;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
        
		while(!isEmpty(s)){
            cout<<"1"<<endl;
		    pop(s);
           
		}
        
		while(!isFull(s,n)){
            
			cin>>a;
			push(s,a);
		}
        
		cout<<getMin(s)<<endl;
        
	}
    return 0;
}// } Driver Code Ends


void push(stack<int>& s, int a){
	sizeee++;
	if(!isFull){
	    if(s.top()==-1)minn=a;
	    
	    else{
	        if(a<minn){
	            a=(2*a)-minn;
	        }
	    }
	    s.push(a);
	   	}
}

bool isFull(stack<int>& s,int n){
	return sizeee==n-1?true:false;
}

bool isEmpty(stack<int>& s){
return s.empty();
}

int pop(stack<int>& s){    
    s.pop();
return -1;
}

int getMin(stack<int>& s){
	return minn;
}
