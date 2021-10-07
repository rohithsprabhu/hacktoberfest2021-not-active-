#include <stdio.h>

int main()

{

    int num1, num2, num3;

    int *p1, *p2, *p3;

    //taking input from user

    printf("Enter First Number: ");

    scanf("%d",&num1);

    printf("Enter Second Number: ");

    scanf("%d",&num2);

    printf("Enter Third Number: ");

    scanf("%d",&num3);

    //assigning the address of input numbers to pointers

    p1 = &num1;

    p2 = &num2;

    p3 = &num3;

    if(*p1 > *p2)

    {

	if(*p1 > *p3)	{

		printf("%d is the largest number", *p1);

	}

	else

	{

		printf("%d is the largest number", *p3);

	}

    }

    else

    {

	if(*p2 > *p3)

	{

		printf("%d is the largest number", *p2);

	}

	else

	{

		printf("%d is the largest number", *p3);

	}

    }

    return 0;

}
