#include <stdio.h>
#include<time.h>
int p[5], n=5;
int m[5][5]={0}, s[5][5]={0};
void input()
{
	
	int i;
	printf("\n Enter the number of rows in Matirx 1: ");
	scanf ("%d", &p[0]);
	for (i=1; i<n; i++)
	{
		printf("\n Enter the number of columns in Matirx %d: ", i);
		scanf("%d", &p[i]);
	}
}

void Matrix_Chain()
{
	int j,d,k,i,min,q;
	for (d=1; d<n-1;d++)
	{
		for (i=1;i<n-d; i++)
		{
			j=i+d;
			min=32767;
			for (k=i;k<=j-1; k++)
			{
				q=m[i][k]+m[k+1][j]+ p[i-1]*p[k]*p[j];
				if (q<min)
				{
					min=q;
					s[i][j]=k;
				}
				m[i][j]=min;
			}
		}
		
	}
	printf("\n Number of Multiplications required are : %d", m[1][n-1]);
}


void print_matrix_Info()
{
	printf("\n The Matrix are as: ");
	int i;
	for (i=1;i<n;i++)
		printf ("\n A%d= (%d X %d)", i-1, p[i-1],p[i]);
}

int main()
{	clock_t t;
	t=clock();
    input();	
	print_matrix_Info();
	Matrix_Chain();
	t=clock()-t;
	printf("\nRunning Time of the program : %.2lf", ((double)t)/CLOCKS_PER_SEC);
	return 0;
}
