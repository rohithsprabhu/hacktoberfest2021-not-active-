#include<stdio.h>

int main()
{
	printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

	int n, sum = 0, c, remainder;

    	printf("Enter the number you want to add digits of:  ");
    	scanf("%d", &n);

	while(n != 0)
    	{
        	remainder = n%10;
        	sum += remainder;
        	n = n/10;
    	}

    	printf("\n\nSum of the digits of the entered number is  =  %d\n\n", sum);
    	printf("\n\n\n\n\t\t\tCoding is Fun !\n\n\n");
    	return 0;
}
