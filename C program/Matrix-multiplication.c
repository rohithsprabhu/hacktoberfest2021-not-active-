#include <stdio.h>

int main()
{
    int r1,c1,i,j;
    scanf("%d %d",&r1,&c1);
    int a[r1][c1];
 for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int r2,c2,d[i][j],k;
    scanf("%d %d",&r2,&c2);
    int b[r2][c2];
 for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(c1==r2)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                d[i][j]=0;
                for(k=0;k<c1;k++)
                {
                    d[i][j]=d[i][j]+a[i][k]*b[k][j];
                }
                printf("%d ",d[i][j]);
            }
            printf("\n");
        }
    }
    else
    printf("not possible");


    return 0;
}
