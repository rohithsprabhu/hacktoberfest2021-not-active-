#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n); //takes number of cases
	while(n>0){
	    n--;
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c); //a,b,c are the sides of the triangle
	    if(a>c){
	        int t=c;
            c=a;
            a=t;
	    }
	    if(b>c){
	        int t=c;
            c=b;
            b=t;
	    }
	    if((a+b)<=c){
	        printf("NO\n");
	    }
	    else{
	        printf("YES\n");
	        if(((a*a)+(b*b))>(c*c)){
	            printf("Acute\n");
	        }
	        else if(((a*a)+(b*b))==(c*c)){
	            printf("Right\n");
	        }
	        else{
	            printf("Obtuse\n");
	        }
	    }
	}
	return 0;
}
