//11)	Remove digits from string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    char c;
    int i,j,count;
    printf("Enter string:\n");
    gets(a);
    int len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(isdigit(a[i]))
        {
            for(j=i;j<len;j++)
            {
                    a[j]=a[j+1];
            }
            len--;
            i--;
        }
    }
     printf("%s",a);

    return 0;
}

