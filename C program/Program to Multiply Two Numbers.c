#include <stdio.h>

int main() {

    double a, b, product;

    printf("Enter two numbers: ");

    scanf("%lf %lf", &a, &b);  


    product = a * b;

    // %.2lf displays number up to 2 decimal point

    printf("Product = %.2lf", product);

    

    return 0;

}

