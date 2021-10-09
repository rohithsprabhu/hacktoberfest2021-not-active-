

#include <bits/stdc++.h>
using namespace std;

void cycle_sort(int a[], int n){
    int element,small; 

    for(int i=0; i<=n-2; i++){  
        element=a[i];
        small=i;  
        for(int j=i+1; j<n; j++){  
            if(a[j]<element){  
                small++;
            }
        } 
        if(small==i){  
            continue; 
        }
        while(element==a[small]){ 
            small++; 
        } 
        if(small!=i){    

            swap(a[small],element);     
        }  

        while (small!=i){

            small=i;  
            for(int j=i+1; j<n; j++){ 
                if(a[j]<element){  
                    small+=1;
                }
            }

            while(element==a[small]){  
                small+=1;
            }  

            if(element!=a[small]){  

                swap(a[small],element);       
            }  
        }  
    } 
}

int main(){

    int a[7]={5,2,1,7,1,-1,0};

    cycle_sort(a,sizeof(a)/sizeof(a[0]));

    cout<<"Array after being sorted: \n";
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
