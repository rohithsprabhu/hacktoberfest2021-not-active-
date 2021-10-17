#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,m,n,a[10] [10],trace=0;
	printf("Enter order of a matrix");
	scanf("%d%d",&m,&n);
	if(m!=n)
	{
		printf("Matrix trace is not possible\n");
		exit(0);
	}
	for(i=0;i<m;i++)
	{
		trace=trace+a[i][j];
	}
	printf("Trace=%d",trace);
}
